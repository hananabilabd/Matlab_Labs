function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["car1:2"] = "car1.c:36&car1.h:97&car1_data.c:28";
	/* <Root>/Constant1 */
	this.urlHashMap["car1:4"] = "car1.c:53&car1.h:78,100&car1_data.c:31";
	/* <Root>/Scope */
	this.urlHashMap["car1:5"] = "car1.h:85";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["car1:1:114"] = "car1.c:35,48";
	/* <S1>/Digital Output */
	this.urlHashMap["car1:1:214"] = "car1.c:50,157&car1.h:91&car1_data.c:22";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["car1:3:114"] = "car1.c:56,67";
	/* <S2>/Digital Output */
	this.urlHashMap["car1:3:214"] = "car1.c:69,160&car1.h:94&car1_data.c:25";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "car1"};
	this.sidHashMap["car1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "car1:1"};
	this.sidHashMap["car1:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "car1:3"};
	this.sidHashMap["car1:3"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "car1:2"};
	this.sidHashMap["car1:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "car1:4"};
	this.sidHashMap["car1:4"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "car1:1"};
	this.sidHashMap["car1:1"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "car1:3"};
	this.sidHashMap["car1:3"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "car1:5"};
	this.sidHashMap["car1:5"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "car1:1:116"};
	this.sidHashMap["car1:1:116"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "car1:1:114"};
	this.sidHashMap["car1:1:114"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Digital Output"] = {sid: "car1:1:214"};
	this.sidHashMap["car1:1:214"] = {rtwname: "<S1>/Digital Output"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "car1:3:116"};
	this.sidHashMap["car1:3:116"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Data Type Conversion"] = {sid: "car1:3:114"};
	this.sidHashMap["car1:3:114"] = {rtwname: "<S2>/Data Type Conversion"};
	this.rtwnameHashMap["<S2>/Digital Output"] = {sid: "car1:3:214"};
	this.sidHashMap["car1:3:214"] = {rtwname: "<S2>/Digital Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
