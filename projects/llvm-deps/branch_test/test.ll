; ModuleID = 'test.bc'
target datalayout = "e-m:o-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.11.0"

%struct.context = type { i32, i32 }

; Function Attrs: nounwind ssp uwtable
define i32 @main() #0 {
entry:
  %key = alloca i32, align 4
  %plain = alloca i32, align 4
  %c = alloca %struct.context, align 4
  call void @llvm.dbg.declare(metadata i32* %key, metadata !12, metadata !13), !dbg !14
  store i32 6, i32* %key, align 4, !dbg !14
  call void @llvm.dbg.declare(metadata i32* %plain, metadata !15, metadata !13), !dbg !16
  store i32 10, i32* %plain, align 4, !dbg !16
  call void @llvm.dbg.declare(metadata %struct.context* %c, metadata !17, metadata !13), !dbg !23
  %0 = load i32, i32* %key, align 4, !dbg !24
  %x = getelementptr inbounds %struct.context, %struct.context* %c, i32 0, i32 0, !dbg !25
  store i32 %0, i32* %x, align 4, !dbg !26
  %y = getelementptr inbounds %struct.context, %struct.context* %c, i32 0, i32 1, !dbg !27
  store i32 0, i32* %y, align 4, !dbg !28
  %y1 = getelementptr inbounds %struct.context, %struct.context* %c, i32 0, i32 1, !dbg !29
  %1 = load i32, i32* %y1, align 4, !dbg !29
  store i32 %1, i32* %plain, align 4, !dbg !30
  ret i32 0, !dbg !31
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

attributes #0 = { nounwind ssp uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="core2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!8, !9, !10}
!llvm.ident = !{!11}

!0 = !MDCompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 3.7.0 (trunk) (git@git.psu.edu:dbz5017/LLVM-Deps.git ad8a7d5819f35463224c483b3e1a62dc1cbcf966)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !2, subprograms: !3, globals: !2, imports: !2)
!1 = !MDFile(filename: "test.c", directory: "/Users/dbz5017/Research/Projects/llvm-deps/projects/llvm-deps/branch_test")
!2 = !{}
!3 = !{!4}
!4 = !MDSubprogram(name: "main", scope: !1, file: !1, line: 12, type: !5, isLocal: false, isDefinition: true, scopeLine: 12, isOptimized: false, function: i32 ()* @main, variables: !2)
!5 = !MDSubroutineType(types: !6)
!6 = !{!7}
!7 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!8 = !{i32 2, !"Dwarf Version", i32 2}
!9 = !{i32 2, !"Debug Info Version", i32 3}
!10 = !{i32 1, !"PIC Level", i32 2}
!11 = !{!"clang version 3.7.0 (trunk) (git@git.psu.edu:dbz5017/LLVM-Deps.git ad8a7d5819f35463224c483b3e1a62dc1cbcf966)"}
!12 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "key", scope: !4, file: !1, line: 13, type: !7)
!13 = !MDExpression()
!14 = !MDLocation(line: 13, column: 7, scope: !4)
!15 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "plain", scope: !4, file: !1, line: 14, type: !7)
!16 = !MDLocation(line: 14, column: 7, scope: !4)
!17 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "c", scope: !4, file: !1, line: 17, type: !18)
!18 = !MDDerivedType(tag: DW_TAG_typedef, name: "context", file: !1, line: 8, baseType: !19)
!19 = !MDCompositeType(tag: DW_TAG_structure_type, file: !1, line: 4, size: 64, align: 32, elements: !20)
!20 = !{!21, !22}
!21 = !MDDerivedType(tag: DW_TAG_member, name: "x", scope: !19, file: !1, line: 6, baseType: !7, size: 32, align: 32)
!22 = !MDDerivedType(tag: DW_TAG_member, name: "y", scope: !19, file: !1, line: 7, baseType: !7, size: 32, align: 32, offset: 32)
!23 = !MDLocation(line: 17, column: 11, scope: !4)
!24 = !MDLocation(line: 25, column: 9, scope: !4)
!25 = !MDLocation(line: 25, column: 5, scope: !4)
!26 = !MDLocation(line: 25, column: 7, scope: !4)
!27 = !MDLocation(line: 26, column: 5, scope: !4)
!28 = !MDLocation(line: 26, column: 7, scope: !4)
!29 = !MDLocation(line: 27, column: 13, scope: !4)
!30 = !MDLocation(line: 27, column: 9, scope: !4)
!31 = !MDLocation(line: 30, column: 1, scope: !4)
