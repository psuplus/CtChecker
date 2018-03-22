; ModuleID = 'bn_exp.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.bignum_st = type { i64*, i32, i32, i32, i32 }
%struct.bignum_ctx = type opaque
%struct.bn_mont_ctx_st = type { i32, %struct.bignum_st, %struct.bignum_st, %struct.bignum_st, [2 x i64], i32 }
%struct.bn_recp_ctx_st = type { %struct.bignum_st, %struct.bignum_st, i32, i32, i32 }

@.str = private unnamed_addr constant [9 x i8] c"bn_exp.c\00", align 1

; Function Attrs: nounwind uwtable
define i32 @BN_exp(%struct.bignum_st* %r, %struct.bignum_st* %a, %struct.bignum_st* %p, %struct.bignum_ctx* %ctx) #0 {
entry:
  %r.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca %struct.bignum_st*, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %i = alloca i32, align 4
  %bits = alloca i32, align 4
  %ret = alloca i32, align 4
  %v = alloca %struct.bignum_st*, align 8
  %rr = alloca %struct.bignum_st*, align 8
  store %struct.bignum_st* %r, %struct.bignum_st** %r.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %r.addr, metadata !80, metadata !81), !dbg !82
  store %struct.bignum_st* %a, %struct.bignum_st** %a.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %a.addr, metadata !83, metadata !81), !dbg !84
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !85, metadata !81), !dbg !86
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !87, metadata !81), !dbg !88
  call void @llvm.dbg.declare(metadata i32* %i, metadata !89, metadata !81), !dbg !90
  call void @llvm.dbg.declare(metadata i32* %bits, metadata !91, metadata !81), !dbg !92
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !93, metadata !81), !dbg !94
  store i32 0, i32* %ret, align 4, !dbg !94
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %v, metadata !95, metadata !81), !dbg !96
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %rr, metadata !97, metadata !81), !dbg !98
  %0 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !99
  %call = call i32 @BN_get_flags(%struct.bignum_st* %0, i32 4), !dbg !101
  %cmp = icmp ne i32 %call, 0, !dbg !102
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !103

lor.lhs.false:                                    ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !104
  %call1 = call i32 @BN_get_flags(%struct.bignum_st* %1, i32 4), !dbg !106
  %cmp2 = icmp ne i32 %call1, 0, !dbg !107
  br i1 %cmp2, label %if.then, label %if.end, !dbg !108

if.then:                                          ; preds = %lor.lhs.false, %entry
  call void @ERR_put_error(i32 3, i32 123, i32 66, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 49), !dbg !109
  br label %if.end, !dbg !111

if.end:                                           ; preds = %if.then, %lor.lhs.false
  %2 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !112
  call void @BN_CTX_start(%struct.bignum_ctx* %2), !dbg !113
  %3 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !114
  %4 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !116
  %cmp3 = icmp eq %struct.bignum_st* %3, %4, !dbg !117
  br i1 %cmp3, label %if.then6, label %lor.lhs.false4, !dbg !118

lor.lhs.false4:                                   ; preds = %if.end
  %5 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !119
  %6 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !121
  %cmp5 = icmp eq %struct.bignum_st* %5, %6, !dbg !122
  br i1 %cmp5, label %if.then6, label %if.else, !dbg !123

if.then6:                                         ; preds = %lor.lhs.false4, %if.end
  %7 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !124
  %call7 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %7), !dbg !125
  store %struct.bignum_st* %call7, %struct.bignum_st** %rr, align 8, !dbg !126
  br label %if.end8, !dbg !127

if.else:                                          ; preds = %lor.lhs.false4
  %8 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !128
  store %struct.bignum_st* %8, %struct.bignum_st** %rr, align 8, !dbg !129
  br label %if.end8

if.end8:                                          ; preds = %if.else, %if.then6
  %9 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !130
  %call9 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %9), !dbg !131
  store %struct.bignum_st* %call9, %struct.bignum_st** %v, align 8, !dbg !132
  %10 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !133
  %cmp10 = icmp eq %struct.bignum_st* %10, null, !dbg !135
  br i1 %cmp10, label %if.then13, label %lor.lhs.false11, !dbg !136

lor.lhs.false11:                                  ; preds = %if.end8
  %11 = load %struct.bignum_st*, %struct.bignum_st** %v, align 8, !dbg !137
  %cmp12 = icmp eq %struct.bignum_st* %11, null, !dbg !139
  br i1 %cmp12, label %if.then13, label %if.end14, !dbg !140

if.then13:                                        ; preds = %lor.lhs.false11, %if.end8
  br label %err, !dbg !141

if.end14:                                         ; preds = %lor.lhs.false11
  %12 = load %struct.bignum_st*, %struct.bignum_st** %v, align 8, !dbg !142
  %13 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !144
  %call15 = call %struct.bignum_st* @BN_copy(%struct.bignum_st* %12, %struct.bignum_st* %13), !dbg !145
  %cmp16 = icmp eq %struct.bignum_st* %call15, null, !dbg !146
  br i1 %cmp16, label %if.then17, label %if.end18, !dbg !147

if.then17:                                        ; preds = %if.end14
  br label %err, !dbg !148

if.end18:                                         ; preds = %if.end14
  %14 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !149
  %call19 = call i32 @BN_num_bits(%struct.bignum_st* %14), !dbg !150
  store i32 %call19, i32* %bits, align 4, !dbg !151
  %15 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !152
  %call20 = call i32 @BN_is_odd(%struct.bignum_st* %15), !dbg !154
  %tobool = icmp ne i32 %call20, 0, !dbg !154
  br i1 %tobool, label %if.then21, label %if.else26, !dbg !155

if.then21:                                        ; preds = %if.end18
  %16 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !156
  %17 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !159
  %call22 = call %struct.bignum_st* @BN_copy(%struct.bignum_st* %16, %struct.bignum_st* %17), !dbg !160
  %cmp23 = icmp eq %struct.bignum_st* %call22, null, !dbg !161
  br i1 %cmp23, label %if.then24, label %if.end25, !dbg !162

if.then24:                                        ; preds = %if.then21
  br label %err, !dbg !163

if.end25:                                         ; preds = %if.then21
  br label %if.end31, !dbg !164

if.else26:                                        ; preds = %if.end18
  %18 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !165
  %call27 = call i32 @BN_set_word(%struct.bignum_st* %18, i64 1), !dbg !165
  %tobool28 = icmp ne i32 %call27, 0, !dbg !165
  br i1 %tobool28, label %if.end30, label %if.then29, !dbg !168

if.then29:                                        ; preds = %if.else26
  br label %err, !dbg !169

if.end30:                                         ; preds = %if.else26
  br label %if.end31

if.end31:                                         ; preds = %if.end30, %if.end25
  store i32 1, i32* %i, align 4, !dbg !170
  br label %for.cond, !dbg !172

for.cond:                                         ; preds = %for.inc, %if.end31
  %19 = load i32, i32* %i, align 4, !dbg !173
  %20 = load i32, i32* %bits, align 4, !dbg !177
  %cmp32 = icmp slt i32 %19, %20, !dbg !178
  br i1 %cmp32, label %for.body, label %for.end, !dbg !179

for.body:                                         ; preds = %for.cond
  %21 = load %struct.bignum_st*, %struct.bignum_st** %v, align 8, !dbg !180
  %22 = load %struct.bignum_st*, %struct.bignum_st** %v, align 8, !dbg !183
  %23 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !184
  %call33 = call i32 @BN_sqr(%struct.bignum_st* %21, %struct.bignum_st* %22, %struct.bignum_ctx* %23), !dbg !185
  %tobool34 = icmp ne i32 %call33, 0, !dbg !185
  br i1 %tobool34, label %if.end36, label %if.then35, !dbg !186

if.then35:                                        ; preds = %for.body
  br label %err, !dbg !187

if.end36:                                         ; preds = %for.body
  %24 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !188
  %25 = load i32, i32* %i, align 4, !dbg !190
  %call37 = call i32 @BN_is_bit_set(%struct.bignum_st* %24, i32 %25), !dbg !191
  %tobool38 = icmp ne i32 %call37, 0, !dbg !191
  br i1 %tobool38, label %if.then39, label %if.end44, !dbg !192

if.then39:                                        ; preds = %if.end36
  %26 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !193
  %27 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !196
  %28 = load %struct.bignum_st*, %struct.bignum_st** %v, align 8, !dbg !197
  %29 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !198
  %call40 = call i32 @BN_mul(%struct.bignum_st* %26, %struct.bignum_st* %27, %struct.bignum_st* %28, %struct.bignum_ctx* %29), !dbg !199
  %tobool41 = icmp ne i32 %call40, 0, !dbg !199
  br i1 %tobool41, label %if.end43, label %if.then42, !dbg !200

if.then42:                                        ; preds = %if.then39
  br label %err, !dbg !201

if.end43:                                         ; preds = %if.then39
  br label %if.end44, !dbg !202

if.end44:                                         ; preds = %if.end43, %if.end36
  br label %for.inc, !dbg !203

for.inc:                                          ; preds = %if.end44
  %30 = load i32, i32* %i, align 4, !dbg !204
  %inc = add nsw i32 %30, 1, !dbg !204
  store i32 %inc, i32* %i, align 4, !dbg !204
  br label %for.cond, !dbg !205

for.end:                                          ; preds = %for.cond
  %31 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !206
  %32 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !208
  %cmp45 = icmp ne %struct.bignum_st* %31, %32, !dbg !209
  br i1 %cmp45, label %land.lhs.true, label %if.end49, !dbg !210

land.lhs.true:                                    ; preds = %for.end
  %33 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !211
  %34 = load %struct.bignum_st*, %struct.bignum_st** %rr, align 8, !dbg !213
  %call46 = call %struct.bignum_st* @BN_copy(%struct.bignum_st* %33, %struct.bignum_st* %34), !dbg !214
  %cmp47 = icmp eq %struct.bignum_st* %call46, null, !dbg !215
  br i1 %cmp47, label %if.then48, label %if.end49, !dbg !216

if.then48:                                        ; preds = %land.lhs.true
  br label %err, !dbg !217

if.end49:                                         ; preds = %land.lhs.true, %for.end
  store i32 1, i32* %ret, align 4, !dbg !218
  br label %err, !dbg !219

err:                                              ; preds = %if.end49, %if.then48, %if.then42, %if.then35, %if.then29, %if.then24, %if.then17, %if.then13
  %35 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !220
  call void @BN_CTX_end(%struct.bignum_ctx* %35), !dbg !221
  %36 = load i32, i32* %ret, align 4, !dbg !222
  ret i32 %36, !dbg !223
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

declare i32 @BN_get_flags(%struct.bignum_st*, i32) #2

declare void @ERR_put_error(i32, i32, i32, i8*, i32) #2

declare void @BN_CTX_start(%struct.bignum_ctx*) #2

declare %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx*) #2

declare %struct.bignum_st* @BN_copy(%struct.bignum_st*, %struct.bignum_st*) #2

declare i32 @BN_num_bits(%struct.bignum_st*) #2

declare i32 @BN_is_odd(%struct.bignum_st*) #2

declare i32 @BN_set_word(%struct.bignum_st*, i64) #2

declare i32 @BN_sqr(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

declare i32 @BN_is_bit_set(%struct.bignum_st*, i32) #2

declare i32 @BN_mul(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

declare void @BN_CTX_end(%struct.bignum_ctx*) #2

; Function Attrs: nounwind uwtable
define i32 @BN_mod_exp(%struct.bignum_st* %r, %struct.bignum_st* %a, %struct.bignum_st* %p, %struct.bignum_st* %m, %struct.bignum_ctx* %ctx) #0 {
entry:
  %r.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca %struct.bignum_st*, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %m.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %ret = alloca i32, align 4
  %A = alloca i64, align 8
  store %struct.bignum_st* %r, %struct.bignum_st** %r.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %r.addr, metadata !224, metadata !81), !dbg !225
  store %struct.bignum_st* %a, %struct.bignum_st** %a.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %a.addr, metadata !226, metadata !81), !dbg !227
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !228, metadata !81), !dbg !229
  store %struct.bignum_st* %m, %struct.bignum_st** %m.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %m.addr, metadata !230, metadata !81), !dbg !231
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !232, metadata !81), !dbg !233
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !234, metadata !81), !dbg !235
  %0 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !236
  %call = call i32 @BN_is_odd(%struct.bignum_st* %0), !dbg !238
  %tobool = icmp ne i32 %call, 0, !dbg !238
  br i1 %tobool, label %if.then, label %if.else14, !dbg !239

if.then:                                          ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !240
  %top = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %1, i32 0, i32 1, !dbg !243
  %2 = load i32, i32* %top, align 4, !dbg !243
  %cmp = icmp eq i32 %2, 1, !dbg !244
  br i1 %cmp, label %land.lhs.true, label %if.else, !dbg !245

land.lhs.true:                                    ; preds = %if.then
  %3 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !246
  %neg = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %3, i32 0, i32 3, !dbg !248
  %4 = load i32, i32* %neg, align 4, !dbg !248
  %tobool1 = icmp ne i32 %4, 0, !dbg !249
  br i1 %tobool1, label %if.else, label %land.lhs.true2, !dbg !250

land.lhs.true2:                                   ; preds = %land.lhs.true
  %5 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !251
  %call3 = call i32 @BN_get_flags(%struct.bignum_st* %5, i32 4), !dbg !252
  %cmp4 = icmp eq i32 %call3, 0, !dbg !253
  br i1 %cmp4, label %land.lhs.true5, label %if.else, !dbg !254

land.lhs.true5:                                   ; preds = %land.lhs.true2
  %6 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !255
  %call6 = call i32 @BN_get_flags(%struct.bignum_st* %6, i32 4), !dbg !256
  %cmp7 = icmp eq i32 %call6, 0, !dbg !257
  br i1 %cmp7, label %land.lhs.true8, label %if.else, !dbg !258

land.lhs.true8:                                   ; preds = %land.lhs.true5
  %7 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !259
  %call9 = call i32 @BN_get_flags(%struct.bignum_st* %7, i32 4), !dbg !260
  %cmp10 = icmp eq i32 %call9, 0, !dbg !261
  br i1 %cmp10, label %if.then11, label %if.else, !dbg !262

if.then11:                                        ; preds = %land.lhs.true8
  call void @llvm.dbg.declare(metadata i64* %A, metadata !263, metadata !81), !dbg !265
  %8 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !266
  %d = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %8, i32 0, i32 0, !dbg !267
  %9 = load i64*, i64** %d, align 8, !dbg !267
  %arrayidx = getelementptr inbounds i64, i64* %9, i64 0, !dbg !266
  %10 = load i64, i64* %arrayidx, align 8, !dbg !266
  store i64 %10, i64* %A, align 8, !dbg !265
  %11 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !268
  %12 = load i64, i64* %A, align 8, !dbg !269
  %13 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !270
  %14 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !271
  %15 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !272
  %call12 = call i32 @BN_mod_exp_mont_word(%struct.bignum_st* %11, i64 %12, %struct.bignum_st* %13, %struct.bignum_st* %14, %struct.bignum_ctx* %15, %struct.bn_mont_ctx_st* null), !dbg !273
  store i32 %call12, i32* %ret, align 4, !dbg !274
  br label %if.end, !dbg !275

if.else:                                          ; preds = %land.lhs.true8, %land.lhs.true5, %land.lhs.true2, %land.lhs.true, %if.then
  %16 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !276
  %17 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !277
  %18 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !278
  %19 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !279
  %20 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !280
  %call13 = call i32 @BN_mod_exp_mont(%struct.bignum_st* %16, %struct.bignum_st* %17, %struct.bignum_st* %18, %struct.bignum_st* %19, %struct.bignum_ctx* %20, %struct.bn_mont_ctx_st* null), !dbg !281
  store i32 %call13, i32* %ret, align 4, !dbg !282
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then11
  br label %if.end16, !dbg !283

if.else14:                                        ; preds = %entry
  %21 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !284
  %22 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !286
  %23 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !287
  %24 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !288
  %25 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !289
  %call15 = call i32 @BN_mod_exp_recp(%struct.bignum_st* %21, %struct.bignum_st* %22, %struct.bignum_st* %23, %struct.bignum_st* %24, %struct.bignum_ctx* %25), !dbg !290
  store i32 %call15, i32* %ret, align 4, !dbg !291
  br label %if.end16

if.end16:                                         ; preds = %if.else14, %if.end
  %26 = load i32, i32* %ret, align 4, !dbg !292
  ret i32 %26, !dbg !293
}

; Function Attrs: nounwind uwtable
define i32 @BN_mod_exp_mont_word(%struct.bignum_st* %rr, i64 %a, %struct.bignum_st* %p, %struct.bignum_st* %m, %struct.bignum_ctx* %ctx, %struct.bn_mont_ctx_st* %in_mont) #0 {
entry:
  %retval = alloca i32, align 4
  %rr.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca i64, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %m.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %in_mont.addr = alloca %struct.bn_mont_ctx_st*, align 8
  %mont = alloca %struct.bn_mont_ctx_st*, align 8
  %b = alloca i32, align 4
  %bits = alloca i32, align 4
  %ret = alloca i32, align 4
  %r_is_one = alloca i32, align 4
  %w = alloca i64, align 8
  %next_w = alloca i64, align 8
  %d = alloca %struct.bignum_st*, align 8
  %r = alloca %struct.bignum_st*, align 8
  %t = alloca %struct.bignum_st*, align 8
  %swap_tmp = alloca %struct.bignum_st*, align 8
  store %struct.bignum_st* %rr, %struct.bignum_st** %rr.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %rr.addr, metadata !294, metadata !81), !dbg !295
  store i64 %a, i64* %a.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %a.addr, metadata !296, metadata !81), !dbg !297
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !298, metadata !81), !dbg !299
  store %struct.bignum_st* %m, %struct.bignum_st** %m.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %m.addr, metadata !300, metadata !81), !dbg !301
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !302, metadata !81), !dbg !303
  store %struct.bn_mont_ctx_st* %in_mont, %struct.bn_mont_ctx_st** %in_mont.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bn_mont_ctx_st** %in_mont.addr, metadata !304, metadata !81), !dbg !305
  call void @llvm.dbg.declare(metadata %struct.bn_mont_ctx_st** %mont, metadata !306, metadata !81), !dbg !307
  store %struct.bn_mont_ctx_st* null, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !307
  call void @llvm.dbg.declare(metadata i32* %b, metadata !308, metadata !81), !dbg !309
  call void @llvm.dbg.declare(metadata i32* %bits, metadata !310, metadata !81), !dbg !311
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !312, metadata !81), !dbg !313
  store i32 0, i32* %ret, align 4, !dbg !313
  call void @llvm.dbg.declare(metadata i32* %r_is_one, metadata !314, metadata !81), !dbg !315
  call void @llvm.dbg.declare(metadata i64* %w, metadata !316, metadata !81), !dbg !317
  call void @llvm.dbg.declare(metadata i64* %next_w, metadata !318, metadata !81), !dbg !319
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %d, metadata !320, metadata !81), !dbg !321
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %r, metadata !322, metadata !81), !dbg !323
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %t, metadata !324, metadata !81), !dbg !325
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %swap_tmp, metadata !326, metadata !81), !dbg !327
  %0 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !328
  %call = call i32 @BN_get_flags(%struct.bignum_st* %0, i32 4), !dbg !330
  %cmp = icmp ne i32 %call, 0, !dbg !331
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !332

lor.lhs.false:                                    ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !333
  %call1 = call i32 @BN_get_flags(%struct.bignum_st* %1, i32 4), !dbg !335
  %cmp2 = icmp ne i32 %call1, 0, !dbg !336
  br i1 %cmp2, label %if.then, label %if.end, !dbg !337

if.then:                                          ; preds = %lor.lhs.false, %entry
  call void @ERR_put_error(i32 3, i32 117, i32 66, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 1126), !dbg !338
  store i32 0, i32* %retval, !dbg !340
  br label %return, !dbg !340

if.end:                                           ; preds = %lor.lhs.false
  %2 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !341
  %call3 = call i32 @BN_is_odd(%struct.bignum_st* %2), !dbg !343
  %tobool = icmp ne i32 %call3, 0, !dbg !343
  br i1 %tobool, label %if.end5, label %if.then4, !dbg !344

if.then4:                                         ; preds = %if.end
  call void @ERR_put_error(i32 3, i32 117, i32 102, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 1134), !dbg !345
  store i32 0, i32* %retval, !dbg !347
  br label %return, !dbg !347

if.end5:                                          ; preds = %if.end
  %3 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !348
  %top = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %3, i32 0, i32 1, !dbg !350
  %4 = load i32, i32* %top, align 4, !dbg !350
  %cmp6 = icmp eq i32 %4, 1, !dbg !351
  br i1 %cmp6, label %if.then7, label %if.end9, !dbg !352

if.then7:                                         ; preds = %if.end5
  %5 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !353
  %d8 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %5, i32 0, i32 0, !dbg !354
  %6 = load i64*, i64** %d8, align 8, !dbg !354
  %arrayidx = getelementptr inbounds i64, i64* %6, i64 0, !dbg !353
  %7 = load i64, i64* %arrayidx, align 8, !dbg !353
  %8 = load i64, i64* %a.addr, align 8, !dbg !355
  %rem = urem i64 %8, %7, !dbg !355
  store i64 %rem, i64* %a.addr, align 8, !dbg !355
  br label %if.end9, !dbg !356

if.end9:                                          ; preds = %if.then7, %if.end5
  %9 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !357
  %call10 = call i32 @BN_num_bits(%struct.bignum_st* %9), !dbg !358
  store i32 %call10, i32* %bits, align 4, !dbg !359
  %10 = load i32, i32* %bits, align 4, !dbg !360
  %cmp11 = icmp eq i32 %10, 0, !dbg !362
  br i1 %cmp11, label %if.then12, label %if.end19, !dbg !363

if.then12:                                        ; preds = %if.end9
  %11 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !364
  %call13 = call i32 @BN_is_one(%struct.bignum_st* %11), !dbg !367
  %tobool14 = icmp ne i32 %call13, 0, !dbg !367
  br i1 %tobool14, label %if.then15, label %if.else, !dbg !368

if.then15:                                        ; preds = %if.then12
  store i32 1, i32* %ret, align 4, !dbg !369
  %12 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !371
  %call16 = call i32 @BN_set_word(%struct.bignum_st* %12, i64 0), !dbg !371
  br label %if.end18, !dbg !372

if.else:                                          ; preds = %if.then12
  %13 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !373
  %call17 = call i32 @BN_set_word(%struct.bignum_st* %13, i64 1), !dbg !373
  store i32 %call17, i32* %ret, align 4, !dbg !375
  br label %if.end18

if.end18:                                         ; preds = %if.else, %if.then15
  %14 = load i32, i32* %ret, align 4, !dbg !376
  store i32 %14, i32* %retval, !dbg !377
  br label %return, !dbg !377

if.end19:                                         ; preds = %if.end9
  %15 = load i64, i64* %a.addr, align 8, !dbg !378
  %cmp20 = icmp eq i64 %15, 0, !dbg !380
  br i1 %cmp20, label %if.then21, label %if.end23, !dbg !381

if.then21:                                        ; preds = %if.end19
  %16 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !382
  %call22 = call i32 @BN_set_word(%struct.bignum_st* %16, i64 0), !dbg !382
  store i32 1, i32* %ret, align 4, !dbg !384
  %17 = load i32, i32* %ret, align 4, !dbg !385
  store i32 %17, i32* %retval, !dbg !386
  br label %return, !dbg !386

if.end23:                                         ; preds = %if.end19
  %18 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !387
  call void @BN_CTX_start(%struct.bignum_ctx* %18), !dbg !388
  %19 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !389
  %call24 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %19), !dbg !390
  store %struct.bignum_st* %call24, %struct.bignum_st** %d, align 8, !dbg !391
  %20 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !392
  %call25 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %20), !dbg !393
  store %struct.bignum_st* %call25, %struct.bignum_st** %r, align 8, !dbg !394
  %21 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !395
  %call26 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %21), !dbg !396
  store %struct.bignum_st* %call26, %struct.bignum_st** %t, align 8, !dbg !397
  %22 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !398
  %cmp27 = icmp eq %struct.bignum_st* %22, null, !dbg !400
  br i1 %cmp27, label %if.then32, label %lor.lhs.false28, !dbg !401

lor.lhs.false28:                                  ; preds = %if.end23
  %23 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !402
  %cmp29 = icmp eq %struct.bignum_st* %23, null, !dbg !404
  br i1 %cmp29, label %if.then32, label %lor.lhs.false30, !dbg !405

lor.lhs.false30:                                  ; preds = %lor.lhs.false28
  %24 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !406
  %cmp31 = icmp eq %struct.bignum_st* %24, null, !dbg !408
  br i1 %cmp31, label %if.then32, label %if.end33, !dbg !409

if.then32:                                        ; preds = %lor.lhs.false30, %lor.lhs.false28, %if.end23
  br label %err, !dbg !410

if.end33:                                         ; preds = %lor.lhs.false30
  %25 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !411
  %cmp34 = icmp ne %struct.bn_mont_ctx_st* %25, null, !dbg !413
  br i1 %cmp34, label %if.then35, label %if.else36, !dbg !414

if.then35:                                        ; preds = %if.end33
  %26 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !415
  store %struct.bn_mont_ctx_st* %26, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !416
  br label %if.end45, !dbg !417

if.else36:                                        ; preds = %if.end33
  %call37 = call %struct.bn_mont_ctx_st* @BN_MONT_CTX_new(), !dbg !418
  store %struct.bn_mont_ctx_st* %call37, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !421
  %cmp38 = icmp eq %struct.bn_mont_ctx_st* %call37, null, !dbg !422
  br i1 %cmp38, label %if.then39, label %if.end40, !dbg !423

if.then39:                                        ; preds = %if.else36
  br label %err, !dbg !424

if.end40:                                         ; preds = %if.else36
  %27 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !425
  %28 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !427
  %29 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !428
  %call41 = call i32 @BN_MONT_CTX_set(%struct.bn_mont_ctx_st* %27, %struct.bignum_st* %28, %struct.bignum_ctx* %29), !dbg !429
  %tobool42 = icmp ne i32 %call41, 0, !dbg !429
  br i1 %tobool42, label %if.end44, label %if.then43, !dbg !430

if.then43:                                        ; preds = %if.end40
  br label %err, !dbg !431

if.end44:                                         ; preds = %if.end40
  br label %if.end45

if.end45:                                         ; preds = %if.end44, %if.then35
  store i32 1, i32* %r_is_one, align 4, !dbg !432
  %30 = load i64, i64* %a.addr, align 8, !dbg !433
  store i64 %30, i64* %w, align 8, !dbg !434
  %31 = load i32, i32* %bits, align 4, !dbg !435
  %sub = sub nsw i32 %31, 2, !dbg !437
  store i32 %sub, i32* %b, align 4, !dbg !438
  br label %for.cond, !dbg !439

for.cond:                                         ; preds = %for.inc, %if.end45
  %32 = load i32, i32* %b, align 4, !dbg !440
  %cmp46 = icmp sge i32 %32, 0, !dbg !444
  br i1 %cmp46, label %for.body, label %for.end, !dbg !445

for.body:                                         ; preds = %for.cond
  %33 = load i64, i64* %w, align 8, !dbg !446
  %34 = load i64, i64* %w, align 8, !dbg !448
  %mul = mul i64 %33, %34, !dbg !449
  store i64 %mul, i64* %next_w, align 8, !dbg !450
  %35 = load i64, i64* %next_w, align 8, !dbg !451
  %36 = load i64, i64* %w, align 8, !dbg !453
  %div = udiv i64 %35, %36, !dbg !454
  %37 = load i64, i64* %w, align 8, !dbg !455
  %cmp47 = icmp ne i64 %div, %37, !dbg !456
  br i1 %cmp47, label %if.then48, label %if.end67, !dbg !457

if.then48:                                        ; preds = %for.body
  %38 = load i32, i32* %r_is_one, align 4, !dbg !458
  %tobool49 = icmp ne i32 %38, 0, !dbg !458
  br i1 %tobool49, label %if.then50, label %if.else57, !dbg !461

if.then50:                                        ; preds = %if.then48
  %39 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !462
  %40 = load i64, i64* %w, align 8, !dbg !462
  %call51 = call i32 @BN_set_word(%struct.bignum_st* %39, i64 %40), !dbg !462
  %tobool52 = icmp ne i32 %call51, 0, !dbg !462
  br i1 %tobool52, label %land.lhs.true, label %if.then55, !dbg !462

land.lhs.true:                                    ; preds = %if.then50
  %41 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !465
  %42 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !465
  %43 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !465
  %44 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !465
  %call53 = call i32 @BN_to_montgomery(%struct.bignum_st* %41, %struct.bignum_st* %42, %struct.bn_mont_ctx_st* %43, %struct.bignum_ctx* %44), !dbg !465
  %tobool54 = icmp ne i32 %call53, 0, !dbg !465
  br i1 %tobool54, label %if.end56, label %if.then55, !dbg !467

if.then55:                                        ; preds = %land.lhs.true, %if.then50
  br label %err, !dbg !468

if.end56:                                         ; preds = %land.lhs.true
  store i32 0, i32* %r_is_one, align 4, !dbg !469
  br label %if.end66, !dbg !470

if.else57:                                        ; preds = %if.then48
  %45 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !471
  %46 = load i64, i64* %w, align 8, !dbg !471
  %call58 = call i32 @BN_mul_word(%struct.bignum_st* %45, i64 %46), !dbg !471
  %tobool59 = icmp ne i32 %call58, 0, !dbg !471
  br i1 %tobool59, label %land.lhs.true60, label %if.then64, !dbg !471

land.lhs.true60:                                  ; preds = %if.else57
  %47 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !474
  %48 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !474
  %49 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !474
  %50 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !474
  %call61 = call i32 @BN_div(%struct.bignum_st* null, %struct.bignum_st* %47, %struct.bignum_st* %48, %struct.bignum_st* %49, %struct.bignum_ctx* %50), !dbg !474
  %tobool62 = icmp ne i32 %call61, 0, !dbg !474
  br i1 %tobool62, label %land.lhs.true63, label %if.then64, !dbg !474

land.lhs.true63:                                  ; preds = %land.lhs.true60
  %51 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !476
  store %struct.bignum_st* %51, %struct.bignum_st** %swap_tmp, align 8, !dbg !476
  %52 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !476
  store %struct.bignum_st* %52, %struct.bignum_st** %r, align 8, !dbg !476
  %53 = load %struct.bignum_st*, %struct.bignum_st** %swap_tmp, align 8, !dbg !476
  store %struct.bignum_st* %53, %struct.bignum_st** %t, align 8, !dbg !476
  br i1 true, label %if.end65, label %if.then64, !dbg !478

if.then64:                                        ; preds = %land.lhs.true63, %land.lhs.true60, %if.else57
  br label %err, !dbg !479

if.end65:                                         ; preds = %land.lhs.true63
  br label %if.end66

if.end66:                                         ; preds = %if.end65, %if.end56
  store i64 1, i64* %next_w, align 8, !dbg !480
  br label %if.end67, !dbg !481

if.end67:                                         ; preds = %if.end66, %for.body
  %54 = load i64, i64* %next_w, align 8, !dbg !482
  store i64 %54, i64* %w, align 8, !dbg !483
  %55 = load i32, i32* %r_is_one, align 4, !dbg !484
  %tobool68 = icmp ne i32 %55, 0, !dbg !484
  br i1 %tobool68, label %if.end74, label %if.then69, !dbg !486

if.then69:                                        ; preds = %if.end67
  %56 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !487
  %57 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !490
  %58 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !491
  %59 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !492
  %60 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !493
  %call70 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %56, %struct.bignum_st* %57, %struct.bignum_st* %58, %struct.bn_mont_ctx_st* %59, %struct.bignum_ctx* %60), !dbg !494
  %tobool71 = icmp ne i32 %call70, 0, !dbg !494
  br i1 %tobool71, label %if.end73, label %if.then72, !dbg !495

if.then72:                                        ; preds = %if.then69
  br label %err, !dbg !496

if.end73:                                         ; preds = %if.then69
  br label %if.end74, !dbg !497

if.end74:                                         ; preds = %if.end73, %if.end67
  %61 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !498
  %62 = load i32, i32* %b, align 4, !dbg !500
  %call75 = call i32 @BN_is_bit_set(%struct.bignum_st* %61, i32 %62), !dbg !501
  %tobool76 = icmp ne i32 %call75, 0, !dbg !501
  br i1 %tobool76, label %if.then77, label %if.end102, !dbg !502

if.then77:                                        ; preds = %if.end74
  %63 = load i64, i64* %w, align 8, !dbg !503
  %64 = load i64, i64* %a.addr, align 8, !dbg !505
  %mul78 = mul i64 %63, %64, !dbg !506
  store i64 %mul78, i64* %next_w, align 8, !dbg !507
  %65 = load i64, i64* %next_w, align 8, !dbg !508
  %66 = load i64, i64* %a.addr, align 8, !dbg !510
  %div79 = udiv i64 %65, %66, !dbg !511
  %67 = load i64, i64* %w, align 8, !dbg !512
  %cmp80 = icmp ne i64 %div79, %67, !dbg !513
  br i1 %cmp80, label %if.then81, label %if.end101, !dbg !514

if.then81:                                        ; preds = %if.then77
  %68 = load i32, i32* %r_is_one, align 4, !dbg !515
  %tobool82 = icmp ne i32 %68, 0, !dbg !515
  br i1 %tobool82, label %if.then83, label %if.else91, !dbg !518

if.then83:                                        ; preds = %if.then81
  %69 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !519
  %70 = load i64, i64* %w, align 8, !dbg !519
  %call84 = call i32 @BN_set_word(%struct.bignum_st* %69, i64 %70), !dbg !519
  %tobool85 = icmp ne i32 %call84, 0, !dbg !519
  br i1 %tobool85, label %land.lhs.true86, label %if.then89, !dbg !519

land.lhs.true86:                                  ; preds = %if.then83
  %71 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !522
  %72 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !522
  %73 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !522
  %74 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !522
  %call87 = call i32 @BN_to_montgomery(%struct.bignum_st* %71, %struct.bignum_st* %72, %struct.bn_mont_ctx_st* %73, %struct.bignum_ctx* %74), !dbg !522
  %tobool88 = icmp ne i32 %call87, 0, !dbg !522
  br i1 %tobool88, label %if.end90, label %if.then89, !dbg !524

if.then89:                                        ; preds = %land.lhs.true86, %if.then83
  br label %err, !dbg !525

if.end90:                                         ; preds = %land.lhs.true86
  store i32 0, i32* %r_is_one, align 4, !dbg !526
  br label %if.end100, !dbg !527

if.else91:                                        ; preds = %if.then81
  %75 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !528
  %76 = load i64, i64* %w, align 8, !dbg !528
  %call92 = call i32 @BN_mul_word(%struct.bignum_st* %75, i64 %76), !dbg !528
  %tobool93 = icmp ne i32 %call92, 0, !dbg !528
  br i1 %tobool93, label %land.lhs.true94, label %if.then98, !dbg !528

land.lhs.true94:                                  ; preds = %if.else91
  %77 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !531
  %78 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !531
  %79 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !531
  %80 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !531
  %call95 = call i32 @BN_div(%struct.bignum_st* null, %struct.bignum_st* %77, %struct.bignum_st* %78, %struct.bignum_st* %79, %struct.bignum_ctx* %80), !dbg !531
  %tobool96 = icmp ne i32 %call95, 0, !dbg !531
  br i1 %tobool96, label %land.lhs.true97, label %if.then98, !dbg !531

land.lhs.true97:                                  ; preds = %land.lhs.true94
  %81 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !533
  store %struct.bignum_st* %81, %struct.bignum_st** %swap_tmp, align 8, !dbg !533
  %82 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !533
  store %struct.bignum_st* %82, %struct.bignum_st** %r, align 8, !dbg !533
  %83 = load %struct.bignum_st*, %struct.bignum_st** %swap_tmp, align 8, !dbg !533
  store %struct.bignum_st* %83, %struct.bignum_st** %t, align 8, !dbg !533
  br i1 true, label %if.end99, label %if.then98, !dbg !535

if.then98:                                        ; preds = %land.lhs.true97, %land.lhs.true94, %if.else91
  br label %err, !dbg !536

if.end99:                                         ; preds = %land.lhs.true97
  br label %if.end100

if.end100:                                        ; preds = %if.end99, %if.end90
  %84 = load i64, i64* %a.addr, align 8, !dbg !537
  store i64 %84, i64* %next_w, align 8, !dbg !538
  br label %if.end101, !dbg !539

if.end101:                                        ; preds = %if.end100, %if.then77
  %85 = load i64, i64* %next_w, align 8, !dbg !540
  store i64 %85, i64* %w, align 8, !dbg !541
  br label %if.end102, !dbg !542

if.end102:                                        ; preds = %if.end101, %if.end74
  br label %for.inc, !dbg !543

for.inc:                                          ; preds = %if.end102
  %86 = load i32, i32* %b, align 4, !dbg !544
  %dec = add nsw i32 %86, -1, !dbg !544
  store i32 %dec, i32* %b, align 4, !dbg !544
  br label %for.cond, !dbg !545

for.end:                                          ; preds = %for.cond
  %87 = load i64, i64* %w, align 8, !dbg !546
  %cmp103 = icmp ne i64 %87, 1, !dbg !548
  br i1 %cmp103, label %if.then104, label %if.end124, !dbg !549

if.then104:                                       ; preds = %for.end
  %88 = load i32, i32* %r_is_one, align 4, !dbg !550
  %tobool105 = icmp ne i32 %88, 0, !dbg !550
  br i1 %tobool105, label %if.then106, label %if.else114, !dbg !553

if.then106:                                       ; preds = %if.then104
  %89 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !554
  %90 = load i64, i64* %w, align 8, !dbg !554
  %call107 = call i32 @BN_set_word(%struct.bignum_st* %89, i64 %90), !dbg !554
  %tobool108 = icmp ne i32 %call107, 0, !dbg !554
  br i1 %tobool108, label %land.lhs.true109, label %if.then112, !dbg !554

land.lhs.true109:                                 ; preds = %if.then106
  %91 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !557
  %92 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !557
  %93 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !557
  %94 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !557
  %call110 = call i32 @BN_to_montgomery(%struct.bignum_st* %91, %struct.bignum_st* %92, %struct.bn_mont_ctx_st* %93, %struct.bignum_ctx* %94), !dbg !557
  %tobool111 = icmp ne i32 %call110, 0, !dbg !557
  br i1 %tobool111, label %if.end113, label %if.then112, !dbg !559

if.then112:                                       ; preds = %land.lhs.true109, %if.then106
  br label %err, !dbg !560

if.end113:                                        ; preds = %land.lhs.true109
  store i32 0, i32* %r_is_one, align 4, !dbg !561
  br label %if.end123, !dbg !562

if.else114:                                       ; preds = %if.then104
  %95 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !563
  %96 = load i64, i64* %w, align 8, !dbg !563
  %call115 = call i32 @BN_mul_word(%struct.bignum_st* %95, i64 %96), !dbg !563
  %tobool116 = icmp ne i32 %call115, 0, !dbg !563
  br i1 %tobool116, label %land.lhs.true117, label %if.then121, !dbg !563

land.lhs.true117:                                 ; preds = %if.else114
  %97 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !566
  %98 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !566
  %99 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !566
  %100 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !566
  %call118 = call i32 @BN_div(%struct.bignum_st* null, %struct.bignum_st* %97, %struct.bignum_st* %98, %struct.bignum_st* %99, %struct.bignum_ctx* %100), !dbg !566
  %tobool119 = icmp ne i32 %call118, 0, !dbg !566
  br i1 %tobool119, label %land.lhs.true120, label %if.then121, !dbg !566

land.lhs.true120:                                 ; preds = %land.lhs.true117
  %101 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !568
  store %struct.bignum_st* %101, %struct.bignum_st** %swap_tmp, align 8, !dbg !568
  %102 = load %struct.bignum_st*, %struct.bignum_st** %t, align 8, !dbg !568
  store %struct.bignum_st* %102, %struct.bignum_st** %r, align 8, !dbg !568
  %103 = load %struct.bignum_st*, %struct.bignum_st** %swap_tmp, align 8, !dbg !568
  store %struct.bignum_st* %103, %struct.bignum_st** %t, align 8, !dbg !568
  br i1 true, label %if.end122, label %if.then121, !dbg !570

if.then121:                                       ; preds = %land.lhs.true120, %land.lhs.true117, %if.else114
  br label %err, !dbg !571

if.end122:                                        ; preds = %land.lhs.true120
  br label %if.end123

if.end123:                                        ; preds = %if.end122, %if.end113
  br label %if.end124, !dbg !572

if.end124:                                        ; preds = %if.end123, %for.end
  %104 = load i32, i32* %r_is_one, align 4, !dbg !573
  %tobool125 = icmp ne i32 %104, 0, !dbg !573
  br i1 %tobool125, label %if.then126, label %if.else131, !dbg !575

if.then126:                                       ; preds = %if.end124
  %105 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !576
  %call127 = call i32 @BN_set_word(%struct.bignum_st* %105, i64 1), !dbg !576
  %tobool128 = icmp ne i32 %call127, 0, !dbg !576
  br i1 %tobool128, label %if.end130, label %if.then129, !dbg !579

if.then129:                                       ; preds = %if.then126
  br label %err, !dbg !580

if.end130:                                        ; preds = %if.then126
  br label %if.end136, !dbg !581

if.else131:                                       ; preds = %if.end124
  %106 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !582
  %107 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !585
  %108 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !586
  %109 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !587
  %call132 = call i32 @BN_from_montgomery(%struct.bignum_st* %106, %struct.bignum_st* %107, %struct.bn_mont_ctx_st* %108, %struct.bignum_ctx* %109), !dbg !588
  %tobool133 = icmp ne i32 %call132, 0, !dbg !588
  br i1 %tobool133, label %if.end135, label %if.then134, !dbg !589

if.then134:                                       ; preds = %if.else131
  br label %err, !dbg !590

if.end135:                                        ; preds = %if.else131
  br label %if.end136

if.end136:                                        ; preds = %if.end135, %if.end130
  store i32 1, i32* %ret, align 4, !dbg !591
  br label %err, !dbg !592

err:                                              ; preds = %if.end136, %if.then134, %if.then129, %if.then121, %if.then112, %if.then98, %if.then89, %if.then72, %if.then64, %if.then55, %if.then43, %if.then39, %if.then32
  %110 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !593
  %cmp137 = icmp eq %struct.bn_mont_ctx_st* %110, null, !dbg !595
  br i1 %cmp137, label %if.then138, label %if.end139, !dbg !596

if.then138:                                       ; preds = %err
  %111 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !597
  call void @BN_MONT_CTX_free(%struct.bn_mont_ctx_st* %111), !dbg !598
  br label %if.end139, !dbg !598

if.end139:                                        ; preds = %if.then138, %err
  %112 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !599
  call void @BN_CTX_end(%struct.bignum_ctx* %112), !dbg !600
  %113 = load i32, i32* %ret, align 4, !dbg !601
  store i32 %113, i32* %retval, !dbg !602
  br label %return, !dbg !602

return:                                           ; preds = %if.end139, %if.then21, %if.end18, %if.then4, %if.then
  %114 = load i32, i32* %retval, !dbg !603
  ret i32 %114, !dbg !603
}

; Function Attrs: nounwind uwtable
define i32 @BN_mod_exp_mont(%struct.bignum_st* %rr, %struct.bignum_st* %a, %struct.bignum_st* %p, %struct.bignum_st* %m, %struct.bignum_ctx* %ctx, %struct.bn_mont_ctx_st* %in_mont) #0 {
entry:
  %retval = alloca i32, align 4
  %rr.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca %struct.bignum_st*, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %m.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %in_mont.addr = alloca %struct.bn_mont_ctx_st*, align 8
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %bits = alloca i32, align 4
  %ret = alloca i32, align 4
  %wstart = alloca i32, align 4
  %wend = alloca i32, align 4
  %window = alloca i32, align 4
  %wvalue = alloca i32, align 4
  %start = alloca i32, align 4
  %d = alloca %struct.bignum_st*, align 8
  %r = alloca %struct.bignum_st*, align 8
  %aa = alloca %struct.bignum_st*, align 8
  %val = alloca [32 x %struct.bignum_st*], align 16
  %mont = alloca %struct.bn_mont_ctx_st*, align 8
  store %struct.bignum_st* %rr, %struct.bignum_st** %rr.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %rr.addr, metadata !604, metadata !81), !dbg !605
  store %struct.bignum_st* %a, %struct.bignum_st** %a.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %a.addr, metadata !606, metadata !81), !dbg !607
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !608, metadata !81), !dbg !609
  store %struct.bignum_st* %m, %struct.bignum_st** %m.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %m.addr, metadata !610, metadata !81), !dbg !611
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !612, metadata !81), !dbg !613
  store %struct.bn_mont_ctx_st* %in_mont, %struct.bn_mont_ctx_st** %in_mont.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bn_mont_ctx_st** %in_mont.addr, metadata !614, metadata !81), !dbg !615
  call void @llvm.dbg.declare(metadata i32* %i, metadata !616, metadata !81), !dbg !617
  call void @llvm.dbg.declare(metadata i32* %j, metadata !618, metadata !81), !dbg !619
  call void @llvm.dbg.declare(metadata i32* %bits, metadata !620, metadata !81), !dbg !621
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !622, metadata !81), !dbg !623
  store i32 0, i32* %ret, align 4, !dbg !623
  call void @llvm.dbg.declare(metadata i32* %wstart, metadata !624, metadata !81), !dbg !625
  call void @llvm.dbg.declare(metadata i32* %wend, metadata !626, metadata !81), !dbg !627
  call void @llvm.dbg.declare(metadata i32* %window, metadata !628, metadata !81), !dbg !629
  call void @llvm.dbg.declare(metadata i32* %wvalue, metadata !630, metadata !81), !dbg !631
  call void @llvm.dbg.declare(metadata i32* %start, metadata !632, metadata !81), !dbg !633
  store i32 1, i32* %start, align 4, !dbg !633
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %d, metadata !634, metadata !81), !dbg !635
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %r, metadata !636, metadata !81), !dbg !637
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %aa, metadata !638, metadata !81), !dbg !639
  call void @llvm.dbg.declare(metadata [32 x %struct.bignum_st*]* %val, metadata !640, metadata !81), !dbg !644
  call void @llvm.dbg.declare(metadata %struct.bn_mont_ctx_st** %mont, metadata !645, metadata !81), !dbg !646
  store %struct.bn_mont_ctx_st* null, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !646
  %0 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !647
  %call = call i32 @BN_get_flags(%struct.bignum_st* %0, i32 4), !dbg !649
  %cmp = icmp ne i32 %call, 0, !dbg !650
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !651

lor.lhs.false:                                    ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !652
  %call1 = call i32 @BN_get_flags(%struct.bignum_st* %1, i32 4), !dbg !654
  %cmp2 = icmp ne i32 %call1, 0, !dbg !655
  br i1 %cmp2, label %if.then, label %lor.lhs.false3, !dbg !656

lor.lhs.false3:                                   ; preds = %lor.lhs.false
  %2 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !657
  %call4 = call i32 @BN_get_flags(%struct.bignum_st* %2, i32 4), !dbg !658
  %cmp5 = icmp ne i32 %call4, 0, !dbg !659
  br i1 %cmp5, label %if.then, label %if.end, !dbg !660

if.then:                                          ; preds = %lor.lhs.false3, %lor.lhs.false, %entry
  %3 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !661
  %4 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !663
  %5 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !664
  %6 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !665
  %7 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !666
  %8 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !667
  %call6 = call i32 @BN_mod_exp_mont_consttime(%struct.bignum_st* %3, %struct.bignum_st* %4, %struct.bignum_st* %5, %struct.bignum_st* %6, %struct.bignum_ctx* %7, %struct.bn_mont_ctx_st* %8), !dbg !668
  store i32 %call6, i32* %retval, !dbg !669
  br label %return, !dbg !669

if.end:                                           ; preds = %lor.lhs.false3
  %9 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !670
  %call7 = call i32 @BN_is_odd(%struct.bignum_st* %9), !dbg !672
  %tobool = icmp ne i32 %call7, 0, !dbg !672
  br i1 %tobool, label %if.end9, label %if.then8, !dbg !673

if.then8:                                         ; preds = %if.end
  call void @ERR_put_error(i32 3, i32 109, i32 102, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 328), !dbg !674
  store i32 0, i32* %retval, !dbg !676
  br label %return, !dbg !676

if.end9:                                          ; preds = %if.end
  %10 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !677
  %call10 = call i32 @BN_num_bits(%struct.bignum_st* %10), !dbg !678
  store i32 %call10, i32* %bits, align 4, !dbg !679
  %11 = load i32, i32* %bits, align 4, !dbg !680
  %cmp11 = icmp eq i32 %11, 0, !dbg !682
  br i1 %cmp11, label %if.then12, label %if.end19, !dbg !683

if.then12:                                        ; preds = %if.end9
  %12 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !684
  %call13 = call i32 @BN_is_one(%struct.bignum_st* %12), !dbg !687
  %tobool14 = icmp ne i32 %call13, 0, !dbg !687
  br i1 %tobool14, label %if.then15, label %if.else, !dbg !688

if.then15:                                        ; preds = %if.then12
  store i32 1, i32* %ret, align 4, !dbg !689
  %13 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !691
  %call16 = call i32 @BN_set_word(%struct.bignum_st* %13, i64 0), !dbg !691
  br label %if.end18, !dbg !692

if.else:                                          ; preds = %if.then12
  %14 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !693
  %call17 = call i32 @BN_set_word(%struct.bignum_st* %14, i64 1), !dbg !693
  store i32 %call17, i32* %ret, align 4, !dbg !695
  br label %if.end18

if.end18:                                         ; preds = %if.else, %if.then15
  %15 = load i32, i32* %ret, align 4, !dbg !696
  store i32 %15, i32* %retval, !dbg !697
  br label %return, !dbg !697

if.end19:                                         ; preds = %if.end9
  %16 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !698
  call void @BN_CTX_start(%struct.bignum_ctx* %16), !dbg !699
  %17 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !700
  %call20 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %17), !dbg !701
  store %struct.bignum_st* %call20, %struct.bignum_st** %d, align 8, !dbg !702
  %18 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !703
  %call21 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %18), !dbg !704
  store %struct.bignum_st* %call21, %struct.bignum_st** %r, align 8, !dbg !705
  %19 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !706
  %call22 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %19), !dbg !707
  %arrayidx = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !708
  store %struct.bignum_st* %call22, %struct.bignum_st** %arrayidx, align 8, !dbg !709
  %20 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !710
  %tobool23 = icmp ne %struct.bignum_st* %20, null, !dbg !710
  br i1 %tobool23, label %lor.lhs.false24, label %if.then29, !dbg !712

lor.lhs.false24:                                  ; preds = %if.end19
  %21 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !713
  %tobool25 = icmp ne %struct.bignum_st* %21, null, !dbg !713
  br i1 %tobool25, label %lor.lhs.false26, label %if.then29, !dbg !715

lor.lhs.false26:                                  ; preds = %lor.lhs.false24
  %arrayidx27 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !716
  %22 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx27, align 8, !dbg !716
  %tobool28 = icmp ne %struct.bignum_st* %22, null, !dbg !716
  br i1 %tobool28, label %if.end30, label %if.then29, !dbg !718

if.then29:                                        ; preds = %lor.lhs.false26, %lor.lhs.false24, %if.end19
  br label %err, !dbg !719

if.end30:                                         ; preds = %lor.lhs.false26
  %23 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !720
  %cmp31 = icmp ne %struct.bn_mont_ctx_st* %23, null, !dbg !722
  br i1 %cmp31, label %if.then32, label %if.else33, !dbg !723

if.then32:                                        ; preds = %if.end30
  %24 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !724
  store %struct.bn_mont_ctx_st* %24, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !725
  br label %if.end42, !dbg !726

if.else33:                                        ; preds = %if.end30
  %call34 = call %struct.bn_mont_ctx_st* @BN_MONT_CTX_new(), !dbg !727
  store %struct.bn_mont_ctx_st* %call34, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !730
  %cmp35 = icmp eq %struct.bn_mont_ctx_st* %call34, null, !dbg !731
  br i1 %cmp35, label %if.then36, label %if.end37, !dbg !732

if.then36:                                        ; preds = %if.else33
  br label %err, !dbg !733

if.end37:                                         ; preds = %if.else33
  %25 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !734
  %26 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !736
  %27 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !737
  %call38 = call i32 @BN_MONT_CTX_set(%struct.bn_mont_ctx_st* %25, %struct.bignum_st* %26, %struct.bignum_ctx* %27), !dbg !738
  %tobool39 = icmp ne i32 %call38, 0, !dbg !738
  br i1 %tobool39, label %if.end41, label %if.then40, !dbg !739

if.then40:                                        ; preds = %if.end37
  br label %err, !dbg !740

if.end41:                                         ; preds = %if.end37
  br label %if.end42

if.end42:                                         ; preds = %if.end41, %if.then32
  %28 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !741
  %neg = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %28, i32 0, i32 3, !dbg !743
  %29 = load i32, i32* %neg, align 4, !dbg !743
  %tobool43 = icmp ne i32 %29, 0, !dbg !741
  br i1 %tobool43, label %if.then47, label %lor.lhs.false44, !dbg !744

lor.lhs.false44:                                  ; preds = %if.end42
  %30 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !745
  %31 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !747
  %call45 = call i32 @BN_ucmp(%struct.bignum_st* %30, %struct.bignum_st* %31), !dbg !748
  %cmp46 = icmp sge i32 %call45, 0, !dbg !749
  br i1 %cmp46, label %if.then47, label %if.else54, !dbg !750

if.then47:                                        ; preds = %lor.lhs.false44, %if.end42
  %arrayidx48 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !751
  %32 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx48, align 8, !dbg !751
  %33 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !754
  %34 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !755
  %35 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !756
  %call49 = call i32 @BN_nnmod(%struct.bignum_st* %32, %struct.bignum_st* %33, %struct.bignum_st* %34, %struct.bignum_ctx* %35), !dbg !757
  %tobool50 = icmp ne i32 %call49, 0, !dbg !757
  br i1 %tobool50, label %if.end52, label %if.then51, !dbg !758

if.then51:                                        ; preds = %if.then47
  br label %err, !dbg !759

if.end52:                                         ; preds = %if.then47
  %arrayidx53 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !760
  %36 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx53, align 8, !dbg !760
  store %struct.bignum_st* %36, %struct.bignum_st** %aa, align 8, !dbg !761
  br label %if.end55, !dbg !762

if.else54:                                        ; preds = %lor.lhs.false44
  %37 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !763
  store %struct.bignum_st* %37, %struct.bignum_st** %aa, align 8, !dbg !764
  br label %if.end55

if.end55:                                         ; preds = %if.else54, %if.end52
  %38 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !765
  %call56 = call i32 @BN_is_zero(%struct.bignum_st* %38), !dbg !767
  %tobool57 = icmp ne i32 %call56, 0, !dbg !767
  br i1 %tobool57, label %if.then58, label %if.end60, !dbg !768

if.then58:                                        ; preds = %if.end55
  %39 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !769
  %call59 = call i32 @BN_set_word(%struct.bignum_st* %39, i64 0), !dbg !769
  store i32 1, i32* %ret, align 4, !dbg !771
  br label %err, !dbg !772

if.end60:                                         ; preds = %if.end55
  %arrayidx61 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !773
  %40 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx61, align 8, !dbg !773
  %41 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !775
  %42 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !776
  %43 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !777
  %call62 = call i32 @BN_to_montgomery(%struct.bignum_st* %40, %struct.bignum_st* %41, %struct.bn_mont_ctx_st* %42, %struct.bignum_ctx* %43), !dbg !778
  %tobool63 = icmp ne i32 %call62, 0, !dbg !778
  br i1 %tobool63, label %if.end65, label %if.then64, !dbg !779

if.then64:                                        ; preds = %if.end60
  br label %err, !dbg !780

if.end65:                                         ; preds = %if.end60
  %44 = load i32, i32* %bits, align 4, !dbg !781
  %cmp66 = icmp sgt i32 %44, 671, !dbg !781
  br i1 %cmp66, label %cond.true, label %cond.false, !dbg !781

cond.true:                                        ; preds = %if.end65
  br label %cond.end77, !dbg !782

cond.false:                                       ; preds = %if.end65
  %45 = load i32, i32* %bits, align 4, !dbg !784
  %cmp67 = icmp sgt i32 %45, 239, !dbg !784
  br i1 %cmp67, label %cond.true68, label %cond.false69, !dbg !784

cond.true68:                                      ; preds = %cond.false
  br label %cond.end75, !dbg !786

cond.false69:                                     ; preds = %cond.false
  %46 = load i32, i32* %bits, align 4, !dbg !788
  %cmp70 = icmp sgt i32 %46, 79, !dbg !788
  br i1 %cmp70, label %cond.true71, label %cond.false72, !dbg !788

cond.true71:                                      ; preds = %cond.false69
  br label %cond.end, !dbg !790

cond.false72:                                     ; preds = %cond.false69
  %47 = load i32, i32* %bits, align 4, !dbg !792
  %cmp73 = icmp sgt i32 %47, 23, !dbg !792
  %cond = select i1 %cmp73, i32 3, i32 1, !dbg !792
  br label %cond.end, !dbg !792

cond.end:                                         ; preds = %cond.false72, %cond.true71
  %cond74 = phi i32 [ 4, %cond.true71 ], [ %cond, %cond.false72 ], !dbg !781
  br label %cond.end75, !dbg !794

cond.end75:                                       ; preds = %cond.end, %cond.true68
  %cond76 = phi i32 [ 5, %cond.true68 ], [ %cond74, %cond.end ], !dbg !781
  br label %cond.end77, !dbg !797

cond.end77:                                       ; preds = %cond.end75, %cond.true
  %cond78 = phi i32 [ 6, %cond.true ], [ %cond76, %cond.end75 ], !dbg !781
  store i32 %cond78, i32* %window, align 4, !dbg !800
  %48 = load i32, i32* %window, align 4, !dbg !803
  %cmp79 = icmp sgt i32 %48, 1, !dbg !805
  br i1 %cmp79, label %if.then80, label %if.end101, !dbg !806

if.then80:                                        ; preds = %cond.end77
  %49 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !807
  %arrayidx81 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !810
  %50 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx81, align 8, !dbg !810
  %arrayidx82 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !811
  %51 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx82, align 8, !dbg !811
  %52 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !812
  %53 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !813
  %call83 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %49, %struct.bignum_st* %50, %struct.bignum_st* %51, %struct.bn_mont_ctx_st* %52, %struct.bignum_ctx* %53), !dbg !814
  %tobool84 = icmp ne i32 %call83, 0, !dbg !814
  br i1 %tobool84, label %if.end86, label %if.then85, !dbg !815

if.then85:                                        ; preds = %if.then80
  br label %err, !dbg !816

if.end86:                                         ; preds = %if.then80
  %54 = load i32, i32* %window, align 4, !dbg !817
  %sub = sub nsw i32 %54, 1, !dbg !818
  %shl = shl i32 1, %sub, !dbg !819
  store i32 %shl, i32* %j, align 4, !dbg !820
  store i32 1, i32* %i, align 4, !dbg !821
  br label %for.cond, !dbg !823

for.cond:                                         ; preds = %for.inc, %if.end86
  %55 = load i32, i32* %i, align 4, !dbg !824
  %56 = load i32, i32* %j, align 4, !dbg !828
  %cmp87 = icmp slt i32 %55, %56, !dbg !829
  br i1 %cmp87, label %for.body, label %for.end, !dbg !830

for.body:                                         ; preds = %for.cond
  %57 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !831
  %call88 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %57), !dbg !834
  %58 = load i32, i32* %i, align 4, !dbg !835
  %idxprom = sext i32 %58 to i64, !dbg !836
  %arrayidx89 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom, !dbg !836
  store %struct.bignum_st* %call88, %struct.bignum_st** %arrayidx89, align 8, !dbg !837
  %cmp90 = icmp eq %struct.bignum_st* %call88, null, !dbg !838
  br i1 %cmp90, label %if.then99, label %lor.lhs.false91, !dbg !839

lor.lhs.false91:                                  ; preds = %for.body
  %59 = load i32, i32* %i, align 4, !dbg !840
  %idxprom92 = sext i32 %59 to i64, !dbg !841
  %arrayidx93 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom92, !dbg !841
  %60 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx93, align 8, !dbg !841
  %61 = load i32, i32* %i, align 4, !dbg !842
  %sub94 = sub nsw i32 %61, 1, !dbg !843
  %idxprom95 = sext i32 %sub94 to i64, !dbg !844
  %arrayidx96 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom95, !dbg !844
  %62 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx96, align 8, !dbg !844
  %63 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !845
  %64 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !846
  %65 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !847
  %call97 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %60, %struct.bignum_st* %62, %struct.bignum_st* %63, %struct.bn_mont_ctx_st* %64, %struct.bignum_ctx* %65), !dbg !848
  %tobool98 = icmp ne i32 %call97, 0, !dbg !848
  br i1 %tobool98, label %if.end100, label %if.then99, !dbg !849

if.then99:                                        ; preds = %lor.lhs.false91, %for.body
  br label %err, !dbg !850

if.end100:                                        ; preds = %lor.lhs.false91
  br label %for.inc, !dbg !851

for.inc:                                          ; preds = %if.end100
  %66 = load i32, i32* %i, align 4, !dbg !852
  %inc = add nsw i32 %66, 1, !dbg !852
  store i32 %inc, i32* %i, align 4, !dbg !852
  br label %for.cond, !dbg !853

for.end:                                          ; preds = %for.cond
  br label %if.end101, !dbg !854

if.end101:                                        ; preds = %for.end, %cond.end77
  store i32 1, i32* %start, align 4, !dbg !855
  store i32 0, i32* %wvalue, align 4, !dbg !856
  %67 = load i32, i32* %bits, align 4, !dbg !857
  %sub102 = sub nsw i32 %67, 1, !dbg !858
  store i32 %sub102, i32* %wstart, align 4, !dbg !859
  store i32 0, i32* %wend, align 4, !dbg !860
  %68 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !861
  %top = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %68, i32 0, i32 1, !dbg !862
  %69 = load i32, i32* %top, align 4, !dbg !862
  store i32 %69, i32* %j, align 4, !dbg !863
  %70 = load i32, i32* %j, align 4, !dbg !864
  %sub103 = sub nsw i32 %70, 1, !dbg !866
  %idxprom104 = sext i32 %sub103 to i64, !dbg !867
  %71 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !867
  %d105 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %71, i32 0, i32 0, !dbg !868
  %72 = load i64*, i64** %d105, align 8, !dbg !868
  %arrayidx106 = getelementptr inbounds i64, i64* %72, i64 %idxprom104, !dbg !867
  %73 = load i64, i64* %arrayidx106, align 8, !dbg !867
  %and = and i64 %73, -9223372036854775808, !dbg !869
  %tobool107 = icmp ne i64 %and, 0, !dbg !869
  br i1 %tobool107, label %if.then108, label %if.else132, !dbg !870

if.then108:                                       ; preds = %if.end101
  %74 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !871
  %75 = load i32, i32* %j, align 4, !dbg !874
  %call109 = call %struct.bignum_st* @bn_wexpand(%struct.bignum_st* %74, i32 %75), !dbg !875
  %cmp110 = icmp eq %struct.bignum_st* %call109, null, !dbg !876
  br i1 %cmp110, label %if.then111, label %if.end112, !dbg !877

if.then111:                                       ; preds = %if.then108
  br label %err, !dbg !878

if.end112:                                        ; preds = %if.then108
  %76 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !879
  %d113 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %76, i32 0, i32 0, !dbg !880
  %77 = load i64*, i64** %d113, align 8, !dbg !880
  %arrayidx114 = getelementptr inbounds i64, i64* %77, i64 0, !dbg !879
  %78 = load i64, i64* %arrayidx114, align 8, !dbg !879
  %sub115 = sub i64 0, %78, !dbg !881
  %79 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !882
  %d116 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %79, i32 0, i32 0, !dbg !883
  %80 = load i64*, i64** %d116, align 8, !dbg !883
  %arrayidx117 = getelementptr inbounds i64, i64* %80, i64 0, !dbg !882
  store i64 %sub115, i64* %arrayidx117, align 8, !dbg !884
  store i32 1, i32* %i, align 4, !dbg !885
  br label %for.cond118, !dbg !887

for.cond118:                                      ; preds = %for.inc128, %if.end112
  %81 = load i32, i32* %i, align 4, !dbg !888
  %82 = load i32, i32* %j, align 4, !dbg !892
  %cmp119 = icmp slt i32 %81, %82, !dbg !893
  br i1 %cmp119, label %for.body120, label %for.end130, !dbg !894

for.body120:                                      ; preds = %for.cond118
  %83 = load i32, i32* %i, align 4, !dbg !895
  %idxprom121 = sext i32 %83 to i64, !dbg !896
  %84 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !896
  %d122 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %84, i32 0, i32 0, !dbg !897
  %85 = load i64*, i64** %d122, align 8, !dbg !897
  %arrayidx123 = getelementptr inbounds i64, i64* %85, i64 %idxprom121, !dbg !896
  %86 = load i64, i64* %arrayidx123, align 8, !dbg !896
  %neg124 = xor i64 %86, -1, !dbg !898
  %87 = load i32, i32* %i, align 4, !dbg !899
  %idxprom125 = sext i32 %87 to i64, !dbg !900
  %88 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !900
  %d126 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %88, i32 0, i32 0, !dbg !901
  %89 = load i64*, i64** %d126, align 8, !dbg !901
  %arrayidx127 = getelementptr inbounds i64, i64* %89, i64 %idxprom125, !dbg !900
  store i64 %neg124, i64* %arrayidx127, align 8, !dbg !902
  br label %for.inc128, !dbg !900

for.inc128:                                       ; preds = %for.body120
  %90 = load i32, i32* %i, align 4, !dbg !903
  %inc129 = add nsw i32 %90, 1, !dbg !903
  store i32 %inc129, i32* %i, align 4, !dbg !903
  br label %for.cond118, !dbg !904

for.end130:                                       ; preds = %for.cond118
  %91 = load i32, i32* %j, align 4, !dbg !905
  %92 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !906
  %top131 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %92, i32 0, i32 1, !dbg !907
  store i32 %91, i32* %top131, align 4, !dbg !908
  %93 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !909
  call void @bn_correct_top(%struct.bignum_st* %93), !dbg !910
  br label %if.end138, !dbg !911

if.else132:                                       ; preds = %if.end101
  %94 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !912
  %call133 = call %struct.bignum_st* @BN_value_one(), !dbg !914
  %95 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !915
  %96 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !916
  %call134 = call i32 @BN_to_montgomery(%struct.bignum_st* %94, %struct.bignum_st* %call133, %struct.bn_mont_ctx_st* %95, %struct.bignum_ctx* %96), !dbg !917
  %tobool135 = icmp ne i32 %call134, 0, !dbg !917
  br i1 %tobool135, label %if.end137, label %if.then136, !dbg !918

if.then136:                                       ; preds = %if.else132
  br label %err, !dbg !919

if.end137:                                        ; preds = %if.else132
  br label %if.end138

if.end138:                                        ; preds = %if.end137, %for.end130
  br label %for.cond139, !dbg !920

for.cond139:                                      ; preds = %if.end194, %if.end152, %if.end138
  %97 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !921
  %98 = load i32, i32* %wstart, align 4, !dbg !926
  %call140 = call i32 @BN_is_bit_set(%struct.bignum_st* %97, i32 %98), !dbg !927
  %cmp141 = icmp eq i32 %call140, 0, !dbg !928
  br i1 %cmp141, label %if.then142, label %if.end153, !dbg !929

if.then142:                                       ; preds = %for.cond139
  %99 = load i32, i32* %start, align 4, !dbg !930
  %tobool143 = icmp ne i32 %99, 0, !dbg !930
  br i1 %tobool143, label %if.end149, label %if.then144, !dbg !933

if.then144:                                       ; preds = %if.then142
  %100 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !934
  %101 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !937
  %102 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !938
  %103 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !939
  %104 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !940
  %call145 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %100, %struct.bignum_st* %101, %struct.bignum_st* %102, %struct.bn_mont_ctx_st* %103, %struct.bignum_ctx* %104), !dbg !941
  %tobool146 = icmp ne i32 %call145, 0, !dbg !941
  br i1 %tobool146, label %if.end148, label %if.then147, !dbg !942

if.then147:                                       ; preds = %if.then144
  br label %err, !dbg !943

if.end148:                                        ; preds = %if.then144
  br label %if.end149, !dbg !944

if.end149:                                        ; preds = %if.end148, %if.then142
  %105 = load i32, i32* %wstart, align 4, !dbg !945
  %cmp150 = icmp eq i32 %105, 0, !dbg !947
  br i1 %cmp150, label %if.then151, label %if.end152, !dbg !948

if.then151:                                       ; preds = %if.end149
  br label %for.end195, !dbg !949

if.end152:                                        ; preds = %if.end149
  %106 = load i32, i32* %wstart, align 4, !dbg !950
  %dec = add nsw i32 %106, -1, !dbg !950
  store i32 %dec, i32* %wstart, align 4, !dbg !950
  br label %for.cond139, !dbg !951

if.end153:                                        ; preds = %for.cond139
  %107 = load i32, i32* %wstart, align 4, !dbg !952
  store i32 %107, i32* %j, align 4, !dbg !953
  store i32 1, i32* %wvalue, align 4, !dbg !954
  store i32 0, i32* %wend, align 4, !dbg !955
  store i32 1, i32* %i, align 4, !dbg !956
  br label %for.cond154, !dbg !958

for.cond154:                                      ; preds = %for.inc168, %if.end153
  %108 = load i32, i32* %i, align 4, !dbg !959
  %109 = load i32, i32* %window, align 4, !dbg !963
  %cmp155 = icmp slt i32 %108, %109, !dbg !964
  br i1 %cmp155, label %for.body156, label %for.end170, !dbg !965

for.body156:                                      ; preds = %for.cond154
  %110 = load i32, i32* %wstart, align 4, !dbg !966
  %111 = load i32, i32* %i, align 4, !dbg !969
  %sub157 = sub nsw i32 %110, %111, !dbg !970
  %cmp158 = icmp slt i32 %sub157, 0, !dbg !971
  br i1 %cmp158, label %if.then159, label %if.end160, !dbg !972

if.then159:                                       ; preds = %for.body156
  br label %for.end170, !dbg !973

if.end160:                                        ; preds = %for.body156
  %112 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !974
  %113 = load i32, i32* %wstart, align 4, !dbg !976
  %114 = load i32, i32* %i, align 4, !dbg !977
  %sub161 = sub nsw i32 %113, %114, !dbg !978
  %call162 = call i32 @BN_is_bit_set(%struct.bignum_st* %112, i32 %sub161), !dbg !979
  %tobool163 = icmp ne i32 %call162, 0, !dbg !979
  br i1 %tobool163, label %if.then164, label %if.end167, !dbg !980

if.then164:                                       ; preds = %if.end160
  %115 = load i32, i32* %i, align 4, !dbg !981
  %116 = load i32, i32* %wend, align 4, !dbg !983
  %sub165 = sub nsw i32 %115, %116, !dbg !984
  %117 = load i32, i32* %wvalue, align 4, !dbg !985
  %shl166 = shl i32 %117, %sub165, !dbg !985
  store i32 %shl166, i32* %wvalue, align 4, !dbg !985
  %118 = load i32, i32* %wvalue, align 4, !dbg !986
  %or = or i32 %118, 1, !dbg !986
  store i32 %or, i32* %wvalue, align 4, !dbg !986
  %119 = load i32, i32* %i, align 4, !dbg !987
  store i32 %119, i32* %wend, align 4, !dbg !988
  br label %if.end167, !dbg !989

if.end167:                                        ; preds = %if.then164, %if.end160
  br label %for.inc168, !dbg !990

for.inc168:                                       ; preds = %if.end167
  %120 = load i32, i32* %i, align 4, !dbg !991
  %inc169 = add nsw i32 %120, 1, !dbg !991
  store i32 %inc169, i32* %i, align 4, !dbg !991
  br label %for.cond154, !dbg !992

for.end170:                                       ; preds = %if.then159, %for.cond154
  %121 = load i32, i32* %wend, align 4, !dbg !993
  %add = add nsw i32 %121, 1, !dbg !994
  store i32 %add, i32* %j, align 4, !dbg !995
  %122 = load i32, i32* %start, align 4, !dbg !996
  %tobool171 = icmp ne i32 %122, 0, !dbg !996
  br i1 %tobool171, label %if.end183, label %if.then172, !dbg !998

if.then172:                                       ; preds = %for.end170
  store i32 0, i32* %i, align 4, !dbg !999
  br label %for.cond173, !dbg !1001

for.cond173:                                      ; preds = %for.inc180, %if.then172
  %123 = load i32, i32* %i, align 4, !dbg !1002
  %124 = load i32, i32* %j, align 4, !dbg !1006
  %cmp174 = icmp slt i32 %123, %124, !dbg !1007
  br i1 %cmp174, label %for.body175, label %for.end182, !dbg !1008

for.body175:                                      ; preds = %for.cond173
  %125 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !1009
  %126 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !1012
  %127 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !1013
  %128 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1014
  %129 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1015
  %call176 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %125, %struct.bignum_st* %126, %struct.bignum_st* %127, %struct.bn_mont_ctx_st* %128, %struct.bignum_ctx* %129), !dbg !1016
  %tobool177 = icmp ne i32 %call176, 0, !dbg !1016
  br i1 %tobool177, label %if.end179, label %if.then178, !dbg !1017

if.then178:                                       ; preds = %for.body175
  br label %err, !dbg !1018

if.end179:                                        ; preds = %for.body175
  br label %for.inc180, !dbg !1019

for.inc180:                                       ; preds = %if.end179
  %130 = load i32, i32* %i, align 4, !dbg !1020
  %inc181 = add nsw i32 %130, 1, !dbg !1020
  store i32 %inc181, i32* %i, align 4, !dbg !1020
  br label %for.cond173, !dbg !1021

for.end182:                                       ; preds = %for.cond173
  br label %if.end183, !dbg !1022

if.end183:                                        ; preds = %for.end182, %for.end170
  %131 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !1023
  %132 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !1025
  %133 = load i32, i32* %wvalue, align 4, !dbg !1026
  %shr = ashr i32 %133, 1, !dbg !1027
  %idxprom184 = sext i32 %shr to i64, !dbg !1028
  %arrayidx185 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom184, !dbg !1028
  %134 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx185, align 8, !dbg !1028
  %135 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1029
  %136 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1030
  %call186 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %131, %struct.bignum_st* %132, %struct.bignum_st* %134, %struct.bn_mont_ctx_st* %135, %struct.bignum_ctx* %136), !dbg !1031
  %tobool187 = icmp ne i32 %call186, 0, !dbg !1031
  br i1 %tobool187, label %if.end189, label %if.then188, !dbg !1032

if.then188:                                       ; preds = %if.end183
  br label %err, !dbg !1033

if.end189:                                        ; preds = %if.end183
  %137 = load i32, i32* %wend, align 4, !dbg !1034
  %add190 = add nsw i32 %137, 1, !dbg !1035
  %138 = load i32, i32* %wstart, align 4, !dbg !1036
  %sub191 = sub nsw i32 %138, %add190, !dbg !1036
  store i32 %sub191, i32* %wstart, align 4, !dbg !1036
  store i32 0, i32* %wvalue, align 4, !dbg !1037
  store i32 0, i32* %start, align 4, !dbg !1038
  %139 = load i32, i32* %wstart, align 4, !dbg !1039
  %cmp192 = icmp slt i32 %139, 0, !dbg !1041
  br i1 %cmp192, label %if.then193, label %if.end194, !dbg !1042

if.then193:                                       ; preds = %if.end189
  br label %for.end195, !dbg !1043

if.end194:                                        ; preds = %if.end189
  br label %for.cond139, !dbg !1044

for.end195:                                       ; preds = %if.then193, %if.then151
  %140 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !1045
  %141 = load %struct.bignum_st*, %struct.bignum_st** %r, align 8, !dbg !1047
  %142 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1048
  %143 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1049
  %call196 = call i32 @BN_from_montgomery(%struct.bignum_st* %140, %struct.bignum_st* %141, %struct.bn_mont_ctx_st* %142, %struct.bignum_ctx* %143), !dbg !1050
  %tobool197 = icmp ne i32 %call196, 0, !dbg !1050
  br i1 %tobool197, label %if.end199, label %if.then198, !dbg !1051

if.then198:                                       ; preds = %for.end195
  br label %err, !dbg !1052

if.end199:                                        ; preds = %for.end195
  store i32 1, i32* %ret, align 4, !dbg !1053
  br label %err, !dbg !1054

err:                                              ; preds = %if.end199, %if.then198, %if.then188, %if.then178, %if.then147, %if.then136, %if.then111, %if.then99, %if.then85, %if.then64, %if.then58, %if.then51, %if.then40, %if.then36, %if.then29
  %144 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !1055
  %cmp200 = icmp eq %struct.bn_mont_ctx_st* %144, null, !dbg !1057
  br i1 %cmp200, label %if.then201, label %if.end202, !dbg !1058

if.then201:                                       ; preds = %err
  %145 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1059
  call void @BN_MONT_CTX_free(%struct.bn_mont_ctx_st* %145), !dbg !1060
  br label %if.end202, !dbg !1060

if.end202:                                        ; preds = %if.then201, %err
  %146 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1061
  call void @BN_CTX_end(%struct.bignum_ctx* %146), !dbg !1062
  %147 = load i32, i32* %ret, align 4, !dbg !1063
  store i32 %147, i32* %retval, !dbg !1064
  br label %return, !dbg !1064

return:                                           ; preds = %if.end202, %if.end18, %if.then8, %if.then
  %148 = load i32, i32* %retval, !dbg !1065
  ret i32 %148, !dbg !1065
}

; Function Attrs: nounwind uwtable
define i32 @BN_mod_exp_recp(%struct.bignum_st* %r, %struct.bignum_st* %a, %struct.bignum_st* %p, %struct.bignum_st* %m, %struct.bignum_ctx* %ctx) #0 {
entry:
  %retval = alloca i32, align 4
  %r.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca %struct.bignum_st*, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %m.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %bits = alloca i32, align 4
  %ret = alloca i32, align 4
  %wstart = alloca i32, align 4
  %wend = alloca i32, align 4
  %window = alloca i32, align 4
  %wvalue = alloca i32, align 4
  %start = alloca i32, align 4
  %aa = alloca %struct.bignum_st*, align 8
  %val = alloca [32 x %struct.bignum_st*], align 16
  %recp = alloca %struct.bn_recp_ctx_st, align 8
  store %struct.bignum_st* %r, %struct.bignum_st** %r.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %r.addr, metadata !1066, metadata !81), !dbg !1067
  store %struct.bignum_st* %a, %struct.bignum_st** %a.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %a.addr, metadata !1068, metadata !81), !dbg !1069
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !1070, metadata !81), !dbg !1071
  store %struct.bignum_st* %m, %struct.bignum_st** %m.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %m.addr, metadata !1072, metadata !81), !dbg !1073
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !1074, metadata !81), !dbg !1075
  call void @llvm.dbg.declare(metadata i32* %i, metadata !1076, metadata !81), !dbg !1077
  call void @llvm.dbg.declare(metadata i32* %j, metadata !1078, metadata !81), !dbg !1079
  call void @llvm.dbg.declare(metadata i32* %bits, metadata !1080, metadata !81), !dbg !1081
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1082, metadata !81), !dbg !1083
  store i32 0, i32* %ret, align 4, !dbg !1083
  call void @llvm.dbg.declare(metadata i32* %wstart, metadata !1084, metadata !81), !dbg !1085
  call void @llvm.dbg.declare(metadata i32* %wend, metadata !1086, metadata !81), !dbg !1087
  call void @llvm.dbg.declare(metadata i32* %window, metadata !1088, metadata !81), !dbg !1089
  call void @llvm.dbg.declare(metadata i32* %wvalue, metadata !1090, metadata !81), !dbg !1091
  call void @llvm.dbg.declare(metadata i32* %start, metadata !1092, metadata !81), !dbg !1093
  store i32 1, i32* %start, align 4, !dbg !1093
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %aa, metadata !1094, metadata !81), !dbg !1095
  call void @llvm.dbg.declare(metadata [32 x %struct.bignum_st*]* %val, metadata !1096, metadata !81), !dbg !1097
  call void @llvm.dbg.declare(metadata %struct.bn_recp_ctx_st* %recp, metadata !1098, metadata !81), !dbg !1107
  %0 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1108
  %call = call i32 @BN_get_flags(%struct.bignum_st* %0, i32 4), !dbg !1110
  %cmp = icmp ne i32 %call, 0, !dbg !1111
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !1112

lor.lhs.false:                                    ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !1113
  %call1 = call i32 @BN_get_flags(%struct.bignum_st* %1, i32 4), !dbg !1115
  %cmp2 = icmp ne i32 %call1, 0, !dbg !1116
  br i1 %cmp2, label %if.then, label %lor.lhs.false3, !dbg !1117

lor.lhs.false3:                                   ; preds = %lor.lhs.false
  %2 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1118
  %call4 = call i32 @BN_get_flags(%struct.bignum_st* %2, i32 4), !dbg !1119
  %cmp5 = icmp ne i32 %call4, 0, !dbg !1120
  br i1 %cmp5, label %if.then, label %if.end, !dbg !1121

if.then:                                          ; preds = %lor.lhs.false3, %lor.lhs.false, %entry
  call void @ERR_put_error(i32 3, i32 125, i32 66, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 185), !dbg !1122
  store i32 0, i32* %retval, !dbg !1124
  br label %return, !dbg !1124

if.end:                                           ; preds = %lor.lhs.false3
  %3 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1125
  %call6 = call i32 @BN_num_bits(%struct.bignum_st* %3), !dbg !1126
  store i32 %call6, i32* %bits, align 4, !dbg !1127
  %4 = load i32, i32* %bits, align 4, !dbg !1128
  %cmp7 = icmp eq i32 %4, 0, !dbg !1130
  br i1 %cmp7, label %if.then8, label %if.end14, !dbg !1131

if.then8:                                         ; preds = %if.end
  %5 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1132
  %call9 = call i32 @BN_is_one(%struct.bignum_st* %5), !dbg !1135
  %tobool = icmp ne i32 %call9, 0, !dbg !1135
  br i1 %tobool, label %if.then10, label %if.else, !dbg !1136

if.then10:                                        ; preds = %if.then8
  store i32 1, i32* %ret, align 4, !dbg !1137
  %6 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1139
  %call11 = call i32 @BN_set_word(%struct.bignum_st* %6, i64 0), !dbg !1139
  br label %if.end13, !dbg !1140

if.else:                                          ; preds = %if.then8
  %7 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1141
  %call12 = call i32 @BN_set_word(%struct.bignum_st* %7, i64 1), !dbg !1141
  store i32 %call12, i32* %ret, align 4, !dbg !1143
  br label %if.end13

if.end13:                                         ; preds = %if.else, %if.then10
  %8 = load i32, i32* %ret, align 4, !dbg !1144
  store i32 %8, i32* %retval, !dbg !1145
  br label %return, !dbg !1145

if.end14:                                         ; preds = %if.end
  %9 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1146
  call void @BN_CTX_start(%struct.bignum_ctx* %9), !dbg !1147
  %10 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1148
  %call15 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %10), !dbg !1149
  store %struct.bignum_st* %call15, %struct.bignum_st** %aa, align 8, !dbg !1150
  %11 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1151
  %call16 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %11), !dbg !1152
  %arrayidx = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !1153
  store %struct.bignum_st* %call16, %struct.bignum_st** %arrayidx, align 8, !dbg !1154
  %12 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !1155
  %tobool17 = icmp ne %struct.bignum_st* %12, null, !dbg !1155
  br i1 %tobool17, label %lor.lhs.false18, label %if.then21, !dbg !1157

lor.lhs.false18:                                  ; preds = %if.end14
  %arrayidx19 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !1158
  %13 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx19, align 8, !dbg !1158
  %tobool20 = icmp ne %struct.bignum_st* %13, null, !dbg !1158
  br i1 %tobool20, label %if.end22, label %if.then21, !dbg !1160

if.then21:                                        ; preds = %lor.lhs.false18, %if.end14
  br label %err, !dbg !1161

if.end22:                                         ; preds = %lor.lhs.false18
  call void @BN_RECP_CTX_init(%struct.bn_recp_ctx_st* %recp), !dbg !1162
  %14 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1163
  %neg = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %14, i32 0, i32 3, !dbg !1165
  %15 = load i32, i32* %neg, align 4, !dbg !1165
  %tobool23 = icmp ne i32 %15, 0, !dbg !1163
  br i1 %tobool23, label %if.then24, label %if.else34, !dbg !1166

if.then24:                                        ; preds = %if.end22
  %16 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !1167
  %17 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1170
  %call25 = call %struct.bignum_st* @BN_copy(%struct.bignum_st* %16, %struct.bignum_st* %17), !dbg !1171
  %tobool26 = icmp ne %struct.bignum_st* %call25, null, !dbg !1171
  br i1 %tobool26, label %if.end28, label %if.then27, !dbg !1172

if.then27:                                        ; preds = %if.then24
  br label %err, !dbg !1173

if.end28:                                         ; preds = %if.then24
  %18 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !1174
  %neg29 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %18, i32 0, i32 3, !dbg !1175
  store i32 0, i32* %neg29, align 4, !dbg !1176
  %19 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !1177
  %20 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1179
  %call30 = call i32 @BN_RECP_CTX_set(%struct.bn_recp_ctx_st* %recp, %struct.bignum_st* %19, %struct.bignum_ctx* %20), !dbg !1180
  %cmp31 = icmp sle i32 %call30, 0, !dbg !1181
  br i1 %cmp31, label %if.then32, label %if.end33, !dbg !1182

if.then32:                                        ; preds = %if.end28
  br label %err, !dbg !1183

if.end33:                                         ; preds = %if.end28
  br label %if.end39, !dbg !1184

if.else34:                                        ; preds = %if.end22
  %21 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1185
  %22 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1188
  %call35 = call i32 @BN_RECP_CTX_set(%struct.bn_recp_ctx_st* %recp, %struct.bignum_st* %21, %struct.bignum_ctx* %22), !dbg !1189
  %cmp36 = icmp sle i32 %call35, 0, !dbg !1190
  br i1 %cmp36, label %if.then37, label %if.end38, !dbg !1191

if.then37:                                        ; preds = %if.else34
  br label %err, !dbg !1192

if.end38:                                         ; preds = %if.else34
  br label %if.end39

if.end39:                                         ; preds = %if.end38, %if.end33
  %arrayidx40 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !1193
  %23 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx40, align 8, !dbg !1193
  %24 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !1195
  %25 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1196
  %26 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1197
  %call41 = call i32 @BN_nnmod(%struct.bignum_st* %23, %struct.bignum_st* %24, %struct.bignum_st* %25, %struct.bignum_ctx* %26), !dbg !1198
  %tobool42 = icmp ne i32 %call41, 0, !dbg !1198
  br i1 %tobool42, label %if.end44, label %if.then43, !dbg !1199

if.then43:                                        ; preds = %if.end39
  br label %err, !dbg !1200

if.end44:                                         ; preds = %if.end39
  %arrayidx45 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !1201
  %27 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx45, align 8, !dbg !1201
  %call46 = call i32 @BN_is_zero(%struct.bignum_st* %27), !dbg !1203
  %tobool47 = icmp ne i32 %call46, 0, !dbg !1203
  br i1 %tobool47, label %if.then48, label %if.end50, !dbg !1204

if.then48:                                        ; preds = %if.end44
  %28 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1205
  %call49 = call i32 @BN_set_word(%struct.bignum_st* %28, i64 0), !dbg !1205
  store i32 1, i32* %ret, align 4, !dbg !1207
  br label %err, !dbg !1208

if.end50:                                         ; preds = %if.end44
  %29 = load i32, i32* %bits, align 4, !dbg !1209
  %cmp51 = icmp sgt i32 %29, 671, !dbg !1209
  br i1 %cmp51, label %cond.true, label %cond.false, !dbg !1209

cond.true:                                        ; preds = %if.end50
  br label %cond.end62, !dbg !1210

cond.false:                                       ; preds = %if.end50
  %30 = load i32, i32* %bits, align 4, !dbg !1212
  %cmp52 = icmp sgt i32 %30, 239, !dbg !1212
  br i1 %cmp52, label %cond.true53, label %cond.false54, !dbg !1212

cond.true53:                                      ; preds = %cond.false
  br label %cond.end60, !dbg !1214

cond.false54:                                     ; preds = %cond.false
  %31 = load i32, i32* %bits, align 4, !dbg !1216
  %cmp55 = icmp sgt i32 %31, 79, !dbg !1216
  br i1 %cmp55, label %cond.true56, label %cond.false57, !dbg !1216

cond.true56:                                      ; preds = %cond.false54
  br label %cond.end, !dbg !1218

cond.false57:                                     ; preds = %cond.false54
  %32 = load i32, i32* %bits, align 4, !dbg !1220
  %cmp58 = icmp sgt i32 %32, 23, !dbg !1220
  %cond = select i1 %cmp58, i32 3, i32 1, !dbg !1220
  br label %cond.end, !dbg !1220

cond.end:                                         ; preds = %cond.false57, %cond.true56
  %cond59 = phi i32 [ 4, %cond.true56 ], [ %cond, %cond.false57 ], !dbg !1209
  br label %cond.end60, !dbg !1222

cond.end60:                                       ; preds = %cond.end, %cond.true53
  %cond61 = phi i32 [ 5, %cond.true53 ], [ %cond59, %cond.end ], !dbg !1209
  br label %cond.end62, !dbg !1225

cond.end62:                                       ; preds = %cond.end60, %cond.true
  %cond63 = phi i32 [ 6, %cond.true ], [ %cond61, %cond.end60 ], !dbg !1209
  store i32 %cond63, i32* %window, align 4, !dbg !1228
  %33 = load i32, i32* %window, align 4, !dbg !1231
  %cmp64 = icmp sgt i32 %33, 1, !dbg !1233
  br i1 %cmp64, label %if.then65, label %if.end86, !dbg !1234

if.then65:                                        ; preds = %cond.end62
  %34 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !1235
  %arrayidx66 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !1238
  %35 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx66, align 8, !dbg !1238
  %arrayidx67 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !1239
  %36 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx67, align 8, !dbg !1239
  %37 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1240
  %call68 = call i32 @BN_mod_mul_reciprocal(%struct.bignum_st* %34, %struct.bignum_st* %35, %struct.bignum_st* %36, %struct.bn_recp_ctx_st* %recp, %struct.bignum_ctx* %37), !dbg !1241
  %tobool69 = icmp ne i32 %call68, 0, !dbg !1241
  br i1 %tobool69, label %if.end71, label %if.then70, !dbg !1242

if.then70:                                        ; preds = %if.then65
  br label %err, !dbg !1243

if.end71:                                         ; preds = %if.then65
  %38 = load i32, i32* %window, align 4, !dbg !1244
  %sub = sub nsw i32 %38, 1, !dbg !1245
  %shl = shl i32 1, %sub, !dbg !1246
  store i32 %shl, i32* %j, align 4, !dbg !1247
  store i32 1, i32* %i, align 4, !dbg !1248
  br label %for.cond, !dbg !1250

for.cond:                                         ; preds = %for.inc, %if.end71
  %39 = load i32, i32* %i, align 4, !dbg !1251
  %40 = load i32, i32* %j, align 4, !dbg !1255
  %cmp72 = icmp slt i32 %39, %40, !dbg !1256
  br i1 %cmp72, label %for.body, label %for.end, !dbg !1257

for.body:                                         ; preds = %for.cond
  %41 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1258
  %call73 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %41), !dbg !1261
  %42 = load i32, i32* %i, align 4, !dbg !1262
  %idxprom = sext i32 %42 to i64, !dbg !1263
  %arrayidx74 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom, !dbg !1263
  store %struct.bignum_st* %call73, %struct.bignum_st** %arrayidx74, align 8, !dbg !1264
  %cmp75 = icmp eq %struct.bignum_st* %call73, null, !dbg !1265
  br i1 %cmp75, label %if.then84, label %lor.lhs.false76, !dbg !1266

lor.lhs.false76:                                  ; preds = %for.body
  %43 = load i32, i32* %i, align 4, !dbg !1267
  %idxprom77 = sext i32 %43 to i64, !dbg !1268
  %arrayidx78 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom77, !dbg !1268
  %44 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx78, align 8, !dbg !1268
  %45 = load i32, i32* %i, align 4, !dbg !1269
  %sub79 = sub nsw i32 %45, 1, !dbg !1270
  %idxprom80 = sext i32 %sub79 to i64, !dbg !1271
  %arrayidx81 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom80, !dbg !1271
  %46 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx81, align 8, !dbg !1271
  %47 = load %struct.bignum_st*, %struct.bignum_st** %aa, align 8, !dbg !1272
  %48 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1273
  %call82 = call i32 @BN_mod_mul_reciprocal(%struct.bignum_st* %44, %struct.bignum_st* %46, %struct.bignum_st* %47, %struct.bn_recp_ctx_st* %recp, %struct.bignum_ctx* %48), !dbg !1274
  %tobool83 = icmp ne i32 %call82, 0, !dbg !1274
  br i1 %tobool83, label %if.end85, label %if.then84, !dbg !1275

if.then84:                                        ; preds = %lor.lhs.false76, %for.body
  br label %err, !dbg !1276

if.end85:                                         ; preds = %lor.lhs.false76
  br label %for.inc, !dbg !1277

for.inc:                                          ; preds = %if.end85
  %49 = load i32, i32* %i, align 4, !dbg !1278
  %inc = add nsw i32 %49, 1, !dbg !1278
  store i32 %inc, i32* %i, align 4, !dbg !1278
  br label %for.cond, !dbg !1279

for.end:                                          ; preds = %for.cond
  br label %if.end86, !dbg !1280

if.end86:                                         ; preds = %for.end, %cond.end62
  store i32 1, i32* %start, align 4, !dbg !1281
  store i32 0, i32* %wvalue, align 4, !dbg !1282
  %50 = load i32, i32* %bits, align 4, !dbg !1283
  %sub87 = sub nsw i32 %50, 1, !dbg !1284
  store i32 %sub87, i32* %wstart, align 4, !dbg !1285
  store i32 0, i32* %wend, align 4, !dbg !1286
  %51 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1287
  %call88 = call i32 @BN_set_word(%struct.bignum_st* %51, i64 1), !dbg !1287
  %tobool89 = icmp ne i32 %call88, 0, !dbg !1287
  br i1 %tobool89, label %if.end91, label %if.then90, !dbg !1289

if.then90:                                        ; preds = %if.end86
  br label %err, !dbg !1290

if.end91:                                         ; preds = %if.end86
  br label %for.cond92, !dbg !1291

for.cond92:                                       ; preds = %if.end147, %if.end105, %if.end91
  %52 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1292
  %53 = load i32, i32* %wstart, align 4, !dbg !1297
  %call93 = call i32 @BN_is_bit_set(%struct.bignum_st* %52, i32 %53), !dbg !1298
  %cmp94 = icmp eq i32 %call93, 0, !dbg !1299
  br i1 %cmp94, label %if.then95, label %if.end106, !dbg !1300

if.then95:                                        ; preds = %for.cond92
  %54 = load i32, i32* %start, align 4, !dbg !1301
  %tobool96 = icmp ne i32 %54, 0, !dbg !1301
  br i1 %tobool96, label %if.end102, label %if.then97, !dbg !1304

if.then97:                                        ; preds = %if.then95
  %55 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1305
  %56 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1307
  %57 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1308
  %58 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1309
  %call98 = call i32 @BN_mod_mul_reciprocal(%struct.bignum_st* %55, %struct.bignum_st* %56, %struct.bignum_st* %57, %struct.bn_recp_ctx_st* %recp, %struct.bignum_ctx* %58), !dbg !1310
  %tobool99 = icmp ne i32 %call98, 0, !dbg !1310
  br i1 %tobool99, label %if.end101, label %if.then100, !dbg !1311

if.then100:                                       ; preds = %if.then97
  br label %err, !dbg !1312

if.end101:                                        ; preds = %if.then97
  br label %if.end102, !dbg !1313

if.end102:                                        ; preds = %if.end101, %if.then95
  %59 = load i32, i32* %wstart, align 4, !dbg !1315
  %cmp103 = icmp eq i32 %59, 0, !dbg !1317
  br i1 %cmp103, label %if.then104, label %if.end105, !dbg !1318

if.then104:                                       ; preds = %if.end102
  br label %for.end148, !dbg !1319

if.end105:                                        ; preds = %if.end102
  %60 = load i32, i32* %wstart, align 4, !dbg !1320
  %dec = add nsw i32 %60, -1, !dbg !1320
  store i32 %dec, i32* %wstart, align 4, !dbg !1320
  br label %for.cond92, !dbg !1321

if.end106:                                        ; preds = %for.cond92
  %61 = load i32, i32* %wstart, align 4, !dbg !1322
  store i32 %61, i32* %j, align 4, !dbg !1323
  store i32 1, i32* %wvalue, align 4, !dbg !1324
  store i32 0, i32* %wend, align 4, !dbg !1325
  store i32 1, i32* %i, align 4, !dbg !1326
  br label %for.cond107, !dbg !1328

for.cond107:                                      ; preds = %for.inc121, %if.end106
  %62 = load i32, i32* %i, align 4, !dbg !1329
  %63 = load i32, i32* %window, align 4, !dbg !1333
  %cmp108 = icmp slt i32 %62, %63, !dbg !1334
  br i1 %cmp108, label %for.body109, label %for.end123, !dbg !1335

for.body109:                                      ; preds = %for.cond107
  %64 = load i32, i32* %wstart, align 4, !dbg !1336
  %65 = load i32, i32* %i, align 4, !dbg !1339
  %sub110 = sub nsw i32 %64, %65, !dbg !1340
  %cmp111 = icmp slt i32 %sub110, 0, !dbg !1341
  br i1 %cmp111, label %if.then112, label %if.end113, !dbg !1342

if.then112:                                       ; preds = %for.body109
  br label %for.end123, !dbg !1343

if.end113:                                        ; preds = %for.body109
  %66 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1344
  %67 = load i32, i32* %wstart, align 4, !dbg !1346
  %68 = load i32, i32* %i, align 4, !dbg !1347
  %sub114 = sub nsw i32 %67, %68, !dbg !1348
  %call115 = call i32 @BN_is_bit_set(%struct.bignum_st* %66, i32 %sub114), !dbg !1349
  %tobool116 = icmp ne i32 %call115, 0, !dbg !1349
  br i1 %tobool116, label %if.then117, label %if.end120, !dbg !1350

if.then117:                                       ; preds = %if.end113
  %69 = load i32, i32* %i, align 4, !dbg !1351
  %70 = load i32, i32* %wend, align 4, !dbg !1353
  %sub118 = sub nsw i32 %69, %70, !dbg !1354
  %71 = load i32, i32* %wvalue, align 4, !dbg !1355
  %shl119 = shl i32 %71, %sub118, !dbg !1355
  store i32 %shl119, i32* %wvalue, align 4, !dbg !1355
  %72 = load i32, i32* %wvalue, align 4, !dbg !1356
  %or = or i32 %72, 1, !dbg !1356
  store i32 %or, i32* %wvalue, align 4, !dbg !1356
  %73 = load i32, i32* %i, align 4, !dbg !1357
  store i32 %73, i32* %wend, align 4, !dbg !1358
  br label %if.end120, !dbg !1359

if.end120:                                        ; preds = %if.then117, %if.end113
  br label %for.inc121, !dbg !1360

for.inc121:                                       ; preds = %if.end120
  %74 = load i32, i32* %i, align 4, !dbg !1361
  %inc122 = add nsw i32 %74, 1, !dbg !1361
  store i32 %inc122, i32* %i, align 4, !dbg !1361
  br label %for.cond107, !dbg !1362

for.end123:                                       ; preds = %if.then112, %for.cond107
  %75 = load i32, i32* %wend, align 4, !dbg !1363
  %add = add nsw i32 %75, 1, !dbg !1364
  store i32 %add, i32* %j, align 4, !dbg !1365
  %76 = load i32, i32* %start, align 4, !dbg !1366
  %tobool124 = icmp ne i32 %76, 0, !dbg !1366
  br i1 %tobool124, label %if.end136, label %if.then125, !dbg !1368

if.then125:                                       ; preds = %for.end123
  store i32 0, i32* %i, align 4, !dbg !1369
  br label %for.cond126, !dbg !1371

for.cond126:                                      ; preds = %for.inc133, %if.then125
  %77 = load i32, i32* %i, align 4, !dbg !1372
  %78 = load i32, i32* %j, align 4, !dbg !1376
  %cmp127 = icmp slt i32 %77, %78, !dbg !1377
  br i1 %cmp127, label %for.body128, label %for.end135, !dbg !1378

for.body128:                                      ; preds = %for.cond126
  %79 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1379
  %80 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1382
  %81 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1383
  %82 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1384
  %call129 = call i32 @BN_mod_mul_reciprocal(%struct.bignum_st* %79, %struct.bignum_st* %80, %struct.bignum_st* %81, %struct.bn_recp_ctx_st* %recp, %struct.bignum_ctx* %82), !dbg !1385
  %tobool130 = icmp ne i32 %call129, 0, !dbg !1385
  br i1 %tobool130, label %if.end132, label %if.then131, !dbg !1386

if.then131:                                       ; preds = %for.body128
  br label %err, !dbg !1387

if.end132:                                        ; preds = %for.body128
  br label %for.inc133, !dbg !1388

for.inc133:                                       ; preds = %if.end132
  %83 = load i32, i32* %i, align 4, !dbg !1389
  %inc134 = add nsw i32 %83, 1, !dbg !1389
  store i32 %inc134, i32* %i, align 4, !dbg !1389
  br label %for.cond126, !dbg !1390

for.end135:                                       ; preds = %for.cond126
  br label %if.end136, !dbg !1391

if.end136:                                        ; preds = %for.end135, %for.end123
  %84 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1392
  %85 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !1394
  %86 = load i32, i32* %wvalue, align 4, !dbg !1395
  %shr = ashr i32 %86, 1, !dbg !1396
  %idxprom137 = sext i32 %shr to i64, !dbg !1397
  %arrayidx138 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom137, !dbg !1397
  %87 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx138, align 8, !dbg !1397
  %88 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1398
  %call139 = call i32 @BN_mod_mul_reciprocal(%struct.bignum_st* %84, %struct.bignum_st* %85, %struct.bignum_st* %87, %struct.bn_recp_ctx_st* %recp, %struct.bignum_ctx* %88), !dbg !1399
  %tobool140 = icmp ne i32 %call139, 0, !dbg !1399
  br i1 %tobool140, label %if.end142, label %if.then141, !dbg !1400

if.then141:                                       ; preds = %if.end136
  br label %err, !dbg !1401

if.end142:                                        ; preds = %if.end136
  %89 = load i32, i32* %wend, align 4, !dbg !1402
  %add143 = add nsw i32 %89, 1, !dbg !1403
  %90 = load i32, i32* %wstart, align 4, !dbg !1404
  %sub144 = sub nsw i32 %90, %add143, !dbg !1404
  store i32 %sub144, i32* %wstart, align 4, !dbg !1404
  store i32 0, i32* %wvalue, align 4, !dbg !1405
  store i32 0, i32* %start, align 4, !dbg !1406
  %91 = load i32, i32* %wstart, align 4, !dbg !1407
  %cmp145 = icmp slt i32 %91, 0, !dbg !1409
  br i1 %cmp145, label %if.then146, label %if.end147, !dbg !1410

if.then146:                                       ; preds = %if.end142
  br label %for.end148, !dbg !1411

if.end147:                                        ; preds = %if.end142
  br label %for.cond92, !dbg !1412

for.end148:                                       ; preds = %if.then146, %if.then104
  store i32 1, i32* %ret, align 4, !dbg !1413
  br label %err, !dbg !1414

err:                                              ; preds = %for.end148, %if.then141, %if.then131, %if.then100, %if.then90, %if.then84, %if.then70, %if.then48, %if.then43, %if.then37, %if.then32, %if.then27, %if.then21
  %92 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1415
  call void @BN_CTX_end(%struct.bignum_ctx* %92), !dbg !1416
  call void @BN_RECP_CTX_free(%struct.bn_recp_ctx_st* %recp), !dbg !1417
  %93 = load i32, i32* %ret, align 4, !dbg !1418
  store i32 %93, i32* %retval, !dbg !1419
  br label %return, !dbg !1419

return:                                           ; preds = %err, %if.end13, %if.then
  %94 = load i32, i32* %retval, !dbg !1420
  ret i32 %94, !dbg !1420
}

declare i32 @BN_is_one(%struct.bignum_st*) #2

declare void @BN_RECP_CTX_init(%struct.bn_recp_ctx_st*) #2

declare i32 @BN_RECP_CTX_set(%struct.bn_recp_ctx_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

declare i32 @BN_nnmod(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

declare i32 @BN_is_zero(%struct.bignum_st*) #2

declare i32 @BN_mod_mul_reciprocal(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bn_recp_ctx_st*, %struct.bignum_ctx*) #2

declare void @BN_RECP_CTX_free(%struct.bn_recp_ctx_st*) #2

; Function Attrs: nounwind uwtable
define i32 @BN_mod_exp_mont_consttime(%struct.bignum_st* %rr, %struct.bignum_st* %a, %struct.bignum_st* %p, %struct.bignum_st* %m, %struct.bignum_ctx* %ctx, %struct.bn_mont_ctx_st* %in_mont) #0 {
entry:
  %retval = alloca i32, align 4
  %rr.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca %struct.bignum_st*, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %m.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %in_mont.addr = alloca %struct.bn_mont_ctx_st*, align 8
  %i = alloca i32, align 4
  %bits = alloca i32, align 4
  %ret = alloca i32, align 4
  %window = alloca i32, align 4
  %wvalue = alloca i32, align 4
  %top = alloca i32, align 4
  %mont = alloca %struct.bn_mont_ctx_st*, align 8
  %numPowers = alloca i32, align 4
  %powerbufFree = alloca i8*, align 8
  %powerbufLen = alloca i32, align 4
  %powerbuf = alloca i8*, align 8
  %tmp = alloca %struct.bignum_st, align 8
  %am = alloca %struct.bignum_st, align 8
  store %struct.bignum_st* %rr, %struct.bignum_st** %rr.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %rr.addr, metadata !1421, metadata !81), !dbg !1422
  store %struct.bignum_st* %a, %struct.bignum_st** %a.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %a.addr, metadata !1423, metadata !81), !dbg !1424
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !1425, metadata !81), !dbg !1426
  store %struct.bignum_st* %m, %struct.bignum_st** %m.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %m.addr, metadata !1427, metadata !81), !dbg !1428
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !1429, metadata !81), !dbg !1430
  store %struct.bn_mont_ctx_st* %in_mont, %struct.bn_mont_ctx_st** %in_mont.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bn_mont_ctx_st** %in_mont.addr, metadata !1431, metadata !81), !dbg !1432
  call void @llvm.dbg.declare(metadata i32* %i, metadata !1433, metadata !81), !dbg !1434
  call void @llvm.dbg.declare(metadata i32* %bits, metadata !1435, metadata !81), !dbg !1436
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1437, metadata !81), !dbg !1438
  store i32 0, i32* %ret, align 4, !dbg !1438
  call void @llvm.dbg.declare(metadata i32* %window, metadata !1439, metadata !81), !dbg !1440
  call void @llvm.dbg.declare(metadata i32* %wvalue, metadata !1441, metadata !81), !dbg !1442
  call void @llvm.dbg.declare(metadata i32* %top, metadata !1443, metadata !81), !dbg !1444
  call void @llvm.dbg.declare(metadata %struct.bn_mont_ctx_st** %mont, metadata !1445, metadata !81), !dbg !1446
  store %struct.bn_mont_ctx_st* null, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1446
  call void @llvm.dbg.declare(metadata i32* %numPowers, metadata !1447, metadata !81), !dbg !1448
  call void @llvm.dbg.declare(metadata i8** %powerbufFree, metadata !1449, metadata !81), !dbg !1450
  store i8* null, i8** %powerbufFree, align 8, !dbg !1450
  call void @llvm.dbg.declare(metadata i32* %powerbufLen, metadata !1451, metadata !81), !dbg !1452
  store i32 0, i32* %powerbufLen, align 4, !dbg !1452
  call void @llvm.dbg.declare(metadata i8** %powerbuf, metadata !1453, metadata !81), !dbg !1454
  store i8* null, i8** %powerbuf, align 8, !dbg !1454
  call void @llvm.dbg.declare(metadata %struct.bignum_st* %tmp, metadata !1455, metadata !81), !dbg !1456
  call void @llvm.dbg.declare(metadata %struct.bignum_st* %am, metadata !1457, metadata !81), !dbg !1458
  %0 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1459
  %call = call i32 @BN_is_odd(%struct.bignum_st* %0), !dbg !1461
  %tobool = icmp ne i32 %call, 0, !dbg !1461
  br i1 %tobool, label %if.end, label %if.then, !dbg !1462

if.then:                                          ; preds = %entry
  call void @ERR_put_error(i32 3, i32 124, i32 102, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 622), !dbg !1463
  store i32 0, i32* %retval, !dbg !1465
  br label %return, !dbg !1465

if.end:                                           ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1466
  %top2 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %1, i32 0, i32 1, !dbg !1467
  %2 = load i32, i32* %top2, align 4, !dbg !1467
  store i32 %2, i32* %top, align 4, !dbg !1468
  %3 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1469
  %call3 = call i32 @BN_num_bits(%struct.bignum_st* %3), !dbg !1470
  store i32 %call3, i32* %bits, align 4, !dbg !1471
  %4 = load i32, i32* %bits, align 4, !dbg !1472
  %cmp = icmp eq i32 %4, 0, !dbg !1474
  br i1 %cmp, label %if.then4, label %if.end11, !dbg !1475

if.then4:                                         ; preds = %if.end
  %5 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1476
  %call5 = call i32 @BN_is_one(%struct.bignum_st* %5), !dbg !1479
  %tobool6 = icmp ne i32 %call5, 0, !dbg !1479
  br i1 %tobool6, label %if.then7, label %if.else, !dbg !1480

if.then7:                                         ; preds = %if.then4
  store i32 1, i32* %ret, align 4, !dbg !1481
  %6 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !1483
  %call8 = call i32 @BN_set_word(%struct.bignum_st* %6, i64 0), !dbg !1483
  br label %if.end10, !dbg !1484

if.else:                                          ; preds = %if.then4
  %7 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !1485
  %call9 = call i32 @BN_set_word(%struct.bignum_st* %7, i64 1), !dbg !1485
  store i32 %call9, i32* %ret, align 4, !dbg !1487
  br label %if.end10

if.end10:                                         ; preds = %if.else, %if.then7
  %8 = load i32, i32* %ret, align 4, !dbg !1488
  store i32 %8, i32* %retval, !dbg !1489
  br label %return, !dbg !1489

if.end11:                                         ; preds = %if.end
  %9 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1490
  call void @BN_CTX_start(%struct.bignum_ctx* %9), !dbg !1491
  %10 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !1492
  %cmp12 = icmp ne %struct.bn_mont_ctx_st* %10, null, !dbg !1494
  br i1 %cmp12, label %if.then13, label %if.else14, !dbg !1495

if.then13:                                        ; preds = %if.end11
  %11 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !1496
  store %struct.bn_mont_ctx_st* %11, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1497
  br label %if.end23, !dbg !1498

if.else14:                                        ; preds = %if.end11
  %call15 = call %struct.bn_mont_ctx_st* @BN_MONT_CTX_new(), !dbg !1499
  store %struct.bn_mont_ctx_st* %call15, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1502
  %cmp16 = icmp eq %struct.bn_mont_ctx_st* %call15, null, !dbg !1503
  br i1 %cmp16, label %if.then17, label %if.end18, !dbg !1504

if.then17:                                        ; preds = %if.else14
  br label %err, !dbg !1505

if.end18:                                         ; preds = %if.else14
  %12 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1506
  %13 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1508
  %14 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1509
  %call19 = call i32 @BN_MONT_CTX_set(%struct.bn_mont_ctx_st* %12, %struct.bignum_st* %13, %struct.bignum_ctx* %14), !dbg !1510
  %tobool20 = icmp ne i32 %call19, 0, !dbg !1510
  br i1 %tobool20, label %if.end22, label %if.then21, !dbg !1511

if.then21:                                        ; preds = %if.end18
  br label %err, !dbg !1512

if.end22:                                         ; preds = %if.end18
  br label %if.end23

if.end23:                                         ; preds = %if.end22, %if.then13
  %15 = load i32, i32* %bits, align 4, !dbg !1513
  %cmp24 = icmp sgt i32 %15, 937, !dbg !1513
  br i1 %cmp24, label %cond.true, label %cond.false, !dbg !1513

cond.true:                                        ; preds = %if.end23
  br label %cond.end35, !dbg !1514

cond.false:                                       ; preds = %if.end23
  %16 = load i32, i32* %bits, align 4, !dbg !1516
  %cmp25 = icmp sgt i32 %16, 306, !dbg !1516
  br i1 %cmp25, label %cond.true26, label %cond.false27, !dbg !1516

cond.true26:                                      ; preds = %cond.false
  br label %cond.end33, !dbg !1518

cond.false27:                                     ; preds = %cond.false
  %17 = load i32, i32* %bits, align 4, !dbg !1520
  %cmp28 = icmp sgt i32 %17, 89, !dbg !1520
  br i1 %cmp28, label %cond.true29, label %cond.false30, !dbg !1520

cond.true29:                                      ; preds = %cond.false27
  br label %cond.end, !dbg !1522

cond.false30:                                     ; preds = %cond.false27
  %18 = load i32, i32* %bits, align 4, !dbg !1524
  %cmp31 = icmp sgt i32 %18, 22, !dbg !1524
  %cond = select i1 %cmp31, i32 3, i32 1, !dbg !1524
  br label %cond.end, !dbg !1524

cond.end:                                         ; preds = %cond.false30, %cond.true29
  %cond32 = phi i32 [ 4, %cond.true29 ], [ %cond, %cond.false30 ], !dbg !1513
  br label %cond.end33, !dbg !1526

cond.end33:                                       ; preds = %cond.end, %cond.true26
  %cond34 = phi i32 [ 5, %cond.true26 ], [ %cond32, %cond.end ], !dbg !1513
  br label %cond.end35, !dbg !1529

cond.end35:                                       ; preds = %cond.end33, %cond.true
  %cond36 = phi i32 [ 6, %cond.true ], [ %cond34, %cond.end33 ], !dbg !1513
  store i32 %cond36, i32* %window, align 4, !dbg !1532
  %19 = load i32, i32* %window, align 4, !dbg !1535
  %shl = shl i32 1, %19, !dbg !1536
  store i32 %shl, i32* %numPowers, align 4, !dbg !1537
  %20 = load i32, i32* %top, align 4, !dbg !1538
  %21 = load i32, i32* %numPowers, align 4, !dbg !1539
  %mul = mul nsw i32 %20, %21, !dbg !1540
  %22 = load i32, i32* %top, align 4, !dbg !1541
  %mul37 = mul nsw i32 2, %22, !dbg !1542
  %23 = load i32, i32* %numPowers, align 4, !dbg !1543
  %cmp38 = icmp sgt i32 %mul37, %23, !dbg !1544
  br i1 %cmp38, label %cond.true39, label %cond.false41, !dbg !1545

cond.true39:                                      ; preds = %cond.end35
  %24 = load i32, i32* %top, align 4, !dbg !1546
  %mul40 = mul nsw i32 2, %24, !dbg !1547
  br label %cond.end42, !dbg !1545

cond.false41:                                     ; preds = %cond.end35
  %25 = load i32, i32* %numPowers, align 4, !dbg !1548
  br label %cond.end42, !dbg !1545

cond.end42:                                       ; preds = %cond.false41, %cond.true39
  %cond43 = phi i32 [ %mul40, %cond.true39 ], [ %25, %cond.false41 ], !dbg !1545
  %add = add nsw i32 %mul, %cond43, !dbg !1549
  %conv = sext i32 %add to i64, !dbg !1550
  %mul44 = mul i64 8, %conv, !dbg !1551
  %26 = load i32, i32* %powerbufLen, align 4, !dbg !1552
  %conv45 = sext i32 %26 to i64, !dbg !1552
  %add46 = add i64 %conv45, %mul44, !dbg !1552
  %conv47 = trunc i64 %add46 to i32, !dbg !1552
  store i32 %conv47, i32* %powerbufLen, align 4, !dbg !1552
  %27 = load i32, i32* %powerbufLen, align 4, !dbg !1553
  %cmp48 = icmp slt i32 %27, 3072, !dbg !1555
  br i1 %cmp48, label %if.then50, label %if.else53, !dbg !1556

if.then50:                                        ; preds = %cond.end42
  %28 = load i32, i32* %powerbufLen, align 4, !dbg !1557
  %add51 = add nsw i32 %28, 64, !dbg !1557
  %conv52 = sext i32 %add51 to i64, !dbg !1557
  %29 = alloca i8, i64 %conv52, !dbg !1557
  store i8* %29, i8** %powerbufFree, align 8, !dbg !1558
  br label %if.end61, !dbg !1559

if.else53:                                        ; preds = %cond.end42
  %30 = load i32, i32* %powerbufLen, align 4, !dbg !1560
  %add54 = add nsw i32 %30, 64, !dbg !1560
  %conv55 = sext i32 %add54 to i64, !dbg !1560
  %call56 = call i8* @CRYPTO_malloc(i64 %conv55, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 718), !dbg !1560
  store i8* %call56, i8** %powerbufFree, align 8, !dbg !1562
  %cmp57 = icmp eq i8* %call56, null, !dbg !1563
  br i1 %cmp57, label %if.then59, label %if.end60, !dbg !1564

if.then59:                                        ; preds = %if.else53
  br label %err, !dbg !1565

if.end60:                                         ; preds = %if.else53
  br label %if.end61

if.end61:                                         ; preds = %if.end60, %if.then50
  %31 = load i8*, i8** %powerbufFree, align 8, !dbg !1566
  %32 = load i8*, i8** %powerbufFree, align 8, !dbg !1566
  %33 = ptrtoint i8* %32 to i64, !dbg !1566
  %and = and i64 %33, 63, !dbg !1566
  %sub = sub i64 64, %and, !dbg !1566
  %add.ptr = getelementptr inbounds i8, i8* %31, i64 %sub, !dbg !1566
  store i8* %add.ptr, i8** %powerbuf, align 8, !dbg !1567
  %34 = load i8*, i8** %powerbuf, align 8, !dbg !1568
  %35 = load i32, i32* %powerbufLen, align 4, !dbg !1569
  %conv62 = sext i32 %35 to i64, !dbg !1569
  call void @llvm.memset.p0i8.i64(i8* %34, i8 0, i64 %conv62, i32 1, i1 false), !dbg !1570
  %36 = load i32, i32* %powerbufLen, align 4, !dbg !1571
  %cmp63 = icmp slt i32 %36, 3072, !dbg !1573
  br i1 %cmp63, label %if.then65, label %if.end66, !dbg !1574

if.then65:                                        ; preds = %if.end61
  store i8* null, i8** %powerbufFree, align 8, !dbg !1575
  br label %if.end66, !dbg !1576

if.end66:                                         ; preds = %if.then65, %if.end61
  %37 = load i8*, i8** %powerbuf, align 8, !dbg !1577
  %38 = load i32, i32* %top, align 4, !dbg !1578
  %conv67 = sext i32 %38 to i64, !dbg !1578
  %mul68 = mul i64 8, %conv67, !dbg !1579
  %39 = load i32, i32* %numPowers, align 4, !dbg !1580
  %conv69 = sext i32 %39 to i64, !dbg !1580
  %mul70 = mul i64 %mul68, %conv69, !dbg !1581
  %add.ptr71 = getelementptr inbounds i8, i8* %37, i64 %mul70, !dbg !1582
  %40 = bitcast i8* %add.ptr71 to i64*, !dbg !1583
  %d = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 0, !dbg !1584
  store i64* %40, i64** %d, align 8, !dbg !1585
  %d72 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 0, !dbg !1586
  %41 = load i64*, i64** %d72, align 8, !dbg !1586
  %42 = load i32, i32* %top, align 4, !dbg !1587
  %idx.ext = sext i32 %42 to i64, !dbg !1588
  %add.ptr73 = getelementptr inbounds i64, i64* %41, i64 %idx.ext, !dbg !1588
  %d74 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %am, i32 0, i32 0, !dbg !1589
  store i64* %add.ptr73, i64** %d74, align 8, !dbg !1590
  %top75 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %am, i32 0, i32 1, !dbg !1591
  store i32 0, i32* %top75, align 4, !dbg !1592
  %top76 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 1, !dbg !1593
  store i32 0, i32* %top76, align 4, !dbg !1594
  %43 = load i32, i32* %top, align 4, !dbg !1595
  %dmax = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %am, i32 0, i32 2, !dbg !1596
  store i32 %43, i32* %dmax, align 4, !dbg !1597
  %dmax77 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 2, !dbg !1598
  store i32 %43, i32* %dmax77, align 4, !dbg !1599
  %neg = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %am, i32 0, i32 3, !dbg !1600
  store i32 0, i32* %neg, align 4, !dbg !1601
  %neg78 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 3, !dbg !1602
  store i32 0, i32* %neg78, align 4, !dbg !1603
  %flags = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %am, i32 0, i32 4, !dbg !1604
  store i32 2, i32* %flags, align 4, !dbg !1605
  %flags79 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 4, !dbg !1606
  store i32 2, i32* %flags79, align 4, !dbg !1607
  %44 = load i32, i32* %top, align 4, !dbg !1608
  %sub80 = sub nsw i32 %44, 1, !dbg !1610
  %idxprom = sext i32 %sub80 to i64, !dbg !1611
  %45 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1611
  %d81 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %45, i32 0, i32 0, !dbg !1612
  %46 = load i64*, i64** %d81, align 8, !dbg !1612
  %arrayidx = getelementptr inbounds i64, i64* %46, i64 %idxprom, !dbg !1611
  %47 = load i64, i64* %arrayidx, align 8, !dbg !1611
  %and82 = and i64 %47, -9223372036854775808, !dbg !1613
  %tobool83 = icmp ne i64 %and82, 0, !dbg !1613
  br i1 %tobool83, label %if.then84, label %if.else100, !dbg !1614

if.then84:                                        ; preds = %if.end66
  %48 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1615
  %d85 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %48, i32 0, i32 0, !dbg !1617
  %49 = load i64*, i64** %d85, align 8, !dbg !1617
  %arrayidx86 = getelementptr inbounds i64, i64* %49, i64 0, !dbg !1615
  %50 = load i64, i64* %arrayidx86, align 8, !dbg !1615
  %sub87 = sub i64 0, %50, !dbg !1618
  %d88 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 0, !dbg !1619
  %51 = load i64*, i64** %d88, align 8, !dbg !1619
  %arrayidx89 = getelementptr inbounds i64, i64* %51, i64 0, !dbg !1620
  store i64 %sub87, i64* %arrayidx89, align 8, !dbg !1621
  store i32 1, i32* %i, align 4, !dbg !1622
  br label %for.cond, !dbg !1624

for.cond:                                         ; preds = %for.inc, %if.then84
  %52 = load i32, i32* %i, align 4, !dbg !1625
  %53 = load i32, i32* %top, align 4, !dbg !1629
  %cmp90 = icmp slt i32 %52, %53, !dbg !1630
  br i1 %cmp90, label %for.body, label %for.end, !dbg !1631

for.body:                                         ; preds = %for.cond
  %54 = load i32, i32* %i, align 4, !dbg !1632
  %idxprom92 = sext i32 %54 to i64, !dbg !1633
  %55 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1633
  %d93 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %55, i32 0, i32 0, !dbg !1634
  %56 = load i64*, i64** %d93, align 8, !dbg !1634
  %arrayidx94 = getelementptr inbounds i64, i64* %56, i64 %idxprom92, !dbg !1633
  %57 = load i64, i64* %arrayidx94, align 8, !dbg !1633
  %neg95 = xor i64 %57, -1, !dbg !1635
  %58 = load i32, i32* %i, align 4, !dbg !1636
  %idxprom96 = sext i32 %58 to i64, !dbg !1637
  %d97 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 0, !dbg !1638
  %59 = load i64*, i64** %d97, align 8, !dbg !1638
  %arrayidx98 = getelementptr inbounds i64, i64* %59, i64 %idxprom96, !dbg !1637
  store i64 %neg95, i64* %arrayidx98, align 8, !dbg !1639
  br label %for.inc, !dbg !1637

for.inc:                                          ; preds = %for.body
  %60 = load i32, i32* %i, align 4, !dbg !1640
  %inc = add nsw i32 %60, 1, !dbg !1640
  store i32 %inc, i32* %i, align 4, !dbg !1640
  br label %for.cond, !dbg !1641

for.end:                                          ; preds = %for.cond
  %61 = load i32, i32* %top, align 4, !dbg !1642
  %top99 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %tmp, i32 0, i32 1, !dbg !1643
  store i32 %61, i32* %top99, align 4, !dbg !1644
  br label %if.end106, !dbg !1645

if.else100:                                       ; preds = %if.end66
  %call101 = call %struct.bignum_st* @BN_value_one(), !dbg !1646
  %62 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1648
  %63 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1649
  %call102 = call i32 @BN_to_montgomery(%struct.bignum_st* %tmp, %struct.bignum_st* %call101, %struct.bn_mont_ctx_st* %62, %struct.bignum_ctx* %63), !dbg !1650
  %tobool103 = icmp ne i32 %call102, 0, !dbg !1650
  br i1 %tobool103, label %if.end105, label %if.then104, !dbg !1651

if.then104:                                       ; preds = %if.else100
  br label %err, !dbg !1652

if.end105:                                        ; preds = %if.else100
  br label %if.end106

if.end106:                                        ; preds = %if.end105, %for.end
  %64 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !1653
  %neg107 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %64, i32 0, i32 3, !dbg !1655
  %65 = load i32, i32* %neg107, align 4, !dbg !1655
  %tobool108 = icmp ne i32 %65, 0, !dbg !1653
  br i1 %tobool108, label %if.then112, label %lor.lhs.false, !dbg !1656

lor.lhs.false:                                    ; preds = %if.end106
  %66 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !1657
  %67 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1659
  %call109 = call i32 @BN_ucmp(%struct.bignum_st* %66, %struct.bignum_st* %67), !dbg !1660
  %cmp110 = icmp sge i32 %call109, 0, !dbg !1661
  br i1 %cmp110, label %if.then112, label %if.else121, !dbg !1662

if.then112:                                       ; preds = %lor.lhs.false, %if.end106
  %68 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !1663
  %69 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !1663
  %70 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1663
  %call113 = call i32 @BN_div(%struct.bignum_st* null, %struct.bignum_st* %am, %struct.bignum_st* %68, %struct.bignum_st* %69, %struct.bignum_ctx* %70), !dbg !1663
  %tobool114 = icmp ne i32 %call113, 0, !dbg !1663
  br i1 %tobool114, label %if.end116, label %if.then115, !dbg !1666

if.then115:                                       ; preds = %if.then112
  br label %err, !dbg !1667

if.end116:                                        ; preds = %if.then112
  %71 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1668
  %72 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1670
  %call117 = call i32 @BN_to_montgomery(%struct.bignum_st* %am, %struct.bignum_st* %am, %struct.bn_mont_ctx_st* %71, %struct.bignum_ctx* %72), !dbg !1671
  %tobool118 = icmp ne i32 %call117, 0, !dbg !1671
  br i1 %tobool118, label %if.end120, label %if.then119, !dbg !1672

if.then119:                                       ; preds = %if.end116
  br label %err, !dbg !1673

if.end120:                                        ; preds = %if.end116
  br label %if.end126, !dbg !1674

if.else121:                                       ; preds = %lor.lhs.false
  %73 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !1675
  %74 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1677
  %75 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1678
  %call122 = call i32 @BN_to_montgomery(%struct.bignum_st* %am, %struct.bignum_st* %73, %struct.bn_mont_ctx_st* %74, %struct.bignum_ctx* %75), !dbg !1679
  %tobool123 = icmp ne i32 %call122, 0, !dbg !1679
  br i1 %tobool123, label %if.end125, label %if.then124, !dbg !1680

if.then124:                                       ; preds = %if.else121
  br label %err, !dbg !1681

if.end125:                                        ; preds = %if.else121
  br label %if.end126

if.end126:                                        ; preds = %if.end125, %if.end120
  %76 = load i32, i32* %top, align 4, !dbg !1682
  %77 = load i8*, i8** %powerbuf, align 8, !dbg !1685
  %78 = load i32, i32* %window, align 4, !dbg !1686
  %call127 = call i32 @MOD_EXP_CTIME_COPY_TO_PREBUF(%struct.bignum_st* %tmp, i32 %76, i8* %77, i32 0, i32 %78), !dbg !1687
  %tobool128 = icmp ne i32 %call127, 0, !dbg !1687
  br i1 %tobool128, label %if.end130, label %if.then129, !dbg !1688

if.then129:                                       ; preds = %if.end126
  br label %err, !dbg !1689

if.end130:                                        ; preds = %if.end126
  %79 = load i32, i32* %top, align 4, !dbg !1690
  %80 = load i8*, i8** %powerbuf, align 8, !dbg !1692
  %81 = load i32, i32* %window, align 4, !dbg !1693
  %call131 = call i32 @MOD_EXP_CTIME_COPY_TO_PREBUF(%struct.bignum_st* %am, i32 %79, i8* %80, i32 1, i32 %81), !dbg !1694
  %tobool132 = icmp ne i32 %call131, 0, !dbg !1694
  br i1 %tobool132, label %if.end134, label %if.then133, !dbg !1695

if.then133:                                       ; preds = %if.end130
  br label %err, !dbg !1696

if.end134:                                        ; preds = %if.end130
  %82 = load i32, i32* %window, align 4, !dbg !1697
  %cmp135 = icmp sgt i32 %82, 1, !dbg !1699
  br i1 %cmp135, label %if.then137, label %if.end161, !dbg !1700

if.then137:                                       ; preds = %if.end134
  %83 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1701
  %84 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1704
  %call138 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %tmp, %struct.bignum_st* %am, %struct.bignum_st* %am, %struct.bn_mont_ctx_st* %83, %struct.bignum_ctx* %84), !dbg !1705
  %tobool139 = icmp ne i32 %call138, 0, !dbg !1705
  br i1 %tobool139, label %if.end141, label %if.then140, !dbg !1706

if.then140:                                       ; preds = %if.then137
  br label %err, !dbg !1707

if.end141:                                        ; preds = %if.then137
  %85 = load i32, i32* %top, align 4, !dbg !1708
  %86 = load i8*, i8** %powerbuf, align 8, !dbg !1710
  %87 = load i32, i32* %window, align 4, !dbg !1711
  %call142 = call i32 @MOD_EXP_CTIME_COPY_TO_PREBUF(%struct.bignum_st* %tmp, i32 %85, i8* %86, i32 2, i32 %87), !dbg !1712
  %tobool143 = icmp ne i32 %call142, 0, !dbg !1712
  br i1 %tobool143, label %if.end145, label %if.then144, !dbg !1713

if.then144:                                       ; preds = %if.end141
  br label %err, !dbg !1714

if.end145:                                        ; preds = %if.end141
  store i32 3, i32* %i, align 4, !dbg !1715
  br label %for.cond146, !dbg !1717

for.cond146:                                      ; preds = %for.inc158, %if.end145
  %88 = load i32, i32* %i, align 4, !dbg !1718
  %89 = load i32, i32* %numPowers, align 4, !dbg !1722
  %cmp147 = icmp slt i32 %88, %89, !dbg !1723
  br i1 %cmp147, label %for.body149, label %for.end160, !dbg !1724

for.body149:                                      ; preds = %for.cond146
  %90 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1725
  %91 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1728
  %call150 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %tmp, %struct.bignum_st* %am, %struct.bignum_st* %tmp, %struct.bn_mont_ctx_st* %90, %struct.bignum_ctx* %91), !dbg !1729
  %tobool151 = icmp ne i32 %call150, 0, !dbg !1729
  br i1 %tobool151, label %if.end153, label %if.then152, !dbg !1730

if.then152:                                       ; preds = %for.body149
  br label %err, !dbg !1731

if.end153:                                        ; preds = %for.body149
  %92 = load i32, i32* %top, align 4, !dbg !1732
  %93 = load i8*, i8** %powerbuf, align 8, !dbg !1734
  %94 = load i32, i32* %i, align 4, !dbg !1735
  %95 = load i32, i32* %window, align 4, !dbg !1736
  %call154 = call i32 @MOD_EXP_CTIME_COPY_TO_PREBUF(%struct.bignum_st* %tmp, i32 %92, i8* %93, i32 %94, i32 %95), !dbg !1737
  %tobool155 = icmp ne i32 %call154, 0, !dbg !1737
  br i1 %tobool155, label %if.end157, label %if.then156, !dbg !1738

if.then156:                                       ; preds = %if.end153
  br label %err, !dbg !1739

if.end157:                                        ; preds = %if.end153
  br label %for.inc158, !dbg !1740

for.inc158:                                       ; preds = %if.end157
  %96 = load i32, i32* %i, align 4, !dbg !1741
  %inc159 = add nsw i32 %96, 1, !dbg !1741
  store i32 %inc159, i32* %i, align 4, !dbg !1741
  br label %for.cond146, !dbg !1742

for.end160:                                       ; preds = %for.cond146
  br label %if.end161, !dbg !1743

if.end161:                                        ; preds = %for.end160, %if.end134
  %97 = load i32, i32* %bits, align 4, !dbg !1744
  %dec = add nsw i32 %97, -1, !dbg !1744
  store i32 %dec, i32* %bits, align 4, !dbg !1744
  store i32 0, i32* %wvalue, align 4, !dbg !1745
  %98 = load i32, i32* %bits, align 4, !dbg !1747
  %99 = load i32, i32* %window, align 4, !dbg !1748
  %rem = srem i32 %98, %99, !dbg !1749
  store i32 %rem, i32* %i, align 4, !dbg !1750
  br label %for.cond162, !dbg !1751

for.cond162:                                      ; preds = %for.inc169, %if.end161
  %100 = load i32, i32* %i, align 4, !dbg !1752
  %cmp163 = icmp sge i32 %100, 0, !dbg !1756
  br i1 %cmp163, label %for.body165, label %for.end172, !dbg !1757

for.body165:                                      ; preds = %for.cond162
  %101 = load i32, i32* %wvalue, align 4, !dbg !1758
  %shl166 = shl i32 %101, 1, !dbg !1759
  %102 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1760
  %103 = load i32, i32* %bits, align 4, !dbg !1761
  %call167 = call i32 @BN_is_bit_set(%struct.bignum_st* %102, i32 %103), !dbg !1762
  %add168 = add nsw i32 %shl166, %call167, !dbg !1763
  store i32 %add168, i32* %wvalue, align 4, !dbg !1764
  br label %for.inc169, !dbg !1765

for.inc169:                                       ; preds = %for.body165
  %104 = load i32, i32* %i, align 4, !dbg !1766
  %dec170 = add nsw i32 %104, -1, !dbg !1766
  store i32 %dec170, i32* %i, align 4, !dbg !1766
  %105 = load i32, i32* %bits, align 4, !dbg !1767
  %dec171 = add nsw i32 %105, -1, !dbg !1767
  store i32 %dec171, i32* %bits, align 4, !dbg !1767
  br label %for.cond162, !dbg !1768

for.end172:                                       ; preds = %for.cond162
  %106 = load i32, i32* %top, align 4, !dbg !1769
  %107 = load i8*, i8** %powerbuf, align 8, !dbg !1771
  %108 = load i32, i32* %wvalue, align 4, !dbg !1772
  %109 = load i32, i32* %window, align 4, !dbg !1773
  %call173 = call i32 @MOD_EXP_CTIME_COPY_FROM_PREBUF(%struct.bignum_st* %tmp, i32 %106, i8* %107, i32 %108, i32 %109), !dbg !1774
  %tobool174 = icmp ne i32 %call173, 0, !dbg !1774
  br i1 %tobool174, label %if.end176, label %if.then175, !dbg !1775

if.then175:                                       ; preds = %for.end172
  br label %err, !dbg !1776

if.end176:                                        ; preds = %for.end172
  br label %while.cond, !dbg !1777

while.cond:                                       ; preds = %if.end201, %if.end176
  %110 = load i32, i32* %bits, align 4, !dbg !1778
  %cmp177 = icmp sge i32 %110, 0, !dbg !1781
  br i1 %cmp177, label %while.body, label %while.end, !dbg !1777

while.body:                                       ; preds = %while.cond
  store i32 0, i32* %wvalue, align 4, !dbg !1782
  store i32 0, i32* %i, align 4, !dbg !1784
  br label %for.cond179, !dbg !1786

for.cond179:                                      ; preds = %for.inc190, %while.body
  %111 = load i32, i32* %i, align 4, !dbg !1787
  %112 = load i32, i32* %window, align 4, !dbg !1791
  %cmp180 = icmp slt i32 %111, %112, !dbg !1792
  br i1 %cmp180, label %for.body182, label %for.end193, !dbg !1793

for.body182:                                      ; preds = %for.cond179
  %113 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1794
  %114 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1797
  %call183 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %tmp, %struct.bignum_st* %tmp, %struct.bignum_st* %tmp, %struct.bn_mont_ctx_st* %113, %struct.bignum_ctx* %114), !dbg !1798
  %tobool184 = icmp ne i32 %call183, 0, !dbg !1798
  br i1 %tobool184, label %if.end186, label %if.then185, !dbg !1799

if.then185:                                       ; preds = %for.body182
  br label %err, !dbg !1800

if.end186:                                        ; preds = %for.body182
  %115 = load i32, i32* %wvalue, align 4, !dbg !1801
  %shl187 = shl i32 %115, 1, !dbg !1802
  %116 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !1803
  %117 = load i32, i32* %bits, align 4, !dbg !1804
  %call188 = call i32 @BN_is_bit_set(%struct.bignum_st* %116, i32 %117), !dbg !1805
  %add189 = add nsw i32 %shl187, %call188, !dbg !1806
  store i32 %add189, i32* %wvalue, align 4, !dbg !1807
  br label %for.inc190, !dbg !1808

for.inc190:                                       ; preds = %if.end186
  %118 = load i32, i32* %i, align 4, !dbg !1809
  %inc191 = add nsw i32 %118, 1, !dbg !1809
  store i32 %inc191, i32* %i, align 4, !dbg !1809
  %119 = load i32, i32* %bits, align 4, !dbg !1810
  %dec192 = add nsw i32 %119, -1, !dbg !1810
  store i32 %dec192, i32* %bits, align 4, !dbg !1810
  br label %for.cond179, !dbg !1811

for.end193:                                       ; preds = %for.cond179
  %120 = load i32, i32* %top, align 4, !dbg !1812
  %121 = load i8*, i8** %powerbuf, align 8, !dbg !1814
  %122 = load i32, i32* %wvalue, align 4, !dbg !1815
  %123 = load i32, i32* %window, align 4, !dbg !1816
  %call194 = call i32 @MOD_EXP_CTIME_COPY_FROM_PREBUF(%struct.bignum_st* %am, i32 %120, i8* %121, i32 %122, i32 %123), !dbg !1817
  %tobool195 = icmp ne i32 %call194, 0, !dbg !1817
  br i1 %tobool195, label %if.end197, label %if.then196, !dbg !1818

if.then196:                                       ; preds = %for.end193
  br label %err, !dbg !1819

if.end197:                                        ; preds = %for.end193
  %124 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1820
  %125 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1822
  %call198 = call i32 @BN_mod_mul_montgomery(%struct.bignum_st* %tmp, %struct.bignum_st* %tmp, %struct.bignum_st* %am, %struct.bn_mont_ctx_st* %124, %struct.bignum_ctx* %125), !dbg !1823
  %tobool199 = icmp ne i32 %call198, 0, !dbg !1823
  br i1 %tobool199, label %if.end201, label %if.then200, !dbg !1824

if.then200:                                       ; preds = %if.end197
  br label %err, !dbg !1825

if.end201:                                        ; preds = %if.end197
  br label %while.cond, !dbg !1777

while.end:                                        ; preds = %while.cond
  %126 = load %struct.bignum_st*, %struct.bignum_st** %rr.addr, align 8, !dbg !1826
  %127 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1828
  %128 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1829
  %call202 = call i32 @BN_from_montgomery(%struct.bignum_st* %126, %struct.bignum_st* %tmp, %struct.bn_mont_ctx_st* %127, %struct.bignum_ctx* %128), !dbg !1830
  %tobool203 = icmp ne i32 %call202, 0, !dbg !1830
  br i1 %tobool203, label %if.end205, label %if.then204, !dbg !1831

if.then204:                                       ; preds = %while.end
  br label %err, !dbg !1832

if.end205:                                        ; preds = %while.end
  store i32 1, i32* %ret, align 4, !dbg !1833
  br label %err, !dbg !1834

err:                                              ; preds = %if.end205, %if.then204, %if.then200, %if.then196, %if.then185, %if.then175, %if.then156, %if.then152, %if.then144, %if.then140, %if.then133, %if.then129, %if.then124, %if.then119, %if.then115, %if.then104, %if.then59, %if.then21, %if.then17
  %129 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %in_mont.addr, align 8, !dbg !1835
  %cmp206 = icmp eq %struct.bn_mont_ctx_st* %129, null, !dbg !1837
  br i1 %cmp206, label %if.then208, label %if.end209, !dbg !1838

if.then208:                                       ; preds = %err
  %130 = load %struct.bn_mont_ctx_st*, %struct.bn_mont_ctx_st** %mont, align 8, !dbg !1839
  call void @BN_MONT_CTX_free(%struct.bn_mont_ctx_st* %130), !dbg !1840
  br label %if.end209, !dbg !1840

if.end209:                                        ; preds = %if.then208, %err
  %131 = load i8*, i8** %powerbuf, align 8, !dbg !1841
  %cmp210 = icmp ne i8* %131, null, !dbg !1843
  br i1 %cmp210, label %if.then212, label %if.end214, !dbg !1844

if.then212:                                       ; preds = %if.end209
  %132 = load i8*, i8** %powerbuf, align 8, !dbg !1845
  %133 = load i32, i32* %powerbufLen, align 4, !dbg !1847
  %conv213 = sext i32 %133 to i64, !dbg !1847
  call void @OPENSSL_cleanse(i8* %132, i64 %conv213), !dbg !1848
  %134 = load i8*, i8** %powerbufFree, align 8, !dbg !1849
  call void @CRYPTO_free(i8* %134, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 1091), !dbg !1849
  br label %if.end214, !dbg !1850

if.end214:                                        ; preds = %if.then212, %if.end209
  %135 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !1851
  call void @BN_CTX_end(%struct.bignum_ctx* %135), !dbg !1852
  %136 = load i32, i32* %ret, align 4, !dbg !1853
  store i32 %136, i32* %retval, !dbg !1854
  br label %return, !dbg !1854

return:                                           ; preds = %if.end214, %if.end10, %if.then
  %137 = load i32, i32* %retval, !dbg !1855
  ret i32 %137, !dbg !1855
}

declare %struct.bn_mont_ctx_st* @BN_MONT_CTX_new() #2

declare i32 @BN_MONT_CTX_set(%struct.bn_mont_ctx_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

declare i32 @BN_ucmp(%struct.bignum_st*, %struct.bignum_st*) #2

declare i32 @BN_to_montgomery(%struct.bignum_st*, %struct.bignum_st*, %struct.bn_mont_ctx_st*, %struct.bignum_ctx*) #2

declare i32 @BN_mod_mul_montgomery(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bn_mont_ctx_st*, %struct.bignum_ctx*) #2

declare %struct.bignum_st* @bn_wexpand(%struct.bignum_st*, i32) #2

declare void @bn_correct_top(%struct.bignum_st*) #2

declare %struct.bignum_st* @BN_value_one() #2

declare i32 @BN_from_montgomery(%struct.bignum_st*, %struct.bignum_st*, %struct.bn_mont_ctx_st*, %struct.bignum_ctx*) #2

declare void @BN_MONT_CTX_free(%struct.bn_mont_ctx_st*) #2

declare i8* @CRYPTO_malloc(i64, i8*, i32) #2

; Function Attrs: nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture, i8, i64, i32, i1) #3

declare i32 @BN_div(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

; Function Attrs: nounwind uwtable
define internal i32 @MOD_EXP_CTIME_COPY_TO_PREBUF(%struct.bignum_st* %b, i32 %top, i8* %buf, i32 %idx, i32 %window) #0 {
entry:
  %b.addr = alloca %struct.bignum_st*, align 8
  %top.addr = alloca i32, align 4
  %buf.addr = alloca i8*, align 8
  %idx.addr = alloca i32, align 4
  %window.addr = alloca i32, align 4
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %width = alloca i32, align 4
  %table = alloca i64*, align 8
  store %struct.bignum_st* %b, %struct.bignum_st** %b.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %b.addr, metadata !1856, metadata !81), !dbg !1857
  store i32 %top, i32* %top.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %top.addr, metadata !1858, metadata !81), !dbg !1859
  store i8* %buf, i8** %buf.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %buf.addr, metadata !1860, metadata !81), !dbg !1861
  store i32 %idx, i32* %idx.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %idx.addr, metadata !1862, metadata !81), !dbg !1863
  store i32 %window, i32* %window.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %window.addr, metadata !1864, metadata !81), !dbg !1865
  call void @llvm.dbg.declare(metadata i32* %i, metadata !1866, metadata !81), !dbg !1867
  call void @llvm.dbg.declare(metadata i32* %j, metadata !1868, metadata !81), !dbg !1869
  call void @llvm.dbg.declare(metadata i32* %width, metadata !1870, metadata !81), !dbg !1871
  %0 = load i32, i32* %window.addr, align 4, !dbg !1872
  %shl = shl i32 1, %0, !dbg !1873
  store i32 %shl, i32* %width, align 4, !dbg !1871
  call void @llvm.dbg.declare(metadata i64** %table, metadata !1874, metadata !81), !dbg !1875
  %1 = load i8*, i8** %buf.addr, align 8, !dbg !1876
  %2 = bitcast i8* %1 to i64*, !dbg !1877
  store i64* %2, i64** %table, align 8, !dbg !1875
  %3 = load i32, i32* %top.addr, align 4, !dbg !1878
  %4 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !1880
  %top1 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %4, i32 0, i32 1, !dbg !1881
  %5 = load i32, i32* %top1, align 4, !dbg !1881
  %cmp = icmp sgt i32 %3, %5, !dbg !1882
  br i1 %cmp, label %if.then, label %if.end, !dbg !1883

if.then:                                          ; preds = %entry
  %6 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !1884
  %top2 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %6, i32 0, i32 1, !dbg !1885
  %7 = load i32, i32* %top2, align 4, !dbg !1885
  store i32 %7, i32* %top.addr, align 4, !dbg !1886
  br label %if.end, !dbg !1887

if.end:                                           ; preds = %if.then, %entry
  store i32 0, i32* %i, align 4, !dbg !1888
  %8 = load i32, i32* %idx.addr, align 4, !dbg !1890
  store i32 %8, i32* %j, align 4, !dbg !1891
  br label %for.cond, !dbg !1892

for.cond:                                         ; preds = %for.inc, %if.end
  %9 = load i32, i32* %i, align 4, !dbg !1893
  %10 = load i32, i32* %top.addr, align 4, !dbg !1897
  %cmp3 = icmp slt i32 %9, %10, !dbg !1898
  br i1 %cmp3, label %for.body, label %for.end, !dbg !1899

for.body:                                         ; preds = %for.cond
  %11 = load i32, i32* %i, align 4, !dbg !1900
  %idxprom = sext i32 %11 to i64, !dbg !1902
  %12 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !1902
  %d = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %12, i32 0, i32 0, !dbg !1903
  %13 = load i64*, i64** %d, align 8, !dbg !1903
  %arrayidx = getelementptr inbounds i64, i64* %13, i64 %idxprom, !dbg !1902
  %14 = load i64, i64* %arrayidx, align 8, !dbg !1902
  %15 = load i32, i32* %j, align 4, !dbg !1904
  %idxprom4 = sext i32 %15 to i64, !dbg !1905
  %16 = load i64*, i64** %table, align 8, !dbg !1905
  %arrayidx5 = getelementptr inbounds i64, i64* %16, i64 %idxprom4, !dbg !1905
  store i64 %14, i64* %arrayidx5, align 8, !dbg !1906
  br label %for.inc, !dbg !1907

for.inc:                                          ; preds = %for.body
  %17 = load i32, i32* %i, align 4, !dbg !1908
  %inc = add nsw i32 %17, 1, !dbg !1908
  store i32 %inc, i32* %i, align 4, !dbg !1908
  %18 = load i32, i32* %width, align 4, !dbg !1909
  %19 = load i32, i32* %j, align 4, !dbg !1910
  %add = add nsw i32 %19, %18, !dbg !1910
  store i32 %add, i32* %j, align 4, !dbg !1910
  br label %for.cond, !dbg !1911

for.end:                                          ; preds = %for.cond
  ret i32 1, !dbg !1912
}

; Function Attrs: nounwind uwtable
define internal i32 @MOD_EXP_CTIME_COPY_FROM_PREBUF(%struct.bignum_st* %b, i32 %top, i8* %buf, i32 %idx, i32 %window) #0 {
entry:
  %retval = alloca i32, align 4
  %b.addr = alloca %struct.bignum_st*, align 8
  %top.addr = alloca i32, align 4
  %buf.addr = alloca i8*, align 8
  %idx.addr = alloca i32, align 4
  %window.addr = alloca i32, align 4
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %width = alloca i32, align 4
  %table = alloca i64*, align 8
  %acc = alloca i64, align 8
  %xstride = alloca i32, align 4
  %y0 = alloca i64, align 8
  %y1 = alloca i64, align 8
  %y2 = alloca i64, align 8
  %y3 = alloca i64, align 8
  %acc39 = alloca i64, align 8
  store %struct.bignum_st* %b, %struct.bignum_st** %b.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %b.addr, metadata !1913, metadata !81), !dbg !1914
  store i32 %top, i32* %top.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %top.addr, metadata !1915, metadata !81), !dbg !1916
  store i8* %buf, i8** %buf.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %buf.addr, metadata !1917, metadata !81), !dbg !1918
  store i32 %idx, i32* %idx.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %idx.addr, metadata !1919, metadata !81), !dbg !1920
  store i32 %window, i32* %window.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %window.addr, metadata !1921, metadata !81), !dbg !1922
  call void @llvm.dbg.declare(metadata i32* %i, metadata !1923, metadata !81), !dbg !1924
  call void @llvm.dbg.declare(metadata i32* %j, metadata !1925, metadata !81), !dbg !1926
  call void @llvm.dbg.declare(metadata i32* %width, metadata !1927, metadata !81), !dbg !1928
  %0 = load i32, i32* %window.addr, align 4, !dbg !1929
  %shl = shl i32 1, %0, !dbg !1930
  store i32 %shl, i32* %width, align 4, !dbg !1928
  call void @llvm.dbg.declare(metadata i64** %table, metadata !1931, metadata !81), !dbg !1932
  %1 = load i8*, i8** %buf.addr, align 8, !dbg !1933
  %2 = bitcast i8* %1 to i64*, !dbg !1934
  store i64* %2, i64** %table, align 8, !dbg !1932
  %3 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !1935
  %4 = load i32, i32* %top.addr, align 4, !dbg !1937
  %call = call %struct.bignum_st* @bn_wexpand(%struct.bignum_st* %3, i32 %4), !dbg !1938
  %cmp = icmp eq %struct.bignum_st* %call, null, !dbg !1939
  br i1 %cmp, label %if.then, label %if.end, !dbg !1940

if.then:                                          ; preds = %entry
  store i32 0, i32* %retval, !dbg !1941
  br label %return, !dbg !1941

if.end:                                           ; preds = %entry
  %5 = load i32, i32* %window.addr, align 4, !dbg !1942
  %cmp1 = icmp sle i32 %5, 3, !dbg !1944
  br i1 %cmp1, label %if.then2, label %if.else, !dbg !1945

if.then2:                                         ; preds = %if.end
  store i32 0, i32* %i, align 4, !dbg !1946
  br label %for.cond, !dbg !1949

for.cond:                                         ; preds = %for.inc11, %if.then2
  %6 = load i32, i32* %i, align 4, !dbg !1950
  %7 = load i32, i32* %top.addr, align 4, !dbg !1954
  %cmp3 = icmp slt i32 %6, %7, !dbg !1955
  br i1 %cmp3, label %for.body, label %for.end13, !dbg !1956

for.body:                                         ; preds = %for.cond
  call void @llvm.dbg.declare(metadata i64* %acc, metadata !1957, metadata !81), !dbg !1959
  store i64 0, i64* %acc, align 8, !dbg !1959
  store i32 0, i32* %j, align 4, !dbg !1960
  br label %for.cond4, !dbg !1962

for.cond4:                                        ; preds = %for.inc, %for.body
  %8 = load i32, i32* %j, align 4, !dbg !1963
  %9 = load i32, i32* %width, align 4, !dbg !1967
  %cmp5 = icmp slt i32 %8, %9, !dbg !1968
  br i1 %cmp5, label %for.body6, label %for.end, !dbg !1969

for.body6:                                        ; preds = %for.cond4
  %10 = load i32, i32* %j, align 4, !dbg !1970
  %idxprom = sext i32 %10 to i64, !dbg !1972
  %11 = load i64*, i64** %table, align 8, !dbg !1972
  %arrayidx = getelementptr inbounds i64, i64* %11, i64 %idxprom, !dbg !1972
  %12 = load volatile i64, i64* %arrayidx, align 8, !dbg !1972
  %13 = load i32, i32* %j, align 4, !dbg !1973
  %14 = load i32, i32* %idx.addr, align 4, !dbg !1974
  %call7 = call i32 @constant_time_eq_int(i32 %13, i32 %14), !dbg !1975
  %and = and i32 %call7, 1, !dbg !1976
  %conv = zext i32 %and to i64, !dbg !1977
  %sub = sub i64 0, %conv, !dbg !1978
  %and8 = and i64 %12, %sub, !dbg !1979
  %15 = load i64, i64* %acc, align 8, !dbg !1980
  %or = or i64 %15, %and8, !dbg !1980
  store i64 %or, i64* %acc, align 8, !dbg !1980
  br label %for.inc, !dbg !1981

for.inc:                                          ; preds = %for.body6
  %16 = load i32, i32* %j, align 4, !dbg !1982
  %inc = add nsw i32 %16, 1, !dbg !1982
  store i32 %inc, i32* %j, align 4, !dbg !1982
  br label %for.cond4, !dbg !1983

for.end:                                          ; preds = %for.cond4
  %17 = load i64, i64* %acc, align 8, !dbg !1984
  %18 = load i32, i32* %i, align 4, !dbg !1985
  %idxprom9 = sext i32 %18 to i64, !dbg !1986
  %19 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !1986
  %d = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %19, i32 0, i32 0, !dbg !1987
  %20 = load i64*, i64** %d, align 8, !dbg !1987
  %arrayidx10 = getelementptr inbounds i64, i64* %20, i64 %idxprom9, !dbg !1986
  store i64 %17, i64* %arrayidx10, align 8, !dbg !1988
  br label %for.inc11, !dbg !1989

for.inc11:                                        ; preds = %for.end
  %21 = load i32, i32* %i, align 4, !dbg !1990
  %inc12 = add nsw i32 %21, 1, !dbg !1990
  store i32 %inc12, i32* %i, align 4, !dbg !1990
  %22 = load i32, i32* %width, align 4, !dbg !1991
  %23 = load i64*, i64** %table, align 8, !dbg !1992
  %idx.ext = sext i32 %22 to i64, !dbg !1992
  %add.ptr = getelementptr inbounds i64, i64* %23, i64 %idx.ext, !dbg !1992
  store i64* %add.ptr, i64** %table, align 8, !dbg !1992
  br label %for.cond, !dbg !1993

for.end13:                                        ; preds = %for.cond
  br label %if.end82, !dbg !1994

if.else:                                          ; preds = %if.end
  call void @llvm.dbg.declare(metadata i32* %xstride, metadata !1995, metadata !81), !dbg !1997
  %24 = load i32, i32* %window.addr, align 4, !dbg !1998
  %sub14 = sub nsw i32 %24, 2, !dbg !1999
  %shl15 = shl i32 1, %sub14, !dbg !2000
  store i32 %shl15, i32* %xstride, align 4, !dbg !1997
  call void @llvm.dbg.declare(metadata i64* %y0, metadata !2001, metadata !81), !dbg !2002
  call void @llvm.dbg.declare(metadata i64* %y1, metadata !2003, metadata !81), !dbg !2004
  call void @llvm.dbg.declare(metadata i64* %y2, metadata !2005, metadata !81), !dbg !2006
  call void @llvm.dbg.declare(metadata i64* %y3, metadata !2007, metadata !81), !dbg !2008
  %25 = load i32, i32* %idx.addr, align 4, !dbg !2009
  %26 = load i32, i32* %window.addr, align 4, !dbg !2010
  %sub16 = sub nsw i32 %26, 2, !dbg !2011
  %shr = ashr i32 %25, %sub16, !dbg !2012
  store i32 %shr, i32* %i, align 4, !dbg !2013
  %27 = load i32, i32* %xstride, align 4, !dbg !2014
  %sub17 = sub nsw i32 %27, 1, !dbg !2015
  %28 = load i32, i32* %idx.addr, align 4, !dbg !2016
  %and18 = and i32 %28, %sub17, !dbg !2016
  store i32 %and18, i32* %idx.addr, align 4, !dbg !2016
  %29 = load i32, i32* %i, align 4, !dbg !2017
  %call19 = call i32 @constant_time_eq_int(i32 %29, i32 0), !dbg !2018
  %and20 = and i32 %call19, 1, !dbg !2019
  %conv21 = zext i32 %and20 to i64, !dbg !2020
  %sub22 = sub i64 0, %conv21, !dbg !2021
  store i64 %sub22, i64* %y0, align 8, !dbg !2022
  %30 = load i32, i32* %i, align 4, !dbg !2023
  %call23 = call i32 @constant_time_eq_int(i32 %30, i32 1), !dbg !2024
  %and24 = and i32 %call23, 1, !dbg !2025
  %conv25 = zext i32 %and24 to i64, !dbg !2026
  %sub26 = sub i64 0, %conv25, !dbg !2027
  store i64 %sub26, i64* %y1, align 8, !dbg !2028
  %31 = load i32, i32* %i, align 4, !dbg !2029
  %call27 = call i32 @constant_time_eq_int(i32 %31, i32 2), !dbg !2030
  %and28 = and i32 %call27, 1, !dbg !2031
  %conv29 = zext i32 %and28 to i64, !dbg !2032
  %sub30 = sub i64 0, %conv29, !dbg !2033
  store i64 %sub30, i64* %y2, align 8, !dbg !2034
  %32 = load i32, i32* %i, align 4, !dbg !2035
  %call31 = call i32 @constant_time_eq_int(i32 %32, i32 3), !dbg !2036
  %and32 = and i32 %call31, 1, !dbg !2037
  %conv33 = zext i32 %and32 to i64, !dbg !2038
  %sub34 = sub i64 0, %conv33, !dbg !2039
  store i64 %sub34, i64* %y3, align 8, !dbg !2040
  store i32 0, i32* %i, align 4, !dbg !2041
  br label %for.cond35, !dbg !2043

for.cond35:                                       ; preds = %for.inc77, %if.else
  %33 = load i32, i32* %i, align 4, !dbg !2044
  %34 = load i32, i32* %top.addr, align 4, !dbg !2048
  %cmp36 = icmp slt i32 %33, %34, !dbg !2049
  br i1 %cmp36, label %for.body38, label %for.end81, !dbg !2050

for.body38:                                       ; preds = %for.cond35
  call void @llvm.dbg.declare(metadata i64* %acc39, metadata !2051, metadata !81), !dbg !2053
  store i64 0, i64* %acc39, align 8, !dbg !2053
  store i32 0, i32* %j, align 4, !dbg !2054
  br label %for.cond40, !dbg !2056

for.cond40:                                       ; preds = %for.inc71, %for.body38
  %35 = load i32, i32* %j, align 4, !dbg !2057
  %36 = load i32, i32* %xstride, align 4, !dbg !2061
  %cmp41 = icmp slt i32 %35, %36, !dbg !2062
  br i1 %cmp41, label %for.body43, label %for.end73, !dbg !2063

for.body43:                                       ; preds = %for.cond40
  %37 = load i32, i32* %j, align 4, !dbg !2064
  %38 = load i32, i32* %xstride, align 4, !dbg !2066
  %mul = mul nsw i32 0, %38, !dbg !2067
  %add = add nsw i32 %37, %mul, !dbg !2068
  %idxprom44 = sext i32 %add to i64, !dbg !2069
  %39 = load i64*, i64** %table, align 8, !dbg !2069
  %arrayidx45 = getelementptr inbounds i64, i64* %39, i64 %idxprom44, !dbg !2069
  %40 = load volatile i64, i64* %arrayidx45, align 8, !dbg !2069
  %41 = load i64, i64* %y0, align 8, !dbg !2070
  %and46 = and i64 %40, %41, !dbg !2071
  %42 = load i32, i32* %j, align 4, !dbg !2072
  %43 = load i32, i32* %xstride, align 4, !dbg !2073
  %mul47 = mul nsw i32 1, %43, !dbg !2074
  %add48 = add nsw i32 %42, %mul47, !dbg !2075
  %idxprom49 = sext i32 %add48 to i64, !dbg !2076
  %44 = load i64*, i64** %table, align 8, !dbg !2076
  %arrayidx50 = getelementptr inbounds i64, i64* %44, i64 %idxprom49, !dbg !2076
  %45 = load volatile i64, i64* %arrayidx50, align 8, !dbg !2076
  %46 = load i64, i64* %y1, align 8, !dbg !2077
  %and51 = and i64 %45, %46, !dbg !2078
  %or52 = or i64 %and46, %and51, !dbg !2079
  %47 = load i32, i32* %j, align 4, !dbg !2080
  %48 = load i32, i32* %xstride, align 4, !dbg !2081
  %mul53 = mul nsw i32 2, %48, !dbg !2082
  %add54 = add nsw i32 %47, %mul53, !dbg !2083
  %idxprom55 = sext i32 %add54 to i64, !dbg !2084
  %49 = load i64*, i64** %table, align 8, !dbg !2084
  %arrayidx56 = getelementptr inbounds i64, i64* %49, i64 %idxprom55, !dbg !2084
  %50 = load volatile i64, i64* %arrayidx56, align 8, !dbg !2084
  %51 = load i64, i64* %y2, align 8, !dbg !2085
  %and57 = and i64 %50, %51, !dbg !2086
  %or58 = or i64 %or52, %and57, !dbg !2087
  %52 = load i32, i32* %j, align 4, !dbg !2088
  %53 = load i32, i32* %xstride, align 4, !dbg !2089
  %mul59 = mul nsw i32 3, %53, !dbg !2090
  %add60 = add nsw i32 %52, %mul59, !dbg !2091
  %idxprom61 = sext i32 %add60 to i64, !dbg !2092
  %54 = load i64*, i64** %table, align 8, !dbg !2092
  %arrayidx62 = getelementptr inbounds i64, i64* %54, i64 %idxprom61, !dbg !2092
  %55 = load volatile i64, i64* %arrayidx62, align 8, !dbg !2092
  %56 = load i64, i64* %y3, align 8, !dbg !2093
  %and63 = and i64 %55, %56, !dbg !2094
  %or64 = or i64 %or58, %and63, !dbg !2095
  %57 = load i32, i32* %j, align 4, !dbg !2096
  %58 = load i32, i32* %idx.addr, align 4, !dbg !2097
  %call65 = call i32 @constant_time_eq_int(i32 %57, i32 %58), !dbg !2098
  %and66 = and i32 %call65, 1, !dbg !2099
  %conv67 = zext i32 %and66 to i64, !dbg !2100
  %sub68 = sub i64 0, %conv67, !dbg !2101
  %and69 = and i64 %or64, %sub68, !dbg !2102
  %59 = load i64, i64* %acc39, align 8, !dbg !2103
  %or70 = or i64 %59, %and69, !dbg !2103
  store i64 %or70, i64* %acc39, align 8, !dbg !2103
  br label %for.inc71, !dbg !2104

for.inc71:                                        ; preds = %for.body43
  %60 = load i32, i32* %j, align 4, !dbg !2105
  %inc72 = add nsw i32 %60, 1, !dbg !2105
  store i32 %inc72, i32* %j, align 4, !dbg !2105
  br label %for.cond40, !dbg !2106

for.end73:                                        ; preds = %for.cond40
  %61 = load i64, i64* %acc39, align 8, !dbg !2107
  %62 = load i32, i32* %i, align 4, !dbg !2108
  %idxprom74 = sext i32 %62 to i64, !dbg !2109
  %63 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !2109
  %d75 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %63, i32 0, i32 0, !dbg !2110
  %64 = load i64*, i64** %d75, align 8, !dbg !2110
  %arrayidx76 = getelementptr inbounds i64, i64* %64, i64 %idxprom74, !dbg !2109
  store i64 %61, i64* %arrayidx76, align 8, !dbg !2111
  br label %for.inc77, !dbg !2112

for.inc77:                                        ; preds = %for.end73
  %65 = load i32, i32* %i, align 4, !dbg !2113
  %inc78 = add nsw i32 %65, 1, !dbg !2113
  store i32 %inc78, i32* %i, align 4, !dbg !2113
  %66 = load i32, i32* %width, align 4, !dbg !2114
  %67 = load i64*, i64** %table, align 8, !dbg !2115
  %idx.ext79 = sext i32 %66 to i64, !dbg !2115
  %add.ptr80 = getelementptr inbounds i64, i64* %67, i64 %idx.ext79, !dbg !2115
  store i64* %add.ptr80, i64** %table, align 8, !dbg !2115
  br label %for.cond35, !dbg !2116

for.end81:                                        ; preds = %for.cond35
  br label %if.end82

if.end82:                                         ; preds = %for.end81, %for.end13
  %68 = load i32, i32* %top.addr, align 4, !dbg !2117
  %69 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !2118
  %top83 = getelementptr inbounds %struct.bignum_st, %struct.bignum_st* %69, i32 0, i32 1, !dbg !2119
  store i32 %68, i32* %top83, align 4, !dbg !2120
  %70 = load %struct.bignum_st*, %struct.bignum_st** %b.addr, align 8, !dbg !2121
  call void @bn_correct_top(%struct.bignum_st* %70), !dbg !2122
  store i32 1, i32* %retval, !dbg !2123
  br label %return, !dbg !2123

return:                                           ; preds = %if.end82, %if.then
  %71 = load i32, i32* %retval, !dbg !2124
  ret i32 %71, !dbg !2124
}

declare void @OPENSSL_cleanse(i8*, i64) #2

declare void @CRYPTO_free(i8*, i8*, i32) #2

declare i32 @BN_mul_word(%struct.bignum_st*, i64) #2

; Function Attrs: nounwind uwtable
define i32 @BN_mod_exp_simple(%struct.bignum_st* %r, %struct.bignum_st* %a, %struct.bignum_st* %p, %struct.bignum_st* %m, %struct.bignum_ctx* %ctx) #0 {
entry:
  %retval = alloca i32, align 4
  %r.addr = alloca %struct.bignum_st*, align 8
  %a.addr = alloca %struct.bignum_st*, align 8
  %p.addr = alloca %struct.bignum_st*, align 8
  %m.addr = alloca %struct.bignum_st*, align 8
  %ctx.addr = alloca %struct.bignum_ctx*, align 8
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %bits = alloca i32, align 4
  %ret = alloca i32, align 4
  %wstart = alloca i32, align 4
  %wend = alloca i32, align 4
  %window = alloca i32, align 4
  %wvalue = alloca i32, align 4
  %start = alloca i32, align 4
  %d = alloca %struct.bignum_st*, align 8
  %val = alloca [32 x %struct.bignum_st*], align 16
  store %struct.bignum_st* %r, %struct.bignum_st** %r.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %r.addr, metadata !2125, metadata !81), !dbg !2126
  store %struct.bignum_st* %a, %struct.bignum_st** %a.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %a.addr, metadata !2127, metadata !81), !dbg !2128
  store %struct.bignum_st* %p, %struct.bignum_st** %p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %p.addr, metadata !2129, metadata !81), !dbg !2130
  store %struct.bignum_st* %m, %struct.bignum_st** %m.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %m.addr, metadata !2131, metadata !81), !dbg !2132
  store %struct.bignum_ctx* %ctx, %struct.bignum_ctx** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.bignum_ctx** %ctx.addr, metadata !2133, metadata !81), !dbg !2134
  call void @llvm.dbg.declare(metadata i32* %i, metadata !2135, metadata !81), !dbg !2136
  call void @llvm.dbg.declare(metadata i32* %j, metadata !2137, metadata !81), !dbg !2138
  call void @llvm.dbg.declare(metadata i32* %bits, metadata !2139, metadata !81), !dbg !2140
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !2141, metadata !81), !dbg !2142
  store i32 0, i32* %ret, align 4, !dbg !2142
  call void @llvm.dbg.declare(metadata i32* %wstart, metadata !2143, metadata !81), !dbg !2144
  call void @llvm.dbg.declare(metadata i32* %wend, metadata !2145, metadata !81), !dbg !2146
  call void @llvm.dbg.declare(metadata i32* %window, metadata !2147, metadata !81), !dbg !2148
  call void @llvm.dbg.declare(metadata i32* %wvalue, metadata !2149, metadata !81), !dbg !2150
  call void @llvm.dbg.declare(metadata i32* %start, metadata !2151, metadata !81), !dbg !2152
  store i32 1, i32* %start, align 4, !dbg !2152
  call void @llvm.dbg.declare(metadata %struct.bignum_st** %d, metadata !2153, metadata !81), !dbg !2154
  call void @llvm.dbg.declare(metadata [32 x %struct.bignum_st*]* %val, metadata !2155, metadata !81), !dbg !2156
  %0 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !2157
  %call = call i32 @BN_get_flags(%struct.bignum_st* %0, i32 4), !dbg !2159
  %cmp = icmp ne i32 %call, 0, !dbg !2160
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !2161

lor.lhs.false:                                    ; preds = %entry
  %1 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !2162
  %call1 = call i32 @BN_get_flags(%struct.bignum_st* %1, i32 4), !dbg !2164
  %cmp2 = icmp ne i32 %call1, 0, !dbg !2165
  br i1 %cmp2, label %if.then, label %lor.lhs.false3, !dbg !2166

lor.lhs.false3:                                   ; preds = %lor.lhs.false
  %2 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2167
  %call4 = call i32 @BN_get_flags(%struct.bignum_st* %2, i32 4), !dbg !2168
  %cmp5 = icmp ne i32 %call4, 0, !dbg !2169
  br i1 %cmp5, label %if.then, label %if.end, !dbg !2170

if.then:                                          ; preds = %lor.lhs.false3, %lor.lhs.false, %entry
  call void @ERR_put_error(i32 3, i32 126, i32 66, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str, i32 0, i32 0), i32 1259), !dbg !2171
  store i32 0, i32* %retval, !dbg !2173
  br label %return, !dbg !2173

if.end:                                           ; preds = %lor.lhs.false3
  %3 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !2174
  %call6 = call i32 @BN_num_bits(%struct.bignum_st* %3), !dbg !2175
  store i32 %call6, i32* %bits, align 4, !dbg !2176
  %4 = load i32, i32* %bits, align 4, !dbg !2177
  %cmp7 = icmp eq i32 %4, 0, !dbg !2179
  br i1 %cmp7, label %if.then8, label %if.end14, !dbg !2180

if.then8:                                         ; preds = %if.end
  %5 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2181
  %call9 = call i32 @BN_is_one(%struct.bignum_st* %5), !dbg !2184
  %tobool = icmp ne i32 %call9, 0, !dbg !2184
  br i1 %tobool, label %if.then10, label %if.else, !dbg !2185

if.then10:                                        ; preds = %if.then8
  store i32 1, i32* %ret, align 4, !dbg !2186
  %6 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2188
  %call11 = call i32 @BN_set_word(%struct.bignum_st* %6, i64 0), !dbg !2188
  br label %if.end13, !dbg !2189

if.else:                                          ; preds = %if.then8
  %7 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2190
  %call12 = call i32 @BN_set_word(%struct.bignum_st* %7, i64 1), !dbg !2190
  store i32 %call12, i32* %ret, align 4, !dbg !2192
  br label %if.end13

if.end13:                                         ; preds = %if.else, %if.then10
  %8 = load i32, i32* %ret, align 4, !dbg !2193
  store i32 %8, i32* %retval, !dbg !2194
  br label %return, !dbg !2194

if.end14:                                         ; preds = %if.end
  %9 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2195
  call void @BN_CTX_start(%struct.bignum_ctx* %9), !dbg !2196
  %10 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2197
  %call15 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %10), !dbg !2198
  store %struct.bignum_st* %call15, %struct.bignum_st** %d, align 8, !dbg !2199
  %11 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2200
  %call16 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %11), !dbg !2201
  %arrayidx = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !2202
  store %struct.bignum_st* %call16, %struct.bignum_st** %arrayidx, align 8, !dbg !2203
  %12 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !2204
  %tobool17 = icmp ne %struct.bignum_st* %12, null, !dbg !2204
  br i1 %tobool17, label %lor.lhs.false18, label %if.then21, !dbg !2206

lor.lhs.false18:                                  ; preds = %if.end14
  %arrayidx19 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !2207
  %13 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx19, align 8, !dbg !2207
  %tobool20 = icmp ne %struct.bignum_st* %13, null, !dbg !2207
  br i1 %tobool20, label %if.end22, label %if.then21, !dbg !2209

if.then21:                                        ; preds = %lor.lhs.false18, %if.end14
  br label %err, !dbg !2210

if.end22:                                         ; preds = %lor.lhs.false18
  %arrayidx23 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !2211
  %14 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx23, align 8, !dbg !2211
  %15 = load %struct.bignum_st*, %struct.bignum_st** %a.addr, align 8, !dbg !2213
  %16 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2214
  %17 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2215
  %call24 = call i32 @BN_nnmod(%struct.bignum_st* %14, %struct.bignum_st* %15, %struct.bignum_st* %16, %struct.bignum_ctx* %17), !dbg !2216
  %tobool25 = icmp ne i32 %call24, 0, !dbg !2216
  br i1 %tobool25, label %if.end27, label %if.then26, !dbg !2217

if.then26:                                        ; preds = %if.end22
  br label %err, !dbg !2218

if.end27:                                         ; preds = %if.end22
  %arrayidx28 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !2219
  %18 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx28, align 8, !dbg !2219
  %call29 = call i32 @BN_is_zero(%struct.bignum_st* %18), !dbg !2221
  %tobool30 = icmp ne i32 %call29, 0, !dbg !2221
  br i1 %tobool30, label %if.then31, label %if.end33, !dbg !2222

if.then31:                                        ; preds = %if.end27
  %19 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2223
  %call32 = call i32 @BN_set_word(%struct.bignum_st* %19, i64 0), !dbg !2223
  store i32 1, i32* %ret, align 4, !dbg !2225
  br label %err, !dbg !2226

if.end33:                                         ; preds = %if.end27
  %20 = load i32, i32* %bits, align 4, !dbg !2227
  %cmp34 = icmp sgt i32 %20, 671, !dbg !2227
  br i1 %cmp34, label %cond.true, label %cond.false, !dbg !2227

cond.true:                                        ; preds = %if.end33
  br label %cond.end45, !dbg !2228

cond.false:                                       ; preds = %if.end33
  %21 = load i32, i32* %bits, align 4, !dbg !2230
  %cmp35 = icmp sgt i32 %21, 239, !dbg !2230
  br i1 %cmp35, label %cond.true36, label %cond.false37, !dbg !2230

cond.true36:                                      ; preds = %cond.false
  br label %cond.end43, !dbg !2232

cond.false37:                                     ; preds = %cond.false
  %22 = load i32, i32* %bits, align 4, !dbg !2234
  %cmp38 = icmp sgt i32 %22, 79, !dbg !2234
  br i1 %cmp38, label %cond.true39, label %cond.false40, !dbg !2234

cond.true39:                                      ; preds = %cond.false37
  br label %cond.end, !dbg !2236

cond.false40:                                     ; preds = %cond.false37
  %23 = load i32, i32* %bits, align 4, !dbg !2238
  %cmp41 = icmp sgt i32 %23, 23, !dbg !2238
  %cond = select i1 %cmp41, i32 3, i32 1, !dbg !2238
  br label %cond.end, !dbg !2238

cond.end:                                         ; preds = %cond.false40, %cond.true39
  %cond42 = phi i32 [ 4, %cond.true39 ], [ %cond, %cond.false40 ], !dbg !2227
  br label %cond.end43, !dbg !2240

cond.end43:                                       ; preds = %cond.end, %cond.true36
  %cond44 = phi i32 [ 5, %cond.true36 ], [ %cond42, %cond.end ], !dbg !2227
  br label %cond.end45, !dbg !2243

cond.end45:                                       ; preds = %cond.end43, %cond.true
  %cond46 = phi i32 [ 6, %cond.true ], [ %cond44, %cond.end43 ], !dbg !2227
  store i32 %cond46, i32* %window, align 4, !dbg !2246
  %24 = load i32, i32* %window, align 4, !dbg !2249
  %cmp47 = icmp sgt i32 %24, 1, !dbg !2251
  br i1 %cmp47, label %if.then48, label %if.end69, !dbg !2252

if.then48:                                        ; preds = %cond.end45
  %25 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !2253
  %arrayidx49 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !2256
  %26 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx49, align 8, !dbg !2256
  %arrayidx50 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 0, !dbg !2257
  %27 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx50, align 8, !dbg !2257
  %28 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2258
  %29 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2259
  %call51 = call i32 @BN_mod_mul(%struct.bignum_st* %25, %struct.bignum_st* %26, %struct.bignum_st* %27, %struct.bignum_st* %28, %struct.bignum_ctx* %29), !dbg !2260
  %tobool52 = icmp ne i32 %call51, 0, !dbg !2260
  br i1 %tobool52, label %if.end54, label %if.then53, !dbg !2261

if.then53:                                        ; preds = %if.then48
  br label %err, !dbg !2262

if.end54:                                         ; preds = %if.then48
  %30 = load i32, i32* %window, align 4, !dbg !2263
  %sub = sub nsw i32 %30, 1, !dbg !2264
  %shl = shl i32 1, %sub, !dbg !2265
  store i32 %shl, i32* %j, align 4, !dbg !2266
  store i32 1, i32* %i, align 4, !dbg !2267
  br label %for.cond, !dbg !2269

for.cond:                                         ; preds = %for.inc, %if.end54
  %31 = load i32, i32* %i, align 4, !dbg !2270
  %32 = load i32, i32* %j, align 4, !dbg !2274
  %cmp55 = icmp slt i32 %31, %32, !dbg !2275
  br i1 %cmp55, label %for.body, label %for.end, !dbg !2276

for.body:                                         ; preds = %for.cond
  %33 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2277
  %call56 = call %struct.bignum_st* @BN_CTX_get(%struct.bignum_ctx* %33), !dbg !2280
  %34 = load i32, i32* %i, align 4, !dbg !2281
  %idxprom = sext i32 %34 to i64, !dbg !2282
  %arrayidx57 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom, !dbg !2282
  store %struct.bignum_st* %call56, %struct.bignum_st** %arrayidx57, align 8, !dbg !2283
  %cmp58 = icmp eq %struct.bignum_st* %call56, null, !dbg !2284
  br i1 %cmp58, label %if.then67, label %lor.lhs.false59, !dbg !2285

lor.lhs.false59:                                  ; preds = %for.body
  %35 = load i32, i32* %i, align 4, !dbg !2286
  %idxprom60 = sext i32 %35 to i64, !dbg !2287
  %arrayidx61 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom60, !dbg !2287
  %36 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx61, align 8, !dbg !2287
  %37 = load i32, i32* %i, align 4, !dbg !2288
  %sub62 = sub nsw i32 %37, 1, !dbg !2289
  %idxprom63 = sext i32 %sub62 to i64, !dbg !2290
  %arrayidx64 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom63, !dbg !2290
  %38 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx64, align 8, !dbg !2290
  %39 = load %struct.bignum_st*, %struct.bignum_st** %d, align 8, !dbg !2291
  %40 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2292
  %41 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2293
  %call65 = call i32 @BN_mod_mul(%struct.bignum_st* %36, %struct.bignum_st* %38, %struct.bignum_st* %39, %struct.bignum_st* %40, %struct.bignum_ctx* %41), !dbg !2294
  %tobool66 = icmp ne i32 %call65, 0, !dbg !2294
  br i1 %tobool66, label %if.end68, label %if.then67, !dbg !2295

if.then67:                                        ; preds = %lor.lhs.false59, %for.body
  br label %err, !dbg !2296

if.end68:                                         ; preds = %lor.lhs.false59
  br label %for.inc, !dbg !2297

for.inc:                                          ; preds = %if.end68
  %42 = load i32, i32* %i, align 4, !dbg !2298
  %inc = add nsw i32 %42, 1, !dbg !2298
  store i32 %inc, i32* %i, align 4, !dbg !2298
  br label %for.cond, !dbg !2299

for.end:                                          ; preds = %for.cond
  br label %if.end69, !dbg !2300

if.end69:                                         ; preds = %for.end, %cond.end45
  store i32 1, i32* %start, align 4, !dbg !2301
  store i32 0, i32* %wvalue, align 4, !dbg !2302
  %43 = load i32, i32* %bits, align 4, !dbg !2303
  %sub70 = sub nsw i32 %43, 1, !dbg !2304
  store i32 %sub70, i32* %wstart, align 4, !dbg !2305
  store i32 0, i32* %wend, align 4, !dbg !2306
  %44 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2307
  %call71 = call i32 @BN_set_word(%struct.bignum_st* %44, i64 1), !dbg !2307
  %tobool72 = icmp ne i32 %call71, 0, !dbg !2307
  br i1 %tobool72, label %if.end74, label %if.then73, !dbg !2309

if.then73:                                        ; preds = %if.end69
  br label %err, !dbg !2310

if.end74:                                         ; preds = %if.end69
  br label %for.cond75, !dbg !2311

for.cond75:                                       ; preds = %if.end130, %if.end88, %if.end74
  %45 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !2312
  %46 = load i32, i32* %wstart, align 4, !dbg !2317
  %call76 = call i32 @BN_is_bit_set(%struct.bignum_st* %45, i32 %46), !dbg !2318
  %cmp77 = icmp eq i32 %call76, 0, !dbg !2319
  br i1 %cmp77, label %if.then78, label %if.end89, !dbg !2320

if.then78:                                        ; preds = %for.cond75
  %47 = load i32, i32* %start, align 4, !dbg !2321
  %tobool79 = icmp ne i32 %47, 0, !dbg !2321
  br i1 %tobool79, label %if.end85, label %if.then80, !dbg !2324

if.then80:                                        ; preds = %if.then78
  %48 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2325
  %49 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2327
  %50 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2328
  %51 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2329
  %52 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2330
  %call81 = call i32 @BN_mod_mul(%struct.bignum_st* %48, %struct.bignum_st* %49, %struct.bignum_st* %50, %struct.bignum_st* %51, %struct.bignum_ctx* %52), !dbg !2331
  %tobool82 = icmp ne i32 %call81, 0, !dbg !2331
  br i1 %tobool82, label %if.end84, label %if.then83, !dbg !2332

if.then83:                                        ; preds = %if.then80
  br label %err, !dbg !2333

if.end84:                                         ; preds = %if.then80
  br label %if.end85, !dbg !2334

if.end85:                                         ; preds = %if.end84, %if.then78
  %53 = load i32, i32* %wstart, align 4, !dbg !2336
  %cmp86 = icmp eq i32 %53, 0, !dbg !2338
  br i1 %cmp86, label %if.then87, label %if.end88, !dbg !2339

if.then87:                                        ; preds = %if.end85
  br label %for.end131, !dbg !2340

if.end88:                                         ; preds = %if.end85
  %54 = load i32, i32* %wstart, align 4, !dbg !2341
  %dec = add nsw i32 %54, -1, !dbg !2341
  store i32 %dec, i32* %wstart, align 4, !dbg !2341
  br label %for.cond75, !dbg !2342

if.end89:                                         ; preds = %for.cond75
  %55 = load i32, i32* %wstart, align 4, !dbg !2343
  store i32 %55, i32* %j, align 4, !dbg !2344
  store i32 1, i32* %wvalue, align 4, !dbg !2345
  store i32 0, i32* %wend, align 4, !dbg !2346
  store i32 1, i32* %i, align 4, !dbg !2347
  br label %for.cond90, !dbg !2349

for.cond90:                                       ; preds = %for.inc104, %if.end89
  %56 = load i32, i32* %i, align 4, !dbg !2350
  %57 = load i32, i32* %window, align 4, !dbg !2354
  %cmp91 = icmp slt i32 %56, %57, !dbg !2355
  br i1 %cmp91, label %for.body92, label %for.end106, !dbg !2356

for.body92:                                       ; preds = %for.cond90
  %58 = load i32, i32* %wstart, align 4, !dbg !2357
  %59 = load i32, i32* %i, align 4, !dbg !2360
  %sub93 = sub nsw i32 %58, %59, !dbg !2361
  %cmp94 = icmp slt i32 %sub93, 0, !dbg !2362
  br i1 %cmp94, label %if.then95, label %if.end96, !dbg !2363

if.then95:                                        ; preds = %for.body92
  br label %for.end106, !dbg !2364

if.end96:                                         ; preds = %for.body92
  %60 = load %struct.bignum_st*, %struct.bignum_st** %p.addr, align 8, !dbg !2365
  %61 = load i32, i32* %wstart, align 4, !dbg !2367
  %62 = load i32, i32* %i, align 4, !dbg !2368
  %sub97 = sub nsw i32 %61, %62, !dbg !2369
  %call98 = call i32 @BN_is_bit_set(%struct.bignum_st* %60, i32 %sub97), !dbg !2370
  %tobool99 = icmp ne i32 %call98, 0, !dbg !2370
  br i1 %tobool99, label %if.then100, label %if.end103, !dbg !2371

if.then100:                                       ; preds = %if.end96
  %63 = load i32, i32* %i, align 4, !dbg !2372
  %64 = load i32, i32* %wend, align 4, !dbg !2374
  %sub101 = sub nsw i32 %63, %64, !dbg !2375
  %65 = load i32, i32* %wvalue, align 4, !dbg !2376
  %shl102 = shl i32 %65, %sub101, !dbg !2376
  store i32 %shl102, i32* %wvalue, align 4, !dbg !2376
  %66 = load i32, i32* %wvalue, align 4, !dbg !2377
  %or = or i32 %66, 1, !dbg !2377
  store i32 %or, i32* %wvalue, align 4, !dbg !2377
  %67 = load i32, i32* %i, align 4, !dbg !2378
  store i32 %67, i32* %wend, align 4, !dbg !2379
  br label %if.end103, !dbg !2380

if.end103:                                        ; preds = %if.then100, %if.end96
  br label %for.inc104, !dbg !2381

for.inc104:                                       ; preds = %if.end103
  %68 = load i32, i32* %i, align 4, !dbg !2382
  %inc105 = add nsw i32 %68, 1, !dbg !2382
  store i32 %inc105, i32* %i, align 4, !dbg !2382
  br label %for.cond90, !dbg !2383

for.end106:                                       ; preds = %if.then95, %for.cond90
  %69 = load i32, i32* %wend, align 4, !dbg !2384
  %add = add nsw i32 %69, 1, !dbg !2385
  store i32 %add, i32* %j, align 4, !dbg !2386
  %70 = load i32, i32* %start, align 4, !dbg !2387
  %tobool107 = icmp ne i32 %70, 0, !dbg !2387
  br i1 %tobool107, label %if.end119, label %if.then108, !dbg !2389

if.then108:                                       ; preds = %for.end106
  store i32 0, i32* %i, align 4, !dbg !2390
  br label %for.cond109, !dbg !2392

for.cond109:                                      ; preds = %for.inc116, %if.then108
  %71 = load i32, i32* %i, align 4, !dbg !2393
  %72 = load i32, i32* %j, align 4, !dbg !2397
  %cmp110 = icmp slt i32 %71, %72, !dbg !2398
  br i1 %cmp110, label %for.body111, label %for.end118, !dbg !2399

for.body111:                                      ; preds = %for.cond109
  %73 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2400
  %74 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2403
  %75 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2404
  %76 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2405
  %77 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2406
  %call112 = call i32 @BN_mod_mul(%struct.bignum_st* %73, %struct.bignum_st* %74, %struct.bignum_st* %75, %struct.bignum_st* %76, %struct.bignum_ctx* %77), !dbg !2407
  %tobool113 = icmp ne i32 %call112, 0, !dbg !2407
  br i1 %tobool113, label %if.end115, label %if.then114, !dbg !2408

if.then114:                                       ; preds = %for.body111
  br label %err, !dbg !2409

if.end115:                                        ; preds = %for.body111
  br label %for.inc116, !dbg !2410

for.inc116:                                       ; preds = %if.end115
  %78 = load i32, i32* %i, align 4, !dbg !2411
  %inc117 = add nsw i32 %78, 1, !dbg !2411
  store i32 %inc117, i32* %i, align 4, !dbg !2411
  br label %for.cond109, !dbg !2412

for.end118:                                       ; preds = %for.cond109
  br label %if.end119, !dbg !2413

if.end119:                                        ; preds = %for.end118, %for.end106
  %79 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2414
  %80 = load %struct.bignum_st*, %struct.bignum_st** %r.addr, align 8, !dbg !2416
  %81 = load i32, i32* %wvalue, align 4, !dbg !2417
  %shr = ashr i32 %81, 1, !dbg !2418
  %idxprom120 = sext i32 %shr to i64, !dbg !2419
  %arrayidx121 = getelementptr inbounds [32 x %struct.bignum_st*], [32 x %struct.bignum_st*]* %val, i32 0, i64 %idxprom120, !dbg !2419
  %82 = load %struct.bignum_st*, %struct.bignum_st** %arrayidx121, align 8, !dbg !2419
  %83 = load %struct.bignum_st*, %struct.bignum_st** %m.addr, align 8, !dbg !2420
  %84 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2421
  %call122 = call i32 @BN_mod_mul(%struct.bignum_st* %79, %struct.bignum_st* %80, %struct.bignum_st* %82, %struct.bignum_st* %83, %struct.bignum_ctx* %84), !dbg !2422
  %tobool123 = icmp ne i32 %call122, 0, !dbg !2422
  br i1 %tobool123, label %if.end125, label %if.then124, !dbg !2423

if.then124:                                       ; preds = %if.end119
  br label %err, !dbg !2424

if.end125:                                        ; preds = %if.end119
  %85 = load i32, i32* %wend, align 4, !dbg !2425
  %add126 = add nsw i32 %85, 1, !dbg !2426
  %86 = load i32, i32* %wstart, align 4, !dbg !2427
  %sub127 = sub nsw i32 %86, %add126, !dbg !2427
  store i32 %sub127, i32* %wstart, align 4, !dbg !2427
  store i32 0, i32* %wvalue, align 4, !dbg !2428
  store i32 0, i32* %start, align 4, !dbg !2429
  %87 = load i32, i32* %wstart, align 4, !dbg !2430
  %cmp128 = icmp slt i32 %87, 0, !dbg !2432
  br i1 %cmp128, label %if.then129, label %if.end130, !dbg !2433

if.then129:                                       ; preds = %if.end125
  br label %for.end131, !dbg !2434

if.end130:                                        ; preds = %if.end125
  br label %for.cond75, !dbg !2435

for.end131:                                       ; preds = %if.then129, %if.then87
  store i32 1, i32* %ret, align 4, !dbg !2436
  br label %err, !dbg !2437

err:                                              ; preds = %for.end131, %if.then124, %if.then114, %if.then83, %if.then73, %if.then67, %if.then53, %if.then31, %if.then26, %if.then21
  %88 = load %struct.bignum_ctx*, %struct.bignum_ctx** %ctx.addr, align 8, !dbg !2438
  call void @BN_CTX_end(%struct.bignum_ctx* %88), !dbg !2439
  %89 = load i32, i32* %ret, align 4, !dbg !2440
  store i32 %89, i32* %retval, !dbg !2441
  br label %return, !dbg !2441

return:                                           ; preds = %err, %if.end13, %if.then
  %90 = load i32, i32* %retval, !dbg !2442
  ret i32 %90, !dbg !2442
}

declare i32 @BN_mod_mul(%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*) #2

; Function Attrs: inlinehint nounwind uwtable
define internal i32 @constant_time_eq_int(i32 %a, i32 %b) #4 {
entry:
  %a.addr = alloca i32, align 4
  %b.addr = alloca i32, align 4
  store i32 %a, i32* %a.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %a.addr, metadata !2443, metadata !81), !dbg !2444
  store i32 %b, i32* %b.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %b.addr, metadata !2445, metadata !81), !dbg !2446
  %0 = load i32, i32* %a.addr, align 4, !dbg !2447
  %1 = load i32, i32* %b.addr, align 4, !dbg !2448
  %call = call i32 @constant_time_eq(i32 %0, i32 %1), !dbg !2449
  ret i32 %call, !dbg !2450
}

; Function Attrs: inlinehint nounwind uwtable
define internal i32 @constant_time_eq(i32 %a, i32 %b) #4 {
entry:
  %a.addr = alloca i32, align 4
  %b.addr = alloca i32, align 4
  store i32 %a, i32* %a.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %a.addr, metadata !2451, metadata !81), !dbg !2452
  store i32 %b, i32* %b.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %b.addr, metadata !2453, metadata !81), !dbg !2454
  %0 = load i32, i32* %a.addr, align 4, !dbg !2455
  %1 = load i32, i32* %b.addr, align 4, !dbg !2456
  %xor = xor i32 %0, %1, !dbg !2457
  %call = call i32 @constant_time_is_zero(i32 %xor), !dbg !2458
  ret i32 %call, !dbg !2459
}

; Function Attrs: inlinehint nounwind uwtable
define internal i32 @constant_time_is_zero(i32 %a) #4 {
entry:
  %a.addr = alloca i32, align 4
  store i32 %a, i32* %a.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %a.addr, metadata !2460, metadata !81), !dbg !2461
  %0 = load i32, i32* %a.addr, align 4, !dbg !2462
  %neg = xor i32 %0, -1, !dbg !2463
  %1 = load i32, i32* %a.addr, align 4, !dbg !2464
  %sub = sub i32 %1, 1, !dbg !2465
  %and = and i32 %neg, %sub, !dbg !2466
  %call = call i32 @constant_time_msb(i32 %and), !dbg !2467
  ret i32 %call, !dbg !2468
}

; Function Attrs: inlinehint nounwind uwtable
define internal i32 @constant_time_msb(i32 %a) #4 {
entry:
  %a.addr = alloca i32, align 4
  store i32 %a, i32* %a.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %a.addr, metadata !2469, metadata !81), !dbg !2470
  %0 = load i32, i32* %a.addr, align 4, !dbg !2471
  %shr = lshr i32 %0, 31, !dbg !2472
  %sub = sub i32 0, %shr, !dbg !2473
  ret i32 %sub, !dbg !2474
}

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { nounwind }
attributes #4 = { inlinehint nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!77, !78}
!llvm.ident = !{!79}

!0 = !MDCompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !3, subprograms: !14, globals: !2, imports: !2)
!1 = !MDFile(filename: "bn_exp.c", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/openSSL_1_1_0g")
!2 = !{}
!3 = !{!4, !5, !6, !8, !10, !11, !13}
!4 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 64, align: 64)
!5 = !MDBasicType(name: "long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!6 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !7, size: 64, align: 64)
!7 = !MDBasicType(name: "unsigned char", size: 8, align: 8, encoding: DW_ATE_unsigned_char)
!8 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_t", file: !9, line: 62, baseType: !5)
!9 = !MDFile(filename: "/home/adam/research/LLVM-Deps/Debug+Asserts/bin/../lib/clang/3.7.0/include/stddef.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/openSSL_1_1_0g")
!10 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !5, size: 64, align: 64)
!11 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !12, size: 64, align: 64)
!12 = !MDDerivedType(tag: DW_TAG_volatile_type, baseType: !5)
!13 = !MDBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!14 = !{!15, !35, !38, !39, !55, !56, !59, !60, !63, !66, !70, !73, !76}
!15 = !MDSubprogram(name: "BN_exp", scope: !1, file: !1, line: 41, type: !16, isLocal: false, isDefinition: true, scopeLine: 42, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*)* @BN_exp, variables: !2)
!16 = !MDSubroutineType(types: !17)
!17 = !{!18, !19, !30, !30, !32}
!18 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!19 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 64, align: 64)
!20 = !MDDerivedType(tag: DW_TAG_typedef, name: "BIGNUM", file: !21, line: 80, baseType: !22)
!21 = !MDFile(filename: "include/openssl/ossl_typ.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/openSSL_1_1_0g")
!22 = !MDCompositeType(tag: DW_TAG_structure_type, name: "bignum_st", file: !23, line: 218, size: 192, align: 64, elements: !24)
!23 = !MDFile(filename: "include/bn_lcl.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/openSSL_1_1_0g")
!24 = !{!25, !26, !27, !28, !29}
!25 = !MDDerivedType(tag: DW_TAG_member, name: "d", scope: !22, file: !23, line: 219, baseType: !10, size: 64, align: 64)
!26 = !MDDerivedType(tag: DW_TAG_member, name: "top", scope: !22, file: !23, line: 221, baseType: !18, size: 32, align: 32, offset: 64)
!27 = !MDDerivedType(tag: DW_TAG_member, name: "dmax", scope: !22, file: !23, line: 223, baseType: !18, size: 32, align: 32, offset: 96)
!28 = !MDDerivedType(tag: DW_TAG_member, name: "neg", scope: !22, file: !23, line: 224, baseType: !18, size: 32, align: 32, offset: 128)
!29 = !MDDerivedType(tag: DW_TAG_member, name: "flags", scope: !22, file: !23, line: 225, baseType: !18, size: 32, align: 32, offset: 160)
!30 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !31, size: 64, align: 64)
!31 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !20)
!32 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !33, size: 64, align: 64)
!33 = !MDDerivedType(tag: DW_TAG_typedef, name: "BN_CTX", file: !21, line: 81, baseType: !34)
!34 = !MDCompositeType(tag: DW_TAG_structure_type, name: "bignum_ctx", file: !21, line: 81, flags: DIFlagFwdDecl)
!35 = !MDSubprogram(name: "BN_mod_exp", scope: !1, file: !1, line: 92, type: !36, isLocal: false, isDefinition: true, scopeLine: 94, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*)* @BN_mod_exp, variables: !2)
!36 = !MDSubroutineType(types: !37)
!37 = !{!18, !19, !30, !30, !30, !32}
!38 = !MDSubprogram(name: "BN_mod_exp_recp", scope: !1, file: !1, line: 171, type: !36, isLocal: false, isDefinition: true, scopeLine: 173, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*)* @BN_mod_exp_recp, variables: !2)
!39 = !MDSubprogram(name: "BN_mod_exp_mont", scope: !1, file: !1, line: 306, type: !40, isLocal: false, isDefinition: true, scopeLine: 308, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*, %struct.bn_mont_ctx_st*)* @BN_mod_exp_mont, variables: !2)
!40 = !MDSubroutineType(types: !41)
!41 = !{!18, !19, !30, !30, !30, !32, !42}
!42 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !43, size: 64, align: 64)
!43 = !MDDerivedType(tag: DW_TAG_typedef, name: "BN_MONT_CTX", file: !21, line: 83, baseType: !44)
!44 = !MDCompositeType(tag: DW_TAG_structure_type, name: "bn_mont_ctx_st", file: !23, line: 229, size: 832, align: 64, elements: !45)
!45 = !{!46, !47, !48, !49, !50, !54}
!46 = !MDDerivedType(tag: DW_TAG_member, name: "ri", scope: !44, file: !23, line: 230, baseType: !18, size: 32, align: 32)
!47 = !MDDerivedType(tag: DW_TAG_member, name: "RR", scope: !44, file: !23, line: 231, baseType: !20, size: 192, align: 64, offset: 64)
!48 = !MDDerivedType(tag: DW_TAG_member, name: "N", scope: !44, file: !23, line: 232, baseType: !20, size: 192, align: 64, offset: 256)
!49 = !MDDerivedType(tag: DW_TAG_member, name: "Ni", scope: !44, file: !23, line: 233, baseType: !20, size: 192, align: 64, offset: 448)
!50 = !MDDerivedType(tag: DW_TAG_member, name: "n0", scope: !44, file: !23, line: 235, baseType: !51, size: 128, align: 64, offset: 640)
!51 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !5, size: 128, align: 64, elements: !52)
!52 = !{!53}
!53 = !MDSubrange(count: 2)
!54 = !MDDerivedType(tag: DW_TAG_member, name: "flags", scope: !44, file: !23, line: 238, baseType: !18, size: 32, align: 32, offset: 768)
!55 = !MDSubprogram(name: "BN_mod_exp_mont_consttime", scope: !1, file: !1, line: 600, type: !40, isLocal: false, isDefinition: true, scopeLine: 603, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*, %struct.bn_mont_ctx_st*)* @BN_mod_exp_mont_consttime, variables: !2)
!56 = !MDSubprogram(name: "BN_mod_exp_mont_word", scope: !1, file: !1, line: 1097, type: !57, isLocal: false, isDefinition: true, scopeLine: 1099, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, i64, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*, %struct.bn_mont_ctx_st*)* @BN_mod_exp_mont_word, variables: !2)
!57 = !MDSubroutineType(types: !58)
!58 = !{!18, !19, !5, !30, !30, !32, !42}
!59 = !MDSubprogram(name: "BN_mod_exp_simple", scope: !1, file: !1, line: 1246, type: !36, isLocal: false, isDefinition: true, scopeLine: 1248, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_st*, %struct.bignum_ctx*)* @BN_mod_exp_simple, variables: !2)
!60 = !MDSubprogram(name: "MOD_EXP_CTIME_COPY_TO_PREBUF", scope: !1, file: !1, line: 514, type: !61, isLocal: true, isDefinition: true, scopeLine: 517, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, i32, i8*, i32, i32)* @MOD_EXP_CTIME_COPY_TO_PREBUF, variables: !2)
!61 = !MDSubroutineType(types: !62)
!62 = !{!18, !30, !18, !6, !18, !18}
!63 = !MDSubprogram(name: "MOD_EXP_CTIME_COPY_FROM_PREBUF", scope: !1, file: !1, line: 532, type: !64, isLocal: true, isDefinition: true, scopeLine: 535, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.bignum_st*, i32, i8*, i32, i32)* @MOD_EXP_CTIME_COPY_FROM_PREBUF, variables: !2)
!64 = !MDSubroutineType(types: !65)
!65 = !{!18, !19, !18, !6, !18, !18}
!66 = !MDSubprogram(name: "constant_time_eq_int", scope: !67, file: !67, line: 151, type: !68, isLocal: true, isDefinition: true, scopeLine: 152, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32, i32)* @constant_time_eq_int, variables: !2)
!67 = !MDFile(filename: "include/internal/constant_time_locl.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/openSSL_1_1_0g")
!68 = !MDSubroutineType(types: !69)
!69 = !{!13, !18, !18}
!70 = !MDSubprogram(name: "constant_time_eq", scope: !67, file: !67, line: 139, type: !71, isLocal: true, isDefinition: true, scopeLine: 141, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32, i32)* @constant_time_eq, variables: !2)
!71 = !MDSubroutineType(types: !72)
!72 = !{!13, !13, !13}
!73 = !MDSubprogram(name: "constant_time_is_zero", scope: !67, file: !67, line: 129, type: !74, isLocal: true, isDefinition: true, scopeLine: 130, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32)* @constant_time_is_zero, variables: !2)
!74 = !MDSubroutineType(types: !75)
!75 = !{!13, !13}
!76 = !MDSubprogram(name: "constant_time_msb", scope: !67, file: !67, line: 100, type: !74, isLocal: true, isDefinition: true, scopeLine: 101, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32)* @constant_time_msb, variables: !2)
!77 = !{i32 2, !"Dwarf Version", i32 4}
!78 = !{i32 2, !"Debug Info Version", i32 3}
!79 = !{!"clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)"}
!80 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "r", arg: 1, scope: !15, file: !1, line: 41, type: !19)
!81 = !MDExpression()
!82 = !MDLocation(line: 41, column: 20, scope: !15)
!83 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !15, file: !1, line: 41, type: !30)
!84 = !MDLocation(line: 41, column: 37, scope: !15)
!85 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !15, file: !1, line: 41, type: !30)
!86 = !MDLocation(line: 41, column: 54, scope: !15)
!87 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 4, scope: !15, file: !1, line: 41, type: !32)
!88 = !MDLocation(line: 41, column: 65, scope: !15)
!89 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !15, file: !1, line: 43, type: !18)
!90 = !MDLocation(line: 43, column: 9, scope: !15)
!91 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bits", scope: !15, file: !1, line: 43, type: !18)
!92 = !MDLocation(line: 43, column: 12, scope: !15)
!93 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !15, file: !1, line: 43, type: !18)
!94 = !MDLocation(line: 43, column: 18, scope: !15)
!95 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "v", scope: !15, file: !1, line: 44, type: !19)
!96 = !MDLocation(line: 44, column: 13, scope: !15)
!97 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rr", scope: !15, file: !1, line: 44, type: !19)
!98 = !MDLocation(line: 44, column: 17, scope: !15)
!99 = !MDLocation(line: 46, column: 22, scope: !100)
!100 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 46, column: 9)
!101 = !MDLocation(line: 46, column: 9, scope: !100)
!102 = !MDLocation(line: 46, column: 43, scope: !100)
!103 = !MDLocation(line: 47, column: 13, scope: !100)
!104 = !MDLocation(line: 47, column: 29, scope: !105)
!105 = !MDLexicalBlockFile(scope: !100, file: !1, discriminator: 1)
!106 = !MDLocation(line: 47, column: 16, scope: !100)
!107 = !MDLocation(line: 47, column: 50, scope: !100)
!108 = !MDLocation(line: 46, column: 9, scope: !15)
!109 = !MDLocation(line: 49, column: 9, scope: !110)
!110 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 47, column: 56)
!111 = !MDLocation(line: 51, column: 5, scope: !110)
!112 = !MDLocation(line: 53, column: 18, scope: !15)
!113 = !MDLocation(line: 53, column: 5, scope: !15)
!114 = !MDLocation(line: 54, column: 10, scope: !115)
!115 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 54, column: 9)
!116 = !MDLocation(line: 54, column: 15, scope: !115)
!117 = !MDLocation(line: 54, column: 12, scope: !115)
!118 = !MDLocation(line: 54, column: 18, scope: !115)
!119 = !MDLocation(line: 54, column: 22, scope: !120)
!120 = !MDLexicalBlockFile(scope: !115, file: !1, discriminator: 1)
!121 = !MDLocation(line: 54, column: 27, scope: !115)
!122 = !MDLocation(line: 54, column: 24, scope: !115)
!123 = !MDLocation(line: 54, column: 9, scope: !15)
!124 = !MDLocation(line: 55, column: 25, scope: !115)
!125 = !MDLocation(line: 55, column: 14, scope: !115)
!126 = !MDLocation(line: 55, column: 12, scope: !115)
!127 = !MDLocation(line: 55, column: 9, scope: !115)
!128 = !MDLocation(line: 57, column: 14, scope: !115)
!129 = !MDLocation(line: 57, column: 12, scope: !115)
!130 = !MDLocation(line: 58, column: 20, scope: !15)
!131 = !MDLocation(line: 58, column: 9, scope: !15)
!132 = !MDLocation(line: 58, column: 7, scope: !15)
!133 = !MDLocation(line: 59, column: 9, scope: !134)
!134 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 59, column: 9)
!135 = !MDLocation(line: 59, column: 12, scope: !134)
!136 = !MDLocation(line: 59, column: 20, scope: !134)
!137 = !MDLocation(line: 59, column: 23, scope: !138)
!138 = !MDLexicalBlockFile(scope: !134, file: !1, discriminator: 1)
!139 = !MDLocation(line: 59, column: 25, scope: !134)
!140 = !MDLocation(line: 59, column: 9, scope: !15)
!141 = !MDLocation(line: 60, column: 9, scope: !134)
!142 = !MDLocation(line: 62, column: 17, scope: !143)
!143 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 62, column: 9)
!144 = !MDLocation(line: 62, column: 20, scope: !143)
!145 = !MDLocation(line: 62, column: 9, scope: !143)
!146 = !MDLocation(line: 62, column: 23, scope: !143)
!147 = !MDLocation(line: 62, column: 9, scope: !15)
!148 = !MDLocation(line: 63, column: 9, scope: !143)
!149 = !MDLocation(line: 64, column: 24, scope: !15)
!150 = !MDLocation(line: 64, column: 12, scope: !15)
!151 = !MDLocation(line: 64, column: 10, scope: !15)
!152 = !MDLocation(line: 66, column: 19, scope: !153)
!153 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 66, column: 9)
!154 = !MDLocation(line: 66, column: 9, scope: !153)
!155 = !MDLocation(line: 66, column: 9, scope: !15)
!156 = !MDLocation(line: 67, column: 21, scope: !157)
!157 = distinct !MDLexicalBlock(scope: !158, file: !1, line: 67, column: 13)
!158 = distinct !MDLexicalBlock(scope: !153, file: !1, line: 66, column: 23)
!159 = !MDLocation(line: 67, column: 25, scope: !157)
!160 = !MDLocation(line: 67, column: 13, scope: !157)
!161 = !MDLocation(line: 67, column: 28, scope: !157)
!162 = !MDLocation(line: 67, column: 13, scope: !158)
!163 = !MDLocation(line: 68, column: 13, scope: !157)
!164 = !MDLocation(line: 69, column: 5, scope: !158)
!165 = !MDLocation(line: 70, column: 14, scope: !166)
!166 = distinct !MDLexicalBlock(scope: !167, file: !1, line: 70, column: 13)
!167 = distinct !MDLexicalBlock(scope: !153, file: !1, line: 69, column: 12)
!168 = !MDLocation(line: 70, column: 13, scope: !167)
!169 = !MDLocation(line: 71, column: 13, scope: !166)
!170 = !MDLocation(line: 74, column: 12, scope: !171)
!171 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 74, column: 5)
!172 = !MDLocation(line: 74, column: 10, scope: !171)
!173 = !MDLocation(line: 74, column: 17, scope: !174)
!174 = !MDLexicalBlockFile(scope: !175, file: !1, discriminator: 2)
!175 = !MDLexicalBlockFile(scope: !176, file: !1, discriminator: 1)
!176 = distinct !MDLexicalBlock(scope: !171, file: !1, line: 74, column: 5)
!177 = !MDLocation(line: 74, column: 21, scope: !176)
!178 = !MDLocation(line: 74, column: 19, scope: !176)
!179 = !MDLocation(line: 74, column: 5, scope: !171)
!180 = !MDLocation(line: 75, column: 21, scope: !181)
!181 = distinct !MDLexicalBlock(scope: !182, file: !1, line: 75, column: 13)
!182 = distinct !MDLexicalBlock(scope: !176, file: !1, line: 74, column: 32)
!183 = !MDLocation(line: 75, column: 24, scope: !181)
!184 = !MDLocation(line: 75, column: 27, scope: !181)
!185 = !MDLocation(line: 75, column: 14, scope: !181)
!186 = !MDLocation(line: 75, column: 13, scope: !182)
!187 = !MDLocation(line: 76, column: 13, scope: !181)
!188 = !MDLocation(line: 77, column: 27, scope: !189)
!189 = distinct !MDLexicalBlock(scope: !182, file: !1, line: 77, column: 13)
!190 = !MDLocation(line: 77, column: 30, scope: !189)
!191 = !MDLocation(line: 77, column: 13, scope: !189)
!192 = !MDLocation(line: 77, column: 13, scope: !182)
!193 = !MDLocation(line: 78, column: 25, scope: !194)
!194 = distinct !MDLexicalBlock(scope: !195, file: !1, line: 78, column: 17)
!195 = distinct !MDLexicalBlock(scope: !189, file: !1, line: 77, column: 34)
!196 = !MDLocation(line: 78, column: 29, scope: !194)
!197 = !MDLocation(line: 78, column: 33, scope: !194)
!198 = !MDLocation(line: 78, column: 36, scope: !194)
!199 = !MDLocation(line: 78, column: 18, scope: !194)
!200 = !MDLocation(line: 78, column: 17, scope: !195)
!201 = !MDLocation(line: 79, column: 17, scope: !194)
!202 = !MDLocation(line: 80, column: 9, scope: !195)
!203 = !MDLocation(line: 81, column: 5, scope: !182)
!204 = !MDLocation(line: 74, column: 28, scope: !176)
!205 = !MDLocation(line: 74, column: 5, scope: !176)
!206 = !MDLocation(line: 82, column: 9, scope: !207)
!207 = distinct !MDLexicalBlock(scope: !15, file: !1, line: 82, column: 9)
!208 = !MDLocation(line: 82, column: 14, scope: !207)
!209 = !MDLocation(line: 82, column: 11, scope: !207)
!210 = !MDLocation(line: 82, column: 17, scope: !207)
!211 = !MDLocation(line: 82, column: 28, scope: !212)
!212 = !MDLexicalBlockFile(scope: !207, file: !1, discriminator: 1)
!213 = !MDLocation(line: 82, column: 31, scope: !207)
!214 = !MDLocation(line: 82, column: 20, scope: !207)
!215 = !MDLocation(line: 82, column: 35, scope: !207)
!216 = !MDLocation(line: 82, column: 9, scope: !15)
!217 = !MDLocation(line: 83, column: 9, scope: !207)
!218 = !MDLocation(line: 85, column: 9, scope: !15)
!219 = !MDLocation(line: 85, column: 5, scope: !15)
!220 = !MDLocation(line: 87, column: 16, scope: !15)
!221 = !MDLocation(line: 87, column: 5, scope: !15)
!222 = !MDLocation(line: 89, column: 13, scope: !15)
!223 = !MDLocation(line: 89, column: 5, scope: !15)
!224 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "r", arg: 1, scope: !35, file: !1, line: 92, type: !19)
!225 = !MDLocation(line: 92, column: 24, scope: !35)
!226 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !35, file: !1, line: 92, type: !30)
!227 = !MDLocation(line: 92, column: 41, scope: !35)
!228 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !35, file: !1, line: 92, type: !30)
!229 = !MDLocation(line: 92, column: 58, scope: !35)
!230 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !35, file: !1, line: 92, type: !30)
!231 = !MDLocation(line: 92, column: 75, scope: !35)
!232 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 5, scope: !35, file: !1, line: 93, type: !32)
!233 = !MDLocation(line: 93, column: 24, scope: !35)
!234 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !35, file: !1, line: 95, type: !18)
!235 = !MDLocation(line: 95, column: 9, scope: !35)
!236 = !MDLocation(line: 144, column: 19, scope: !237)
!237 = distinct !MDLexicalBlock(scope: !35, file: !1, line: 144, column: 9)
!238 = !MDLocation(line: 144, column: 9, scope: !237)
!239 = !MDLocation(line: 144, column: 9, scope: !35)
!240 = !MDLocation(line: 146, column: 13, scope: !241)
!241 = distinct !MDLexicalBlock(scope: !242, file: !1, line: 146, column: 13)
!242 = distinct !MDLexicalBlock(scope: !237, file: !1, line: 144, column: 23)
!243 = !MDLocation(line: 146, column: 16, scope: !241)
!244 = !MDLocation(line: 146, column: 20, scope: !241)
!245 = !MDLocation(line: 146, column: 25, scope: !241)
!246 = !MDLocation(line: 146, column: 29, scope: !247)
!247 = !MDLexicalBlockFile(scope: !241, file: !1, discriminator: 1)
!248 = !MDLocation(line: 146, column: 32, scope: !241)
!249 = !MDLocation(line: 146, column: 29, scope: !241)
!250 = !MDLocation(line: 147, column: 13, scope: !241)
!251 = !MDLocation(line: 147, column: 30, scope: !247)
!252 = !MDLocation(line: 147, column: 17, scope: !241)
!253 = !MDLocation(line: 147, column: 51, scope: !241)
!254 = !MDLocation(line: 148, column: 13, scope: !241)
!255 = !MDLocation(line: 148, column: 30, scope: !247)
!256 = !MDLocation(line: 148, column: 17, scope: !241)
!257 = !MDLocation(line: 148, column: 51, scope: !241)
!258 = !MDLocation(line: 149, column: 13, scope: !241)
!259 = !MDLocation(line: 149, column: 30, scope: !247)
!260 = !MDLocation(line: 149, column: 17, scope: !241)
!261 = !MDLocation(line: 149, column: 51, scope: !241)
!262 = !MDLocation(line: 146, column: 13, scope: !242)
!263 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "A", scope: !264, file: !1, line: 150, type: !5)
!264 = distinct !MDLexicalBlock(scope: !241, file: !1, line: 149, column: 58)
!265 = !MDLocation(line: 150, column: 22, scope: !264)
!266 = !MDLocation(line: 150, column: 26, scope: !264)
!267 = !MDLocation(line: 150, column: 29, scope: !264)
!268 = !MDLocation(line: 151, column: 40, scope: !264)
!269 = !MDLocation(line: 151, column: 43, scope: !264)
!270 = !MDLocation(line: 151, column: 46, scope: !264)
!271 = !MDLocation(line: 151, column: 49, scope: !264)
!272 = !MDLocation(line: 151, column: 52, scope: !264)
!273 = !MDLocation(line: 151, column: 19, scope: !264)
!274 = !MDLocation(line: 151, column: 17, scope: !264)
!275 = !MDLocation(line: 152, column: 9, scope: !264)
!276 = !MDLocation(line: 154, column: 35, scope: !241)
!277 = !MDLocation(line: 154, column: 38, scope: !241)
!278 = !MDLocation(line: 154, column: 41, scope: !241)
!279 = !MDLocation(line: 154, column: 44, scope: !241)
!280 = !MDLocation(line: 154, column: 47, scope: !241)
!281 = !MDLocation(line: 154, column: 19, scope: !241)
!282 = !MDLocation(line: 154, column: 17, scope: !241)
!283 = !MDLocation(line: 155, column: 5, scope: !242)
!284 = !MDLocation(line: 159, column: 31, scope: !285)
!285 = distinct !MDLexicalBlock(scope: !237, file: !1, line: 158, column: 5)
!286 = !MDLocation(line: 159, column: 34, scope: !285)
!287 = !MDLocation(line: 159, column: 37, scope: !285)
!288 = !MDLocation(line: 159, column: 40, scope: !285)
!289 = !MDLocation(line: 159, column: 43, scope: !285)
!290 = !MDLocation(line: 159, column: 15, scope: !285)
!291 = !MDLocation(line: 159, column: 13, scope: !285)
!292 = !MDLocation(line: 168, column: 13, scope: !35)
!293 = !MDLocation(line: 168, column: 5, scope: !35)
!294 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "rr", arg: 1, scope: !56, file: !1, line: 1097, type: !19)
!295 = !MDLocation(line: 1097, column: 34, scope: !56)
!296 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !56, file: !1, line: 1097, type: !5)
!297 = !MDLocation(line: 1097, column: 47, scope: !56)
!298 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !56, file: !1, line: 1097, type: !30)
!299 = !MDLocation(line: 1097, column: 64, scope: !56)
!300 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !56, file: !1, line: 1098, type: !30)
!301 = !MDLocation(line: 1098, column: 40, scope: !56)
!302 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 5, scope: !56, file: !1, line: 1098, type: !32)
!303 = !MDLocation(line: 1098, column: 51, scope: !56)
!304 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "in_mont", arg: 6, scope: !56, file: !1, line: 1098, type: !42)
!305 = !MDLocation(line: 1098, column: 69, scope: !56)
!306 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mont", scope: !56, file: !1, line: 1100, type: !42)
!307 = !MDLocation(line: 1100, column: 18, scope: !56)
!308 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "b", scope: !56, file: !1, line: 1101, type: !18)
!309 = !MDLocation(line: 1101, column: 9, scope: !56)
!310 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bits", scope: !56, file: !1, line: 1101, type: !18)
!311 = !MDLocation(line: 1101, column: 12, scope: !56)
!312 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !56, file: !1, line: 1101, type: !18)
!313 = !MDLocation(line: 1101, column: 18, scope: !56)
!314 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "r_is_one", scope: !56, file: !1, line: 1102, type: !18)
!315 = !MDLocation(line: 1102, column: 9, scope: !56)
!316 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "w", scope: !56, file: !1, line: 1103, type: !5)
!317 = !MDLocation(line: 1103, column: 14, scope: !56)
!318 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "next_w", scope: !56, file: !1, line: 1103, type: !5)
!319 = !MDLocation(line: 1103, column: 17, scope: !56)
!320 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "d", scope: !56, file: !1, line: 1104, type: !19)
!321 = !MDLocation(line: 1104, column: 13, scope: !56)
!322 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "r", scope: !56, file: !1, line: 1104, type: !19)
!323 = !MDLocation(line: 1104, column: 17, scope: !56)
!324 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "t", scope: !56, file: !1, line: 1104, type: !19)
!325 = !MDLocation(line: 1104, column: 21, scope: !56)
!326 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "swap_tmp", scope: !56, file: !1, line: 1105, type: !19)
!327 = !MDLocation(line: 1105, column: 13, scope: !56)
!328 = !MDLocation(line: 1123, column: 22, scope: !329)
!329 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1123, column: 9)
!330 = !MDLocation(line: 1123, column: 9, scope: !329)
!331 = !MDLocation(line: 1123, column: 43, scope: !329)
!332 = !MDLocation(line: 1124, column: 13, scope: !329)
!333 = !MDLocation(line: 1124, column: 29, scope: !334)
!334 = !MDLexicalBlockFile(scope: !329, file: !1, discriminator: 1)
!335 = !MDLocation(line: 1124, column: 16, scope: !329)
!336 = !MDLocation(line: 1124, column: 50, scope: !329)
!337 = !MDLocation(line: 1123, column: 9, scope: !56)
!338 = !MDLocation(line: 1126, column: 9, scope: !339)
!339 = distinct !MDLexicalBlock(scope: !329, file: !1, line: 1124, column: 56)
!340 = !MDLocation(line: 1127, column: 9, scope: !339)
!341 = !MDLocation(line: 1133, column: 20, scope: !342)
!342 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1133, column: 9)
!343 = !MDLocation(line: 1133, column: 10, scope: !342)
!344 = !MDLocation(line: 1133, column: 9, scope: !56)
!345 = !MDLocation(line: 1134, column: 9, scope: !346)
!346 = distinct !MDLexicalBlock(scope: !342, file: !1, line: 1133, column: 24)
!347 = !MDLocation(line: 1135, column: 9, scope: !346)
!348 = !MDLocation(line: 1137, column: 9, scope: !349)
!349 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1137, column: 9)
!350 = !MDLocation(line: 1137, column: 12, scope: !349)
!351 = !MDLocation(line: 1137, column: 16, scope: !349)
!352 = !MDLocation(line: 1137, column: 9, scope: !56)
!353 = !MDLocation(line: 1138, column: 14, scope: !349)
!354 = !MDLocation(line: 1138, column: 17, scope: !349)
!355 = !MDLocation(line: 1138, column: 11, scope: !349)
!356 = !MDLocation(line: 1138, column: 9, scope: !349)
!357 = !MDLocation(line: 1140, column: 24, scope: !56)
!358 = !MDLocation(line: 1140, column: 12, scope: !56)
!359 = !MDLocation(line: 1140, column: 10, scope: !56)
!360 = !MDLocation(line: 1141, column: 9, scope: !361)
!361 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1141, column: 9)
!362 = !MDLocation(line: 1141, column: 14, scope: !361)
!363 = !MDLocation(line: 1141, column: 9, scope: !56)
!364 = !MDLocation(line: 1143, column: 23, scope: !365)
!365 = distinct !MDLexicalBlock(scope: !366, file: !1, line: 1143, column: 13)
!366 = distinct !MDLexicalBlock(scope: !361, file: !1, line: 1141, column: 20)
!367 = !MDLocation(line: 1143, column: 13, scope: !365)
!368 = !MDLocation(line: 1143, column: 13, scope: !366)
!369 = !MDLocation(line: 1144, column: 17, scope: !370)
!370 = distinct !MDLexicalBlock(scope: !365, file: !1, line: 1143, column: 27)
!371 = !MDLocation(line: 1145, column: 13, scope: !370)
!372 = !MDLocation(line: 1146, column: 9, scope: !370)
!373 = !MDLocation(line: 1147, column: 19, scope: !374)
!374 = distinct !MDLexicalBlock(scope: !365, file: !1, line: 1146, column: 16)
!375 = !MDLocation(line: 1147, column: 17, scope: !374)
!376 = !MDLocation(line: 1149, column: 16, scope: !366)
!377 = !MDLocation(line: 1149, column: 9, scope: !366)
!378 = !MDLocation(line: 1151, column: 9, scope: !379)
!379 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1151, column: 9)
!380 = !MDLocation(line: 1151, column: 11, scope: !379)
!381 = !MDLocation(line: 1151, column: 9, scope: !56)
!382 = !MDLocation(line: 1152, column: 9, scope: !383)
!383 = distinct !MDLexicalBlock(scope: !379, file: !1, line: 1151, column: 17)
!384 = !MDLocation(line: 1153, column: 13, scope: !383)
!385 = !MDLocation(line: 1154, column: 16, scope: !383)
!386 = !MDLocation(line: 1154, column: 9, scope: !383)
!387 = !MDLocation(line: 1157, column: 18, scope: !56)
!388 = !MDLocation(line: 1157, column: 5, scope: !56)
!389 = !MDLocation(line: 1158, column: 20, scope: !56)
!390 = !MDLocation(line: 1158, column: 9, scope: !56)
!391 = !MDLocation(line: 1158, column: 7, scope: !56)
!392 = !MDLocation(line: 1159, column: 20, scope: !56)
!393 = !MDLocation(line: 1159, column: 9, scope: !56)
!394 = !MDLocation(line: 1159, column: 7, scope: !56)
!395 = !MDLocation(line: 1160, column: 20, scope: !56)
!396 = !MDLocation(line: 1160, column: 9, scope: !56)
!397 = !MDLocation(line: 1160, column: 7, scope: !56)
!398 = !MDLocation(line: 1161, column: 9, scope: !399)
!399 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1161, column: 9)
!400 = !MDLocation(line: 1161, column: 11, scope: !399)
!401 = !MDLocation(line: 1161, column: 19, scope: !399)
!402 = !MDLocation(line: 1161, column: 22, scope: !403)
!403 = !MDLexicalBlockFile(scope: !399, file: !1, discriminator: 1)
!404 = !MDLocation(line: 1161, column: 24, scope: !399)
!405 = !MDLocation(line: 1161, column: 32, scope: !399)
!406 = !MDLocation(line: 1161, column: 35, scope: !407)
!407 = !MDLexicalBlockFile(scope: !399, file: !1, discriminator: 2)
!408 = !MDLocation(line: 1161, column: 37, scope: !399)
!409 = !MDLocation(line: 1161, column: 9, scope: !56)
!410 = !MDLocation(line: 1162, column: 9, scope: !399)
!411 = !MDLocation(line: 1164, column: 9, scope: !412)
!412 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1164, column: 9)
!413 = !MDLocation(line: 1164, column: 17, scope: !412)
!414 = !MDLocation(line: 1164, column: 9, scope: !56)
!415 = !MDLocation(line: 1165, column: 16, scope: !412)
!416 = !MDLocation(line: 1165, column: 14, scope: !412)
!417 = !MDLocation(line: 1165, column: 9, scope: !412)
!418 = !MDLocation(line: 1167, column: 21, scope: !419)
!419 = distinct !MDLexicalBlock(scope: !420, file: !1, line: 1167, column: 13)
!420 = distinct !MDLexicalBlock(scope: !412, file: !1, line: 1166, column: 10)
!421 = !MDLocation(line: 1167, column: 19, scope: !419)
!422 = !MDLocation(line: 1167, column: 40, scope: !419)
!423 = !MDLocation(line: 1167, column: 13, scope: !420)
!424 = !MDLocation(line: 1168, column: 13, scope: !419)
!425 = !MDLocation(line: 1169, column: 30, scope: !426)
!426 = distinct !MDLexicalBlock(scope: !420, file: !1, line: 1169, column: 13)
!427 = !MDLocation(line: 1169, column: 36, scope: !426)
!428 = !MDLocation(line: 1169, column: 39, scope: !426)
!429 = !MDLocation(line: 1169, column: 14, scope: !426)
!430 = !MDLocation(line: 1169, column: 13, scope: !420)
!431 = !MDLocation(line: 1170, column: 13, scope: !426)
!432 = !MDLocation(line: 1173, column: 14, scope: !56)
!433 = !MDLocation(line: 1178, column: 9, scope: !56)
!434 = !MDLocation(line: 1178, column: 7, scope: !56)
!435 = !MDLocation(line: 1179, column: 14, scope: !436)
!436 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1179, column: 5)
!437 = !MDLocation(line: 1179, column: 19, scope: !436)
!438 = !MDLocation(line: 1179, column: 12, scope: !436)
!439 = !MDLocation(line: 1179, column: 10, scope: !436)
!440 = !MDLocation(line: 1179, column: 24, scope: !441)
!441 = !MDLexicalBlockFile(scope: !442, file: !1, discriminator: 2)
!442 = !MDLexicalBlockFile(scope: !443, file: !1, discriminator: 1)
!443 = distinct !MDLexicalBlock(scope: !436, file: !1, line: 1179, column: 5)
!444 = !MDLocation(line: 1179, column: 26, scope: !443)
!445 = !MDLocation(line: 1179, column: 5, scope: !436)
!446 = !MDLocation(line: 1181, column: 18, scope: !447)
!447 = distinct !MDLexicalBlock(scope: !443, file: !1, line: 1179, column: 37)
!448 = !MDLocation(line: 1181, column: 22, scope: !447)
!449 = !MDLocation(line: 1181, column: 20, scope: !447)
!450 = !MDLocation(line: 1181, column: 16, scope: !447)
!451 = !MDLocation(line: 1182, column: 14, scope: !452)
!452 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 1182, column: 13)
!453 = !MDLocation(line: 1182, column: 23, scope: !452)
!454 = !MDLocation(line: 1182, column: 21, scope: !452)
!455 = !MDLocation(line: 1182, column: 29, scope: !452)
!456 = !MDLocation(line: 1182, column: 26, scope: !452)
!457 = !MDLocation(line: 1182, column: 13, scope: !447)
!458 = !MDLocation(line: 1183, column: 17, scope: !459)
!459 = distinct !MDLexicalBlock(scope: !460, file: !1, line: 1183, column: 17)
!460 = distinct !MDLexicalBlock(scope: !452, file: !1, line: 1182, column: 32)
!461 = !MDLocation(line: 1183, column: 17, scope: !460)
!462 = !MDLocation(line: 1184, column: 22, scope: !463)
!463 = distinct !MDLexicalBlock(scope: !464, file: !1, line: 1184, column: 21)
!464 = distinct !MDLexicalBlock(scope: !459, file: !1, line: 1183, column: 27)
!465 = !MDLocation(line: 1184, column: 22, scope: !466)
!466 = !MDLexicalBlockFile(scope: !463, file: !1, discriminator: 1)
!467 = !MDLocation(line: 1184, column: 21, scope: !464)
!468 = !MDLocation(line: 1185, column: 21, scope: !463)
!469 = !MDLocation(line: 1186, column: 26, scope: !464)
!470 = !MDLocation(line: 1187, column: 13, scope: !464)
!471 = !MDLocation(line: 1188, column: 22, scope: !472)
!472 = distinct !MDLexicalBlock(scope: !473, file: !1, line: 1188, column: 21)
!473 = distinct !MDLexicalBlock(scope: !459, file: !1, line: 1187, column: 20)
!474 = !MDLocation(line: 1188, column: 22, scope: !475)
!475 = !MDLexicalBlockFile(scope: !472, file: !1, discriminator: 1)
!476 = !MDLocation(line: 1188, column: 22, scope: !477)
!477 = !MDLexicalBlockFile(scope: !472, file: !1, discriminator: 2)
!478 = !MDLocation(line: 1188, column: 21, scope: !473)
!479 = !MDLocation(line: 1189, column: 21, scope: !472)
!480 = !MDLocation(line: 1191, column: 20, scope: !460)
!481 = !MDLocation(line: 1192, column: 9, scope: !460)
!482 = !MDLocation(line: 1193, column: 13, scope: !447)
!483 = !MDLocation(line: 1193, column: 11, scope: !447)
!484 = !MDLocation(line: 1194, column: 14, scope: !485)
!485 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 1194, column: 13)
!486 = !MDLocation(line: 1194, column: 13, scope: !447)
!487 = !MDLocation(line: 1195, column: 40, scope: !488)
!488 = distinct !MDLexicalBlock(scope: !489, file: !1, line: 1195, column: 17)
!489 = distinct !MDLexicalBlock(scope: !485, file: !1, line: 1194, column: 24)
!490 = !MDLocation(line: 1195, column: 43, scope: !488)
!491 = !MDLocation(line: 1195, column: 46, scope: !488)
!492 = !MDLocation(line: 1195, column: 49, scope: !488)
!493 = !MDLocation(line: 1195, column: 55, scope: !488)
!494 = !MDLocation(line: 1195, column: 18, scope: !488)
!495 = !MDLocation(line: 1195, column: 17, scope: !489)
!496 = !MDLocation(line: 1196, column: 17, scope: !488)
!497 = !MDLocation(line: 1197, column: 9, scope: !489)
!498 = !MDLocation(line: 1200, column: 27, scope: !499)
!499 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 1200, column: 13)
!500 = !MDLocation(line: 1200, column: 30, scope: !499)
!501 = !MDLocation(line: 1200, column: 13, scope: !499)
!502 = !MDLocation(line: 1200, column: 13, scope: !447)
!503 = !MDLocation(line: 1201, column: 22, scope: !504)
!504 = distinct !MDLexicalBlock(scope: !499, file: !1, line: 1200, column: 34)
!505 = !MDLocation(line: 1201, column: 26, scope: !504)
!506 = !MDLocation(line: 1201, column: 24, scope: !504)
!507 = !MDLocation(line: 1201, column: 20, scope: !504)
!508 = !MDLocation(line: 1202, column: 18, scope: !509)
!509 = distinct !MDLexicalBlock(scope: !504, file: !1, line: 1202, column: 17)
!510 = !MDLocation(line: 1202, column: 27, scope: !509)
!511 = !MDLocation(line: 1202, column: 25, scope: !509)
!512 = !MDLocation(line: 1202, column: 33, scope: !509)
!513 = !MDLocation(line: 1202, column: 30, scope: !509)
!514 = !MDLocation(line: 1202, column: 17, scope: !504)
!515 = !MDLocation(line: 1203, column: 21, scope: !516)
!516 = distinct !MDLexicalBlock(scope: !517, file: !1, line: 1203, column: 21)
!517 = distinct !MDLexicalBlock(scope: !509, file: !1, line: 1202, column: 36)
!518 = !MDLocation(line: 1203, column: 21, scope: !517)
!519 = !MDLocation(line: 1204, column: 26, scope: !520)
!520 = distinct !MDLexicalBlock(scope: !521, file: !1, line: 1204, column: 25)
!521 = distinct !MDLexicalBlock(scope: !516, file: !1, line: 1203, column: 31)
!522 = !MDLocation(line: 1204, column: 26, scope: !523)
!523 = !MDLexicalBlockFile(scope: !520, file: !1, discriminator: 1)
!524 = !MDLocation(line: 1204, column: 25, scope: !521)
!525 = !MDLocation(line: 1205, column: 25, scope: !520)
!526 = !MDLocation(line: 1206, column: 30, scope: !521)
!527 = !MDLocation(line: 1207, column: 17, scope: !521)
!528 = !MDLocation(line: 1208, column: 26, scope: !529)
!529 = distinct !MDLexicalBlock(scope: !530, file: !1, line: 1208, column: 25)
!530 = distinct !MDLexicalBlock(scope: !516, file: !1, line: 1207, column: 24)
!531 = !MDLocation(line: 1208, column: 26, scope: !532)
!532 = !MDLexicalBlockFile(scope: !529, file: !1, discriminator: 1)
!533 = !MDLocation(line: 1208, column: 26, scope: !534)
!534 = !MDLexicalBlockFile(scope: !529, file: !1, discriminator: 2)
!535 = !MDLocation(line: 1208, column: 25, scope: !530)
!536 = !MDLocation(line: 1209, column: 25, scope: !529)
!537 = !MDLocation(line: 1211, column: 26, scope: !517)
!538 = !MDLocation(line: 1211, column: 24, scope: !517)
!539 = !MDLocation(line: 1212, column: 13, scope: !517)
!540 = !MDLocation(line: 1213, column: 17, scope: !504)
!541 = !MDLocation(line: 1213, column: 15, scope: !504)
!542 = !MDLocation(line: 1214, column: 9, scope: !504)
!543 = !MDLocation(line: 1215, column: 5, scope: !447)
!544 = !MDLocation(line: 1179, column: 33, scope: !443)
!545 = !MDLocation(line: 1179, column: 5, scope: !443)
!546 = !MDLocation(line: 1218, column: 9, scope: !547)
!547 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1218, column: 9)
!548 = !MDLocation(line: 1218, column: 11, scope: !547)
!549 = !MDLocation(line: 1218, column: 9, scope: !56)
!550 = !MDLocation(line: 1219, column: 13, scope: !551)
!551 = distinct !MDLexicalBlock(scope: !552, file: !1, line: 1219, column: 13)
!552 = distinct !MDLexicalBlock(scope: !547, file: !1, line: 1218, column: 17)
!553 = !MDLocation(line: 1219, column: 13, scope: !552)
!554 = !MDLocation(line: 1220, column: 18, scope: !555)
!555 = distinct !MDLexicalBlock(scope: !556, file: !1, line: 1220, column: 17)
!556 = distinct !MDLexicalBlock(scope: !551, file: !1, line: 1219, column: 23)
!557 = !MDLocation(line: 1220, column: 18, scope: !558)
!558 = !MDLexicalBlockFile(scope: !555, file: !1, discriminator: 1)
!559 = !MDLocation(line: 1220, column: 17, scope: !556)
!560 = !MDLocation(line: 1221, column: 17, scope: !555)
!561 = !MDLocation(line: 1222, column: 22, scope: !556)
!562 = !MDLocation(line: 1223, column: 9, scope: !556)
!563 = !MDLocation(line: 1224, column: 18, scope: !564)
!564 = distinct !MDLexicalBlock(scope: !565, file: !1, line: 1224, column: 17)
!565 = distinct !MDLexicalBlock(scope: !551, file: !1, line: 1223, column: 16)
!566 = !MDLocation(line: 1224, column: 18, scope: !567)
!567 = !MDLexicalBlockFile(scope: !564, file: !1, discriminator: 1)
!568 = !MDLocation(line: 1224, column: 18, scope: !569)
!569 = !MDLexicalBlockFile(scope: !564, file: !1, discriminator: 2)
!570 = !MDLocation(line: 1224, column: 17, scope: !565)
!571 = !MDLocation(line: 1225, column: 17, scope: !564)
!572 = !MDLocation(line: 1227, column: 5, scope: !552)
!573 = !MDLocation(line: 1229, column: 9, scope: !574)
!574 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1229, column: 9)
!575 = !MDLocation(line: 1229, column: 9, scope: !56)
!576 = !MDLocation(line: 1230, column: 14, scope: !577)
!577 = distinct !MDLexicalBlock(scope: !578, file: !1, line: 1230, column: 13)
!578 = distinct !MDLexicalBlock(scope: !574, file: !1, line: 1229, column: 19)
!579 = !MDLocation(line: 1230, column: 13, scope: !578)
!580 = !MDLocation(line: 1231, column: 13, scope: !577)
!581 = !MDLocation(line: 1232, column: 5, scope: !578)
!582 = !MDLocation(line: 1233, column: 33, scope: !583)
!583 = distinct !MDLexicalBlock(scope: !584, file: !1, line: 1233, column: 13)
!584 = distinct !MDLexicalBlock(scope: !574, file: !1, line: 1232, column: 12)
!585 = !MDLocation(line: 1233, column: 37, scope: !583)
!586 = !MDLocation(line: 1233, column: 40, scope: !583)
!587 = !MDLocation(line: 1233, column: 46, scope: !583)
!588 = !MDLocation(line: 1233, column: 14, scope: !583)
!589 = !MDLocation(line: 1233, column: 13, scope: !584)
!590 = !MDLocation(line: 1234, column: 13, scope: !583)
!591 = !MDLocation(line: 1236, column: 9, scope: !56)
!592 = !MDLocation(line: 1236, column: 5, scope: !56)
!593 = !MDLocation(line: 1238, column: 9, scope: !594)
!594 = distinct !MDLexicalBlock(scope: !56, file: !1, line: 1238, column: 9)
!595 = !MDLocation(line: 1238, column: 17, scope: !594)
!596 = !MDLocation(line: 1238, column: 9, scope: !56)
!597 = !MDLocation(line: 1239, column: 26, scope: !594)
!598 = !MDLocation(line: 1239, column: 9, scope: !594)
!599 = !MDLocation(line: 1240, column: 16, scope: !56)
!600 = !MDLocation(line: 1240, column: 5, scope: !56)
!601 = !MDLocation(line: 1242, column: 13, scope: !56)
!602 = !MDLocation(line: 1242, column: 5, scope: !56)
!603 = !MDLocation(line: 1243, column: 1, scope: !56)
!604 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "rr", arg: 1, scope: !39, file: !1, line: 306, type: !19)
!605 = !MDLocation(line: 306, column: 29, scope: !39)
!606 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !39, file: !1, line: 306, type: !30)
!607 = !MDLocation(line: 306, column: 47, scope: !39)
!608 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !39, file: !1, line: 306, type: !30)
!609 = !MDLocation(line: 306, column: 64, scope: !39)
!610 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !39, file: !1, line: 307, type: !30)
!611 = !MDLocation(line: 307, column: 35, scope: !39)
!612 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 5, scope: !39, file: !1, line: 307, type: !32)
!613 = !MDLocation(line: 307, column: 46, scope: !39)
!614 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "in_mont", arg: 6, scope: !39, file: !1, line: 307, type: !42)
!615 = !MDLocation(line: 307, column: 64, scope: !39)
!616 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !39, file: !1, line: 309, type: !18)
!617 = !MDLocation(line: 309, column: 9, scope: !39)
!618 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "j", scope: !39, file: !1, line: 309, type: !18)
!619 = !MDLocation(line: 309, column: 12, scope: !39)
!620 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bits", scope: !39, file: !1, line: 309, type: !18)
!621 = !MDLocation(line: 309, column: 15, scope: !39)
!622 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !39, file: !1, line: 309, type: !18)
!623 = !MDLocation(line: 309, column: 21, scope: !39)
!624 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wstart", scope: !39, file: !1, line: 309, type: !18)
!625 = !MDLocation(line: 309, column: 30, scope: !39)
!626 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wend", scope: !39, file: !1, line: 309, type: !18)
!627 = !MDLocation(line: 309, column: 38, scope: !39)
!628 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "window", scope: !39, file: !1, line: 309, type: !18)
!629 = !MDLocation(line: 309, column: 44, scope: !39)
!630 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wvalue", scope: !39, file: !1, line: 309, type: !18)
!631 = !MDLocation(line: 309, column: 52, scope: !39)
!632 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "start", scope: !39, file: !1, line: 310, type: !18)
!633 = !MDLocation(line: 310, column: 9, scope: !39)
!634 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "d", scope: !39, file: !1, line: 311, type: !19)
!635 = !MDLocation(line: 311, column: 13, scope: !39)
!636 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "r", scope: !39, file: !1, line: 311, type: !19)
!637 = !MDLocation(line: 311, column: 17, scope: !39)
!638 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "aa", scope: !39, file: !1, line: 312, type: !30)
!639 = !MDLocation(line: 312, column: 19, scope: !39)
!640 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "val", scope: !39, file: !1, line: 314, type: !641)
!641 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 2048, align: 64, elements: !642)
!642 = !{!643}
!643 = !MDSubrange(count: 32)
!644 = !MDLocation(line: 314, column: 13, scope: !39)
!645 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mont", scope: !39, file: !1, line: 315, type: !42)
!646 = !MDLocation(line: 315, column: 18, scope: !39)
!647 = !MDLocation(line: 317, column: 22, scope: !648)
!648 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 317, column: 9)
!649 = !MDLocation(line: 317, column: 9, scope: !648)
!650 = !MDLocation(line: 317, column: 43, scope: !648)
!651 = !MDLocation(line: 318, column: 13, scope: !648)
!652 = !MDLocation(line: 318, column: 29, scope: !653)
!653 = !MDLexicalBlockFile(scope: !648, file: !1, discriminator: 1)
!654 = !MDLocation(line: 318, column: 16, scope: !648)
!655 = !MDLocation(line: 318, column: 50, scope: !648)
!656 = !MDLocation(line: 319, column: 13, scope: !648)
!657 = !MDLocation(line: 319, column: 29, scope: !653)
!658 = !MDLocation(line: 319, column: 16, scope: !648)
!659 = !MDLocation(line: 319, column: 50, scope: !648)
!660 = !MDLocation(line: 317, column: 9, scope: !39)
!661 = !MDLocation(line: 320, column: 42, scope: !662)
!662 = distinct !MDLexicalBlock(scope: !648, file: !1, line: 319, column: 56)
!663 = !MDLocation(line: 320, column: 46, scope: !662)
!664 = !MDLocation(line: 320, column: 49, scope: !662)
!665 = !MDLocation(line: 320, column: 52, scope: !662)
!666 = !MDLocation(line: 320, column: 55, scope: !662)
!667 = !MDLocation(line: 320, column: 60, scope: !662)
!668 = !MDLocation(line: 320, column: 16, scope: !662)
!669 = !MDLocation(line: 320, column: 9, scope: !662)
!670 = !MDLocation(line: 327, column: 20, scope: !671)
!671 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 327, column: 9)
!672 = !MDLocation(line: 327, column: 10, scope: !671)
!673 = !MDLocation(line: 327, column: 9, scope: !39)
!674 = !MDLocation(line: 328, column: 9, scope: !675)
!675 = distinct !MDLexicalBlock(scope: !671, file: !1, line: 327, column: 24)
!676 = !MDLocation(line: 329, column: 9, scope: !675)
!677 = !MDLocation(line: 331, column: 24, scope: !39)
!678 = !MDLocation(line: 331, column: 12, scope: !39)
!679 = !MDLocation(line: 331, column: 10, scope: !39)
!680 = !MDLocation(line: 332, column: 9, scope: !681)
!681 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 332, column: 9)
!682 = !MDLocation(line: 332, column: 14, scope: !681)
!683 = !MDLocation(line: 332, column: 9, scope: !39)
!684 = !MDLocation(line: 334, column: 23, scope: !685)
!685 = distinct !MDLexicalBlock(scope: !686, file: !1, line: 334, column: 13)
!686 = distinct !MDLexicalBlock(scope: !681, file: !1, line: 332, column: 20)
!687 = !MDLocation(line: 334, column: 13, scope: !685)
!688 = !MDLocation(line: 334, column: 13, scope: !686)
!689 = !MDLocation(line: 335, column: 17, scope: !690)
!690 = distinct !MDLexicalBlock(scope: !685, file: !1, line: 334, column: 27)
!691 = !MDLocation(line: 336, column: 13, scope: !690)
!692 = !MDLocation(line: 337, column: 9, scope: !690)
!693 = !MDLocation(line: 338, column: 19, scope: !694)
!694 = distinct !MDLexicalBlock(scope: !685, file: !1, line: 337, column: 16)
!695 = !MDLocation(line: 338, column: 17, scope: !694)
!696 = !MDLocation(line: 340, column: 16, scope: !686)
!697 = !MDLocation(line: 340, column: 9, scope: !686)
!698 = !MDLocation(line: 343, column: 18, scope: !39)
!699 = !MDLocation(line: 343, column: 5, scope: !39)
!700 = !MDLocation(line: 344, column: 20, scope: !39)
!701 = !MDLocation(line: 344, column: 9, scope: !39)
!702 = !MDLocation(line: 344, column: 7, scope: !39)
!703 = !MDLocation(line: 345, column: 20, scope: !39)
!704 = !MDLocation(line: 345, column: 9, scope: !39)
!705 = !MDLocation(line: 345, column: 7, scope: !39)
!706 = !MDLocation(line: 346, column: 25, scope: !39)
!707 = !MDLocation(line: 346, column: 14, scope: !39)
!708 = !MDLocation(line: 346, column: 5, scope: !39)
!709 = !MDLocation(line: 346, column: 12, scope: !39)
!710 = !MDLocation(line: 347, column: 10, scope: !711)
!711 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 347, column: 9)
!712 = !MDLocation(line: 347, column: 12, scope: !711)
!713 = !MDLocation(line: 347, column: 16, scope: !714)
!714 = !MDLexicalBlockFile(scope: !711, file: !1, discriminator: 1)
!715 = !MDLocation(line: 347, column: 18, scope: !711)
!716 = !MDLocation(line: 347, column: 22, scope: !717)
!717 = !MDLexicalBlockFile(scope: !711, file: !1, discriminator: 2)
!718 = !MDLocation(line: 347, column: 9, scope: !39)
!719 = !MDLocation(line: 348, column: 9, scope: !711)
!720 = !MDLocation(line: 354, column: 9, scope: !721)
!721 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 354, column: 9)
!722 = !MDLocation(line: 354, column: 17, scope: !721)
!723 = !MDLocation(line: 354, column: 9, scope: !39)
!724 = !MDLocation(line: 355, column: 16, scope: !721)
!725 = !MDLocation(line: 355, column: 14, scope: !721)
!726 = !MDLocation(line: 355, column: 9, scope: !721)
!727 = !MDLocation(line: 357, column: 21, scope: !728)
!728 = distinct !MDLexicalBlock(scope: !729, file: !1, line: 357, column: 13)
!729 = distinct !MDLexicalBlock(scope: !721, file: !1, line: 356, column: 10)
!730 = !MDLocation(line: 357, column: 19, scope: !728)
!731 = !MDLocation(line: 357, column: 40, scope: !728)
!732 = !MDLocation(line: 357, column: 13, scope: !729)
!733 = !MDLocation(line: 358, column: 13, scope: !728)
!734 = !MDLocation(line: 359, column: 30, scope: !735)
!735 = distinct !MDLexicalBlock(scope: !729, file: !1, line: 359, column: 13)
!736 = !MDLocation(line: 359, column: 36, scope: !735)
!737 = !MDLocation(line: 359, column: 39, scope: !735)
!738 = !MDLocation(line: 359, column: 14, scope: !735)
!739 = !MDLocation(line: 359, column: 13, scope: !729)
!740 = !MDLocation(line: 360, column: 13, scope: !735)
!741 = !MDLocation(line: 363, column: 9, scope: !742)
!742 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 363, column: 9)
!743 = !MDLocation(line: 363, column: 12, scope: !742)
!744 = !MDLocation(line: 363, column: 16, scope: !742)
!745 = !MDLocation(line: 363, column: 27, scope: !746)
!746 = !MDLexicalBlockFile(scope: !742, file: !1, discriminator: 1)
!747 = !MDLocation(line: 363, column: 30, scope: !742)
!748 = !MDLocation(line: 363, column: 19, scope: !742)
!749 = !MDLocation(line: 363, column: 33, scope: !742)
!750 = !MDLocation(line: 363, column: 9, scope: !39)
!751 = !MDLocation(line: 364, column: 23, scope: !752)
!752 = distinct !MDLexicalBlock(scope: !753, file: !1, line: 364, column: 13)
!753 = distinct !MDLexicalBlock(scope: !742, file: !1, line: 363, column: 39)
!754 = !MDLocation(line: 364, column: 31, scope: !752)
!755 = !MDLocation(line: 364, column: 34, scope: !752)
!756 = !MDLocation(line: 364, column: 37, scope: !752)
!757 = !MDLocation(line: 364, column: 14, scope: !752)
!758 = !MDLocation(line: 364, column: 13, scope: !753)
!759 = !MDLocation(line: 365, column: 13, scope: !752)
!760 = !MDLocation(line: 366, column: 14, scope: !753)
!761 = !MDLocation(line: 366, column: 12, scope: !753)
!762 = !MDLocation(line: 367, column: 5, scope: !753)
!763 = !MDLocation(line: 368, column: 14, scope: !742)
!764 = !MDLocation(line: 368, column: 12, scope: !742)
!765 = !MDLocation(line: 369, column: 20, scope: !766)
!766 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 369, column: 9)
!767 = !MDLocation(line: 369, column: 9, scope: !766)
!768 = !MDLocation(line: 369, column: 9, scope: !39)
!769 = !MDLocation(line: 370, column: 9, scope: !770)
!770 = distinct !MDLexicalBlock(scope: !766, file: !1, line: 369, column: 25)
!771 = !MDLocation(line: 371, column: 13, scope: !770)
!772 = !MDLocation(line: 372, column: 9, scope: !770)
!773 = !MDLocation(line: 374, column: 27, scope: !774)
!774 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 374, column: 9)
!775 = !MDLocation(line: 374, column: 35, scope: !774)
!776 = !MDLocation(line: 374, column: 39, scope: !774)
!777 = !MDLocation(line: 374, column: 45, scope: !774)
!778 = !MDLocation(line: 374, column: 10, scope: !774)
!779 = !MDLocation(line: 374, column: 9, scope: !39)
!780 = !MDLocation(line: 375, column: 9, scope: !774)
!781 = !MDLocation(line: 377, column: 14, scope: !39)
!782 = !MDLocation(line: 377, column: 14, scope: !783)
!783 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 1)
!784 = !MDLocation(line: 377, column: 14, scope: !785)
!785 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 2)
!786 = !MDLocation(line: 377, column: 14, scope: !787)
!787 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 4)
!788 = !MDLocation(line: 377, column: 14, scope: !789)
!789 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 5)
!790 = !MDLocation(line: 377, column: 14, scope: !791)
!791 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 7)
!792 = !MDLocation(line: 377, column: 14, scope: !793)
!793 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 8)
!794 = !MDLocation(line: 377, column: 14, scope: !795)
!795 = !MDLexicalBlockFile(scope: !796, file: !1, discriminator: 10)
!796 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 9)
!797 = !MDLocation(line: 377, column: 14, scope: !798)
!798 = !MDLexicalBlockFile(scope: !799, file: !1, discriminator: 11)
!799 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 6)
!800 = !MDLocation(line: 377, column: 12, scope: !801)
!801 = !MDLexicalBlockFile(scope: !802, file: !1, discriminator: 12)
!802 = !MDLexicalBlockFile(scope: !39, file: !1, discriminator: 3)
!803 = !MDLocation(line: 378, column: 9, scope: !804)
!804 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 378, column: 9)
!805 = !MDLocation(line: 378, column: 16, scope: !804)
!806 = !MDLocation(line: 378, column: 9, scope: !39)
!807 = !MDLocation(line: 379, column: 36, scope: !808)
!808 = distinct !MDLexicalBlock(scope: !809, file: !1, line: 379, column: 13)
!809 = distinct !MDLexicalBlock(scope: !804, file: !1, line: 378, column: 21)
!810 = !MDLocation(line: 379, column: 39, scope: !808)
!811 = !MDLocation(line: 379, column: 47, scope: !808)
!812 = !MDLocation(line: 379, column: 55, scope: !808)
!813 = !MDLocation(line: 379, column: 61, scope: !808)
!814 = !MDLocation(line: 379, column: 14, scope: !808)
!815 = !MDLocation(line: 379, column: 13, scope: !809)
!816 = !MDLocation(line: 380, column: 13, scope: !808)
!817 = !MDLocation(line: 381, column: 19, scope: !809)
!818 = !MDLocation(line: 381, column: 26, scope: !809)
!819 = !MDLocation(line: 381, column: 15, scope: !809)
!820 = !MDLocation(line: 381, column: 11, scope: !809)
!821 = !MDLocation(line: 382, column: 16, scope: !822)
!822 = distinct !MDLexicalBlock(scope: !809, file: !1, line: 382, column: 9)
!823 = !MDLocation(line: 382, column: 14, scope: !822)
!824 = !MDLocation(line: 382, column: 21, scope: !825)
!825 = !MDLexicalBlockFile(scope: !826, file: !1, discriminator: 2)
!826 = !MDLexicalBlockFile(scope: !827, file: !1, discriminator: 1)
!827 = distinct !MDLexicalBlock(scope: !822, file: !1, line: 382, column: 9)
!828 = !MDLocation(line: 382, column: 25, scope: !827)
!829 = !MDLocation(line: 382, column: 23, scope: !827)
!830 = !MDLocation(line: 382, column: 9, scope: !822)
!831 = !MDLocation(line: 383, column: 39, scope: !832)
!832 = distinct !MDLexicalBlock(scope: !833, file: !1, line: 383, column: 17)
!833 = distinct !MDLexicalBlock(scope: !827, file: !1, line: 382, column: 33)
!834 = !MDLocation(line: 383, column: 28, scope: !832)
!835 = !MDLocation(line: 383, column: 23, scope: !832)
!836 = !MDLocation(line: 383, column: 19, scope: !832)
!837 = !MDLocation(line: 383, column: 26, scope: !832)
!838 = !MDLocation(line: 383, column: 45, scope: !832)
!839 = !MDLocation(line: 383, column: 54, scope: !832)
!840 = !MDLocation(line: 384, column: 44, scope: !832)
!841 = !MDLocation(line: 384, column: 40, scope: !832)
!842 = !MDLocation(line: 384, column: 52, scope: !832)
!843 = !MDLocation(line: 384, column: 54, scope: !832)
!844 = !MDLocation(line: 384, column: 48, scope: !832)
!845 = !MDLocation(line: 384, column: 60, scope: !832)
!846 = !MDLocation(line: 384, column: 63, scope: !832)
!847 = !MDLocation(line: 384, column: 69, scope: !832)
!848 = !MDLocation(line: 384, column: 18, scope: !832)
!849 = !MDLocation(line: 383, column: 17, scope: !833)
!850 = !MDLocation(line: 385, column: 17, scope: !832)
!851 = !MDLocation(line: 386, column: 9, scope: !833)
!852 = !MDLocation(line: 382, column: 29, scope: !827)
!853 = !MDLocation(line: 382, column: 9, scope: !827)
!854 = !MDLocation(line: 387, column: 5, scope: !809)
!855 = !MDLocation(line: 389, column: 11, scope: !39)
!856 = !MDLocation(line: 392, column: 12, scope: !39)
!857 = !MDLocation(line: 393, column: 14, scope: !39)
!858 = !MDLocation(line: 393, column: 19, scope: !39)
!859 = !MDLocation(line: 393, column: 12, scope: !39)
!860 = !MDLocation(line: 394, column: 10, scope: !39)
!861 = !MDLocation(line: 397, column: 9, scope: !39)
!862 = !MDLocation(line: 397, column: 12, scope: !39)
!863 = !MDLocation(line: 397, column: 7, scope: !39)
!864 = !MDLocation(line: 398, column: 14, scope: !865)
!865 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 398, column: 9)
!866 = !MDLocation(line: 398, column: 16, scope: !865)
!867 = !MDLocation(line: 398, column: 9, scope: !865)
!868 = !MDLocation(line: 398, column: 12, scope: !865)
!869 = !MDLocation(line: 398, column: 21, scope: !865)
!870 = !MDLocation(line: 398, column: 9, scope: !39)
!871 = !MDLocation(line: 399, column: 24, scope: !872)
!872 = distinct !MDLexicalBlock(scope: !873, file: !1, line: 399, column: 13)
!873 = distinct !MDLexicalBlock(scope: !865, file: !1, line: 398, column: 58)
!874 = !MDLocation(line: 399, column: 27, scope: !872)
!875 = !MDLocation(line: 399, column: 13, scope: !872)
!876 = !MDLocation(line: 399, column: 30, scope: !872)
!877 = !MDLocation(line: 399, column: 13, scope: !873)
!878 = !MDLocation(line: 400, column: 13, scope: !872)
!879 = !MDLocation(line: 402, column: 24, scope: !873)
!880 = !MDLocation(line: 402, column: 27, scope: !873)
!881 = !MDLocation(line: 402, column: 22, scope: !873)
!882 = !MDLocation(line: 402, column: 9, scope: !873)
!883 = !MDLocation(line: 402, column: 12, scope: !873)
!884 = !MDLocation(line: 402, column: 17, scope: !873)
!885 = !MDLocation(line: 403, column: 16, scope: !886)
!886 = distinct !MDLexicalBlock(scope: !873, file: !1, line: 403, column: 9)
!887 = !MDLocation(line: 403, column: 14, scope: !886)
!888 = !MDLocation(line: 403, column: 21, scope: !889)
!889 = !MDLexicalBlockFile(scope: !890, file: !1, discriminator: 2)
!890 = !MDLexicalBlockFile(scope: !891, file: !1, discriminator: 1)
!891 = distinct !MDLexicalBlock(scope: !886, file: !1, line: 403, column: 9)
!892 = !MDLocation(line: 403, column: 25, scope: !891)
!893 = !MDLocation(line: 403, column: 23, scope: !891)
!894 = !MDLocation(line: 403, column: 9, scope: !886)
!895 = !MDLocation(line: 404, column: 30, scope: !891)
!896 = !MDLocation(line: 404, column: 25, scope: !891)
!897 = !MDLocation(line: 404, column: 28, scope: !891)
!898 = !MDLocation(line: 404, column: 24, scope: !891)
!899 = !MDLocation(line: 404, column: 18, scope: !891)
!900 = !MDLocation(line: 404, column: 13, scope: !891)
!901 = !MDLocation(line: 404, column: 16, scope: !891)
!902 = !MDLocation(line: 404, column: 21, scope: !891)
!903 = !MDLocation(line: 403, column: 29, scope: !891)
!904 = !MDLocation(line: 403, column: 9, scope: !891)
!905 = !MDLocation(line: 405, column: 18, scope: !873)
!906 = !MDLocation(line: 405, column: 9, scope: !873)
!907 = !MDLocation(line: 405, column: 12, scope: !873)
!908 = !MDLocation(line: 405, column: 16, scope: !873)
!909 = !MDLocation(line: 410, column: 24, scope: !873)
!910 = !MDLocation(line: 410, column: 9, scope: !873)
!911 = !MDLocation(line: 411, column: 5, scope: !873)
!912 = !MDLocation(line: 413, column: 27, scope: !913)
!913 = distinct !MDLexicalBlock(scope: !865, file: !1, line: 413, column: 9)
!914 = !MDLocation(line: 413, column: 30, scope: !913)
!915 = !MDLocation(line: 413, column: 46, scope: !913)
!916 = !MDLocation(line: 413, column: 52, scope: !913)
!917 = !MDLocation(line: 413, column: 10, scope: !913)
!918 = !MDLocation(line: 413, column: 9, scope: !865)
!919 = !MDLocation(line: 414, column: 9, scope: !913)
!920 = !MDLocation(line: 415, column: 5, scope: !39)
!921 = !MDLocation(line: 416, column: 27, scope: !922)
!922 = distinct !MDLexicalBlock(scope: !923, file: !1, line: 416, column: 13)
!923 = distinct !MDLexicalBlock(scope: !924, file: !1, line: 415, column: 14)
!924 = distinct !MDLexicalBlock(scope: !925, file: !1, line: 415, column: 5)
!925 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 415, column: 5)
!926 = !MDLocation(line: 416, column: 30, scope: !922)
!927 = !MDLocation(line: 416, column: 13, scope: !922)
!928 = !MDLocation(line: 416, column: 38, scope: !922)
!929 = !MDLocation(line: 416, column: 13, scope: !923)
!930 = !MDLocation(line: 417, column: 18, scope: !931)
!931 = distinct !MDLexicalBlock(scope: !932, file: !1, line: 417, column: 17)
!932 = distinct !MDLexicalBlock(scope: !922, file: !1, line: 416, column: 44)
!933 = !MDLocation(line: 417, column: 17, scope: !932)
!934 = !MDLocation(line: 418, column: 44, scope: !935)
!935 = distinct !MDLexicalBlock(scope: !936, file: !1, line: 418, column: 21)
!936 = distinct !MDLexicalBlock(scope: !931, file: !1, line: 417, column: 25)
!937 = !MDLocation(line: 418, column: 47, scope: !935)
!938 = !MDLocation(line: 418, column: 50, scope: !935)
!939 = !MDLocation(line: 418, column: 53, scope: !935)
!940 = !MDLocation(line: 418, column: 59, scope: !935)
!941 = !MDLocation(line: 418, column: 22, scope: !935)
!942 = !MDLocation(line: 418, column: 21, scope: !936)
!943 = !MDLocation(line: 419, column: 21, scope: !935)
!944 = !MDLocation(line: 420, column: 13, scope: !936)
!945 = !MDLocation(line: 421, column: 17, scope: !946)
!946 = distinct !MDLexicalBlock(scope: !932, file: !1, line: 421, column: 17)
!947 = !MDLocation(line: 421, column: 24, scope: !946)
!948 = !MDLocation(line: 421, column: 17, scope: !932)
!949 = !MDLocation(line: 422, column: 17, scope: !946)
!950 = !MDLocation(line: 423, column: 19, scope: !932)
!951 = !MDLocation(line: 424, column: 13, scope: !932)
!952 = !MDLocation(line: 431, column: 13, scope: !923)
!953 = !MDLocation(line: 431, column: 11, scope: !923)
!954 = !MDLocation(line: 432, column: 16, scope: !923)
!955 = !MDLocation(line: 433, column: 14, scope: !923)
!956 = !MDLocation(line: 434, column: 16, scope: !957)
!957 = distinct !MDLexicalBlock(scope: !923, file: !1, line: 434, column: 9)
!958 = !MDLocation(line: 434, column: 14, scope: !957)
!959 = !MDLocation(line: 434, column: 21, scope: !960)
!960 = !MDLexicalBlockFile(scope: !961, file: !1, discriminator: 2)
!961 = !MDLexicalBlockFile(scope: !962, file: !1, discriminator: 1)
!962 = distinct !MDLexicalBlock(scope: !957, file: !1, line: 434, column: 9)
!963 = !MDLocation(line: 434, column: 25, scope: !962)
!964 = !MDLocation(line: 434, column: 23, scope: !962)
!965 = !MDLocation(line: 434, column: 9, scope: !957)
!966 = !MDLocation(line: 435, column: 17, scope: !967)
!967 = distinct !MDLexicalBlock(scope: !968, file: !1, line: 435, column: 17)
!968 = distinct !MDLexicalBlock(scope: !962, file: !1, line: 434, column: 38)
!969 = !MDLocation(line: 435, column: 26, scope: !967)
!970 = !MDLocation(line: 435, column: 24, scope: !967)
!971 = !MDLocation(line: 435, column: 28, scope: !967)
!972 = !MDLocation(line: 435, column: 17, scope: !968)
!973 = !MDLocation(line: 436, column: 17, scope: !967)
!974 = !MDLocation(line: 437, column: 31, scope: !975)
!975 = distinct !MDLexicalBlock(scope: !968, file: !1, line: 437, column: 17)
!976 = !MDLocation(line: 437, column: 34, scope: !975)
!977 = !MDLocation(line: 437, column: 43, scope: !975)
!978 = !MDLocation(line: 437, column: 41, scope: !975)
!979 = !MDLocation(line: 437, column: 17, scope: !975)
!980 = !MDLocation(line: 437, column: 17, scope: !968)
!981 = !MDLocation(line: 438, column: 29, scope: !982)
!982 = distinct !MDLexicalBlock(scope: !975, file: !1, line: 437, column: 47)
!983 = !MDLocation(line: 438, column: 33, scope: !982)
!984 = !MDLocation(line: 438, column: 31, scope: !982)
!985 = !MDLocation(line: 438, column: 24, scope: !982)
!986 = !MDLocation(line: 439, column: 24, scope: !982)
!987 = !MDLocation(line: 440, column: 24, scope: !982)
!988 = !MDLocation(line: 440, column: 22, scope: !982)
!989 = !MDLocation(line: 441, column: 13, scope: !982)
!990 = !MDLocation(line: 442, column: 9, scope: !968)
!991 = !MDLocation(line: 434, column: 34, scope: !962)
!992 = !MDLocation(line: 434, column: 9, scope: !962)
!993 = !MDLocation(line: 445, column: 13, scope: !923)
!994 = !MDLocation(line: 445, column: 18, scope: !923)
!995 = !MDLocation(line: 445, column: 11, scope: !923)
!996 = !MDLocation(line: 447, column: 14, scope: !997)
!997 = distinct !MDLexicalBlock(scope: !923, file: !1, line: 447, column: 13)
!998 = !MDLocation(line: 447, column: 13, scope: !923)
!999 = !MDLocation(line: 448, column: 20, scope: !1000)
!1000 = distinct !MDLexicalBlock(scope: !997, file: !1, line: 448, column: 13)
!1001 = !MDLocation(line: 448, column: 18, scope: !1000)
!1002 = !MDLocation(line: 448, column: 25, scope: !1003)
!1003 = !MDLexicalBlockFile(scope: !1004, file: !1, discriminator: 2)
!1004 = !MDLexicalBlockFile(scope: !1005, file: !1, discriminator: 1)
!1005 = distinct !MDLexicalBlock(scope: !1000, file: !1, line: 448, column: 13)
!1006 = !MDLocation(line: 448, column: 29, scope: !1005)
!1007 = !MDLocation(line: 448, column: 27, scope: !1005)
!1008 = !MDLocation(line: 448, column: 13, scope: !1000)
!1009 = !MDLocation(line: 449, column: 44, scope: !1010)
!1010 = distinct !MDLexicalBlock(scope: !1011, file: !1, line: 449, column: 21)
!1011 = distinct !MDLexicalBlock(scope: !1005, file: !1, line: 448, column: 37)
!1012 = !MDLocation(line: 449, column: 47, scope: !1010)
!1013 = !MDLocation(line: 449, column: 50, scope: !1010)
!1014 = !MDLocation(line: 449, column: 53, scope: !1010)
!1015 = !MDLocation(line: 449, column: 59, scope: !1010)
!1016 = !MDLocation(line: 449, column: 22, scope: !1010)
!1017 = !MDLocation(line: 449, column: 21, scope: !1011)
!1018 = !MDLocation(line: 450, column: 21, scope: !1010)
!1019 = !MDLocation(line: 451, column: 13, scope: !1011)
!1020 = !MDLocation(line: 448, column: 33, scope: !1005)
!1021 = !MDLocation(line: 448, column: 13, scope: !1005)
!1022 = !MDLocation(line: 451, column: 13, scope: !1000)
!1023 = !MDLocation(line: 454, column: 36, scope: !1024)
!1024 = distinct !MDLexicalBlock(scope: !923, file: !1, line: 454, column: 13)
!1025 = !MDLocation(line: 454, column: 39, scope: !1024)
!1026 = !MDLocation(line: 454, column: 46, scope: !1024)
!1027 = !MDLocation(line: 454, column: 53, scope: !1024)
!1028 = !MDLocation(line: 454, column: 42, scope: !1024)
!1029 = !MDLocation(line: 454, column: 60, scope: !1024)
!1030 = !MDLocation(line: 454, column: 66, scope: !1024)
!1031 = !MDLocation(line: 454, column: 14, scope: !1024)
!1032 = !MDLocation(line: 454, column: 13, scope: !923)
!1033 = !MDLocation(line: 455, column: 13, scope: !1024)
!1034 = !MDLocation(line: 458, column: 19, scope: !923)
!1035 = !MDLocation(line: 458, column: 24, scope: !923)
!1036 = !MDLocation(line: 458, column: 16, scope: !923)
!1037 = !MDLocation(line: 459, column: 16, scope: !923)
!1038 = !MDLocation(line: 460, column: 15, scope: !923)
!1039 = !MDLocation(line: 461, column: 13, scope: !1040)
!1040 = distinct !MDLexicalBlock(scope: !923, file: !1, line: 461, column: 13)
!1041 = !MDLocation(line: 461, column: 20, scope: !1040)
!1042 = !MDLocation(line: 461, column: 13, scope: !923)
!1043 = !MDLocation(line: 462, column: 13, scope: !1040)
!1044 = !MDLocation(line: 415, column: 5, scope: !924)
!1045 = !MDLocation(line: 475, column: 29, scope: !1046)
!1046 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 475, column: 9)
!1047 = !MDLocation(line: 475, column: 33, scope: !1046)
!1048 = !MDLocation(line: 475, column: 36, scope: !1046)
!1049 = !MDLocation(line: 475, column: 42, scope: !1046)
!1050 = !MDLocation(line: 475, column: 10, scope: !1046)
!1051 = !MDLocation(line: 475, column: 9, scope: !39)
!1052 = !MDLocation(line: 476, column: 9, scope: !1046)
!1053 = !MDLocation(line: 477, column: 9, scope: !39)
!1054 = !MDLocation(line: 477, column: 5, scope: !39)
!1055 = !MDLocation(line: 479, column: 9, scope: !1056)
!1056 = distinct !MDLexicalBlock(scope: !39, file: !1, line: 479, column: 9)
!1057 = !MDLocation(line: 479, column: 17, scope: !1056)
!1058 = !MDLocation(line: 479, column: 9, scope: !39)
!1059 = !MDLocation(line: 480, column: 26, scope: !1056)
!1060 = !MDLocation(line: 480, column: 9, scope: !1056)
!1061 = !MDLocation(line: 481, column: 16, scope: !39)
!1062 = !MDLocation(line: 481, column: 5, scope: !39)
!1063 = !MDLocation(line: 483, column: 13, scope: !39)
!1064 = !MDLocation(line: 483, column: 5, scope: !39)
!1065 = !MDLocation(line: 484, column: 1, scope: !39)
!1066 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "r", arg: 1, scope: !38, file: !1, line: 171, type: !19)
!1067 = !MDLocation(line: 171, column: 29, scope: !38)
!1068 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !38, file: !1, line: 171, type: !30)
!1069 = !MDLocation(line: 171, column: 46, scope: !38)
!1070 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !38, file: !1, line: 171, type: !30)
!1071 = !MDLocation(line: 171, column: 63, scope: !38)
!1072 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !38, file: !1, line: 172, type: !30)
!1073 = !MDLocation(line: 172, column: 35, scope: !38)
!1074 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 5, scope: !38, file: !1, line: 172, type: !32)
!1075 = !MDLocation(line: 172, column: 46, scope: !38)
!1076 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !38, file: !1, line: 174, type: !18)
!1077 = !MDLocation(line: 174, column: 9, scope: !38)
!1078 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "j", scope: !38, file: !1, line: 174, type: !18)
!1079 = !MDLocation(line: 174, column: 12, scope: !38)
!1080 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bits", scope: !38, file: !1, line: 174, type: !18)
!1081 = !MDLocation(line: 174, column: 15, scope: !38)
!1082 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !38, file: !1, line: 174, type: !18)
!1083 = !MDLocation(line: 174, column: 21, scope: !38)
!1084 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wstart", scope: !38, file: !1, line: 174, type: !18)
!1085 = !MDLocation(line: 174, column: 30, scope: !38)
!1086 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wend", scope: !38, file: !1, line: 174, type: !18)
!1087 = !MDLocation(line: 174, column: 38, scope: !38)
!1088 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "window", scope: !38, file: !1, line: 174, type: !18)
!1089 = !MDLocation(line: 174, column: 44, scope: !38)
!1090 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wvalue", scope: !38, file: !1, line: 174, type: !18)
!1091 = !MDLocation(line: 174, column: 52, scope: !38)
!1092 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "start", scope: !38, file: !1, line: 175, type: !18)
!1093 = !MDLocation(line: 175, column: 9, scope: !38)
!1094 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "aa", scope: !38, file: !1, line: 176, type: !19)
!1095 = !MDLocation(line: 176, column: 13, scope: !38)
!1096 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "val", scope: !38, file: !1, line: 178, type: !641)
!1097 = !MDLocation(line: 178, column: 13, scope: !38)
!1098 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "recp", scope: !38, file: !1, line: 179, type: !1099)
!1099 = !MDDerivedType(tag: DW_TAG_typedef, name: "BN_RECP_CTX", file: !21, line: 84, baseType: !1100)
!1100 = !MDCompositeType(tag: DW_TAG_structure_type, name: "bn_recp_ctx_st", file: !23, line: 245, size: 512, align: 64, elements: !1101)
!1101 = !{!1102, !1103, !1104, !1105, !1106}
!1102 = !MDDerivedType(tag: DW_TAG_member, name: "N", scope: !1100, file: !23, line: 246, baseType: !20, size: 192, align: 64)
!1103 = !MDDerivedType(tag: DW_TAG_member, name: "Nr", scope: !1100, file: !23, line: 247, baseType: !20, size: 192, align: 64, offset: 192)
!1104 = !MDDerivedType(tag: DW_TAG_member, name: "num_bits", scope: !1100, file: !23, line: 248, baseType: !18, size: 32, align: 32, offset: 384)
!1105 = !MDDerivedType(tag: DW_TAG_member, name: "shift", scope: !1100, file: !23, line: 249, baseType: !18, size: 32, align: 32, offset: 416)
!1106 = !MDDerivedType(tag: DW_TAG_member, name: "flags", scope: !1100, file: !23, line: 250, baseType: !18, size: 32, align: 32, offset: 448)
!1107 = !MDLocation(line: 179, column: 17, scope: !38)
!1108 = !MDLocation(line: 181, column: 22, scope: !1109)
!1109 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 181, column: 9)
!1110 = !MDLocation(line: 181, column: 9, scope: !1109)
!1111 = !MDLocation(line: 181, column: 43, scope: !1109)
!1112 = !MDLocation(line: 182, column: 13, scope: !1109)
!1113 = !MDLocation(line: 182, column: 29, scope: !1114)
!1114 = !MDLexicalBlockFile(scope: !1109, file: !1, discriminator: 1)
!1115 = !MDLocation(line: 182, column: 16, scope: !1109)
!1116 = !MDLocation(line: 182, column: 50, scope: !1109)
!1117 = !MDLocation(line: 183, column: 13, scope: !1109)
!1118 = !MDLocation(line: 183, column: 29, scope: !1114)
!1119 = !MDLocation(line: 183, column: 16, scope: !1109)
!1120 = !MDLocation(line: 183, column: 50, scope: !1109)
!1121 = !MDLocation(line: 181, column: 9, scope: !38)
!1122 = !MDLocation(line: 185, column: 9, scope: !1123)
!1123 = distinct !MDLexicalBlock(scope: !1109, file: !1, line: 183, column: 56)
!1124 = !MDLocation(line: 186, column: 9, scope: !1123)
!1125 = !MDLocation(line: 189, column: 24, scope: !38)
!1126 = !MDLocation(line: 189, column: 12, scope: !38)
!1127 = !MDLocation(line: 189, column: 10, scope: !38)
!1128 = !MDLocation(line: 190, column: 9, scope: !1129)
!1129 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 190, column: 9)
!1130 = !MDLocation(line: 190, column: 14, scope: !1129)
!1131 = !MDLocation(line: 190, column: 9, scope: !38)
!1132 = !MDLocation(line: 192, column: 23, scope: !1133)
!1133 = distinct !MDLexicalBlock(scope: !1134, file: !1, line: 192, column: 13)
!1134 = distinct !MDLexicalBlock(scope: !1129, file: !1, line: 190, column: 20)
!1135 = !MDLocation(line: 192, column: 13, scope: !1133)
!1136 = !MDLocation(line: 192, column: 13, scope: !1134)
!1137 = !MDLocation(line: 193, column: 17, scope: !1138)
!1138 = distinct !MDLexicalBlock(scope: !1133, file: !1, line: 192, column: 27)
!1139 = !MDLocation(line: 194, column: 13, scope: !1138)
!1140 = !MDLocation(line: 195, column: 9, scope: !1138)
!1141 = !MDLocation(line: 196, column: 19, scope: !1142)
!1142 = distinct !MDLexicalBlock(scope: !1133, file: !1, line: 195, column: 16)
!1143 = !MDLocation(line: 196, column: 17, scope: !1142)
!1144 = !MDLocation(line: 198, column: 16, scope: !1134)
!1145 = !MDLocation(line: 198, column: 9, scope: !1134)
!1146 = !MDLocation(line: 201, column: 18, scope: !38)
!1147 = !MDLocation(line: 201, column: 5, scope: !38)
!1148 = !MDLocation(line: 202, column: 21, scope: !38)
!1149 = !MDLocation(line: 202, column: 10, scope: !38)
!1150 = !MDLocation(line: 202, column: 8, scope: !38)
!1151 = !MDLocation(line: 203, column: 25, scope: !38)
!1152 = !MDLocation(line: 203, column: 14, scope: !38)
!1153 = !MDLocation(line: 203, column: 5, scope: !38)
!1154 = !MDLocation(line: 203, column: 12, scope: !38)
!1155 = !MDLocation(line: 204, column: 10, scope: !1156)
!1156 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 204, column: 9)
!1157 = !MDLocation(line: 204, column: 13, scope: !1156)
!1158 = !MDLocation(line: 204, column: 17, scope: !1159)
!1159 = !MDLexicalBlockFile(scope: !1156, file: !1, discriminator: 1)
!1160 = !MDLocation(line: 204, column: 9, scope: !38)
!1161 = !MDLocation(line: 205, column: 9, scope: !1156)
!1162 = !MDLocation(line: 207, column: 5, scope: !38)
!1163 = !MDLocation(line: 208, column: 9, scope: !1164)
!1164 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 208, column: 9)
!1165 = !MDLocation(line: 208, column: 12, scope: !1164)
!1166 = !MDLocation(line: 208, column: 9, scope: !38)
!1167 = !MDLocation(line: 210, column: 22, scope: !1168)
!1168 = distinct !MDLexicalBlock(scope: !1169, file: !1, line: 210, column: 13)
!1169 = distinct !MDLexicalBlock(scope: !1164, file: !1, line: 208, column: 17)
!1170 = !MDLocation(line: 210, column: 26, scope: !1168)
!1171 = !MDLocation(line: 210, column: 14, scope: !1168)
!1172 = !MDLocation(line: 210, column: 13, scope: !1169)
!1173 = !MDLocation(line: 211, column: 13, scope: !1168)
!1174 = !MDLocation(line: 212, column: 9, scope: !1169)
!1175 = !MDLocation(line: 212, column: 13, scope: !1169)
!1176 = !MDLocation(line: 212, column: 17, scope: !1169)
!1177 = !MDLocation(line: 213, column: 36, scope: !1178)
!1178 = distinct !MDLexicalBlock(scope: !1169, file: !1, line: 213, column: 13)
!1179 = !MDLocation(line: 213, column: 40, scope: !1178)
!1180 = !MDLocation(line: 213, column: 13, scope: !1178)
!1181 = !MDLocation(line: 213, column: 45, scope: !1178)
!1182 = !MDLocation(line: 213, column: 13, scope: !1169)
!1183 = !MDLocation(line: 214, column: 13, scope: !1178)
!1184 = !MDLocation(line: 215, column: 5, scope: !1169)
!1185 = !MDLocation(line: 216, column: 36, scope: !1186)
!1186 = distinct !MDLexicalBlock(scope: !1187, file: !1, line: 216, column: 13)
!1187 = distinct !MDLexicalBlock(scope: !1164, file: !1, line: 215, column: 12)
!1188 = !MDLocation(line: 216, column: 39, scope: !1186)
!1189 = !MDLocation(line: 216, column: 13, scope: !1186)
!1190 = !MDLocation(line: 216, column: 44, scope: !1186)
!1191 = !MDLocation(line: 216, column: 13, scope: !1187)
!1192 = !MDLocation(line: 217, column: 13, scope: !1186)
!1193 = !MDLocation(line: 220, column: 19, scope: !1194)
!1194 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 220, column: 9)
!1195 = !MDLocation(line: 220, column: 27, scope: !1194)
!1196 = !MDLocation(line: 220, column: 30, scope: !1194)
!1197 = !MDLocation(line: 220, column: 33, scope: !1194)
!1198 = !MDLocation(line: 220, column: 10, scope: !1194)
!1199 = !MDLocation(line: 220, column: 9, scope: !38)
!1200 = !MDLocation(line: 221, column: 9, scope: !1194)
!1201 = !MDLocation(line: 222, column: 20, scope: !1202)
!1202 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 222, column: 9)
!1203 = !MDLocation(line: 222, column: 9, scope: !1202)
!1204 = !MDLocation(line: 222, column: 9, scope: !38)
!1205 = !MDLocation(line: 223, column: 9, scope: !1206)
!1206 = distinct !MDLexicalBlock(scope: !1202, file: !1, line: 222, column: 29)
!1207 = !MDLocation(line: 224, column: 13, scope: !1206)
!1208 = !MDLocation(line: 225, column: 9, scope: !1206)
!1209 = !MDLocation(line: 228, column: 14, scope: !38)
!1210 = !MDLocation(line: 228, column: 14, scope: !1211)
!1211 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 1)
!1212 = !MDLocation(line: 228, column: 14, scope: !1213)
!1213 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 2)
!1214 = !MDLocation(line: 228, column: 14, scope: !1215)
!1215 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 4)
!1216 = !MDLocation(line: 228, column: 14, scope: !1217)
!1217 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 5)
!1218 = !MDLocation(line: 228, column: 14, scope: !1219)
!1219 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 7)
!1220 = !MDLocation(line: 228, column: 14, scope: !1221)
!1221 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 8)
!1222 = !MDLocation(line: 228, column: 14, scope: !1223)
!1223 = !MDLexicalBlockFile(scope: !1224, file: !1, discriminator: 10)
!1224 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 9)
!1225 = !MDLocation(line: 228, column: 14, scope: !1226)
!1226 = !MDLexicalBlockFile(scope: !1227, file: !1, discriminator: 11)
!1227 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 6)
!1228 = !MDLocation(line: 228, column: 12, scope: !1229)
!1229 = !MDLexicalBlockFile(scope: !1230, file: !1, discriminator: 12)
!1230 = !MDLexicalBlockFile(scope: !38, file: !1, discriminator: 3)
!1231 = !MDLocation(line: 229, column: 9, scope: !1232)
!1232 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 229, column: 9)
!1233 = !MDLocation(line: 229, column: 16, scope: !1232)
!1234 = !MDLocation(line: 229, column: 9, scope: !38)
!1235 = !MDLocation(line: 230, column: 36, scope: !1236)
!1236 = distinct !MDLexicalBlock(scope: !1237, file: !1, line: 230, column: 13)
!1237 = distinct !MDLexicalBlock(scope: !1232, file: !1, line: 229, column: 21)
!1238 = !MDLocation(line: 230, column: 40, scope: !1236)
!1239 = !MDLocation(line: 230, column: 48, scope: !1236)
!1240 = !MDLocation(line: 230, column: 63, scope: !1236)
!1241 = !MDLocation(line: 230, column: 14, scope: !1236)
!1242 = !MDLocation(line: 230, column: 13, scope: !1237)
!1243 = !MDLocation(line: 231, column: 13, scope: !1236)
!1244 = !MDLocation(line: 232, column: 19, scope: !1237)
!1245 = !MDLocation(line: 232, column: 26, scope: !1237)
!1246 = !MDLocation(line: 232, column: 15, scope: !1237)
!1247 = !MDLocation(line: 232, column: 11, scope: !1237)
!1248 = !MDLocation(line: 233, column: 16, scope: !1249)
!1249 = distinct !MDLexicalBlock(scope: !1237, file: !1, line: 233, column: 9)
!1250 = !MDLocation(line: 233, column: 14, scope: !1249)
!1251 = !MDLocation(line: 233, column: 21, scope: !1252)
!1252 = !MDLexicalBlockFile(scope: !1253, file: !1, discriminator: 2)
!1253 = !MDLexicalBlockFile(scope: !1254, file: !1, discriminator: 1)
!1254 = distinct !MDLexicalBlock(scope: !1249, file: !1, line: 233, column: 9)
!1255 = !MDLocation(line: 233, column: 25, scope: !1254)
!1256 = !MDLocation(line: 233, column: 23, scope: !1254)
!1257 = !MDLocation(line: 233, column: 9, scope: !1249)
!1258 = !MDLocation(line: 234, column: 39, scope: !1259)
!1259 = distinct !MDLexicalBlock(scope: !1260, file: !1, line: 234, column: 17)
!1260 = distinct !MDLexicalBlock(scope: !1254, file: !1, line: 233, column: 33)
!1261 = !MDLocation(line: 234, column: 28, scope: !1259)
!1262 = !MDLocation(line: 234, column: 23, scope: !1259)
!1263 = !MDLocation(line: 234, column: 19, scope: !1259)
!1264 = !MDLocation(line: 234, column: 26, scope: !1259)
!1265 = !MDLocation(line: 234, column: 45, scope: !1259)
!1266 = !MDLocation(line: 234, column: 54, scope: !1259)
!1267 = !MDLocation(line: 235, column: 44, scope: !1259)
!1268 = !MDLocation(line: 235, column: 40, scope: !1259)
!1269 = !MDLocation(line: 235, column: 52, scope: !1259)
!1270 = !MDLocation(line: 235, column: 54, scope: !1259)
!1271 = !MDLocation(line: 235, column: 48, scope: !1259)
!1272 = !MDLocation(line: 235, column: 60, scope: !1259)
!1273 = !MDLocation(line: 235, column: 71, scope: !1259)
!1274 = !MDLocation(line: 235, column: 18, scope: !1259)
!1275 = !MDLocation(line: 234, column: 17, scope: !1260)
!1276 = !MDLocation(line: 236, column: 17, scope: !1259)
!1277 = !MDLocation(line: 237, column: 9, scope: !1260)
!1278 = !MDLocation(line: 233, column: 29, scope: !1254)
!1279 = !MDLocation(line: 233, column: 9, scope: !1254)
!1280 = !MDLocation(line: 238, column: 5, scope: !1237)
!1281 = !MDLocation(line: 240, column: 11, scope: !38)
!1282 = !MDLocation(line: 243, column: 12, scope: !38)
!1283 = !MDLocation(line: 244, column: 14, scope: !38)
!1284 = !MDLocation(line: 244, column: 19, scope: !38)
!1285 = !MDLocation(line: 244, column: 12, scope: !38)
!1286 = !MDLocation(line: 245, column: 10, scope: !38)
!1287 = !MDLocation(line: 247, column: 10, scope: !1288)
!1288 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 247, column: 9)
!1289 = !MDLocation(line: 247, column: 9, scope: !38)
!1290 = !MDLocation(line: 248, column: 9, scope: !1288)
!1291 = !MDLocation(line: 250, column: 5, scope: !38)
!1292 = !MDLocation(line: 251, column: 27, scope: !1293)
!1293 = distinct !MDLexicalBlock(scope: !1294, file: !1, line: 251, column: 13)
!1294 = distinct !MDLexicalBlock(scope: !1295, file: !1, line: 250, column: 14)
!1295 = distinct !MDLexicalBlock(scope: !1296, file: !1, line: 250, column: 5)
!1296 = distinct !MDLexicalBlock(scope: !38, file: !1, line: 250, column: 5)
!1297 = !MDLocation(line: 251, column: 30, scope: !1293)
!1298 = !MDLocation(line: 251, column: 13, scope: !1293)
!1299 = !MDLocation(line: 251, column: 38, scope: !1293)
!1300 = !MDLocation(line: 251, column: 13, scope: !1294)
!1301 = !MDLocation(line: 252, column: 18, scope: !1302)
!1302 = distinct !MDLexicalBlock(scope: !1303, file: !1, line: 252, column: 17)
!1303 = distinct !MDLexicalBlock(scope: !1293, file: !1, line: 251, column: 44)
!1304 = !MDLocation(line: 252, column: 17, scope: !1303)
!1305 = !MDLocation(line: 253, column: 44, scope: !1306)
!1306 = distinct !MDLexicalBlock(scope: !1302, file: !1, line: 253, column: 21)
!1307 = !MDLocation(line: 253, column: 47, scope: !1306)
!1308 = !MDLocation(line: 253, column: 50, scope: !1306)
!1309 = !MDLocation(line: 253, column: 60, scope: !1306)
!1310 = !MDLocation(line: 253, column: 22, scope: !1306)
!1311 = !MDLocation(line: 253, column: 21, scope: !1302)
!1312 = !MDLocation(line: 254, column: 21, scope: !1306)
!1313 = !MDLocation(line: 253, column: 63, scope: !1314)
!1314 = !MDLexicalBlockFile(scope: !1306, file: !1, discriminator: 1)
!1315 = !MDLocation(line: 255, column: 17, scope: !1316)
!1316 = distinct !MDLexicalBlock(scope: !1303, file: !1, line: 255, column: 17)
!1317 = !MDLocation(line: 255, column: 24, scope: !1316)
!1318 = !MDLocation(line: 255, column: 17, scope: !1303)
!1319 = !MDLocation(line: 256, column: 17, scope: !1316)
!1320 = !MDLocation(line: 257, column: 19, scope: !1303)
!1321 = !MDLocation(line: 258, column: 13, scope: !1303)
!1322 = !MDLocation(line: 265, column: 13, scope: !1294)
!1323 = !MDLocation(line: 265, column: 11, scope: !1294)
!1324 = !MDLocation(line: 266, column: 16, scope: !1294)
!1325 = !MDLocation(line: 267, column: 14, scope: !1294)
!1326 = !MDLocation(line: 268, column: 16, scope: !1327)
!1327 = distinct !MDLexicalBlock(scope: !1294, file: !1, line: 268, column: 9)
!1328 = !MDLocation(line: 268, column: 14, scope: !1327)
!1329 = !MDLocation(line: 268, column: 21, scope: !1330)
!1330 = !MDLexicalBlockFile(scope: !1331, file: !1, discriminator: 2)
!1331 = !MDLexicalBlockFile(scope: !1332, file: !1, discriminator: 1)
!1332 = distinct !MDLexicalBlock(scope: !1327, file: !1, line: 268, column: 9)
!1333 = !MDLocation(line: 268, column: 25, scope: !1332)
!1334 = !MDLocation(line: 268, column: 23, scope: !1332)
!1335 = !MDLocation(line: 268, column: 9, scope: !1327)
!1336 = !MDLocation(line: 269, column: 17, scope: !1337)
!1337 = distinct !MDLexicalBlock(scope: !1338, file: !1, line: 269, column: 17)
!1338 = distinct !MDLexicalBlock(scope: !1332, file: !1, line: 268, column: 38)
!1339 = !MDLocation(line: 269, column: 26, scope: !1337)
!1340 = !MDLocation(line: 269, column: 24, scope: !1337)
!1341 = !MDLocation(line: 269, column: 28, scope: !1337)
!1342 = !MDLocation(line: 269, column: 17, scope: !1338)
!1343 = !MDLocation(line: 270, column: 17, scope: !1337)
!1344 = !MDLocation(line: 271, column: 31, scope: !1345)
!1345 = distinct !MDLexicalBlock(scope: !1338, file: !1, line: 271, column: 17)
!1346 = !MDLocation(line: 271, column: 34, scope: !1345)
!1347 = !MDLocation(line: 271, column: 43, scope: !1345)
!1348 = !MDLocation(line: 271, column: 41, scope: !1345)
!1349 = !MDLocation(line: 271, column: 17, scope: !1345)
!1350 = !MDLocation(line: 271, column: 17, scope: !1338)
!1351 = !MDLocation(line: 272, column: 29, scope: !1352)
!1352 = distinct !MDLexicalBlock(scope: !1345, file: !1, line: 271, column: 47)
!1353 = !MDLocation(line: 272, column: 33, scope: !1352)
!1354 = !MDLocation(line: 272, column: 31, scope: !1352)
!1355 = !MDLocation(line: 272, column: 24, scope: !1352)
!1356 = !MDLocation(line: 273, column: 24, scope: !1352)
!1357 = !MDLocation(line: 274, column: 24, scope: !1352)
!1358 = !MDLocation(line: 274, column: 22, scope: !1352)
!1359 = !MDLocation(line: 275, column: 13, scope: !1352)
!1360 = !MDLocation(line: 276, column: 9, scope: !1338)
!1361 = !MDLocation(line: 268, column: 34, scope: !1332)
!1362 = !MDLocation(line: 268, column: 9, scope: !1332)
!1363 = !MDLocation(line: 279, column: 13, scope: !1294)
!1364 = !MDLocation(line: 279, column: 18, scope: !1294)
!1365 = !MDLocation(line: 279, column: 11, scope: !1294)
!1366 = !MDLocation(line: 281, column: 14, scope: !1367)
!1367 = distinct !MDLexicalBlock(scope: !1294, file: !1, line: 281, column: 13)
!1368 = !MDLocation(line: 281, column: 13, scope: !1294)
!1369 = !MDLocation(line: 282, column: 20, scope: !1370)
!1370 = distinct !MDLexicalBlock(scope: !1367, file: !1, line: 282, column: 13)
!1371 = !MDLocation(line: 282, column: 18, scope: !1370)
!1372 = !MDLocation(line: 282, column: 25, scope: !1373)
!1373 = !MDLexicalBlockFile(scope: !1374, file: !1, discriminator: 2)
!1374 = !MDLexicalBlockFile(scope: !1375, file: !1, discriminator: 1)
!1375 = distinct !MDLexicalBlock(scope: !1370, file: !1, line: 282, column: 13)
!1376 = !MDLocation(line: 282, column: 29, scope: !1375)
!1377 = !MDLocation(line: 282, column: 27, scope: !1375)
!1378 = !MDLocation(line: 282, column: 13, scope: !1370)
!1379 = !MDLocation(line: 283, column: 44, scope: !1380)
!1380 = distinct !MDLexicalBlock(scope: !1381, file: !1, line: 283, column: 21)
!1381 = distinct !MDLexicalBlock(scope: !1375, file: !1, line: 282, column: 37)
!1382 = !MDLocation(line: 283, column: 47, scope: !1380)
!1383 = !MDLocation(line: 283, column: 50, scope: !1380)
!1384 = !MDLocation(line: 283, column: 60, scope: !1380)
!1385 = !MDLocation(line: 283, column: 22, scope: !1380)
!1386 = !MDLocation(line: 283, column: 21, scope: !1381)
!1387 = !MDLocation(line: 284, column: 21, scope: !1380)
!1388 = !MDLocation(line: 285, column: 13, scope: !1381)
!1389 = !MDLocation(line: 282, column: 33, scope: !1375)
!1390 = !MDLocation(line: 282, column: 13, scope: !1375)
!1391 = !MDLocation(line: 285, column: 13, scope: !1370)
!1392 = !MDLocation(line: 288, column: 36, scope: !1393)
!1393 = distinct !MDLexicalBlock(scope: !1294, file: !1, line: 288, column: 13)
!1394 = !MDLocation(line: 288, column: 39, scope: !1393)
!1395 = !MDLocation(line: 288, column: 46, scope: !1393)
!1396 = !MDLocation(line: 288, column: 53, scope: !1393)
!1397 = !MDLocation(line: 288, column: 42, scope: !1393)
!1398 = !MDLocation(line: 288, column: 67, scope: !1393)
!1399 = !MDLocation(line: 288, column: 14, scope: !1393)
!1400 = !MDLocation(line: 288, column: 13, scope: !1294)
!1401 = !MDLocation(line: 289, column: 13, scope: !1393)
!1402 = !MDLocation(line: 292, column: 19, scope: !1294)
!1403 = !MDLocation(line: 292, column: 24, scope: !1294)
!1404 = !MDLocation(line: 292, column: 16, scope: !1294)
!1405 = !MDLocation(line: 293, column: 16, scope: !1294)
!1406 = !MDLocation(line: 294, column: 15, scope: !1294)
!1407 = !MDLocation(line: 295, column: 13, scope: !1408)
!1408 = distinct !MDLexicalBlock(scope: !1294, file: !1, line: 295, column: 13)
!1409 = !MDLocation(line: 295, column: 20, scope: !1408)
!1410 = !MDLocation(line: 295, column: 13, scope: !1294)
!1411 = !MDLocation(line: 296, column: 13, scope: !1408)
!1412 = !MDLocation(line: 250, column: 5, scope: !1295)
!1413 = !MDLocation(line: 298, column: 9, scope: !38)
!1414 = !MDLocation(line: 298, column: 5, scope: !38)
!1415 = !MDLocation(line: 300, column: 16, scope: !38)
!1416 = !MDLocation(line: 300, column: 5, scope: !38)
!1417 = !MDLocation(line: 301, column: 5, scope: !38)
!1418 = !MDLocation(line: 303, column: 13, scope: !38)
!1419 = !MDLocation(line: 303, column: 5, scope: !38)
!1420 = !MDLocation(line: 304, column: 1, scope: !38)
!1421 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "rr", arg: 1, scope: !55, file: !1, line: 600, type: !19)
!1422 = !MDLocation(line: 600, column: 39, scope: !55)
!1423 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !55, file: !1, line: 600, type: !30)
!1424 = !MDLocation(line: 600, column: 57, scope: !55)
!1425 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !55, file: !1, line: 600, type: !30)
!1426 = !MDLocation(line: 600, column: 74, scope: !55)
!1427 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !55, file: !1, line: 601, type: !30)
!1428 = !MDLocation(line: 601, column: 45, scope: !55)
!1429 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 5, scope: !55, file: !1, line: 601, type: !32)
!1430 = !MDLocation(line: 601, column: 56, scope: !55)
!1431 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "in_mont", arg: 6, scope: !55, file: !1, line: 602, type: !42)
!1432 = !MDLocation(line: 602, column: 44, scope: !55)
!1433 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !55, file: !1, line: 604, type: !18)
!1434 = !MDLocation(line: 604, column: 9, scope: !55)
!1435 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bits", scope: !55, file: !1, line: 604, type: !18)
!1436 = !MDLocation(line: 604, column: 12, scope: !55)
!1437 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !55, file: !1, line: 604, type: !18)
!1438 = !MDLocation(line: 604, column: 18, scope: !55)
!1439 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "window", scope: !55, file: !1, line: 604, type: !18)
!1440 = !MDLocation(line: 604, column: 27, scope: !55)
!1441 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wvalue", scope: !55, file: !1, line: 604, type: !18)
!1442 = !MDLocation(line: 604, column: 35, scope: !55)
!1443 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "top", scope: !55, file: !1, line: 605, type: !18)
!1444 = !MDLocation(line: 605, column: 9, scope: !55)
!1445 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mont", scope: !55, file: !1, line: 606, type: !42)
!1446 = !MDLocation(line: 606, column: 18, scope: !55)
!1447 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "numPowers", scope: !55, file: !1, line: 608, type: !18)
!1448 = !MDLocation(line: 608, column: 9, scope: !55)
!1449 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "powerbufFree", scope: !55, file: !1, line: 609, type: !6)
!1450 = !MDLocation(line: 609, column: 20, scope: !55)
!1451 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "powerbufLen", scope: !55, file: !1, line: 610, type: !18)
!1452 = !MDLocation(line: 610, column: 9, scope: !55)
!1453 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "powerbuf", scope: !55, file: !1, line: 611, type: !6)
!1454 = !MDLocation(line: 611, column: 20, scope: !55)
!1455 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "tmp", scope: !55, file: !1, line: 612, type: !20)
!1456 = !MDLocation(line: 612, column: 12, scope: !55)
!1457 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "am", scope: !55, file: !1, line: 612, type: !20)
!1458 = !MDLocation(line: 612, column: 17, scope: !55)
!1459 = !MDLocation(line: 621, column: 20, scope: !1460)
!1460 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 621, column: 9)
!1461 = !MDLocation(line: 621, column: 10, scope: !1460)
!1462 = !MDLocation(line: 621, column: 9, scope: !55)
!1463 = !MDLocation(line: 622, column: 9, scope: !1464)
!1464 = distinct !MDLexicalBlock(scope: !1460, file: !1, line: 621, column: 24)
!1465 = !MDLocation(line: 623, column: 9, scope: !1464)
!1466 = !MDLocation(line: 626, column: 11, scope: !55)
!1467 = !MDLocation(line: 626, column: 14, scope: !55)
!1468 = !MDLocation(line: 626, column: 9, scope: !55)
!1469 = !MDLocation(line: 628, column: 24, scope: !55)
!1470 = !MDLocation(line: 628, column: 12, scope: !55)
!1471 = !MDLocation(line: 628, column: 10, scope: !55)
!1472 = !MDLocation(line: 629, column: 9, scope: !1473)
!1473 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 629, column: 9)
!1474 = !MDLocation(line: 629, column: 14, scope: !1473)
!1475 = !MDLocation(line: 629, column: 9, scope: !55)
!1476 = !MDLocation(line: 631, column: 23, scope: !1477)
!1477 = distinct !MDLexicalBlock(scope: !1478, file: !1, line: 631, column: 13)
!1478 = distinct !MDLexicalBlock(scope: !1473, file: !1, line: 629, column: 20)
!1479 = !MDLocation(line: 631, column: 13, scope: !1477)
!1480 = !MDLocation(line: 631, column: 13, scope: !1478)
!1481 = !MDLocation(line: 632, column: 17, scope: !1482)
!1482 = distinct !MDLexicalBlock(scope: !1477, file: !1, line: 631, column: 27)
!1483 = !MDLocation(line: 633, column: 13, scope: !1482)
!1484 = !MDLocation(line: 634, column: 9, scope: !1482)
!1485 = !MDLocation(line: 635, column: 19, scope: !1486)
!1486 = distinct !MDLexicalBlock(scope: !1477, file: !1, line: 634, column: 16)
!1487 = !MDLocation(line: 635, column: 17, scope: !1486)
!1488 = !MDLocation(line: 637, column: 16, scope: !1478)
!1489 = !MDLocation(line: 637, column: 9, scope: !1478)
!1490 = !MDLocation(line: 640, column: 18, scope: !55)
!1491 = !MDLocation(line: 640, column: 5, scope: !55)
!1492 = !MDLocation(line: 646, column: 9, scope: !1493)
!1493 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 646, column: 9)
!1494 = !MDLocation(line: 646, column: 17, scope: !1493)
!1495 = !MDLocation(line: 646, column: 9, scope: !55)
!1496 = !MDLocation(line: 647, column: 16, scope: !1493)
!1497 = !MDLocation(line: 647, column: 14, scope: !1493)
!1498 = !MDLocation(line: 647, column: 9, scope: !1493)
!1499 = !MDLocation(line: 649, column: 21, scope: !1500)
!1500 = distinct !MDLexicalBlock(scope: !1501, file: !1, line: 649, column: 13)
!1501 = distinct !MDLexicalBlock(scope: !1493, file: !1, line: 648, column: 10)
!1502 = !MDLocation(line: 649, column: 19, scope: !1500)
!1503 = !MDLocation(line: 649, column: 40, scope: !1500)
!1504 = !MDLocation(line: 649, column: 13, scope: !1501)
!1505 = !MDLocation(line: 650, column: 13, scope: !1500)
!1506 = !MDLocation(line: 651, column: 30, scope: !1507)
!1507 = distinct !MDLexicalBlock(scope: !1501, file: !1, line: 651, column: 13)
!1508 = !MDLocation(line: 651, column: 36, scope: !1507)
!1509 = !MDLocation(line: 651, column: 39, scope: !1507)
!1510 = !MDLocation(line: 651, column: 14, scope: !1507)
!1511 = !MDLocation(line: 651, column: 13, scope: !1501)
!1512 = !MDLocation(line: 652, column: 13, scope: !1507)
!1513 = !MDLocation(line: 685, column: 14, scope: !55)
!1514 = !MDLocation(line: 685, column: 14, scope: !1515)
!1515 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 1)
!1516 = !MDLocation(line: 685, column: 14, scope: !1517)
!1517 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 2)
!1518 = !MDLocation(line: 685, column: 14, scope: !1519)
!1519 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 4)
!1520 = !MDLocation(line: 685, column: 14, scope: !1521)
!1521 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 5)
!1522 = !MDLocation(line: 685, column: 14, scope: !1523)
!1523 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 7)
!1524 = !MDLocation(line: 685, column: 14, scope: !1525)
!1525 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 8)
!1526 = !MDLocation(line: 685, column: 14, scope: !1527)
!1527 = !MDLexicalBlockFile(scope: !1528, file: !1, discriminator: 10)
!1528 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 9)
!1529 = !MDLocation(line: 685, column: 14, scope: !1530)
!1530 = !MDLexicalBlockFile(scope: !1531, file: !1, discriminator: 11)
!1531 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 6)
!1532 = !MDLocation(line: 685, column: 12, scope: !1533)
!1533 = !MDLexicalBlockFile(scope: !1534, file: !1, discriminator: 12)
!1534 = !MDLexicalBlockFile(scope: !55, file: !1, discriminator: 3)
!1535 = !MDLocation(line: 707, column: 22, scope: !55)
!1536 = !MDLocation(line: 707, column: 19, scope: !55)
!1537 = !MDLocation(line: 707, column: 15, scope: !55)
!1538 = !MDLocation(line: 708, column: 39, scope: !55)
!1539 = !MDLocation(line: 708, column: 45, scope: !55)
!1540 = !MDLocation(line: 708, column: 43, scope: !55)
!1541 = !MDLocation(line: 709, column: 45, scope: !55)
!1542 = !MDLocation(line: 709, column: 43, scope: !55)
!1543 = !MDLocation(line: 710, column: 40, scope: !55)
!1544 = !MDLocation(line: 709, column: 50, scope: !55)
!1545 = !MDLocation(line: 709, column: 40, scope: !55)
!1546 = !MDLocation(line: 710, column: 57, scope: !55)
!1547 = !MDLocation(line: 710, column: 55, scope: !55)
!1548 = !MDLocation(line: 710, column: 64, scope: !55)
!1549 = !MDLocation(line: 708, column: 55, scope: !55)
!1550 = !MDLocation(line: 708, column: 38, scope: !55)
!1551 = !MDLocation(line: 708, column: 36, scope: !55)
!1552 = !MDLocation(line: 708, column: 17, scope: !55)
!1553 = !MDLocation(line: 712, column: 9, scope: !1554)
!1554 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 712, column: 9)
!1555 = !MDLocation(line: 712, column: 21, scope: !1554)
!1556 = !MDLocation(line: 712, column: 9, scope: !55)
!1557 = !MDLocation(line: 714, column: 13, scope: !1554)
!1558 = !MDLocation(line: 713, column: 22, scope: !1554)
!1559 = !MDLocation(line: 713, column: 9, scope: !1554)
!1560 = !MDLocation(line: 718, column: 14, scope: !1561)
!1561 = distinct !MDLexicalBlock(scope: !1554, file: !1, line: 717, column: 13)
!1562 = !MDLocation(line: 717, column: 27, scope: !1561)
!1563 = !MDLocation(line: 719, column: 13, scope: !1561)
!1564 = !MDLocation(line: 717, column: 13, scope: !1554)
!1565 = !MDLocation(line: 720, column: 9, scope: !1561)
!1566 = !MDLocation(line: 722, column: 16, scope: !55)
!1567 = !MDLocation(line: 722, column: 14, scope: !55)
!1568 = !MDLocation(line: 723, column: 12, scope: !55)
!1569 = !MDLocation(line: 723, column: 25, scope: !55)
!1570 = !MDLocation(line: 723, column: 5, scope: !55)
!1571 = !MDLocation(line: 726, column: 9, scope: !1572)
!1572 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 726, column: 9)
!1573 = !MDLocation(line: 726, column: 21, scope: !1572)
!1574 = !MDLocation(line: 726, column: 9, scope: !55)
!1575 = !MDLocation(line: 727, column: 22, scope: !1572)
!1576 = !MDLocation(line: 727, column: 9, scope: !1572)
!1577 = !MDLocation(line: 731, column: 26, scope: !55)
!1578 = !MDLocation(line: 731, column: 55, scope: !55)
!1579 = !MDLocation(line: 731, column: 53, scope: !55)
!1580 = !MDLocation(line: 731, column: 61, scope: !55)
!1581 = !MDLocation(line: 731, column: 59, scope: !55)
!1582 = !MDLocation(line: 731, column: 35, scope: !55)
!1583 = !MDLocation(line: 731, column: 13, scope: !55)
!1584 = !MDLocation(line: 731, column: 9, scope: !55)
!1585 = !MDLocation(line: 731, column: 11, scope: !55)
!1586 = !MDLocation(line: 732, column: 16, scope: !55)
!1587 = !MDLocation(line: 732, column: 20, scope: !55)
!1588 = !MDLocation(line: 732, column: 18, scope: !55)
!1589 = !MDLocation(line: 732, column: 8, scope: !55)
!1590 = !MDLocation(line: 732, column: 10, scope: !55)
!1591 = !MDLocation(line: 733, column: 18, scope: !55)
!1592 = !MDLocation(line: 733, column: 22, scope: !55)
!1593 = !MDLocation(line: 733, column: 9, scope: !55)
!1594 = !MDLocation(line: 733, column: 13, scope: !55)
!1595 = !MDLocation(line: 734, column: 26, scope: !55)
!1596 = !MDLocation(line: 734, column: 19, scope: !55)
!1597 = !MDLocation(line: 734, column: 24, scope: !55)
!1598 = !MDLocation(line: 734, column: 9, scope: !55)
!1599 = !MDLocation(line: 734, column: 14, scope: !55)
!1600 = !MDLocation(line: 735, column: 18, scope: !55)
!1601 = !MDLocation(line: 735, column: 22, scope: !55)
!1602 = !MDLocation(line: 735, column: 9, scope: !55)
!1603 = !MDLocation(line: 735, column: 13, scope: !55)
!1604 = !MDLocation(line: 736, column: 20, scope: !55)
!1605 = !MDLocation(line: 736, column: 26, scope: !55)
!1606 = !MDLocation(line: 736, column: 9, scope: !55)
!1607 = !MDLocation(line: 736, column: 15, scope: !55)
!1608 = !MDLocation(line: 740, column: 14, scope: !1609)
!1609 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 740, column: 9)
!1610 = !MDLocation(line: 740, column: 18, scope: !1609)
!1611 = !MDLocation(line: 740, column: 9, scope: !1609)
!1612 = !MDLocation(line: 740, column: 12, scope: !1609)
!1613 = !MDLocation(line: 740, column: 23, scope: !1609)
!1614 = !MDLocation(line: 740, column: 9, scope: !55)
!1615 = !MDLocation(line: 742, column: 25, scope: !1616)
!1616 = distinct !MDLexicalBlock(scope: !1609, file: !1, line: 740, column: 60)
!1617 = !MDLocation(line: 742, column: 28, scope: !1616)
!1618 = !MDLocation(line: 742, column: 23, scope: !1616)
!1619 = !MDLocation(line: 742, column: 13, scope: !1616)
!1620 = !MDLocation(line: 742, column: 9, scope: !1616)
!1621 = !MDLocation(line: 742, column: 18, scope: !1616)
!1622 = !MDLocation(line: 743, column: 16, scope: !1623)
!1623 = distinct !MDLexicalBlock(scope: !1616, file: !1, line: 743, column: 9)
!1624 = !MDLocation(line: 743, column: 14, scope: !1623)
!1625 = !MDLocation(line: 743, column: 21, scope: !1626)
!1626 = !MDLexicalBlockFile(scope: !1627, file: !1, discriminator: 2)
!1627 = !MDLexicalBlockFile(scope: !1628, file: !1, discriminator: 1)
!1628 = distinct !MDLexicalBlock(scope: !1623, file: !1, line: 743, column: 9)
!1629 = !MDLocation(line: 743, column: 25, scope: !1628)
!1630 = !MDLocation(line: 743, column: 23, scope: !1628)
!1631 = !MDLocation(line: 743, column: 9, scope: !1623)
!1632 = !MDLocation(line: 744, column: 31, scope: !1628)
!1633 = !MDLocation(line: 744, column: 26, scope: !1628)
!1634 = !MDLocation(line: 744, column: 29, scope: !1628)
!1635 = !MDLocation(line: 744, column: 25, scope: !1628)
!1636 = !MDLocation(line: 744, column: 19, scope: !1628)
!1637 = !MDLocation(line: 744, column: 13, scope: !1628)
!1638 = !MDLocation(line: 744, column: 17, scope: !1628)
!1639 = !MDLocation(line: 744, column: 22, scope: !1628)
!1640 = !MDLocation(line: 743, column: 31, scope: !1628)
!1641 = !MDLocation(line: 743, column: 9, scope: !1628)
!1642 = !MDLocation(line: 745, column: 19, scope: !1616)
!1643 = !MDLocation(line: 745, column: 13, scope: !1616)
!1644 = !MDLocation(line: 745, column: 17, scope: !1616)
!1645 = !MDLocation(line: 746, column: 5, scope: !1616)
!1646 = !MDLocation(line: 748, column: 33, scope: !1647)
!1647 = distinct !MDLexicalBlock(scope: !1609, file: !1, line: 748, column: 9)
!1648 = !MDLocation(line: 748, column: 49, scope: !1647)
!1649 = !MDLocation(line: 748, column: 55, scope: !1647)
!1650 = !MDLocation(line: 748, column: 10, scope: !1647)
!1651 = !MDLocation(line: 748, column: 9, scope: !1609)
!1652 = !MDLocation(line: 749, column: 9, scope: !1647)
!1653 = !MDLocation(line: 752, column: 9, scope: !1654)
!1654 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 752, column: 9)
!1655 = !MDLocation(line: 752, column: 12, scope: !1654)
!1656 = !MDLocation(line: 752, column: 16, scope: !1654)
!1657 = !MDLocation(line: 752, column: 27, scope: !1658)
!1658 = !MDLexicalBlockFile(scope: !1654, file: !1, discriminator: 1)
!1659 = !MDLocation(line: 752, column: 30, scope: !1654)
!1660 = !MDLocation(line: 752, column: 19, scope: !1654)
!1661 = !MDLocation(line: 752, column: 33, scope: !1654)
!1662 = !MDLocation(line: 752, column: 9, scope: !55)
!1663 = !MDLocation(line: 753, column: 14, scope: !1664)
!1664 = distinct !MDLexicalBlock(scope: !1665, file: !1, line: 753, column: 13)
!1665 = distinct !MDLexicalBlock(scope: !1654, file: !1, line: 752, column: 39)
!1666 = !MDLocation(line: 753, column: 13, scope: !1665)
!1667 = !MDLocation(line: 754, column: 13, scope: !1664)
!1668 = !MDLocation(line: 755, column: 41, scope: !1669)
!1669 = distinct !MDLexicalBlock(scope: !1665, file: !1, line: 755, column: 13)
!1670 = !MDLocation(line: 755, column: 47, scope: !1669)
!1671 = !MDLocation(line: 755, column: 14, scope: !1669)
!1672 = !MDLocation(line: 755, column: 13, scope: !1665)
!1673 = !MDLocation(line: 756, column: 13, scope: !1669)
!1674 = !MDLocation(line: 757, column: 5, scope: !1665)
!1675 = !MDLocation(line: 757, column: 39, scope: !1676)
!1676 = distinct !MDLexicalBlock(scope: !1654, file: !1, line: 757, column: 16)
!1677 = !MDLocation(line: 757, column: 42, scope: !1676)
!1678 = !MDLocation(line: 757, column: 48, scope: !1676)
!1679 = !MDLocation(line: 757, column: 17, scope: !1676)
!1680 = !MDLocation(line: 757, column: 16, scope: !1654)
!1681 = !MDLocation(line: 758, column: 9, scope: !1676)
!1682 = !MDLocation(line: 1012, column: 49, scope: !1683)
!1683 = distinct !MDLexicalBlock(scope: !1684, file: !1, line: 1012, column: 13)
!1684 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 1011, column: 5)
!1685 = !MDLocation(line: 1012, column: 54, scope: !1683)
!1686 = !MDLocation(line: 1012, column: 67, scope: !1683)
!1687 = !MDLocation(line: 1012, column: 14, scope: !1683)
!1688 = !MDLocation(line: 1012, column: 13, scope: !1684)
!1689 = !MDLocation(line: 1013, column: 13, scope: !1683)
!1690 = !MDLocation(line: 1014, column: 48, scope: !1691)
!1691 = distinct !MDLexicalBlock(scope: !1684, file: !1, line: 1014, column: 13)
!1692 = !MDLocation(line: 1014, column: 53, scope: !1691)
!1693 = !MDLocation(line: 1014, column: 66, scope: !1691)
!1694 = !MDLocation(line: 1014, column: 14, scope: !1691)
!1695 = !MDLocation(line: 1014, column: 13, scope: !1684)
!1696 = !MDLocation(line: 1015, column: 13, scope: !1691)
!1697 = !MDLocation(line: 1023, column: 13, scope: !1698)
!1698 = distinct !MDLexicalBlock(scope: !1684, file: !1, line: 1023, column: 13)
!1699 = !MDLocation(line: 1023, column: 20, scope: !1698)
!1700 = !MDLocation(line: 1023, column: 13, scope: !1684)
!1701 = !MDLocation(line: 1024, column: 56, scope: !1702)
!1702 = distinct !MDLexicalBlock(scope: !1703, file: !1, line: 1024, column: 17)
!1703 = distinct !MDLexicalBlock(scope: !1698, file: !1, line: 1023, column: 25)
!1704 = !MDLocation(line: 1024, column: 62, scope: !1702)
!1705 = !MDLocation(line: 1024, column: 18, scope: !1702)
!1706 = !MDLocation(line: 1024, column: 17, scope: !1703)
!1707 = !MDLocation(line: 1025, column: 17, scope: !1702)
!1708 = !MDLocation(line: 1026, column: 53, scope: !1709)
!1709 = distinct !MDLexicalBlock(scope: !1703, file: !1, line: 1026, column: 17)
!1710 = !MDLocation(line: 1026, column: 58, scope: !1709)
!1711 = !MDLocation(line: 1027, column: 47, scope: !1709)
!1712 = !MDLocation(line: 1026, column: 18, scope: !1709)
!1713 = !MDLocation(line: 1026, column: 17, scope: !1703)
!1714 = !MDLocation(line: 1028, column: 17, scope: !1709)
!1715 = !MDLocation(line: 1029, column: 20, scope: !1716)
!1716 = distinct !MDLexicalBlock(scope: !1703, file: !1, line: 1029, column: 13)
!1717 = !MDLocation(line: 1029, column: 18, scope: !1716)
!1718 = !MDLocation(line: 1029, column: 25, scope: !1719)
!1719 = !MDLexicalBlockFile(scope: !1720, file: !1, discriminator: 2)
!1720 = !MDLexicalBlockFile(scope: !1721, file: !1, discriminator: 1)
!1721 = distinct !MDLexicalBlock(scope: !1716, file: !1, line: 1029, column: 13)
!1722 = !MDLocation(line: 1029, column: 29, scope: !1721)
!1723 = !MDLocation(line: 1029, column: 27, scope: !1721)
!1724 = !MDLocation(line: 1029, column: 13, scope: !1716)
!1725 = !MDLocation(line: 1031, column: 61, scope: !1726)
!1726 = distinct !MDLexicalBlock(scope: !1727, file: !1, line: 1031, column: 21)
!1727 = distinct !MDLexicalBlock(scope: !1721, file: !1, line: 1029, column: 45)
!1728 = !MDLocation(line: 1031, column: 67, scope: !1726)
!1729 = !MDLocation(line: 1031, column: 22, scope: !1726)
!1730 = !MDLocation(line: 1031, column: 21, scope: !1727)
!1731 = !MDLocation(line: 1032, column: 21, scope: !1726)
!1732 = !MDLocation(line: 1033, column: 57, scope: !1733)
!1733 = distinct !MDLexicalBlock(scope: !1727, file: !1, line: 1033, column: 21)
!1734 = !MDLocation(line: 1033, column: 62, scope: !1733)
!1735 = !MDLocation(line: 1033, column: 72, scope: !1733)
!1736 = !MDLocation(line: 1034, column: 51, scope: !1733)
!1737 = !MDLocation(line: 1033, column: 22, scope: !1733)
!1738 = !MDLocation(line: 1033, column: 21, scope: !1727)
!1739 = !MDLocation(line: 1035, column: 21, scope: !1733)
!1740 = !MDLocation(line: 1036, column: 13, scope: !1727)
!1741 = !MDLocation(line: 1029, column: 41, scope: !1721)
!1742 = !MDLocation(line: 1029, column: 13, scope: !1721)
!1743 = !MDLocation(line: 1037, column: 9, scope: !1703)
!1744 = !MDLocation(line: 1039, column: 13, scope: !1684)
!1745 = !MDLocation(line: 1040, column: 21, scope: !1746)
!1746 = distinct !MDLexicalBlock(scope: !1684, file: !1, line: 1040, column: 9)
!1747 = !MDLocation(line: 1040, column: 30, scope: !1746)
!1748 = !MDLocation(line: 1040, column: 37, scope: !1746)
!1749 = !MDLocation(line: 1040, column: 35, scope: !1746)
!1750 = !MDLocation(line: 1040, column: 28, scope: !1746)
!1751 = !MDLocation(line: 1040, column: 14, scope: !1746)
!1752 = !MDLocation(line: 1040, column: 45, scope: !1753)
!1753 = !MDLexicalBlockFile(scope: !1754, file: !1, discriminator: 2)
!1754 = !MDLexicalBlockFile(scope: !1755, file: !1, discriminator: 1)
!1755 = distinct !MDLexicalBlock(scope: !1746, file: !1, line: 1040, column: 9)
!1756 = !MDLocation(line: 1040, column: 47, scope: !1755)
!1757 = !MDLocation(line: 1040, column: 9, scope: !1746)
!1758 = !MDLocation(line: 1041, column: 23, scope: !1755)
!1759 = !MDLocation(line: 1041, column: 30, scope: !1755)
!1760 = !MDLocation(line: 1041, column: 52, scope: !1755)
!1761 = !MDLocation(line: 1041, column: 55, scope: !1755)
!1762 = !MDLocation(line: 1041, column: 38, scope: !1755)
!1763 = !MDLocation(line: 1041, column: 36, scope: !1755)
!1764 = !MDLocation(line: 1041, column: 20, scope: !1755)
!1765 = !MDLocation(line: 1041, column: 13, scope: !1755)
!1766 = !MDLocation(line: 1040, column: 54, scope: !1755)
!1767 = !MDLocation(line: 1040, column: 62, scope: !1755)
!1768 = !MDLocation(line: 1040, column: 9, scope: !1755)
!1769 = !MDLocation(line: 1042, column: 51, scope: !1770)
!1770 = distinct !MDLexicalBlock(scope: !1684, file: !1, line: 1042, column: 13)
!1771 = !MDLocation(line: 1042, column: 56, scope: !1770)
!1772 = !MDLocation(line: 1042, column: 66, scope: !1770)
!1773 = !MDLocation(line: 1043, column: 45, scope: !1770)
!1774 = !MDLocation(line: 1042, column: 14, scope: !1770)
!1775 = !MDLocation(line: 1042, column: 13, scope: !1684)
!1776 = !MDLocation(line: 1044, column: 13, scope: !1770)
!1777 = !MDLocation(line: 1050, column: 9, scope: !1684)
!1778 = !MDLocation(line: 1050, column: 16, scope: !1779)
!1779 = !MDLexicalBlockFile(scope: !1780, file: !1, discriminator: 2)
!1780 = !MDLexicalBlockFile(scope: !1684, file: !1, discriminator: 1)
!1781 = !MDLocation(line: 1050, column: 21, scope: !1684)
!1782 = !MDLocation(line: 1051, column: 20, scope: !1783)
!1783 = distinct !MDLexicalBlock(scope: !1684, file: !1, line: 1050, column: 27)
!1784 = !MDLocation(line: 1054, column: 20, scope: !1785)
!1785 = distinct !MDLexicalBlock(scope: !1783, file: !1, line: 1054, column: 13)
!1786 = !MDLocation(line: 1054, column: 18, scope: !1785)
!1787 = !MDLocation(line: 1054, column: 25, scope: !1788)
!1788 = !MDLexicalBlockFile(scope: !1789, file: !1, discriminator: 2)
!1789 = !MDLexicalBlockFile(scope: !1790, file: !1, discriminator: 1)
!1790 = distinct !MDLexicalBlock(scope: !1785, file: !1, line: 1054, column: 13)
!1791 = !MDLocation(line: 1054, column: 29, scope: !1790)
!1792 = !MDLocation(line: 1054, column: 27, scope: !1790)
!1793 = !MDLocation(line: 1054, column: 13, scope: !1785)
!1794 = !MDLocation(line: 1055, column: 62, scope: !1795)
!1795 = distinct !MDLexicalBlock(scope: !1796, file: !1, line: 1055, column: 21)
!1796 = distinct !MDLexicalBlock(scope: !1790, file: !1, line: 1054, column: 50)
!1797 = !MDLocation(line: 1055, column: 68, scope: !1795)
!1798 = !MDLocation(line: 1055, column: 22, scope: !1795)
!1799 = !MDLocation(line: 1055, column: 21, scope: !1796)
!1800 = !MDLocation(line: 1056, column: 21, scope: !1795)
!1801 = !MDLocation(line: 1057, column: 27, scope: !1796)
!1802 = !MDLocation(line: 1057, column: 34, scope: !1796)
!1803 = !MDLocation(line: 1057, column: 56, scope: !1796)
!1804 = !MDLocation(line: 1057, column: 59, scope: !1796)
!1805 = !MDLocation(line: 1057, column: 42, scope: !1796)
!1806 = !MDLocation(line: 1057, column: 40, scope: !1796)
!1807 = !MDLocation(line: 1057, column: 24, scope: !1796)
!1808 = !MDLocation(line: 1058, column: 13, scope: !1796)
!1809 = !MDLocation(line: 1054, column: 38, scope: !1790)
!1810 = !MDLocation(line: 1054, column: 46, scope: !1790)
!1811 = !MDLocation(line: 1054, column: 13, scope: !1790)
!1812 = !MDLocation(line: 1063, column: 54, scope: !1813)
!1813 = distinct !MDLexicalBlock(scope: !1783, file: !1, line: 1063, column: 17)
!1814 = !MDLocation(line: 1063, column: 59, scope: !1813)
!1815 = !MDLocation(line: 1063, column: 69, scope: !1813)
!1816 = !MDLocation(line: 1064, column: 49, scope: !1813)
!1817 = !MDLocation(line: 1063, column: 18, scope: !1813)
!1818 = !MDLocation(line: 1063, column: 17, scope: !1783)
!1819 = !MDLocation(line: 1065, column: 17, scope: !1813)
!1820 = !MDLocation(line: 1068, column: 57, scope: !1821)
!1821 = distinct !MDLexicalBlock(scope: !1783, file: !1, line: 1068, column: 17)
!1822 = !MDLocation(line: 1068, column: 63, scope: !1821)
!1823 = !MDLocation(line: 1068, column: 18, scope: !1821)
!1824 = !MDLocation(line: 1068, column: 17, scope: !1783)
!1825 = !MDLocation(line: 1069, column: 17, scope: !1821)
!1826 = !MDLocation(line: 1083, column: 29, scope: !1827)
!1827 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 1083, column: 9)
!1828 = !MDLocation(line: 1083, column: 39, scope: !1827)
!1829 = !MDLocation(line: 1083, column: 45, scope: !1827)
!1830 = !MDLocation(line: 1083, column: 10, scope: !1827)
!1831 = !MDLocation(line: 1083, column: 9, scope: !55)
!1832 = !MDLocation(line: 1084, column: 9, scope: !1827)
!1833 = !MDLocation(line: 1085, column: 9, scope: !55)
!1834 = !MDLocation(line: 1085, column: 5, scope: !55)
!1835 = !MDLocation(line: 1087, column: 9, scope: !1836)
!1836 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 1087, column: 9)
!1837 = !MDLocation(line: 1087, column: 17, scope: !1836)
!1838 = !MDLocation(line: 1087, column: 9, scope: !55)
!1839 = !MDLocation(line: 1088, column: 26, scope: !1836)
!1840 = !MDLocation(line: 1088, column: 9, scope: !1836)
!1841 = !MDLocation(line: 1089, column: 9, scope: !1842)
!1842 = distinct !MDLexicalBlock(scope: !55, file: !1, line: 1089, column: 9)
!1843 = !MDLocation(line: 1089, column: 18, scope: !1842)
!1844 = !MDLocation(line: 1089, column: 9, scope: !55)
!1845 = !MDLocation(line: 1090, column: 25, scope: !1846)
!1846 = distinct !MDLexicalBlock(scope: !1842, file: !1, line: 1089, column: 27)
!1847 = !MDLocation(line: 1090, column: 35, scope: !1846)
!1848 = !MDLocation(line: 1090, column: 9, scope: !1846)
!1849 = !MDLocation(line: 1091, column: 9, scope: !1846)
!1850 = !MDLocation(line: 1092, column: 5, scope: !1846)
!1851 = !MDLocation(line: 1093, column: 16, scope: !55)
!1852 = !MDLocation(line: 1093, column: 5, scope: !55)
!1853 = !MDLocation(line: 1094, column: 13, scope: !55)
!1854 = !MDLocation(line: 1094, column: 5, scope: !55)
!1855 = !MDLocation(line: 1095, column: 1, scope: !55)
!1856 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "b", arg: 1, scope: !60, file: !1, line: 514, type: !30)
!1857 = !MDLocation(line: 514, column: 55, scope: !60)
!1858 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "top", arg: 2, scope: !60, file: !1, line: 514, type: !18)
!1859 = !MDLocation(line: 514, column: 62, scope: !60)
!1860 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "buf", arg: 3, scope: !60, file: !1, line: 515, type: !6)
!1861 = !MDLocation(line: 515, column: 56, scope: !60)
!1862 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "idx", arg: 4, scope: !60, file: !1, line: 515, type: !18)
!1863 = !MDLocation(line: 515, column: 65, scope: !60)
!1864 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "window", arg: 5, scope: !60, file: !1, line: 516, type: !18)
!1865 = !MDLocation(line: 516, column: 45, scope: !60)
!1866 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !60, file: !1, line: 518, type: !18)
!1867 = !MDLocation(line: 518, column: 9, scope: !60)
!1868 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "j", scope: !60, file: !1, line: 518, type: !18)
!1869 = !MDLocation(line: 518, column: 12, scope: !60)
!1870 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "width", scope: !60, file: !1, line: 519, type: !18)
!1871 = !MDLocation(line: 519, column: 9, scope: !60)
!1872 = !MDLocation(line: 519, column: 22, scope: !60)
!1873 = !MDLocation(line: 519, column: 19, scope: !60)
!1874 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "table", scope: !60, file: !1, line: 520, type: !10)
!1875 = !MDLocation(line: 520, column: 15, scope: !60)
!1876 = !MDLocation(line: 520, column: 35, scope: !60)
!1877 = !MDLocation(line: 520, column: 23, scope: !60)
!1878 = !MDLocation(line: 522, column: 9, scope: !1879)
!1879 = distinct !MDLexicalBlock(scope: !60, file: !1, line: 522, column: 9)
!1880 = !MDLocation(line: 522, column: 15, scope: !1879)
!1881 = !MDLocation(line: 522, column: 18, scope: !1879)
!1882 = !MDLocation(line: 522, column: 13, scope: !1879)
!1883 = !MDLocation(line: 522, column: 9, scope: !60)
!1884 = !MDLocation(line: 523, column: 15, scope: !1879)
!1885 = !MDLocation(line: 523, column: 18, scope: !1879)
!1886 = !MDLocation(line: 523, column: 13, scope: !1879)
!1887 = !MDLocation(line: 523, column: 9, scope: !1879)
!1888 = !MDLocation(line: 525, column: 12, scope: !1889)
!1889 = distinct !MDLexicalBlock(scope: !60, file: !1, line: 525, column: 5)
!1890 = !MDLocation(line: 525, column: 21, scope: !1889)
!1891 = !MDLocation(line: 525, column: 19, scope: !1889)
!1892 = !MDLocation(line: 525, column: 10, scope: !1889)
!1893 = !MDLocation(line: 525, column: 26, scope: !1894)
!1894 = !MDLexicalBlockFile(scope: !1895, file: !1, discriminator: 2)
!1895 = !MDLexicalBlockFile(scope: !1896, file: !1, discriminator: 1)
!1896 = distinct !MDLexicalBlock(scope: !1889, file: !1, line: 525, column: 5)
!1897 = !MDLocation(line: 525, column: 30, scope: !1896)
!1898 = !MDLocation(line: 525, column: 28, scope: !1896)
!1899 = !MDLocation(line: 525, column: 5, scope: !1889)
!1900 = !MDLocation(line: 526, column: 25, scope: !1901)
!1901 = distinct !MDLexicalBlock(scope: !1896, file: !1, line: 525, column: 52)
!1902 = !MDLocation(line: 526, column: 20, scope: !1901)
!1903 = !MDLocation(line: 526, column: 23, scope: !1901)
!1904 = !MDLocation(line: 526, column: 15, scope: !1901)
!1905 = !MDLocation(line: 526, column: 9, scope: !1901)
!1906 = !MDLocation(line: 526, column: 18, scope: !1901)
!1907 = !MDLocation(line: 527, column: 5, scope: !1901)
!1908 = !MDLocation(line: 525, column: 36, scope: !1896)
!1909 = !MDLocation(line: 525, column: 45, scope: !1896)
!1910 = !MDLocation(line: 525, column: 42, scope: !1896)
!1911 = !MDLocation(line: 525, column: 5, scope: !1896)
!1912 = !MDLocation(line: 529, column: 5, scope: !60)
!1913 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "b", arg: 1, scope: !63, file: !1, line: 532, type: !19)
!1914 = !MDLocation(line: 532, column: 51, scope: !63)
!1915 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "top", arg: 2, scope: !63, file: !1, line: 532, type: !18)
!1916 = !MDLocation(line: 532, column: 58, scope: !63)
!1917 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "buf", arg: 3, scope: !63, file: !1, line: 533, type: !6)
!1918 = !MDLocation(line: 533, column: 58, scope: !63)
!1919 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "idx", arg: 4, scope: !63, file: !1, line: 533, type: !18)
!1920 = !MDLocation(line: 533, column: 67, scope: !63)
!1921 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "window", arg: 5, scope: !63, file: !1, line: 534, type: !18)
!1922 = !MDLocation(line: 534, column: 47, scope: !63)
!1923 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !63, file: !1, line: 536, type: !18)
!1924 = !MDLocation(line: 536, column: 9, scope: !63)
!1925 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "j", scope: !63, file: !1, line: 536, type: !18)
!1926 = !MDLocation(line: 536, column: 12, scope: !63)
!1927 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "width", scope: !63, file: !1, line: 537, type: !18)
!1928 = !MDLocation(line: 537, column: 9, scope: !63)
!1929 = !MDLocation(line: 537, column: 22, scope: !63)
!1930 = !MDLocation(line: 537, column: 19, scope: !63)
!1931 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "table", scope: !63, file: !1, line: 538, type: !11)
!1932 = !MDLocation(line: 538, column: 24, scope: !63)
!1933 = !MDLocation(line: 538, column: 53, scope: !63)
!1934 = !MDLocation(line: 538, column: 32, scope: !63)
!1935 = !MDLocation(line: 540, column: 20, scope: !1936)
!1936 = distinct !MDLexicalBlock(scope: !63, file: !1, line: 540, column: 9)
!1937 = !MDLocation(line: 540, column: 23, scope: !1936)
!1938 = !MDLocation(line: 540, column: 9, scope: !1936)
!1939 = !MDLocation(line: 540, column: 28, scope: !1936)
!1940 = !MDLocation(line: 540, column: 9, scope: !63)
!1941 = !MDLocation(line: 541, column: 9, scope: !1936)
!1942 = !MDLocation(line: 543, column: 9, scope: !1943)
!1943 = distinct !MDLexicalBlock(scope: !63, file: !1, line: 543, column: 9)
!1944 = !MDLocation(line: 543, column: 16, scope: !1943)
!1945 = !MDLocation(line: 543, column: 9, scope: !63)
!1946 = !MDLocation(line: 544, column: 16, scope: !1947)
!1947 = distinct !MDLexicalBlock(scope: !1948, file: !1, line: 544, column: 9)
!1948 = distinct !MDLexicalBlock(scope: !1943, file: !1, line: 543, column: 22)
!1949 = !MDLocation(line: 544, column: 14, scope: !1947)
!1950 = !MDLocation(line: 544, column: 21, scope: !1951)
!1951 = !MDLexicalBlockFile(scope: !1952, file: !1, discriminator: 2)
!1952 = !MDLexicalBlockFile(scope: !1953, file: !1, discriminator: 1)
!1953 = distinct !MDLexicalBlock(scope: !1947, file: !1, line: 544, column: 9)
!1954 = !MDLocation(line: 544, column: 25, scope: !1953)
!1955 = !MDLocation(line: 544, column: 23, scope: !1953)
!1956 = !MDLocation(line: 544, column: 9, scope: !1947)
!1957 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "acc", scope: !1958, file: !1, line: 545, type: !5)
!1958 = distinct !MDLexicalBlock(scope: !1953, file: !1, line: 544, column: 51)
!1959 = !MDLocation(line: 545, column: 22, scope: !1958)
!1960 = !MDLocation(line: 547, column: 20, scope: !1961)
!1961 = distinct !MDLexicalBlock(scope: !1958, file: !1, line: 547, column: 13)
!1962 = !MDLocation(line: 547, column: 18, scope: !1961)
!1963 = !MDLocation(line: 547, column: 25, scope: !1964)
!1964 = !MDLexicalBlockFile(scope: !1965, file: !1, discriminator: 2)
!1965 = !MDLexicalBlockFile(scope: !1966, file: !1, discriminator: 1)
!1966 = distinct !MDLexicalBlock(scope: !1961, file: !1, line: 547, column: 13)
!1967 = !MDLocation(line: 547, column: 29, scope: !1966)
!1968 = !MDLocation(line: 547, column: 27, scope: !1966)
!1969 = !MDLocation(line: 547, column: 13, scope: !1961)
!1970 = !MDLocation(line: 548, column: 30, scope: !1971)
!1971 = distinct !MDLexicalBlock(scope: !1966, file: !1, line: 547, column: 41)
!1972 = !MDLocation(line: 548, column: 24, scope: !1971)
!1973 = !MDLocation(line: 549, column: 61, scope: !1971)
!1974 = !MDLocation(line: 549, column: 63, scope: !1971)
!1975 = !MDLocation(line: 549, column: 40, scope: !1971)
!1976 = !MDLocation(line: 549, column: 67, scope: !1971)
!1977 = !MDLocation(line: 549, column: 39, scope: !1971)
!1978 = !MDLocation(line: 549, column: 37, scope: !1971)
!1979 = !MDLocation(line: 548, column: 33, scope: !1971)
!1980 = !MDLocation(line: 548, column: 21, scope: !1971)
!1981 = !MDLocation(line: 550, column: 13, scope: !1971)
!1982 = !MDLocation(line: 547, column: 37, scope: !1966)
!1983 = !MDLocation(line: 547, column: 13, scope: !1966)
!1984 = !MDLocation(line: 552, column: 23, scope: !1958)
!1985 = !MDLocation(line: 552, column: 18, scope: !1958)
!1986 = !MDLocation(line: 552, column: 13, scope: !1958)
!1987 = !MDLocation(line: 552, column: 16, scope: !1958)
!1988 = !MDLocation(line: 552, column: 21, scope: !1958)
!1989 = !MDLocation(line: 553, column: 9, scope: !1958)
!1990 = !MDLocation(line: 544, column: 31, scope: !1953)
!1991 = !MDLocation(line: 544, column: 44, scope: !1953)
!1992 = !MDLocation(line: 544, column: 41, scope: !1953)
!1993 = !MDLocation(line: 544, column: 9, scope: !1953)
!1994 = !MDLocation(line: 554, column: 5, scope: !1948)
!1995 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "xstride", scope: !1996, file: !1, line: 555, type: !18)
!1996 = distinct !MDLexicalBlock(scope: !1943, file: !1, line: 554, column: 12)
!1997 = !MDLocation(line: 555, column: 13, scope: !1996)
!1998 = !MDLocation(line: 555, column: 29, scope: !1996)
!1999 = !MDLocation(line: 555, column: 36, scope: !1996)
!2000 = !MDLocation(line: 555, column: 25, scope: !1996)
!2001 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "y0", scope: !1996, file: !1, line: 556, type: !5)
!2002 = !MDLocation(line: 556, column: 18, scope: !1996)
!2003 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "y1", scope: !1996, file: !1, line: 556, type: !5)
!2004 = !MDLocation(line: 556, column: 22, scope: !1996)
!2005 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "y2", scope: !1996, file: !1, line: 556, type: !5)
!2006 = !MDLocation(line: 556, column: 26, scope: !1996)
!2007 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "y3", scope: !1996, file: !1, line: 556, type: !5)
!2008 = !MDLocation(line: 556, column: 30, scope: !1996)
!2009 = !MDLocation(line: 558, column: 13, scope: !1996)
!2010 = !MDLocation(line: 558, column: 21, scope: !1996)
!2011 = !MDLocation(line: 558, column: 28, scope: !1996)
!2012 = !MDLocation(line: 558, column: 17, scope: !1996)
!2013 = !MDLocation(line: 558, column: 11, scope: !1996)
!2014 = !MDLocation(line: 559, column: 16, scope: !1996)
!2015 = !MDLocation(line: 559, column: 24, scope: !1996)
!2016 = !MDLocation(line: 559, column: 13, scope: !1996)
!2017 = !MDLocation(line: 561, column: 50, scope: !1996)
!2018 = !MDLocation(line: 561, column: 29, scope: !1996)
!2019 = !MDLocation(line: 561, column: 54, scope: !1996)
!2020 = !MDLocation(line: 561, column: 28, scope: !1996)
!2021 = !MDLocation(line: 561, column: 26, scope: !1996)
!2022 = !MDLocation(line: 561, column: 12, scope: !1996)
!2023 = !MDLocation(line: 562, column: 50, scope: !1996)
!2024 = !MDLocation(line: 562, column: 29, scope: !1996)
!2025 = !MDLocation(line: 562, column: 54, scope: !1996)
!2026 = !MDLocation(line: 562, column: 28, scope: !1996)
!2027 = !MDLocation(line: 562, column: 26, scope: !1996)
!2028 = !MDLocation(line: 562, column: 12, scope: !1996)
!2029 = !MDLocation(line: 563, column: 50, scope: !1996)
!2030 = !MDLocation(line: 563, column: 29, scope: !1996)
!2031 = !MDLocation(line: 563, column: 54, scope: !1996)
!2032 = !MDLocation(line: 563, column: 28, scope: !1996)
!2033 = !MDLocation(line: 563, column: 26, scope: !1996)
!2034 = !MDLocation(line: 563, column: 12, scope: !1996)
!2035 = !MDLocation(line: 564, column: 50, scope: !1996)
!2036 = !MDLocation(line: 564, column: 29, scope: !1996)
!2037 = !MDLocation(line: 564, column: 54, scope: !1996)
!2038 = !MDLocation(line: 564, column: 28, scope: !1996)
!2039 = !MDLocation(line: 564, column: 26, scope: !1996)
!2040 = !MDLocation(line: 564, column: 12, scope: !1996)
!2041 = !MDLocation(line: 566, column: 16, scope: !2042)
!2042 = distinct !MDLexicalBlock(scope: !1996, file: !1, line: 566, column: 9)
!2043 = !MDLocation(line: 566, column: 14, scope: !2042)
!2044 = !MDLocation(line: 566, column: 21, scope: !2045)
!2045 = !MDLexicalBlockFile(scope: !2046, file: !1, discriminator: 2)
!2046 = !MDLexicalBlockFile(scope: !2047, file: !1, discriminator: 1)
!2047 = distinct !MDLexicalBlock(scope: !2042, file: !1, line: 566, column: 9)
!2048 = !MDLocation(line: 566, column: 25, scope: !2047)
!2049 = !MDLocation(line: 566, column: 23, scope: !2047)
!2050 = !MDLocation(line: 566, column: 9, scope: !2042)
!2051 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "acc", scope: !2052, file: !1, line: 567, type: !5)
!2052 = distinct !MDLexicalBlock(scope: !2047, file: !1, line: 566, column: 51)
!2053 = !MDLocation(line: 567, column: 22, scope: !2052)
!2054 = !MDLocation(line: 569, column: 20, scope: !2055)
!2055 = distinct !MDLexicalBlock(scope: !2052, file: !1, line: 569, column: 13)
!2056 = !MDLocation(line: 569, column: 18, scope: !2055)
!2057 = !MDLocation(line: 569, column: 25, scope: !2058)
!2058 = !MDLexicalBlockFile(scope: !2059, file: !1, discriminator: 2)
!2059 = !MDLexicalBlockFile(scope: !2060, file: !1, discriminator: 1)
!2060 = distinct !MDLexicalBlock(scope: !2055, file: !1, line: 569, column: 13)
!2061 = !MDLocation(line: 569, column: 29, scope: !2060)
!2062 = !MDLocation(line: 569, column: 27, scope: !2060)
!2063 = !MDLocation(line: 569, column: 13, scope: !2055)
!2064 = !MDLocation(line: 570, column: 33, scope: !2065)
!2065 = distinct !MDLexicalBlock(scope: !2060, file: !1, line: 569, column: 43)
!2066 = !MDLocation(line: 570, column: 41, scope: !2065)
!2067 = !MDLocation(line: 570, column: 39, scope: !2065)
!2068 = !MDLocation(line: 570, column: 35, scope: !2065)
!2069 = !MDLocation(line: 570, column: 27, scope: !2065)
!2070 = !MDLocation(line: 570, column: 52, scope: !2065)
!2071 = !MDLocation(line: 570, column: 50, scope: !2065)
!2072 = !MDLocation(line: 571, column: 33, scope: !2065)
!2073 = !MDLocation(line: 571, column: 41, scope: !2065)
!2074 = !MDLocation(line: 571, column: 39, scope: !2065)
!2075 = !MDLocation(line: 571, column: 35, scope: !2065)
!2076 = !MDLocation(line: 571, column: 27, scope: !2065)
!2077 = !MDLocation(line: 571, column: 52, scope: !2065)
!2078 = !MDLocation(line: 571, column: 50, scope: !2065)
!2079 = !MDLocation(line: 570, column: 56, scope: !2065)
!2080 = !MDLocation(line: 572, column: 33, scope: !2065)
!2081 = !MDLocation(line: 572, column: 41, scope: !2065)
!2082 = !MDLocation(line: 572, column: 39, scope: !2065)
!2083 = !MDLocation(line: 572, column: 35, scope: !2065)
!2084 = !MDLocation(line: 572, column: 27, scope: !2065)
!2085 = !MDLocation(line: 572, column: 52, scope: !2065)
!2086 = !MDLocation(line: 572, column: 50, scope: !2065)
!2087 = !MDLocation(line: 571, column: 56, scope: !2065)
!2088 = !MDLocation(line: 573, column: 33, scope: !2065)
!2089 = !MDLocation(line: 573, column: 41, scope: !2065)
!2090 = !MDLocation(line: 573, column: 39, scope: !2065)
!2091 = !MDLocation(line: 573, column: 35, scope: !2065)
!2092 = !MDLocation(line: 573, column: 27, scope: !2065)
!2093 = !MDLocation(line: 573, column: 52, scope: !2065)
!2094 = !MDLocation(line: 573, column: 50, scope: !2065)
!2095 = !MDLocation(line: 572, column: 56, scope: !2065)
!2096 = !MDLocation(line: 574, column: 63, scope: !2065)
!2097 = !MDLocation(line: 574, column: 65, scope: !2065)
!2098 = !MDLocation(line: 574, column: 42, scope: !2065)
!2099 = !MDLocation(line: 574, column: 69, scope: !2065)
!2100 = !MDLocation(line: 574, column: 41, scope: !2065)
!2101 = !MDLocation(line: 574, column: 39, scope: !2065)
!2102 = !MDLocation(line: 574, column: 24, scope: !2065)
!2103 = !MDLocation(line: 570, column: 21, scope: !2065)
!2104 = !MDLocation(line: 575, column: 13, scope: !2065)
!2105 = !MDLocation(line: 569, column: 39, scope: !2060)
!2106 = !MDLocation(line: 569, column: 13, scope: !2060)
!2107 = !MDLocation(line: 577, column: 23, scope: !2052)
!2108 = !MDLocation(line: 577, column: 18, scope: !2052)
!2109 = !MDLocation(line: 577, column: 13, scope: !2052)
!2110 = !MDLocation(line: 577, column: 16, scope: !2052)
!2111 = !MDLocation(line: 577, column: 21, scope: !2052)
!2112 = !MDLocation(line: 578, column: 9, scope: !2052)
!2113 = !MDLocation(line: 566, column: 31, scope: !2047)
!2114 = !MDLocation(line: 566, column: 44, scope: !2047)
!2115 = !MDLocation(line: 566, column: 41, scope: !2047)
!2116 = !MDLocation(line: 566, column: 9, scope: !2047)
!2117 = !MDLocation(line: 581, column: 14, scope: !63)
!2118 = !MDLocation(line: 581, column: 5, scope: !63)
!2119 = !MDLocation(line: 581, column: 8, scope: !63)
!2120 = !MDLocation(line: 581, column: 12, scope: !63)
!2121 = !MDLocation(line: 582, column: 20, scope: !63)
!2122 = !MDLocation(line: 582, column: 5, scope: !63)
!2123 = !MDLocation(line: 583, column: 5, scope: !63)
!2124 = !MDLocation(line: 584, column: 1, scope: !63)
!2125 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "r", arg: 1, scope: !59, file: !1, line: 1246, type: !19)
!2126 = !MDLocation(line: 1246, column: 31, scope: !59)
!2127 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 2, scope: !59, file: !1, line: 1246, type: !30)
!2128 = !MDLocation(line: 1246, column: 48, scope: !59)
!2129 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p", arg: 3, scope: !59, file: !1, line: 1246, type: !30)
!2130 = !MDLocation(line: 1246, column: 65, scope: !59)
!2131 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "m", arg: 4, scope: !59, file: !1, line: 1247, type: !30)
!2132 = !MDLocation(line: 1247, column: 37, scope: !59)
!2133 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 5, scope: !59, file: !1, line: 1247, type: !32)
!2134 = !MDLocation(line: 1247, column: 48, scope: !59)
!2135 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !59, file: !1, line: 1249, type: !18)
!2136 = !MDLocation(line: 1249, column: 9, scope: !59)
!2137 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "j", scope: !59, file: !1, line: 1249, type: !18)
!2138 = !MDLocation(line: 1249, column: 12, scope: !59)
!2139 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bits", scope: !59, file: !1, line: 1249, type: !18)
!2140 = !MDLocation(line: 1249, column: 15, scope: !59)
!2141 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !59, file: !1, line: 1249, type: !18)
!2142 = !MDLocation(line: 1249, column: 21, scope: !59)
!2143 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wstart", scope: !59, file: !1, line: 1249, type: !18)
!2144 = !MDLocation(line: 1249, column: 30, scope: !59)
!2145 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wend", scope: !59, file: !1, line: 1249, type: !18)
!2146 = !MDLocation(line: 1249, column: 38, scope: !59)
!2147 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "window", scope: !59, file: !1, line: 1249, type: !18)
!2148 = !MDLocation(line: 1249, column: 44, scope: !59)
!2149 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "wvalue", scope: !59, file: !1, line: 1249, type: !18)
!2150 = !MDLocation(line: 1249, column: 52, scope: !59)
!2151 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "start", scope: !59, file: !1, line: 1250, type: !18)
!2152 = !MDLocation(line: 1250, column: 9, scope: !59)
!2153 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "d", scope: !59, file: !1, line: 1251, type: !19)
!2154 = !MDLocation(line: 1251, column: 13, scope: !59)
!2155 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "val", scope: !59, file: !1, line: 1253, type: !641)
!2156 = !MDLocation(line: 1253, column: 13, scope: !59)
!2157 = !MDLocation(line: 1255, column: 22, scope: !2158)
!2158 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1255, column: 9)
!2159 = !MDLocation(line: 1255, column: 9, scope: !2158)
!2160 = !MDLocation(line: 1255, column: 43, scope: !2158)
!2161 = !MDLocation(line: 1256, column: 13, scope: !2158)
!2162 = !MDLocation(line: 1256, column: 29, scope: !2163)
!2163 = !MDLexicalBlockFile(scope: !2158, file: !1, discriminator: 1)
!2164 = !MDLocation(line: 1256, column: 16, scope: !2158)
!2165 = !MDLocation(line: 1256, column: 50, scope: !2158)
!2166 = !MDLocation(line: 1257, column: 13, scope: !2158)
!2167 = !MDLocation(line: 1257, column: 29, scope: !2163)
!2168 = !MDLocation(line: 1257, column: 16, scope: !2158)
!2169 = !MDLocation(line: 1257, column: 50, scope: !2158)
!2170 = !MDLocation(line: 1255, column: 9, scope: !59)
!2171 = !MDLocation(line: 1259, column: 9, scope: !2172)
!2172 = distinct !MDLexicalBlock(scope: !2158, file: !1, line: 1257, column: 56)
!2173 = !MDLocation(line: 1260, column: 9, scope: !2172)
!2174 = !MDLocation(line: 1263, column: 24, scope: !59)
!2175 = !MDLocation(line: 1263, column: 12, scope: !59)
!2176 = !MDLocation(line: 1263, column: 10, scope: !59)
!2177 = !MDLocation(line: 1264, column: 8, scope: !2178)
!2178 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1264, column: 8)
!2179 = !MDLocation(line: 1264, column: 13, scope: !2178)
!2180 = !MDLocation(line: 1264, column: 8, scope: !59)
!2181 = !MDLocation(line: 1266, column: 23, scope: !2182)
!2182 = distinct !MDLexicalBlock(scope: !2183, file: !1, line: 1266, column: 13)
!2183 = distinct !MDLexicalBlock(scope: !2178, file: !1, line: 1264, column: 19)
!2184 = !MDLocation(line: 1266, column: 13, scope: !2182)
!2185 = !MDLocation(line: 1266, column: 13, scope: !2183)
!2186 = !MDLocation(line: 1267, column: 17, scope: !2187)
!2187 = distinct !MDLexicalBlock(scope: !2182, file: !1, line: 1266, column: 27)
!2188 = !MDLocation(line: 1268, column: 13, scope: !2187)
!2189 = !MDLocation(line: 1269, column: 9, scope: !2187)
!2190 = !MDLocation(line: 1270, column: 19, scope: !2191)
!2191 = distinct !MDLexicalBlock(scope: !2182, file: !1, line: 1269, column: 16)
!2192 = !MDLocation(line: 1270, column: 17, scope: !2191)
!2193 = !MDLocation(line: 1272, column: 16, scope: !2183)
!2194 = !MDLocation(line: 1272, column: 9, scope: !2183)
!2195 = !MDLocation(line: 1275, column: 18, scope: !59)
!2196 = !MDLocation(line: 1275, column: 5, scope: !59)
!2197 = !MDLocation(line: 1276, column: 20, scope: !59)
!2198 = !MDLocation(line: 1276, column: 9, scope: !59)
!2199 = !MDLocation(line: 1276, column: 7, scope: !59)
!2200 = !MDLocation(line: 1277, column: 25, scope: !59)
!2201 = !MDLocation(line: 1277, column: 14, scope: !59)
!2202 = !MDLocation(line: 1277, column: 5, scope: !59)
!2203 = !MDLocation(line: 1277, column: 12, scope: !59)
!2204 = !MDLocation(line: 1278, column: 10, scope: !2205)
!2205 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1278, column: 9)
!2206 = !MDLocation(line: 1278, column: 12, scope: !2205)
!2207 = !MDLocation(line: 1278, column: 16, scope: !2208)
!2208 = !MDLexicalBlockFile(scope: !2205, file: !1, discriminator: 1)
!2209 = !MDLocation(line: 1278, column: 9, scope: !59)
!2210 = !MDLocation(line: 1279, column: 9, scope: !2205)
!2211 = !MDLocation(line: 1281, column: 19, scope: !2212)
!2212 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1281, column: 9)
!2213 = !MDLocation(line: 1281, column: 27, scope: !2212)
!2214 = !MDLocation(line: 1281, column: 30, scope: !2212)
!2215 = !MDLocation(line: 1281, column: 33, scope: !2212)
!2216 = !MDLocation(line: 1281, column: 10, scope: !2212)
!2217 = !MDLocation(line: 1281, column: 9, scope: !59)
!2218 = !MDLocation(line: 1282, column: 9, scope: !2212)
!2219 = !MDLocation(line: 1283, column: 20, scope: !2220)
!2220 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1283, column: 9)
!2221 = !MDLocation(line: 1283, column: 9, scope: !2220)
!2222 = !MDLocation(line: 1283, column: 9, scope: !59)
!2223 = !MDLocation(line: 1284, column: 9, scope: !2224)
!2224 = distinct !MDLexicalBlock(scope: !2220, file: !1, line: 1283, column: 29)
!2225 = !MDLocation(line: 1285, column: 13, scope: !2224)
!2226 = !MDLocation(line: 1286, column: 9, scope: !2224)
!2227 = !MDLocation(line: 1289, column: 14, scope: !59)
!2228 = !MDLocation(line: 1289, column: 14, scope: !2229)
!2229 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 1)
!2230 = !MDLocation(line: 1289, column: 14, scope: !2231)
!2231 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 2)
!2232 = !MDLocation(line: 1289, column: 14, scope: !2233)
!2233 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 4)
!2234 = !MDLocation(line: 1289, column: 14, scope: !2235)
!2235 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 5)
!2236 = !MDLocation(line: 1289, column: 14, scope: !2237)
!2237 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 7)
!2238 = !MDLocation(line: 1289, column: 14, scope: !2239)
!2239 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 8)
!2240 = !MDLocation(line: 1289, column: 14, scope: !2241)
!2241 = !MDLexicalBlockFile(scope: !2242, file: !1, discriminator: 10)
!2242 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 9)
!2243 = !MDLocation(line: 1289, column: 14, scope: !2244)
!2244 = !MDLexicalBlockFile(scope: !2245, file: !1, discriminator: 11)
!2245 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 6)
!2246 = !MDLocation(line: 1289, column: 12, scope: !2247)
!2247 = !MDLexicalBlockFile(scope: !2248, file: !1, discriminator: 12)
!2248 = !MDLexicalBlockFile(scope: !59, file: !1, discriminator: 3)
!2249 = !MDLocation(line: 1290, column: 9, scope: !2250)
!2250 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1290, column: 9)
!2251 = !MDLocation(line: 1290, column: 16, scope: !2250)
!2252 = !MDLocation(line: 1290, column: 9, scope: !59)
!2253 = !MDLocation(line: 1291, column: 25, scope: !2254)
!2254 = distinct !MDLexicalBlock(scope: !2255, file: !1, line: 1291, column: 13)
!2255 = distinct !MDLexicalBlock(scope: !2250, file: !1, line: 1290, column: 21)
!2256 = !MDLocation(line: 1291, column: 28, scope: !2254)
!2257 = !MDLocation(line: 1291, column: 36, scope: !2254)
!2258 = !MDLocation(line: 1291, column: 44, scope: !2254)
!2259 = !MDLocation(line: 1291, column: 47, scope: !2254)
!2260 = !MDLocation(line: 1291, column: 14, scope: !2254)
!2261 = !MDLocation(line: 1291, column: 13, scope: !2255)
!2262 = !MDLocation(line: 1292, column: 13, scope: !2254)
!2263 = !MDLocation(line: 1293, column: 19, scope: !2255)
!2264 = !MDLocation(line: 1293, column: 26, scope: !2255)
!2265 = !MDLocation(line: 1293, column: 15, scope: !2255)
!2266 = !MDLocation(line: 1293, column: 11, scope: !2255)
!2267 = !MDLocation(line: 1294, column: 16, scope: !2268)
!2268 = distinct !MDLexicalBlock(scope: !2255, file: !1, line: 1294, column: 9)
!2269 = !MDLocation(line: 1294, column: 14, scope: !2268)
!2270 = !MDLocation(line: 1294, column: 21, scope: !2271)
!2271 = !MDLexicalBlockFile(scope: !2272, file: !1, discriminator: 2)
!2272 = !MDLexicalBlockFile(scope: !2273, file: !1, discriminator: 1)
!2273 = distinct !MDLexicalBlock(scope: !2268, file: !1, line: 1294, column: 9)
!2274 = !MDLocation(line: 1294, column: 25, scope: !2273)
!2275 = !MDLocation(line: 1294, column: 23, scope: !2273)
!2276 = !MDLocation(line: 1294, column: 9, scope: !2268)
!2277 = !MDLocation(line: 1295, column: 39, scope: !2278)
!2278 = distinct !MDLexicalBlock(scope: !2279, file: !1, line: 1295, column: 17)
!2279 = distinct !MDLexicalBlock(scope: !2273, file: !1, line: 1294, column: 33)
!2280 = !MDLocation(line: 1295, column: 28, scope: !2278)
!2281 = !MDLocation(line: 1295, column: 23, scope: !2278)
!2282 = !MDLocation(line: 1295, column: 19, scope: !2278)
!2283 = !MDLocation(line: 1295, column: 26, scope: !2278)
!2284 = !MDLocation(line: 1295, column: 45, scope: !2278)
!2285 = !MDLocation(line: 1295, column: 54, scope: !2278)
!2286 = !MDLocation(line: 1296, column: 33, scope: !2278)
!2287 = !MDLocation(line: 1296, column: 29, scope: !2278)
!2288 = !MDLocation(line: 1296, column: 41, scope: !2278)
!2289 = !MDLocation(line: 1296, column: 43, scope: !2278)
!2290 = !MDLocation(line: 1296, column: 37, scope: !2278)
!2291 = !MDLocation(line: 1296, column: 49, scope: !2278)
!2292 = !MDLocation(line: 1296, column: 52, scope: !2278)
!2293 = !MDLocation(line: 1296, column: 55, scope: !2278)
!2294 = !MDLocation(line: 1296, column: 18, scope: !2278)
!2295 = !MDLocation(line: 1295, column: 17, scope: !2279)
!2296 = !MDLocation(line: 1297, column: 17, scope: !2278)
!2297 = !MDLocation(line: 1298, column: 9, scope: !2279)
!2298 = !MDLocation(line: 1294, column: 29, scope: !2273)
!2299 = !MDLocation(line: 1294, column: 9, scope: !2273)
!2300 = !MDLocation(line: 1299, column: 5, scope: !2255)
!2301 = !MDLocation(line: 1301, column: 11, scope: !59)
!2302 = !MDLocation(line: 1304, column: 12, scope: !59)
!2303 = !MDLocation(line: 1305, column: 14, scope: !59)
!2304 = !MDLocation(line: 1305, column: 19, scope: !59)
!2305 = !MDLocation(line: 1305, column: 12, scope: !59)
!2306 = !MDLocation(line: 1306, column: 10, scope: !59)
!2307 = !MDLocation(line: 1308, column: 10, scope: !2308)
!2308 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1308, column: 9)
!2309 = !MDLocation(line: 1308, column: 9, scope: !59)
!2310 = !MDLocation(line: 1309, column: 9, scope: !2308)
!2311 = !MDLocation(line: 1311, column: 5, scope: !59)
!2312 = !MDLocation(line: 1312, column: 27, scope: !2313)
!2313 = distinct !MDLexicalBlock(scope: !2314, file: !1, line: 1312, column: 13)
!2314 = distinct !MDLexicalBlock(scope: !2315, file: !1, line: 1311, column: 14)
!2315 = distinct !MDLexicalBlock(scope: !2316, file: !1, line: 1311, column: 5)
!2316 = distinct !MDLexicalBlock(scope: !59, file: !1, line: 1311, column: 5)
!2317 = !MDLocation(line: 1312, column: 30, scope: !2313)
!2318 = !MDLocation(line: 1312, column: 13, scope: !2313)
!2319 = !MDLocation(line: 1312, column: 38, scope: !2313)
!2320 = !MDLocation(line: 1312, column: 13, scope: !2314)
!2321 = !MDLocation(line: 1313, column: 18, scope: !2322)
!2322 = distinct !MDLexicalBlock(scope: !2323, file: !1, line: 1313, column: 17)
!2323 = distinct !MDLexicalBlock(scope: !2313, file: !1, line: 1312, column: 44)
!2324 = !MDLocation(line: 1313, column: 17, scope: !2323)
!2325 = !MDLocation(line: 1314, column: 33, scope: !2326)
!2326 = distinct !MDLexicalBlock(scope: !2322, file: !1, line: 1314, column: 21)
!2327 = !MDLocation(line: 1314, column: 36, scope: !2326)
!2328 = !MDLocation(line: 1314, column: 39, scope: !2326)
!2329 = !MDLocation(line: 1314, column: 42, scope: !2326)
!2330 = !MDLocation(line: 1314, column: 45, scope: !2326)
!2331 = !MDLocation(line: 1314, column: 22, scope: !2326)
!2332 = !MDLocation(line: 1314, column: 21, scope: !2322)
!2333 = !MDLocation(line: 1315, column: 21, scope: !2326)
!2334 = !MDLocation(line: 1314, column: 48, scope: !2335)
!2335 = !MDLexicalBlockFile(scope: !2326, file: !1, discriminator: 1)
!2336 = !MDLocation(line: 1316, column: 17, scope: !2337)
!2337 = distinct !MDLexicalBlock(scope: !2323, file: !1, line: 1316, column: 17)
!2338 = !MDLocation(line: 1316, column: 24, scope: !2337)
!2339 = !MDLocation(line: 1316, column: 17, scope: !2323)
!2340 = !MDLocation(line: 1317, column: 17, scope: !2337)
!2341 = !MDLocation(line: 1318, column: 19, scope: !2323)
!2342 = !MDLocation(line: 1319, column: 13, scope: !2323)
!2343 = !MDLocation(line: 1326, column: 13, scope: !2314)
!2344 = !MDLocation(line: 1326, column: 11, scope: !2314)
!2345 = !MDLocation(line: 1327, column: 16, scope: !2314)
!2346 = !MDLocation(line: 1328, column: 14, scope: !2314)
!2347 = !MDLocation(line: 1329, column: 16, scope: !2348)
!2348 = distinct !MDLexicalBlock(scope: !2314, file: !1, line: 1329, column: 9)
!2349 = !MDLocation(line: 1329, column: 14, scope: !2348)
!2350 = !MDLocation(line: 1329, column: 21, scope: !2351)
!2351 = !MDLexicalBlockFile(scope: !2352, file: !1, discriminator: 2)
!2352 = !MDLexicalBlockFile(scope: !2353, file: !1, discriminator: 1)
!2353 = distinct !MDLexicalBlock(scope: !2348, file: !1, line: 1329, column: 9)
!2354 = !MDLocation(line: 1329, column: 25, scope: !2353)
!2355 = !MDLocation(line: 1329, column: 23, scope: !2353)
!2356 = !MDLocation(line: 1329, column: 9, scope: !2348)
!2357 = !MDLocation(line: 1330, column: 17, scope: !2358)
!2358 = distinct !MDLexicalBlock(scope: !2359, file: !1, line: 1330, column: 17)
!2359 = distinct !MDLexicalBlock(scope: !2353, file: !1, line: 1329, column: 38)
!2360 = !MDLocation(line: 1330, column: 26, scope: !2358)
!2361 = !MDLocation(line: 1330, column: 24, scope: !2358)
!2362 = !MDLocation(line: 1330, column: 28, scope: !2358)
!2363 = !MDLocation(line: 1330, column: 17, scope: !2359)
!2364 = !MDLocation(line: 1331, column: 17, scope: !2358)
!2365 = !MDLocation(line: 1332, column: 31, scope: !2366)
!2366 = distinct !MDLexicalBlock(scope: !2359, file: !1, line: 1332, column: 17)
!2367 = !MDLocation(line: 1332, column: 34, scope: !2366)
!2368 = !MDLocation(line: 1332, column: 43, scope: !2366)
!2369 = !MDLocation(line: 1332, column: 41, scope: !2366)
!2370 = !MDLocation(line: 1332, column: 17, scope: !2366)
!2371 = !MDLocation(line: 1332, column: 17, scope: !2359)
!2372 = !MDLocation(line: 1333, column: 29, scope: !2373)
!2373 = distinct !MDLexicalBlock(scope: !2366, file: !1, line: 1332, column: 47)
!2374 = !MDLocation(line: 1333, column: 33, scope: !2373)
!2375 = !MDLocation(line: 1333, column: 31, scope: !2373)
!2376 = !MDLocation(line: 1333, column: 24, scope: !2373)
!2377 = !MDLocation(line: 1334, column: 24, scope: !2373)
!2378 = !MDLocation(line: 1335, column: 24, scope: !2373)
!2379 = !MDLocation(line: 1335, column: 22, scope: !2373)
!2380 = !MDLocation(line: 1336, column: 13, scope: !2373)
!2381 = !MDLocation(line: 1337, column: 9, scope: !2359)
!2382 = !MDLocation(line: 1329, column: 34, scope: !2353)
!2383 = !MDLocation(line: 1329, column: 9, scope: !2353)
!2384 = !MDLocation(line: 1340, column: 13, scope: !2314)
!2385 = !MDLocation(line: 1340, column: 18, scope: !2314)
!2386 = !MDLocation(line: 1340, column: 11, scope: !2314)
!2387 = !MDLocation(line: 1342, column: 14, scope: !2388)
!2388 = distinct !MDLexicalBlock(scope: !2314, file: !1, line: 1342, column: 13)
!2389 = !MDLocation(line: 1342, column: 13, scope: !2314)
!2390 = !MDLocation(line: 1343, column: 20, scope: !2391)
!2391 = distinct !MDLexicalBlock(scope: !2388, file: !1, line: 1343, column: 13)
!2392 = !MDLocation(line: 1343, column: 18, scope: !2391)
!2393 = !MDLocation(line: 1343, column: 25, scope: !2394)
!2394 = !MDLexicalBlockFile(scope: !2395, file: !1, discriminator: 2)
!2395 = !MDLexicalBlockFile(scope: !2396, file: !1, discriminator: 1)
!2396 = distinct !MDLexicalBlock(scope: !2391, file: !1, line: 1343, column: 13)
!2397 = !MDLocation(line: 1343, column: 29, scope: !2396)
!2398 = !MDLocation(line: 1343, column: 27, scope: !2396)
!2399 = !MDLocation(line: 1343, column: 13, scope: !2391)
!2400 = !MDLocation(line: 1344, column: 33, scope: !2401)
!2401 = distinct !MDLexicalBlock(scope: !2402, file: !1, line: 1344, column: 21)
!2402 = distinct !MDLexicalBlock(scope: !2396, file: !1, line: 1343, column: 37)
!2403 = !MDLocation(line: 1344, column: 36, scope: !2401)
!2404 = !MDLocation(line: 1344, column: 39, scope: !2401)
!2405 = !MDLocation(line: 1344, column: 42, scope: !2401)
!2406 = !MDLocation(line: 1344, column: 45, scope: !2401)
!2407 = !MDLocation(line: 1344, column: 22, scope: !2401)
!2408 = !MDLocation(line: 1344, column: 21, scope: !2402)
!2409 = !MDLocation(line: 1345, column: 21, scope: !2401)
!2410 = !MDLocation(line: 1346, column: 13, scope: !2402)
!2411 = !MDLocation(line: 1343, column: 33, scope: !2396)
!2412 = !MDLocation(line: 1343, column: 13, scope: !2396)
!2413 = !MDLocation(line: 1346, column: 13, scope: !2391)
!2414 = !MDLocation(line: 1349, column: 25, scope: !2415)
!2415 = distinct !MDLexicalBlock(scope: !2314, file: !1, line: 1349, column: 13)
!2416 = !MDLocation(line: 1349, column: 28, scope: !2415)
!2417 = !MDLocation(line: 1349, column: 35, scope: !2415)
!2418 = !MDLocation(line: 1349, column: 42, scope: !2415)
!2419 = !MDLocation(line: 1349, column: 31, scope: !2415)
!2420 = !MDLocation(line: 1349, column: 49, scope: !2415)
!2421 = !MDLocation(line: 1349, column: 52, scope: !2415)
!2422 = !MDLocation(line: 1349, column: 14, scope: !2415)
!2423 = !MDLocation(line: 1349, column: 13, scope: !2314)
!2424 = !MDLocation(line: 1350, column: 13, scope: !2415)
!2425 = !MDLocation(line: 1353, column: 19, scope: !2314)
!2426 = !MDLocation(line: 1353, column: 24, scope: !2314)
!2427 = !MDLocation(line: 1353, column: 16, scope: !2314)
!2428 = !MDLocation(line: 1354, column: 16, scope: !2314)
!2429 = !MDLocation(line: 1355, column: 15, scope: !2314)
!2430 = !MDLocation(line: 1356, column: 13, scope: !2431)
!2431 = distinct !MDLexicalBlock(scope: !2314, file: !1, line: 1356, column: 13)
!2432 = !MDLocation(line: 1356, column: 20, scope: !2431)
!2433 = !MDLocation(line: 1356, column: 13, scope: !2314)
!2434 = !MDLocation(line: 1357, column: 13, scope: !2431)
!2435 = !MDLocation(line: 1311, column: 5, scope: !2315)
!2436 = !MDLocation(line: 1359, column: 9, scope: !59)
!2437 = !MDLocation(line: 1359, column: 5, scope: !59)
!2438 = !MDLocation(line: 1361, column: 16, scope: !59)
!2439 = !MDLocation(line: 1361, column: 5, scope: !59)
!2440 = !MDLocation(line: 1363, column: 13, scope: !59)
!2441 = !MDLocation(line: 1363, column: 5, scope: !59)
!2442 = !MDLocation(line: 1364, column: 1, scope: !59)
!2443 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 1, scope: !66, file: !67, line: 151, type: !18)
!2444 = !MDLocation(line: 151, column: 58, scope: !66)
!2445 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "b", arg: 2, scope: !66, file: !67, line: 151, type: !18)
!2446 = !MDLocation(line: 151, column: 65, scope: !66)
!2447 = !MDLocation(line: 153, column: 40, scope: !66)
!2448 = !MDLocation(line: 153, column: 55, scope: !66)
!2449 = !MDLocation(line: 153, column: 12, scope: !66)
!2450 = !MDLocation(line: 153, column: 5, scope: !66)
!2451 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 1, scope: !70, file: !67, line: 139, type: !13)
!2452 = !MDLocation(line: 139, column: 63, scope: !70)
!2453 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "b", arg: 2, scope: !70, file: !67, line: 140, type: !13)
!2454 = !MDLocation(line: 140, column: 63, scope: !70)
!2455 = !MDLocation(line: 142, column: 34, scope: !70)
!2456 = !MDLocation(line: 142, column: 38, scope: !70)
!2457 = !MDLocation(line: 142, column: 36, scope: !70)
!2458 = !MDLocation(line: 142, column: 12, scope: !70)
!2459 = !MDLocation(line: 142, column: 5, scope: !70)
!2460 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 1, scope: !73, file: !67, line: 129, type: !13)
!2461 = !MDLocation(line: 129, column: 68, scope: !73)
!2462 = !MDLocation(line: 131, column: 31, scope: !73)
!2463 = !MDLocation(line: 131, column: 30, scope: !73)
!2464 = !MDLocation(line: 131, column: 36, scope: !73)
!2465 = !MDLocation(line: 131, column: 38, scope: !73)
!2466 = !MDLocation(line: 131, column: 33, scope: !73)
!2467 = !MDLocation(line: 131, column: 12, scope: !73)
!2468 = !MDLocation(line: 131, column: 5, scope: !73)
!2469 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "a", arg: 1, scope: !76, file: !67, line: 100, type: !13)
!2470 = !MDLocation(line: 100, column: 64, scope: !76)
!2471 = !MDLocation(line: 102, column: 17, scope: !76)
!2472 = !MDLocation(line: 102, column: 19, scope: !76)
!2473 = !MDLocation(line: 102, column: 14, scope: !76)
!2474 = !MDLocation(line: 102, column: 5, scope: !76)
