for (FlowRecord::value_iterator source = record.source_directptr_begin(), end = record.source_directptr_end();
     source != end; ++source) {
    const std::set<const AbstractLoc *> & locs = locsForValue(**source);
    if(isa<GetElementPtrInst>(*source)){ // If value is GEP Instruction handle differently
      processGetElementPtrInstSource(*source, sinkSources, locs);
    } else
      sinkSourceLocs.insert(locs.begin(), locs.end());
 }
