function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Constant */
	this.urlHashMap["car1:2"] = "car1.c:30&car1.h:91&car1_data.c:34";
	/* <Root>/Constant1 */
	this.urlHashMap["car1:4"] = "car1.c:48&car1.h:94&car1_data.c:37";
	/* <Root>/Constant2 */
	this.urlHashMap["car1:7"] = "car1.c:66&car1.h:97&car1_data.c:40";
	/* <Root>/Constant3 */
	this.urlHashMap["car1:9"] = "car1.c:84&car1.h:100&car1_data.c:43";
	/* <S1>/Data Type Conversion */
	this.urlHashMap["car1:1:114"] = "car1.c:29,42";
	/* <S1>/Digital Output */
	this.urlHashMap["car1:1:214"] = "car1.c:44,175&car1.h:79&car1_data.c:22";
	/* <S2>/Data Type Conversion */
	this.urlHashMap["car1:3:114"] = "car1.c:65,78";
	/* <S2>/Digital Output */
	this.urlHashMap["car1:3:214"] = "car1.c:80,181&car1.h:85&car1_data.c:28";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["car1:6:114"] = "car1.c:47,60";
	/* <S3>/Digital Output */
	this.urlHashMap["car1:6:214"] = "car1.c:62,178&car1.h:82&car1_data.c:25";
	/* <S4>/Data Type Conversion */
	this.urlHashMap["car1:8:114"] = "car1.c:83,96";
	/* <S4>/Digital Output */
	this.urlHashMap["car1:8:214"] = "car1.c:98,184&car1.h:88&car1_data.c:31";
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
	this.rtwnameHashMap["<S3>"] = {sid: "car1:6"};
	this.sidHashMap["car1:6"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "car1:8"};
	this.sidHashMap["car1:8"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "car1:2"};
	this.sidHashMap["car1:2"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Constant1"] = {sid: "car1:4"};
	this.sidHashMap["car1:4"] = {rtwname: "<Root>/Constant1"};
	this.rtwnameHashMap["<Root>/Constant2"] = {sid: "car1:7"};
	this.sidHashMap["car1:7"] = {rtwname: "<Root>/Constant2"};
	this.rtwnameHashMap["<Root>/Constant3"] = {sid: "car1:9"};
	this.sidHashMap["car1:9"] = {rtwname: "<Root>/Constant3"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "car1:1"};
	this.sidHashMap["car1:1"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Digital Output1"] = {sid: "car1:3"};
	this.sidHashMap["car1:3"] = {rtwname: "<Root>/Digital Output1"};
	this.rtwnameHashMap["<Root>/Digital Output2"] = {sid: "car1:6"};
	this.sidHashMap["car1:6"] = {rtwname: "<Root>/Digital Output2"};
	this.rtwnameHashMap["<Root>/Digital Output3"] = {sid: "car1:8"};
	this.sidHashMap["car1:8"] = {rtwname: "<Root>/Digital Output3"};
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
	this.rtwnameHashMap["<S3>/In1"] = {sid: "car1:6:116"};
	this.sidHashMap["car1:6:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "car1:6:114"};
	this.sidHashMap["car1:6:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Digital Output"] = {sid: "car1:6:214"};
	this.sidHashMap["car1:6:214"] = {rtwname: "<S3>/Digital Output"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "car1:8:116"};
	this.sidHashMap["car1:8:116"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Data Type Conversion"] = {sid: "car1:8:114"};
	this.sidHashMap["car1:8:114"] = {rtwname: "<S4>/Data Type Conversion"};
	this.rtwnameHashMap["<S4>/Digital Output"] = {sid: "car1:8:214"};
	this.sidHashMap["car1:8:214"] = {rtwname: "<S4>/Digital Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
