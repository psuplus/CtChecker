; ModuleID = 'divBy0.g.bc'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: nounwind uwtable
define i32 @_Z4divdii(i32 %n1, i32 %n2) #0 {
entry:
  %n1.addr = alloca i32, align 4
  %n2.addr = alloca i32, align 4
  store i32 %n1, i32* %n1.addr, align 4
  call void (...) @_Z10printTracei(i32 0), !dbg !18
  call void @llvm.dbg.declare(metadata i32* %n1.addr, metadata !19, metadata !20), !dbg !18
  store i32 %n2, i32* %n2.addr, align 4
  call void (...) @_Z10printTracei(i32 1), !dbg !21
  call void @llvm.dbg.declare(metadata i32* %n2.addr, metadata !22, metadata !20), !dbg !21
  call void (...) @_Z10printTracei(i32 2), !dbg !23
  %0 = load i32, i32* %n1.addr, align 4, !dbg !23
  call void (...) @_Z10printTracei(i32 3), !dbg !24
  %1 = load i32, i32* %n2.addr, align 4, !dbg !24
  call void (...) @_Z10printTracei(i32 4), !dbg !25
  %div = sdiv i32 %0, %1, !dbg !25
  call void (...) @_Z10printTracei(i32 5), !dbg !26
  ret i32 %div, !dbg !26
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: uwtable
define i32 @main(i32 %argc, i8** %argv) #2 {
entry:
  %retval = alloca i32, align 4
  %argc.addr = alloca i32, align 4
  %argv.addr = alloca i8**, align 8
  %a = alloca i32, align 4
  %b = alloca i32, align 4
  %c = alloca i32, align 4
  store i32 0, i32* %retval
  store i32 %argc, i32* %argc.addr, align 4
  call void (...) @_Z10printTracei(i32 6), !dbg !27
  call void @llvm.dbg.declare(metadata i32* %argc.addr, metadata !28, metadata !20), !dbg !27
  store i8** %argv, i8*** %argv.addr, align 8
  call void (...) @_Z10printTracei(i32 7), !dbg !29
  call void @llvm.dbg.declare(metadata i8*** %argv.addr, metadata !30, metadata !20), !dbg !29
  call void (...) @_Z10printTracei(i32 8), !dbg !31
  call void @llvm.dbg.declare(metadata i32* %a, metadata !32, metadata !20), !dbg !31
  call void (...) @_Z10printTracei(i32 9), !dbg !33
  call void @llvm.dbg.declare(metadata i32* %b, metadata !34, metadata !20), !dbg !33
  call void (...) @_Z10printTracei(i32 10), !dbg !35
  %0 = load i32, i32* %argc.addr, align 4, !dbg !35
  call void (...) @_Z10printTracei(i32 11), !dbg !37
  %cmp = icmp sle i32 %0, 1, !dbg !37
  call void (...) @_Z10printTracei(i32 12), !dbg !38
  br i1 %cmp, label %if.then, label %if.else, !dbg !38

if.then:                                          ; preds = %entry
  call void (...) @_Z10printTracei(i32 13), !dbg !39
  store i32 10, i32* %a, align 4, !dbg !39
  call void (...) @_Z10printTracei(i32 14), !dbg !40
  store i32 1, i32* %b, align 4, !dbg !40
  call void (...) @_Z10printTracei(i32 15), !dbg !41
  br label %if.end6, !dbg !41

