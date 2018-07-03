; ModuleID = 'i32_modpow.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

; Function Attrs: nounwind uwtable
define void @br_i32_modpow(i32* %x, i8* %e, i64 %elen, i32* %m, i32 %m0i, i32* %t1, i32* %t2) #0 {
entry:
  %x.addr = alloca i32*, align 8
  %e.addr = alloca i8*, align 8
  %elen.addr = alloca i64, align 8
  %m.addr = alloca i32*, align 8
  %m0i.addr = alloca i32, align 4
  %t1.addr = alloca i32*, align 8
  %t2.addr = alloca i32*, align 8
  %mlen = alloca i64, align 8
  %k = alloca i32, align 4
  %ctl = alloca i32, align 4
  store i32* %x, i32** %x.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %x.addr, metadata !29, metadata !30), !dbg !31
  store i8* %e, i8** %e.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %e.addr, metadata !32, metadata !30), !dbg !33
  store i64 %elen, i64* %elen.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %elen.addr, metadata !34, metadata !30), !dbg !35
  store i32* %m, i32** %m.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %m.addr, metadata !36, metadata !30), !dbg !37
  store i32 %m0i, i32* %m0i.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %m0i.addr, metadata !38, metadata !30), !dbg !39
  store i32* %t1, i32** %t1.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %t1.addr, metadata !40, metadata !30), !dbg !41
  store i32* %t2, i32** %t2.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %t2.addr, metadata !42, metadata !30), !dbg !43
  call void @llvm.dbg.declare(metadata i64* %mlen, metadata !44, metadata !30), !dbg !45
  call void @llvm.dbg.declare(metadata i32* %k, metadata !46, metadata !30), !dbg !47
  %0 = load i32*, i32** %m.addr, align 8, !dbg !48
  %arrayidx = getelementptr inbounds i32, i32* %0, i64 0, !dbg !48
  %1 = load i32, i32* %arrayidx, align 4, !dbg !48
  %add = add i32 %1, 63, !dbg !49
  %shr = lshr i32 %add, 5, !dbg !50
  %conv = zext i32 %shr to i64, !dbg !51
  %mul = mul i64 %conv, 4, !dbg !52
  store i64 %mul, i64* %mlen, align 8, !dbg !53
  %2 = load i32*, i32** %t1.addr, align 8, !dbg !54
  %3 = bitcast i32* %2 to i8*, !dbg !55
  %4 = load i32*, i32** %x.addr, align 8, !dbg !56
  %5 = bitcast i32* %4 to i8*, !dbg !55
  %6 = load i64, i64* %mlen, align 8, !dbg !57
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %3, i8* %5, i64 %6, i32 4, i1 false), !dbg !55
  %7 = load i32*, i32** %t1.addr, align 8, !dbg !58
  %8 = load i32*, i32** %m.addr, align 8, !dbg !59
  call void @br_i32_to_monty(i32* %7, i32* %8), !dbg !60
  %9 = load i32*, i32** %x.addr, align 8, !dbg !61
  %10 = load i32*, i32** %m.addr, align 8, !dbg !62
  %arrayidx1 = getelementptr inbounds i32, i32* %10, i64 0, !dbg !62
  %11 = load i32, i32* %arrayidx1, align 4, !dbg !62
  call void @br_i32_zero(i32* %9, i32 %11), !dbg !63
  %12 = load i32*, i32** %x.addr, align 8, !dbg !64
  %arrayidx2 = getelementptr inbounds i32, i32* %12, i64 1, !dbg !64
  store i32 1, i32* %arrayidx2, align 4, !dbg !65
  store i32 0, i32* %k, align 4, !dbg !66
  br label %for.cond, !dbg !68

for.cond:                                         ; preds = %for.inc, %entry
  %13 = load i32, i32* %k, align 4, !dbg !69
  %14 = load i64, i64* %elen.addr, align 8, !dbg !73
  %conv3 = trunc i64 %14 to i32, !dbg !74
  %shl = shl i32 %conv3, 3, !dbg !75
  %cmp = icmp ult i32 %13, %shl, !dbg !76
  br i1 %cmp, label %for.body, label %for.end, !dbg !77

