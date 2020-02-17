
var exec = require('cordova/exec');
//var channel = require('cordova/channel');

var PLUGIN_NAME = 'CDVVDDocumentCapture';




var VDDocumentCapture = {

  start: function (config, documentTypes, onSuccess, onError) {
    exec(onSuccess, onError, PLUGIN_NAME, 'start', [config, documentTypes]);
  }
}


module.exports = VDDocumentCapture;