if.else:                                          ; preds = %entry
  call void (...) @_Z10printTracei(i32 16), !dbg !42
  %1 = load i8**, i8*** %argv.addr, align 8, !dbg !42
  call void (...) @_Z10printTracei(i32 16), !dbg !42
  %arrayidx = getelementptr inbounds i8*, i8** %1, i64 1, !dbg !42
  call void (...) @_Z10printTracei(i32 16), !dbg !42
  %2 = load i8*, i8** %arrayidx, align 8, !dbg !42
  call void (...) @_Z10printTracei(i32 17), !dbg !44
  %call = call i32 @atoi(i8* %2) #5, !dbg !44
  call void (...) @_Z10printTracei(i32 18), !dbg !45
  store i32 %call, i32* %a, align 4, !dbg !45
  call void (...) @_Z10printTracei(i32 19), !dbg !46
  call void @llvm.dbg.declare(metadata i32* %c, metadata !47, metadata !20), !dbg !46
  call void (...) @_Z10printTracei(i32 20), !dbg !48
  %3 = load i32, i32* %a, align 4, !dbg !48
  call void (...) @_Z10printTracei(i32 19), !dbg !46
  store i32 %3, i32* %c, align 4, !dbg !46
  call void (...) @_Z10printTracei(i32 21), !dbg !49
  %4 = load i32, i32* %argc.addr, align 4, !dbg !49
  call void (...) @_Z10printTracei(i32 22), !dbg !51
  %cmp1 = icmp sle i32 %4, 2, !dbg !51
  call void (...) @_Z10printTracei(i32 23), !dbg !52
  br i1 %cmp1, label %if.then2, label %if.else3, !dbg !52

if.then2:                                         ; preds = %if.else
  call void (...) @_Z10printTracei(i32 24), !dbg !53
  store i32 0, i32* %b, align 4, !dbg !53
  call void (...) @_Z10printTracei(i32 25), !dbg !54
  br label %if.end, !dbg !54

if.else3:                                         ; preds = %if.else
  call void (...) @_Z10printTracei(i32 26), !dbg !55
  %5 = load i8**, i8*** %argv.addr, align 8, !dbg !55
  call void (...) @_Z10printTracei(i32 26), !dbg !55
  %arrayidx4 = getelementptr inbounds i8*, i8** %5, i64 2, !dbg !55
  call void (...) @_Z10printTracei(i32 26), !dbg !55
  %6 = load i8*, i8** %arrayidx4, align 8, !dbg !55
  call void (...) @_Z10printTracei(i32 27), !dbg !56
  %call5 = call i32 @atoi(i8* %6) #5, !dbg !56
  call void (...) @_Z10printTracei(i32 28), !dbg !57
  store i32 %call5, i32* %b, align 4, !dbg !57
  br label %if.end

if.end:                                           ; preds = %if.else3, %if.then2
  br label %if.end6

if.end6:                                          ; preds = %if.end, %if.then
  call void (...) @_Z10printTracei(i32 29), !dbg !58
  %7 = load i32, i32* %a, align 4, !dbg !58
  call void (...) @_Z10printTracei(i32 30), !dbg !59
  %8 = load i32, i32* %b, align 4, !dbg !59
  call void (...) @_Z10printTracei(i32 31), !dbg !60
  %call7 = call i32 @_Z4divdii(i32 %7, i32 %8), !dbg !60
  call void (...) @_Z10printTracei(i32 32), !dbg !61
  %call8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i32 0, i32 0), i32 %call7), !dbg !61
  call void (...) @_Z10printTracei(i32 33), !dbg !62
  ret i32 0, !dbg !62
}

; Function Attrs: nounwind readonly
declare i32 @atoi(i8*) #3

declare i32 @printf(i8*, ...) #4

declare void @_Z10printTracei(...)

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind readonly "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #5 = { nounwind readonly }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!15, !16}
!llvm.ident = !{!17}