for.body:                                         ; preds = %for.cond
  call void @llvm.dbg.declare(metadata i32* %ctl, metadata !78, metadata !30), !dbg !80
  %15 = load i64, i64* %elen.addr, align 8, !dbg !81
  %sub = sub i64 %15, 1, !dbg !82
  %16 = load i32, i32* %k, align 4, !dbg !83
  %shr5 = lshr i32 %16, 3, !dbg !84
  %conv6 = zext i32 %shr5 to i64, !dbg !85
  %sub7 = sub i64 %sub, %conv6, !dbg !86
  %17 = load i8*, i8** %e.addr, align 8, !dbg !87
  %arrayidx8 = getelementptr inbounds i8, i8* %17, i64 %sub7, !dbg !87
  %18 = load i8, i8* %arrayidx8, align 1, !dbg !87
  %conv9 = zext i8 %18 to i32, !dbg !87
  %19 = load i32, i32* %k, align 4, !dbg !88
  %and = and i32 %19, 7, !dbg !89
  %shr10 = ashr i32 %conv9, %and, !dbg !90
  %and11 = and i32 %shr10, 1, !dbg !91
  store i32 %and11, i32* %ctl, align 4, !dbg !92
  %20 = load i32*, i32** %t2.addr, align 8, !dbg !93
  %21 = load i32*, i32** %x.addr, align 8, !dbg !94
  %22 = load i32*, i32** %t1.addr, align 8, !dbg !95
  %23 = load i32*, i32** %m.addr, align 8, !dbg !96
  %24 = load i32, i32* %m0i.addr, align 4, !dbg !97
  call void @br_i32_montymul(i32* %20, i32* %21, i32* %22, i32* %23, i32 %24), !dbg !98
  %25 = load i32, i32* %ctl, align 4, !dbg !99
  %26 = load i32*, i32** %x.addr, align 8, !dbg !100
  %27 = bitcast i32* %26 to i8*, !dbg !100
  %28 = load i32*, i32** %t2.addr, align 8, !dbg !101
  %29 = bitcast i32* %28 to i8*, !dbg !101
  %30 = load i64, i64* %mlen, align 8, !dbg !102
  call void @br_ccopy(i32 %25, i8* %27, i8* %29, i64 %30), !dbg !103
  %31 = load i32*, i32** %t2.addr, align 8, !dbg !104
  %32 = load i32*, i32** %t1.addr, align 8, !dbg !105
  %33 = load i32*, i32** %t1.addr, align 8, !dbg !106
  %34 = load i32*, i32** %m.addr, align 8, !dbg !107
  %35 = load i32, i32* %m0i.addr, align 4, !dbg !108
  call void @br_i32_montymul(i32* %31, i32* %32, i32* %33, i32* %34, i32 %35), !dbg !109
  %36 = load i32*, i32** %t1.addr, align 8, !dbg !110
  %37 = bitcast i32* %36 to i8*, !dbg !111
  %38 = load i32*, i32** %t2.addr, align 8, !dbg !112
  %39 = bitcast i32* %38 to i8*, !dbg !111
  %40 = load i64, i64* %mlen, align 8, !dbg !113
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %37, i8* %39, i64 %40, i32 4, i1 false), !dbg !111
  br label %for.inc, !dbg !114

for.inc:                                          ; preds = %for.body
  %41 = load i32, i32* %k, align 4, !dbg !115
  %inc = add i32 %41, 1, !dbg !115
  store i32 %inc, i32* %k, align 4, !dbg !115
  br label %for.cond, !dbg !116

for.end:                                          ; preds = %for.cond
  ret void, !dbg !117
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture, i8* nocapture readonly, i64, i32, i1) #2

declare void @br_i32_to_monty(i32*, i32*) #3

