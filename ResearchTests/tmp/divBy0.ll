; ModuleID = 'divBy0.bc'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1

; Function Attrs: nounwind uwtable
define i32 @_Z4divdii(i32 %n1, i32 %n2) #0 {
entry:
  %n1.addr = alloca i32, align 4
  %n2.addr = alloca i32, align 4
  store i32 %n1, i32* %n1.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %n1.addr, metadata !18, metadata !19), !dbg !20
  store i32 %n2, i32* %n2.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %n2.addr, metadata !21, metadata !19), !dbg !22
  %0 = load i32, i32* %n1.addr, align 4, !dbg !23
  %1 = load i32, i32* %n2.addr, align 4, !dbg !24
  %div = sdiv i32 %0, %1, !dbg !25
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
  call void @llvm.dbg.declare(metadata i32* %argc.addr, metadata !27, metadata !19), !dbg !28
  store i8** %argv, i8*** %argv.addr, align 8
  call void @llvm.dbg.declare(metadata i8*** %argv.addr, metadata !29, metadata !19), !dbg !30
  call void @llvm.dbg.declare(metadata i32* %a, metadata !31, metadata !19), !dbg !32
  call void @llvm.dbg.declare(metadata i32* %b, metadata !33, metadata !19), !dbg !34
  %0 = load i32, i32* %argc.addr, align 4, !dbg !35
  %cmp = icmp sle i32 %0, 1, !dbg !37
  br i1 %cmp, label %if.then, label %if.else, !dbg !38

if.then:                                          ; preds = %entry
  store i32 10, i32* %a, align 4, !dbg !39
  store i32 1, i32* %b, align 4, !dbg !40
  br label %if.end6, !dbg !41

if.else:                                          ; preds = %entry
  %1 = load i8**, i8*** %argv.addr, align 8, !dbg !42
  %arrayidx = getelementptr inbounds i8*, i8** %1, i64 1, !dbg !42
  %2 = load i8*, i8** %arrayidx, align 8, !dbg !42
  %call = call i32 @atoi(i8* %2) #5, !dbg !44
  store i32 %call, i32* %a, align 4, !dbg !45
  call void @llvm.dbg.declare(metadata i32* %c, metadata !46, metadata !19), !dbg !47
  %3 = load i32, i32* %a, align 4, !dbg !48
  store i32 %3, i32* %c, align 4, !dbg !47
  %4 = load i32, i32* %argc.addr, align 4, !dbg !49
  %cmp1 = icmp sle i32 %4, 2, !dbg !51
  br i1 %cmp1, label %if.then2, label %if.else3, !dbg !52

if.then2:                                         ; preds = %if.else
  store i32 0, i32* %b, align 4, !dbg !53
  br label %if.end, !dbg !54

if.else3:                                         ; preds = %if.else
  %5 = load i8**, i8*** %argv.addr, align 8, !dbg !55
  %arrayidx4 = getelementptr inbounds i8*, i8** %5, i64 2, !dbg !55
  %6 = load i8*, i8** %arrayidx4, align 8, !dbg !55
  %call5 = call i32 @atoi(i8* %6) #5, !dbg !56
  store i32 %call5, i32* %b, align 4, !dbg !57
  br label %if.end

if.end:                                           ; preds = %if.else3, %if.then2
  br label %if.end6

if.end6:                                          ; preds = %if.end, %if.then
  %7 = load i32, i32* %a, align 4, !dbg !58
  %8 = load i32, i32* %b, align 4, !dbg !59
  %call7 = call i32 @_Z4divdii(i32 %7, i32 %8), !dbg !60
  %call8 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i32 0, i32 0), i32 %call7), !dbg !61
  ret i32 0, !dbg !62
}

; Function Attrs: nounwind readonly
declare i32 @atoi(i8*) #3

declare i32 @printf(i8*, ...) #4

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
!18 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "n1", arg: 1, scope: !4, file: !1, line: 4, type: !8)
!19 = !MDExpression()
!20 = !MDLocation(line: 4, column: 24, scope: !4)
!21 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "n2", arg: 2, scope: !4, file: !1, line: 4, type: !8)
!22 = !MDLocation(line: 4, column: 32, scope: !4)
!23 = !MDLocation(line: 5, column: 9, scope: !4)
!24 = !MDLocation(line: 5, column: 12, scope: !4)
!25 = !MDLocation(line: 5, column: 11, scope: !4)
!26 = !MDLocation(line: 5, column: 2, scope: !4)
!27 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "argc", arg: 1, scope: !9, file: !1, line: 8, type: !8)
!28 = !MDLocation(line: 8, column: 14, scope: !9)
!29 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "argv", arg: 2, scope: !9, file: !1, line: 8, type: !12)
!30 = !MDLocation(line: 8, column: 26, scope: !9)
!31 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "a", scope: !9, file: !1, line: 9, type: !8)
!32 = !MDLocation(line: 9, column: 6, scope: !9)
!33 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "b", scope: !9, file: !1, line: 9, type: !8)
!34 = !MDLocation(line: 9, column: 9, scope: !9)
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
!46 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "c", scope: !43, file: !1, line: 14, type: !8)
!47 = !MDLocation(line: 14, column: 7, scope: !43)
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
