function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["car1.c:32c29"]=1;
    this.traceFlag["car1.c:33c31"]=1;
    this.traceFlag["car1.c:50c30"]=1;
    this.traceFlag["car1.c:51c32"]=1;
    this.traceFlag["car1.c:68c30"]=1;
    this.traceFlag["car1.c:69c32"]=1;
    this.traceFlag["car1.c:86c30"]=1;
    this.traceFlag["car1.c:87c32"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