; Function Attrs: inlinehint nounwind uwtable
define internal void @br_i32_zero(i32* %x, i32 %bit_len) #4 {
entry:
  %x.addr = alloca i32*, align 8
  %bit_len.addr = alloca i32, align 4
  store i32* %x, i32** %x.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %x.addr, metadata !118, metadata !30), !dbg !119
  store i32 %bit_len, i32* %bit_len.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %bit_len.addr, metadata !120, metadata !30), !dbg !121
  %0 = load i32, i32* %bit_len.addr, align 4, !dbg !122
  %1 = load i32*, i32** %x.addr, align 8, !dbg !123
  %incdec.ptr = getelementptr inbounds i32, i32* %1, i32 1, !dbg !123
  store i32* %incdec.ptr, i32** %x.addr, align 8, !dbg !123
  store i32 %0, i32* %1, align 4, !dbg !124
  %2 = load i32*, i32** %x.addr, align 8, !dbg !125
  %3 = bitcast i32* %2 to i8*, !dbg !126
  %4 = load i32, i32* %bit_len.addr, align 4, !dbg !127
  %add = add i32 %4, 31, !dbg !128
  %shr = lshr i32 %add, 5, !dbg !129
  %conv = zext i32 %shr to i64, !dbg !130
  %mul = mul i64 %conv, 4, !dbg !131
  call void @llvm.memset.p0i8.i64(i8* %3, i8 0, i64 %mul, i32 4, i1 false), !dbg !126
  ret void, !dbg !132
}

declare void @br_i32_montymul(i32*, i32*, i32*, i32*, i32) #3

declare void @br_ccopy(i32, i8*, i8*, i64) #3

; Function Attrs: nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture, i8, i64, i32, i1) #2

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { nounwind }
attributes #3 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { inlinehint nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!26, !27}
!llvm.ident = !{!28}

