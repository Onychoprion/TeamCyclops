Cu.import("resource://gre/modules/Services.jsm");

var passPro = function () {
	var prefManager = Components.classes["@mozilla.org/preferences-service;1"].getService(Components.interfaces.nsIPrefBranch);
	return {
		init : function () {
			gBrowser.addEventListener("load", function () {
				var autoRun = prefManager.getBoolPref("extensions.passpro.autorun");
				if (autoRun) {
					passPro.run();
				}
			}, false);

			startUp();
		},
			
		run : function () {
            startUp();
		},
		
		unitTests : {
			testAccountsList : function () {
				// tests loading the account list and returning an array of account names
				if (!passPro.loadAccounts()) return false;
				var acctList = passPro.getAccountNames();
				return Object.prototype.toString.call(acctList) == '[object Array]' && Array.isArray(acctList);
			}
		},

	}
}();

var startUp = function () {
    let dialogSource = '<?xml-stylesheet href="chrome://global/skin/" type="text/css"?><dialog xmlns="http://www.mozilla.org/keymaster/gatekeeper/there.is.only.xul" onload="document.title=content.document.title" buttons="accept" width="500" height="600"><iframe type="content-primary" flex="1" src="chrome://passpro/content/login.html"/></dialog>';
    Services.ww.openWindow(window,
                           "data:application/vnd.mozilla.xul+xml," + encodeURIComponent(dialogSource),
                           "_blank", "chrome,centerscreen,resizable,dialog=no", null);
};

var store = function()
{
    alert("Stored");
};
    
window.addEventListener("load", passPro.init, false);