!0 = !MDCompileUnit(language: DW_LANG_C_plus_plus, file: !1, producer: "clang version 3.7.0 (trunk) (https://github.com/C0deZLee/llvm-dsa.git 37744f40c2bfa98b8b4cad0885aeb2cb1f84d8e0)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !2, subprograms: !3, globals: !2, imports: !2)
!1 = !MDFile(filename: "/home/troy/llvm-dsa/ResearchTests/benchmarks/divBy0/divBy0.cpp", directory: "/home/troy/llvm-dsa/ResearchTests/tmp")
!2 = !{}
!3 = !{!4, !9}
!4 = !MDSubprogram(name: "divd", linkageName: "_Z4divdii", scope: !1, file: !1, line: 4, type: !5, isLocal: false, isDefinition: true, scopeLine: 4, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32, i32)* @_Z4divdii, variables: !2)
!5 = !MDSubroutineType(types: !6)
!6 = !{!7, !8, !8}
!7 = !MDBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!8 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!9 = !MDSubprogram(name: "main", scope: !1, file: !1, line: 8, type: !10, isLocal: false, isDefinition: true, scopeLine: 8, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32, i8**)* @main, variables: !2)
!10 = !MDSubroutineType(types: !11)
!11 = !{!8, !8, !12}
!12 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !13, size: 64, align: 64)
!13 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !14, size: 64, align: 64)
!14 = !MDBasicType(name: "char", size: 8, align: 8, encoding: DW_ATE_signed_char)
!15 = !{i32 2, !"Dwarf Version", i32 4}
!16 = !{i32 2, !"Debug Info Version", i32 3}
!17 = !{!"clang version 3.7.0 (trunk) (https://github.com/C0deZLee/llvm-dsa.git 37744f40c2bfa98b8b4cad0885aeb2cb1f84d8e0)"}
!18 = !MDLocation(line: 4, column: 24, scope: !4)
!19 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "n1", arg: 1, scope: !4, file: !1, line: 4, type: !8)
!20 = !MDExpression()
!21 = !MDLocation(line: 4, column: 32, scope: !4)
!22 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "n2", arg: 2, scope: !4, file: !1, line: 4, type: !8)
!23 = !MDLocation(line: 5, column: 9, scope: !4)
!24 = !MDLocation(line: 5, column: 12, scope: !4)
!25 = !MDLocation(line: 5, column: 11, scope: !4)
!26 = !MDLocation(line: 5, column: 2, scope: !4)
!27 = !MDLocation(line: 8, column: 14, scope: !9)
!28 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "argc", arg: 1, scope: !9, file: !1, line: 8, type: !8)
!29 = !MDLocation(line: 8, column: 26, scope: !9)
!30 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "argv", arg: 2, scope: !9, file: !1, line: 8, type: !12)
!31 = !MDLocation(line: 9, column: 6, scope: !9)
!32 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "a", scope: !9, file: !1, line: 9, type: !8)
!33 = !MDLocation(line: 9, column: 9, scope: !9)
!34 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "b", scope: !9, file: !1, line: 9, type: !8)
!35 = !MDLocation(line: 10, column: 6, scope: !36)
!36 = distinct !MDLexicalBlock(scope: !9, file: !1, line: 10, column: 6)
!37 = !MDLocation(line: 10, column: 11, scope: !36)
!38 = !MDLocation(line: 10, column: 6, scope: !9)
!39 = !MDLocation(line: 11, column: 5, scope: !36)
!40 = !MDLocation(line: 11, column: 13, scope: !36)
!41 = !MDLocation(line: 11, column: 3, scope: !36)
!42 = !MDLocation(line: 13, column: 12, scope: !43)
!43 = distinct !MDLexicalBlock(scope: !36, file: !1, line: 12, column: 7)
!44 = !MDLocation(line: 13, column: 7, scope: !43)
!45 = !MDLocation(line: 13, column: 5, scope: !43)
!46 = !MDLocation(line: 14, column: 7, scope: !43)
!47 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "c", scope: !43, file: !1, line: 14, type: !8)
!48 = !MDLocation(line: 14, column: 11, scope: !43)
!49 = !MDLocation(line: 15, column: 7, scope: !50)
!50 = distinct !MDLexicalBlock(scope: !43, file: !1, line: 15, column: 7)
!51 = !MDLocation(line: 15, column: 12, scope: !50)
!52 = !MDLocation(line: 15, column: 7, scope: !43)
!53 = !MDLocation(line: 16, column: 6, scope: !50)
!54 = !MDLocation(line: 16, column: 4, scope: !50)
!55 = !MDLocation(line: 18, column: 13, scope: !50)
!56 = !MDLocation(line: 18, column: 8, scope: !50)
!57 = !MDLocation(line: 18, column: 6, scope: !50)
!58 = !MDLocation(line: 20, column: 22, scope: !9)
!59 = !MDLocation(line: 20, column: 25, scope: !9)
!60 = !MDLocation(line: 20, column: 17, scope: !9)
!61 = !MDLocation(line: 20, column: 2, scope: !9)
!62 = !MDLocation(line: 21, column: 2, scope: !9)