!0 = !MDCompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !3, subprograms: !9, globals: !2, imports: !2)
!1 = !MDFile(filename: "i32_modpow.c", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/BearSSL0.5")
!2 = !{}
!3 = !{!4}
!4 = !MDDerivedType(tag: DW_TAG_typedef, name: "uint32_t", file: !5, line: 26, baseType: !6)
!5 = !MDFile(filename: "/usr/include/bits/stdint-uintn.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/BearSSL0.5")
!6 = !MDDerivedType(tag: DW_TAG_typedef, name: "__uint32_t", file: !7, line: 41, baseType: !8)
!7 = !MDFile(filename: "/usr/include/bits/types.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/BearSSL0.5")
!8 = !MDBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!9 = !{!10, !22}
!10 = !MDSubprogram(name: "br_i32_modpow", scope: !1, file: !1, line: 29, type: !11, isLocal: false, isDefinition: true, scopeLine: 32, flags: DIFlagPrototyped, isOptimized: false, function: void (i32*, i8*, i64, i32*, i32, i32*, i32*)* @br_i32_modpow, variables: !2)
!11 = !MDSubroutineType(types: !12)
!12 = !{null, !13, !14, !17, !20, !4, !13, !13}
!13 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !4, size: 64, align: 64)
!14 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !15, size: 64, align: 64)
!15 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !16)
!16 = !MDBasicType(name: "unsigned char", size: 8, align: 8, encoding: DW_ATE_unsigned_char)
!17 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_t", file: !18, line: 62, baseType: !19)
!18 = !MDFile(filename: "/home/adam/research/LLVM-Deps/Debug+Asserts/bin/../lib/clang/3.7.0/include/stddef.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/BearSSL0.5")
!19 = !MDBasicType(name: "long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!20 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !21, size: 64, align: 64)
!21 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !4)
!22 = !MDSubprogram(name: "br_i32_zero", scope: !23, file: !23, line: 1066, type: !24, isLocal: true, isDefinition: true, scopeLine: 1067, flags: DIFlagPrototyped, isOptimized: false, function: void (i32*, i32)* @br_i32_zero, variables: !2)
!23 = !MDFile(filename: "include/inner.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/BearSSL0.5")
!24 = !MDSubroutineType(types: !25)
!25 = !{null, !13, !4}
!26 = !{i32 2, !"Dwarf Version", i32 4}
!27 = !{i32 2, !"Debug Info Version", i32 3}
!28 = !{!"clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)"}
!29 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "x", arg: 1, scope: !10, file: !1, line: 29, type: !13)
!30 = !MDExpression()
!31 = !MDLocation(line: 29, column: 25, scope: !10)
!32 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "e", arg: 2, scope: !10, file: !1, line: 30, type: !14)
!33 = !MDLocation(line: 30, column: 23, scope: !10)
!34 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "elen", arg: 3, scope: !10, file: !1, line: 30, type: !17)
!35 = !MDLocation(line: 30, column: 33, scope: !10)
!36 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !10, file: !1, line: 31, type: !20)
!37 = !MDLocation(line: 31, column: 18, scope: !10)
!38 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m0i", arg: 5, scope: !10, file: !1, line: 31, type: !4)
!39 = !MDLocation(line: 31, column: 30, scope: !10)
!40 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "t1", arg: 6, scope: !10, file: !1, line: 31, type: !13)
!41 = !MDLocation(line: 31, column: 45, scope: !10)
!42 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "t2", arg: 7, scope: !10, file: !1, line: 31, type: !13)
!43 = !MDLocation(line: 31, column: 59, scope: !10)
!44 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mlen", scope: !10, file: !1, line: 33, type: !17)
!45 = !MDLocation(line: 33, column: 9, scope: !10)
!46 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "k", scope: !10, file: !1, line: 34, type: !4)
!47 = !MDLocation(line: 34, column: 11, scope: !10)
!48 = !MDLocation(line: 40, column: 11, scope: !10)
!49 = !MDLocation(line: 40, column: 16, scope: !10)
!50 = !MDLocation(line: 40, column: 22, scope: !10)
!51 = !MDLocation(line: 40, column: 9, scope: !10)
!52 = !MDLocation(line: 40, column: 28, scope: !10)
!53 = !MDLocation(line: 40, column: 7, scope: !10)
!54 = !MDLocation(line: 52, column: 9, scope: !10)
!55 = !MDLocation(line: 52, column: 2, scope: !10)
!56 = !MDLocation(line: 52, column: 13, scope: !10)
!57 = !MDLocation(line: 52, column: 16, scope: !10)
!58 = !MDLocation(line: 53, column: 18, scope: !10)
!59 = !MDLocation(line: 53, column: 22, scope: !10)
!60 = !MDLocation(line: 53, column: 2, scope: !10)
!61 = !MDLocation(line: 54, column: 14, scope: !10)
!62 = !MDLocation(line: 54, column: 17, scope: !10)
!63 = !MDLocation(line: 54, column: 2, scope: !10)
!64 = !MDLocation(line: 55, column: 2, scope: !10)
!65 = !MDLocation(line: 55, column: 7, scope: !10)
!66 = !MDLocation(line: 56, column: 9, scope: !67)
!67 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 56, column: 2)
!68 = !MDLocation(line: 56, column: 7, scope: !67)
!69 = !MDLocation(line: 56, column: 14, scope: !70)
!70 = !MDLexicalBlockFile(scope: !71, file: !1, discriminator: 2)
!71 = !MDLexicalBlockFile(scope: !72, file: !1, discriminator: 1)
!72 = distinct !MDLexicalBlock(scope: !67, file: !1, line: 56, column: 2)
!73 = !MDLocation(line: 56, column: 29, scope: !72)
!74 = !MDLocation(line: 56, column: 19, scope: !72)
!75 = !MDLocation(line: 56, column: 34, scope: !72)
!76 = !MDLocation(line: 56, column: 16, scope: !72)
!77 = !MDLocation(line: 56, column: 2, scope: !67)
!78 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ctl", scope: !79, file: !1, line: 57, type: !4)
!79 = distinct !MDLexicalBlock(scope: !72, file: !1, line: 56, column: 47)
!80 = !MDLocation(line: 57, column: 12, scope: !79)
!81 = !MDLocation(line: 59, column: 12, scope: !79)
!82 = !MDLocation(line: 59, column: 17, scope: !79)
!83 = !MDLocation(line: 59, column: 24, scope: !79)
!84 = !MDLocation(line: 59, column: 26, scope: !79)
!85 = !MDLocation(line: 59, column: 23, scope: !79)
!86 = !MDLocation(line: 59, column: 21, scope: !79)
!87 = !MDLocation(line: 59, column: 10, scope: !79)
!88 = !MDLocation(line: 59, column: 37, scope: !79)
!89 = !MDLocation(line: 59, column: 39, scope: !79)
!90 = !MDLocation(line: 59, column: 33, scope: !79)
!91 = !MDLocation(line: 59, column: 45, scope: !79)
!92 = !MDLocation(line: 59, column: 7, scope: !79)
!93 = !MDLocation(line: 60, column: 19, scope: !79)
!94 = !MDLocation(line: 60, column: 23, scope: !79)
!95 = !MDLocation(line: 60, column: 26, scope: !79)
!96 = !MDLocation(line: 60, column: 30, scope: !79)
!97 = !MDLocation(line: 60, column: 33, scope: !79)
!98 = !MDLocation(line: 60, column: 3, scope: !79)
!99 = !MDLocation(line: 61, column: 9, scope: !79)
!100 = !MDLocation(line: 61, column: 14, scope: !79)
!101 = !MDLocation(line: 61, column: 17, scope: !79)
!102 = !MDLocation(line: 61, column: 21, scope: !79)
!103 = !MDLocation(line: 61, column: 3, scope: !79)
!104 = !MDLocation(line: 62, column: 19, scope: !79)
!105 = !MDLocation(line: 62, column: 23, scope: !79)
!106 = !MDLocation(line: 62, column: 27, scope: !79)
!107 = !MDLocation(line: 62, column: 31, scope: !79)
!108 = !MDLocation(line: 62, column: 34, scope: !79)
!109 = !MDLocation(line: 62, column: 3, scope: !79)
!110 = !MDLocation(line: 63, column: 10, scope: !79)
!111 = !MDLocation(line: 63, column: 3, scope: !79)
!112 = !MDLocation(line: 63, column: 14, scope: !79)
!113 = !MDLocation(line: 63, column: 18, scope: !79)
!114 = !MDLocation(line: 64, column: 2, scope: !79)
!115 = !MDLocation(line: 56, column: 43, scope: !72)
!116 = !MDLocation(line: 56, column: 2, scope: !72)
!117 = !MDLocation(line: 65, column: 1, scope: !10)
!118 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "x", arg: 1, scope: !22, file: !23, line: 1066, type: !13)
!119 = !MDLocation(line: 1066, column: 23, scope: !22)
!120 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "bit_len", arg: 2, scope: !22, file: !23, line: 1066, type: !4)
!121 = !MDLocation(line: 1066, column: 35, scope: !22)
!122 = !MDLocation(line: 1068, column: 10, scope: !22)
!123 = !MDLocation(line: 1068, column: 5, scope: !22)
!124 = !MDLocation(line: 1068, column: 8, scope: !22)
!125 = !MDLocation(line: 1069, column: 9, scope: !22)
!126 = !MDLocation(line: 1069, column: 2, scope: !22)
!127 = !MDLocation(line: 1069, column: 17, scope: !22)
!128 = !MDLocation(line: 1069, column: 25, scope: !22)
!129 = !MDLocation(line: 1069, column: 31, scope: !22)
!130 = !MDLocation(line: 1069, column: 15, scope: !22)
!131 = !MDLocation(line: 1069, column: 37, scope: !22)
!132 = !MDLocation(line: 1070, column: 1, scope: !22)
