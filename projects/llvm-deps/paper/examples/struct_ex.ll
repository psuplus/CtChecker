; ModuleID = 'struct_ex.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.Point = type { i32, i32 }

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
entry:
  %retval = alloca i32, align 4
  %key = alloca i32, align 4
  %ct = alloca i32, align 4
  %u = alloca %struct.Point, align 4
  store i32 0, i32* %retval
  call void @llvm.dbg.declare(metadata i32* %key, metadata !11, metadata !12), !dbg !13
  store i32 4, i32* %key, align 4, !dbg !13
  call void @llvm.dbg.declare(metadata i32* %ct, metadata !14, metadata !12), !dbg !15
  store i32 0, i32* %ct, align 4, !dbg !15
  call void @llvm.dbg.declare(metadata %struct.Point* %u, metadata !16, metadata !12), !dbg !21
  %0 = load i32, i32* %key, align 4, !dbg !22
  %a = getelementptr inbounds %struct.Point, %struct.Point* %u, i32 0, i32 0, !dbg !23
  store i32 %0, i32* %a, align 4, !dbg !24
  %b = getelementptr inbounds %struct.Point, %struct.Point* %u, i32 0, i32 1, !dbg !25
  store i32 0, i32* %b, align 4, !dbg !26
  %a1 = getelementptr inbounds %struct.Point, %struct.Point* %u, i32 0, i32 0, !dbg !27
  %1 = load i32, i32* %a1, align 4, !dbg !27
  %cmp = icmp slt i32 %1, 3, !dbg !29
  br i1 %cmp, label %if.then, label %if.end, !dbg !30

if.then:                                          ; preds = %entry
  %2 = load i32, i32* %ct, align 4, !dbg !31
  %add = add nsw i32 %2, 1, !dbg !31
  store i32 %add, i32* %ct, align 4, !dbg !31
  br label %if.end, !dbg !32

if.end:                                           ; preds = %if.then, %entry
  %b2 = getelementptr inbounds %struct.Point, %struct.Point* %u, i32 0, i32 1, !dbg !33
  %3 = load i32, i32* %b2, align 4, !dbg !33
  %cmp3 = icmp sgt i32 %3, 3, !dbg !35
  br i1 %cmp3, label %if.then4, label %if.end6, !dbg !36

if.then4:                                         ; preds = %if.end
  %4 = load i32, i32* %ct, align 4, !dbg !37
  %add5 = add nsw i32 %4, 1, !dbg !37
  store i32 %add5, i32* %ct, align 4, !dbg !37
  br label %if.end6, !dbg !38

if.end6:                                          ; preds = %if.then4, %if.end
  %5 = load i32, i32* %retval, !dbg !39
  ret i32 %5, !dbg !39
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!8, !9}
!llvm.ident = !{!10}

!0 = !MDCompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !2, subprograms: !3, globals: !2, imports: !2)
!1 = !MDFile(filename: "struct_ex.c", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/paper/examples")
!2 = !{}
!3 = !{!4}
!4 = !MDSubprogram(name: "main", scope: !1, file: !1, line: 6, type: !5, isLocal: false, isDefinition: true, scopeLine: 6, isOptimized: false, function: i32 ()* @main, variables: !2)
!5 = !MDSubroutineType(types: !6)
!6 = !{!7}
!7 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!8 = !{i32 2, !"Dwarf Version", i32 4}
!9 = !{i32 2, !"Debug Info Version", i32 3}
!10 = !{!"clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)"}
!11 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "key", scope: !4, file: !1, line: 7, type: !7)
!12 = !MDExpression()
!13 = !MDLocation(line: 7, column: 7, scope: !4)
!14 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ct", scope: !4, file: !1, line: 8, type: !7)
!15 = !MDLocation(line: 8, column: 7, scope: !4)
!16 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "u", scope: !4, file: !1, line: 10, type: !17)
!17 = !MDCompositeType(tag: DW_TAG_structure_type, name: "Point", file: !1, line: 1, size: 64, align: 32, elements: !18)
!18 = !{!19, !20}
!19 = !MDDerivedType(tag: DW_TAG_member, name: "a", scope: !17, file: !1, line: 2, baseType: !7, size: 32, align: 32)
!20 = !MDDerivedType(tag: DW_TAG_member, name: "b", scope: !17, file: !1, line: 3, baseType: !7, size: 32, align: 32, offset: 32)
!21 = !MDLocation(line: 10, column: 16, scope: !4)
!22 = !MDLocation(line: 12, column: 9, scope: !4)
!23 = !MDLocation(line: 12, column: 5, scope: !4)
!24 = !MDLocation(line: 12, column: 7, scope: !4)
!25 = !MDLocation(line: 13, column: 5, scope: !4)
!26 = !MDLocation(line: 13, column: 7, scope: !4)
!27 = !MDLocation(line: 15, column: 9, scope: !28)
!28 = distinct !MDLexicalBlock(scope: !4, file: !1, line: 15, column: 7)
!29 = !MDLocation(line: 15, column: 11, scope: !28)
!30 = !MDLocation(line: 15, column: 7, scope: !4)
!31 = !MDLocation(line: 16, column: 8, scope: !28)
!32 = !MDLocation(line: 16, column: 5, scope: !28)
!33 = !MDLocation(line: 18, column: 9, scope: !34)
!34 = distinct !MDLexicalBlock(scope: !4, file: !1, line: 18, column: 7)
!35 = !MDLocation(line: 18, column: 11, scope: !34)
!36 = !MDLocation(line: 18, column: 7, scope: !4)
!37 = !MDLocation(line: 19, column: 8, scope: !34)
!38 = !MDLocation(line: 19, column: 5, scope: !34)
!39 = !MDLocation(line: 20, column: 1, scope: !4)
