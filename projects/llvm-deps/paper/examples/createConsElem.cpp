const DataLayout &TD = node.getParentGraph()->getDataLayout();
const StructLayout *SL = TD.getStructLayout(s);
int index = 0;
for(Type::subtype_iterator it = s->element_begin(); it != s->element_end(); ++it, ++index){
    unsigned start = SL->getElementOffset(index);
    unsigned end = start + TD.getTypeStoreSize(*it);
    std::string label = "[" + std::to_string(start) + "," + std::to_string(end) + "]";
    const ConsElem & elem = kit->newVar(name+label);
    locConstraintMap[&loc].insert(std::make_pair(start, &elem));
}
