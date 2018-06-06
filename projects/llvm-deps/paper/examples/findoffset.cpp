unsigned findOffsetFromFieldIndex(StructType* type, unsigned fieldIdx, AbstractLoc* loc) {
  DataLayout &TD = loc->getParentGraph()->getDataLayout();
  StructLayout *SL = TD.getStructLayout(type);
  return SL->getElementOffset(fieldIdx);
}
