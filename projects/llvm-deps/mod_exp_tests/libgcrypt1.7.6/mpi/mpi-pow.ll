; ModuleID = 'mpi-pow.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

%struct.gcry_mpi = type { i32, i32, i32, i32, i64* }
%struct.karatsuba_ctx = type { %struct.karatsuba_ctx*, i64*, i32, i32, i64*, i32, i32 }

@.str = private unnamed_addr constant [11 x i8] c"!bp_marker\00", align 1
@.str1 = private unnamed_addr constant [10 x i8] c"mpi-pow.c\00", align 1
@__FUNCTION__._gcry_mpi_powm = private unnamed_addr constant [15 x i8] c"_gcry_mpi_powm\00", align 1
@.str2 = private unnamed_addr constant [13 x i8] c"res->d == rp\00", align 1

; Function Attrs: nounwind uwtable
define void @_gcry_mpi_powm(%struct.gcry_mpi* %res, %struct.gcry_mpi* %base, %struct.gcry_mpi* %expo, %struct.gcry_mpi* %mod) #0 {
entry:
  %res.addr = alloca %struct.gcry_mpi*, align 8
  %base.addr = alloca %struct.gcry_mpi*, align 8
  %expo.addr = alloca %struct.gcry_mpi*, align 8
  %mod.addr = alloca %struct.gcry_mpi*, align 8
  %rp = alloca i64*, align 8
  %ep = alloca i64*, align 8
  %mp = alloca i64*, align 8
  %bp = alloca i64*, align 8
  %esize = alloca i32, align 4
  %msize = alloca i32, align 4
  %bsize = alloca i32, align 4
  %rsize = alloca i32, align 4
  %msign = alloca i32, align 4
  %bsign = alloca i32, align 4
  %rsign = alloca i32, align 4
  %esec = alloca i32, align 4
  %msec = alloca i32, align 4
  %bsec = alloca i32, align 4
  %size = alloca i32, align 4
  %mod_shift_cnt = alloca i32, align 4
  %negative_result = alloca i32, align 4
  %mp_marker = alloca i64*, align 8
  %bp_marker = alloca i64*, align 8
  %ep_marker = alloca i64*, align 8
  %xp_marker = alloca i64*, align 8
  %mp_nlimbs = alloca i32, align 4
  %bp_nlimbs = alloca i32, align 4
  %ep_nlimbs = alloca i32, align 4
  %xp_nlimbs = alloca i32, align 4
  %precomp = alloca [16 x i64*], align 16
  %precomp_size = alloca [16 x i32], align 16
  %W = alloca i32, align 4
  %base_u = alloca i64*, align 8
  %base_u_size = alloca i32, align 4
  %max_u_size = alloca i32, align 4
  %__cbtmp = alloca i64, align 8
  %_i = alloca i32, align 4
  %_i100 = alloca i32, align 4
  %_i161 = alloca i32, align 4
  %i = alloca i32, align 4
  %j = alloca i32, align 4
  %k = alloca i32, align 4
  %xp = alloca i64*, align 8
  %xsize = alloca i32, align 4
  %c = alloca i32, align 4
  %e = alloca i64, align 8
  %carry_limb = alloca i64, align 8
  %karactx = alloca %struct.karatsuba_ctx, align 8
  %tp = alloca i64*, align 8
  %_i206 = alloca i32, align 4
  %_i240 = alloca i32, align 4
  %_i260 = alloca i32, align 4
  %_i277 = alloca i32, align 4
  %_i290 = alloca i32, align 4
  %__cbtmp306 = alloca i64, align 8
  %c0 = alloca i32, align 4
  %e0 = alloca i64, align 8
  %__cbtmp327 = alloca i64, align 8
  %__cbtmp370 = alloca i64, align 8
  %w = alloca %struct.gcry_mpi, align 8
  %u = alloca %struct.gcry_mpi, align 8
  %__cbtmp429 = alloca i64, align 8
  %w450 = alloca %struct.gcry_mpi, align 8
  %u451 = alloca %struct.gcry_mpi, align 8
  %_i510 = alloca i32, align 4
  store %struct.gcry_mpi* %res, %struct.gcry_mpi** %res.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi** %res.addr, metadata !45, metadata !46), !dbg !47
  store %struct.gcry_mpi* %base, %struct.gcry_mpi** %base.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi** %base.addr, metadata !48, metadata !46), !dbg !49
  store %struct.gcry_mpi* %expo, %struct.gcry_mpi** %expo.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi** %expo.addr, metadata !50, metadata !46), !dbg !51
  store %struct.gcry_mpi* %mod, %struct.gcry_mpi** %mod.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi** %mod.addr, metadata !52, metadata !46), !dbg !53
  call void @llvm.dbg.declare(metadata i64** %rp, metadata !54, metadata !46), !dbg !55
  call void @llvm.dbg.declare(metadata i64** %ep, metadata !56, metadata !46), !dbg !57
  call void @llvm.dbg.declare(metadata i64** %mp, metadata !58, metadata !46), !dbg !59
  call void @llvm.dbg.declare(metadata i64** %bp, metadata !60, metadata !46), !dbg !61
  call void @llvm.dbg.declare(metadata i32* %esize, metadata !62, metadata !46), !dbg !63
  call void @llvm.dbg.declare(metadata i32* %msize, metadata !64, metadata !46), !dbg !65
  call void @llvm.dbg.declare(metadata i32* %bsize, metadata !66, metadata !46), !dbg !67
  call void @llvm.dbg.declare(metadata i32* %rsize, metadata !68, metadata !46), !dbg !69
  call void @llvm.dbg.declare(metadata i32* %msign, metadata !70, metadata !46), !dbg !71
  call void @llvm.dbg.declare(metadata i32* %bsign, metadata !72, metadata !46), !dbg !73
  call void @llvm.dbg.declare(metadata i32* %rsign, metadata !74, metadata !46), !dbg !75
  call void @llvm.dbg.declare(metadata i32* %esec, metadata !76, metadata !46), !dbg !77
  call void @llvm.dbg.declare(metadata i32* %msec, metadata !78, metadata !46), !dbg !79
  call void @llvm.dbg.declare(metadata i32* %bsec, metadata !80, metadata !46), !dbg !81
  call void @llvm.dbg.declare(metadata i32* %size, metadata !82, metadata !46), !dbg !83
  call void @llvm.dbg.declare(metadata i32* %mod_shift_cnt, metadata !84, metadata !46), !dbg !85
  call void @llvm.dbg.declare(metadata i32* %negative_result, metadata !86, metadata !46), !dbg !87
  call void @llvm.dbg.declare(metadata i64** %mp_marker, metadata !88, metadata !46), !dbg !89
  store i64* null, i64** %mp_marker, align 8, !dbg !89
  call void @llvm.dbg.declare(metadata i64** %bp_marker, metadata !90, metadata !46), !dbg !91
  store i64* null, i64** %bp_marker, align 8, !dbg !91
  call void @llvm.dbg.declare(metadata i64** %ep_marker, metadata !92, metadata !46), !dbg !93
  store i64* null, i64** %ep_marker, align 8, !dbg !93
  call void @llvm.dbg.declare(metadata i64** %xp_marker, metadata !94, metadata !46), !dbg !95
  store i64* null, i64** %xp_marker, align 8, !dbg !95
  call void @llvm.dbg.declare(metadata i32* %mp_nlimbs, metadata !96, metadata !46), !dbg !97
  store i32 0, i32* %mp_nlimbs, align 4, !dbg !97
  call void @llvm.dbg.declare(metadata i32* %bp_nlimbs, metadata !98, metadata !46), !dbg !99
  store i32 0, i32* %bp_nlimbs, align 4, !dbg !99
  call void @llvm.dbg.declare(metadata i32* %ep_nlimbs, metadata !100, metadata !46), !dbg !101
  store i32 0, i32* %ep_nlimbs, align 4, !dbg !101
  call void @llvm.dbg.declare(metadata i32* %xp_nlimbs, metadata !102, metadata !46), !dbg !103
  store i32 0, i32* %xp_nlimbs, align 4, !dbg !103
  call void @llvm.dbg.declare(metadata [16 x i64*]* %precomp, metadata !104, metadata !46), !dbg !108
  call void @llvm.dbg.declare(metadata [16 x i32]* %precomp_size, metadata !109, metadata !46), !dbg !111
  call void @llvm.dbg.declare(metadata i32* %W, metadata !112, metadata !46), !dbg !113
  call void @llvm.dbg.declare(metadata i64** %base_u, metadata !114, metadata !46), !dbg !115
  call void @llvm.dbg.declare(metadata i32* %base_u_size, metadata !116, metadata !46), !dbg !117
  call void @llvm.dbg.declare(metadata i32* %max_u_size, metadata !118, metadata !46), !dbg !119
  %0 = load %struct.gcry_mpi*, %struct.gcry_mpi** %expo.addr, align 8, !dbg !120
  %nlimbs = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %0, i32 0, i32 1, !dbg !121
  %1 = load i32, i32* %nlimbs, align 4, !dbg !121
  store i32 %1, i32* %esize, align 4, !dbg !122
  %2 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !123
  %nlimbs1 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %2, i32 0, i32 1, !dbg !124
  %3 = load i32, i32* %nlimbs1, align 4, !dbg !124
  store i32 %3, i32* %msize, align 4, !dbg !125
  %4 = load i32, i32* %msize, align 4, !dbg !126
  %mul = mul nsw i32 2, %4, !dbg !127
  store i32 %mul, i32* %size, align 4, !dbg !128
  %5 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !129
  %sign = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %5, i32 0, i32 2, !dbg !130
  %6 = load i32, i32* %sign, align 4, !dbg !130
  store i32 %6, i32* %msign, align 4, !dbg !131
  %7 = load %struct.gcry_mpi*, %struct.gcry_mpi** %expo.addr, align 8, !dbg !132
  %d = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %7, i32 0, i32 4, !dbg !133
  %8 = load i64*, i64** %d, align 8, !dbg !133
  store i64* %8, i64** %ep, align 8, !dbg !134
  br label %do.body, !dbg !135

do.body:                                          ; preds = %entry
  br label %while.cond, !dbg !136

while.cond:                                       ; preds = %if.end, %do.body
  %9 = load i32, i32* %esize, align 4, !dbg !139
  %cmp = icmp sgt i32 %9, 0, !dbg !139
  br i1 %cmp, label %while.body, label %while.end, !dbg !139

while.body:                                       ; preds = %while.cond
  %10 = load i32, i32* %esize, align 4, !dbg !142
  %sub = sub nsw i32 %10, 1, !dbg !142
  %idxprom = sext i32 %sub to i64, !dbg !142
  %11 = load i64*, i64** %ep, align 8, !dbg !142
  %arrayidx = getelementptr inbounds i64, i64* %11, i64 %idxprom, !dbg !142
  %12 = load i64, i64* %arrayidx, align 8, !dbg !142
  %tobool = icmp ne i64 %12, 0, !dbg !142
  br i1 %tobool, label %if.then, label %if.end, !dbg !146

if.then:                                          ; preds = %while.body
  br label %while.end, !dbg !147

if.end:                                           ; preds = %while.body
  %13 = load i32, i32* %esize, align 4, !dbg !149
  %dec = add nsw i32 %13, -1, !dbg !149
  store i32 %dec, i32* %esize, align 4, !dbg !149
  br label %while.cond, !dbg !151

while.end:                                        ; preds = %if.then, %while.cond
  br label %do.end, !dbg !152

do.end:                                           ; preds = %while.end
  %14 = load i32, i32* %esize, align 4, !dbg !155
  %mul2 = mul nsw i32 %14, 64, !dbg !157
  %cmp3 = icmp sgt i32 %mul2, 512, !dbg !158
  br i1 %cmp3, label %if.then4, label %if.else, !dbg !159

if.then4:                                         ; preds = %do.end
  store i32 5, i32* %W, align 4, !dbg !160
  br label %if.end20, !dbg !161

if.else:                                          ; preds = %do.end
  %15 = load i32, i32* %esize, align 4, !dbg !162
  %mul5 = mul nsw i32 %15, 64, !dbg !164
  %cmp6 = icmp sgt i32 %mul5, 256, !dbg !165
  br i1 %cmp6, label %if.then7, label %if.else8, !dbg !166

if.then7:                                         ; preds = %if.else
  store i32 4, i32* %W, align 4, !dbg !167
  br label %if.end19, !dbg !168

if.else8:                                         ; preds = %if.else
  %16 = load i32, i32* %esize, align 4, !dbg !169
  %mul9 = mul nsw i32 %16, 64, !dbg !171
  %cmp10 = icmp sgt i32 %mul9, 128, !dbg !172
  br i1 %cmp10, label %if.then11, label %if.else12, !dbg !173

if.then11:                                        ; preds = %if.else8
  store i32 3, i32* %W, align 4, !dbg !174
  br label %if.end18, !dbg !175

if.else12:                                        ; preds = %if.else8
  %17 = load i32, i32* %esize, align 4, !dbg !176
  %mul13 = mul nsw i32 %17, 64, !dbg !178
  %cmp14 = icmp sgt i32 %mul13, 64, !dbg !179
  br i1 %cmp14, label %if.then15, label %if.else16, !dbg !180

if.then15:                                        ; preds = %if.else12
  store i32 2, i32* %W, align 4, !dbg !181
  br label %if.end17, !dbg !182

if.else16:                                        ; preds = %if.else12
  store i32 1, i32* %W, align 4, !dbg !183
  br label %if.end17

if.end17:                                         ; preds = %if.else16, %if.then15
  br label %if.end18

if.end18:                                         ; preds = %if.end17, %if.then11
  br label %if.end19

if.end19:                                         ; preds = %if.end18, %if.then7
  br label %if.end20

if.end20:                                         ; preds = %if.end19, %if.then4
  %18 = load %struct.gcry_mpi*, %struct.gcry_mpi** %expo.addr, align 8, !dbg !184
  %tobool21 = icmp ne %struct.gcry_mpi* %18, null, !dbg !184
  br i1 %tobool21, label %land.rhs, label %land.end, !dbg !184

land.rhs:                                         ; preds = %if.end20
  %19 = load %struct.gcry_mpi*, %struct.gcry_mpi** %expo.addr, align 8, !dbg !185
  %flags = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %19, i32 0, i32 3, !dbg !185
  %20 = load i32, i32* %flags, align 4, !dbg !185
  %and = and i32 %20, 1, !dbg !185
  %tobool22 = icmp ne i32 %and, 0, !dbg !185
  br label %land.end

land.end:                                         ; preds = %land.rhs, %if.end20
  %21 = phi i1 [ false, %if.end20 ], [ %tobool22, %land.rhs ]
  %land.ext = zext i1 %21 to i32, !dbg !187
  store i32 %land.ext, i32* %esec, align 4, !dbg !189
  %22 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !190
  %tobool23 = icmp ne %struct.gcry_mpi* %22, null, !dbg !190
  br i1 %tobool23, label %land.rhs24, label %land.end28, !dbg !190

land.rhs24:                                       ; preds = %land.end
  %23 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !191
  %flags25 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %23, i32 0, i32 3, !dbg !191
  %24 = load i32, i32* %flags25, align 4, !dbg !191
  %and26 = and i32 %24, 1, !dbg !191
  %tobool27 = icmp ne i32 %and26, 0, !dbg !191
  br label %land.end28

land.end28:                                       ; preds = %land.rhs24, %land.end
  %25 = phi i1 [ false, %land.end ], [ %tobool27, %land.rhs24 ]
  %land.ext29 = zext i1 %25 to i32, !dbg !192
  store i32 %land.ext29, i32* %msec, align 4, !dbg !193
  %26 = load %struct.gcry_mpi*, %struct.gcry_mpi** %base.addr, align 8, !dbg !194
  %tobool30 = icmp ne %struct.gcry_mpi* %26, null, !dbg !194
  br i1 %tobool30, label %land.rhs31, label %land.end35, !dbg !194

land.rhs31:                                       ; preds = %land.end28
  %27 = load %struct.gcry_mpi*, %struct.gcry_mpi** %base.addr, align 8, !dbg !195
  %flags32 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %27, i32 0, i32 3, !dbg !195
  %28 = load i32, i32* %flags32, align 4, !dbg !195
  %and33 = and i32 %28, 1, !dbg !195
  %tobool34 = icmp ne i32 %and33, 0, !dbg !195
  br label %land.end35

land.end35:                                       ; preds = %land.rhs31, %land.end28
  %29 = phi i1 [ false, %land.end28 ], [ %tobool34, %land.rhs31 ]
  %land.ext36 = zext i1 %29 to i32, !dbg !196
  store i32 %land.ext36, i32* %bsec, align 4, !dbg !197
  %30 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !198
  %d37 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %30, i32 0, i32 4, !dbg !199
  %31 = load i64*, i64** %d37, align 8, !dbg !199
  store i64* %31, i64** %rp, align 8, !dbg !200
  %32 = load i32, i32* %msize, align 4, !dbg !201
  %tobool38 = icmp ne i32 %32, 0, !dbg !201
  br i1 %tobool38, label %if.end40, label %if.then39, !dbg !203

if.then39:                                        ; preds = %land.end35
  call void @_gcry_divide_by_zero() #5, !dbg !204
  unreachable, !dbg !204

if.end40:                                         ; preds = %land.end35
  %33 = load i32, i32* %esize, align 4, !dbg !205
  %tobool41 = icmp ne i32 %33, 0, !dbg !205
  br i1 %tobool41, label %if.end63, label %if.then42, !dbg !207

if.then42:                                        ; preds = %if.end40
  %34 = load i32, i32* %msize, align 4, !dbg !208
  %cmp43 = icmp eq i32 %34, 1, !dbg !210
  br i1 %cmp43, label %land.rhs44, label %land.end48, !dbg !211

land.rhs44:                                       ; preds = %if.then42
  %35 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !212
  %d45 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %35, i32 0, i32 4, !dbg !214
  %36 = load i64*, i64** %d45, align 8, !dbg !214
  %arrayidx46 = getelementptr inbounds i64, i64* %36, i64 0, !dbg !215
  %37 = load i64, i64* %arrayidx46, align 8, !dbg !215
  %cmp47 = icmp eq i64 %37, 1, !dbg !216
  br label %land.end48

land.end48:                                       ; preds = %land.rhs44, %if.then42
  %38 = phi i1 [ false, %if.then42 ], [ %cmp47, %land.rhs44 ]
  %cond = select i1 %38, i32 0, i32 1, !dbg !217
  %39 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !219
  %nlimbs50 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %39, i32 0, i32 1, !dbg !220
  store i32 %cond, i32* %nlimbs50, align 4, !dbg !221
  %40 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !222
  %nlimbs51 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %40, i32 0, i32 1, !dbg !224
  %41 = load i32, i32* %nlimbs51, align 4, !dbg !224
  %tobool52 = icmp ne i32 %41, 0, !dbg !222
  br i1 %tobool52, label %if.then53, label %if.end61, !dbg !225

if.then53:                                        ; preds = %land.end48
  br label %do.body54, !dbg !226

do.body54:                                        ; preds = %if.then53
  %42 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !228
  %alloced = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %42, i32 0, i32 0, !dbg !228
  %43 = load i32, i32* %alloced, align 4, !dbg !228
  %cmp55 = icmp slt i32 %43, 1, !dbg !228
  br i1 %cmp55, label %if.then56, label %if.end57, !dbg !232

if.then56:                                        ; preds = %do.body54
  %44 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !233
  call void @_gcry_mpi_resize(%struct.gcry_mpi* %44, i32 1), !dbg !233
  br label %if.end57, !dbg !233

if.end57:                                         ; preds = %if.then56, %do.body54
  br label %do.end58, !dbg !235

do.end58:                                         ; preds = %if.end57
  %45 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !238
  %d59 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %45, i32 0, i32 4, !dbg !239
  %46 = load i64*, i64** %d59, align 8, !dbg !239
  store i64* %46, i64** %rp, align 8, !dbg !240
  %47 = load i64*, i64** %rp, align 8, !dbg !241
  %arrayidx60 = getelementptr inbounds i64, i64* %47, i64 0, !dbg !241
  store i64 1, i64* %arrayidx60, align 8, !dbg !242
  br label %if.end61, !dbg !243

if.end61:                                         ; preds = %do.end58, %land.end48
  %48 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !244
  %sign62 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %48, i32 0, i32 2, !dbg !245
  store i32 0, i32* %sign62, align 4, !dbg !246
  br label %leave, !dbg !247

if.end63:                                         ; preds = %if.end40
  %49 = load i32, i32* %msec, align 4, !dbg !248
  %tobool64 = icmp ne i32 %49, 0, !dbg !248
  br i1 %tobool64, label %cond.true, label %cond.false, !dbg !248

cond.true:                                        ; preds = %if.end63
  %50 = load i32, i32* %msize, align 4, !dbg !249
  br label %cond.end, !dbg !248

cond.false:                                       ; preds = %if.end63
  br label %cond.end, !dbg !250

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond65 = phi i32 [ %50, %cond.true ], [ 0, %cond.false ], !dbg !248
  store i32 %cond65, i32* %mp_nlimbs, align 4, !dbg !251
  %51 = load i32, i32* %msize, align 4, !dbg !254
  %52 = load i32, i32* %msec, align 4, !dbg !254
  %call = call i64* @_gcry_mpi_alloc_limb_space(i32 %51, i32 %52), !dbg !254
  store i64* %call, i64** %mp_marker, align 8, !dbg !255
  store i64* %call, i64** %mp, align 8, !dbg !256
  br label %do.body66, !dbg !257

do.body66:                                        ; preds = %cond.end
  call void @llvm.dbg.declare(metadata i64* %__cbtmp, metadata !258, metadata !46), !dbg !260
  %53 = load i32, i32* %msize, align 4, !dbg !261
  %sub67 = sub nsw i32 %53, 1, !dbg !261
  %idxprom68 = sext i32 %sub67 to i64, !dbg !261
  %54 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !261
  %d69 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %54, i32 0, i32 4, !dbg !261
  %55 = load i64*, i64** %d69, align 8, !dbg !261
  %arrayidx70 = getelementptr inbounds i64, i64* %55, i64 %idxprom68, !dbg !261
  %56 = load i64, i64* %arrayidx70, align 8, !dbg !261
  %57 = call i64 asm "bsrq $1,$0", "=r,rm,~{cc},~{dirflag},~{fpsr},~{flags}"(i64 %56) #4, !dbg !261, !srcloc !263
  store i64 %57, i64* %__cbtmp, align 8, !dbg !261
  %58 = load i64, i64* %__cbtmp, align 8, !dbg !261
  %xor = xor i64 %58, 63, !dbg !261
  %conv = trunc i64 %xor to i32, !dbg !261
  store i32 %conv, i32* %mod_shift_cnt, align 4, !dbg !261
  br label %do.end71, !dbg !261

do.end71:                                         ; preds = %do.body66
  %59 = load i32, i32* %mod_shift_cnt, align 4, !dbg !264
  %tobool72 = icmp ne i32 %59, 0, !dbg !264
  br i1 %tobool72, label %if.then73, label %if.else76, !dbg !266

if.then73:                                        ; preds = %do.end71
  %60 = load i64*, i64** %mp, align 8, !dbg !267
  %61 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !268
  %d74 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %61, i32 0, i32 4, !dbg !269
  %62 = load i64*, i64** %d74, align 8, !dbg !269
  %63 = load i32, i32* %msize, align 4, !dbg !270
  %64 = load i32, i32* %mod_shift_cnt, align 4, !dbg !271
  %call75 = call i64 @_gcry_mpih_lshift(i64* %60, i64* %62, i32 %63, i32 %64), !dbg !272
  br label %if.end86, !dbg !272

if.else76:                                        ; preds = %do.end71
  br label %do.body77, !dbg !273

do.body77:                                        ; preds = %if.else76
  call void @llvm.dbg.declare(metadata i32* %_i, metadata !274, metadata !46), !dbg !276
  store i32 0, i32* %_i, align 4, !dbg !277
  br label %for.cond, !dbg !277

for.cond:                                         ; preds = %for.inc, %do.body77
  %65 = load i32, i32* %_i, align 4, !dbg !280
  %66 = load i32, i32* %msize, align 4, !dbg !280
  %cmp78 = icmp slt i32 %65, %66, !dbg !280
  br i1 %cmp78, label %for.body, label %for.end, !dbg !284

for.body:                                         ; preds = %for.cond
  %67 = load i32, i32* %_i, align 4, !dbg !285
  %idxprom80 = sext i32 %67 to i64, !dbg !285
  %68 = load %struct.gcry_mpi*, %struct.gcry_mpi** %mod.addr, align 8, !dbg !285
  %d81 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %68, i32 0, i32 4, !dbg !285
  %69 = load i64*, i64** %d81, align 8, !dbg !285
  %arrayidx82 = getelementptr inbounds i64, i64* %69, i64 %idxprom80, !dbg !285
  %70 = load i64, i64* %arrayidx82, align 8, !dbg !285
  %71 = load i32, i32* %_i, align 4, !dbg !285
  %idxprom83 = sext i32 %71 to i64, !dbg !285
  %72 = load i64*, i64** %mp, align 8, !dbg !285
  %arrayidx84 = getelementptr inbounds i64, i64* %72, i64 %idxprom83, !dbg !285
  store i64 %70, i64* %arrayidx84, align 8, !dbg !285
  br label %for.inc, !dbg !285

for.inc:                                          ; preds = %for.body
  %73 = load i32, i32* %_i, align 4, !dbg !287
  %inc = add nsw i32 %73, 1, !dbg !287
  store i32 %inc, i32* %_i, align 4, !dbg !287
  br label %for.cond, !dbg !287

for.end:                                          ; preds = %for.cond
  br label %do.end85, !dbg !289

do.end85:                                         ; preds = %for.end
  br label %if.end86

if.end86:                                         ; preds = %do.end85, %if.then73
  %74 = load %struct.gcry_mpi*, %struct.gcry_mpi** %base.addr, align 8, !dbg !291
  %nlimbs87 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %74, i32 0, i32 1, !dbg !292
  %75 = load i32, i32* %nlimbs87, align 4, !dbg !292
  store i32 %75, i32* %bsize, align 4, !dbg !293
  %76 = load %struct.gcry_mpi*, %struct.gcry_mpi** %base.addr, align 8, !dbg !294
  %sign88 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %76, i32 0, i32 2, !dbg !295
  %77 = load i32, i32* %sign88, align 4, !dbg !295
  store i32 %77, i32* %bsign, align 4, !dbg !296
  %78 = load i32, i32* %bsize, align 4, !dbg !297
  %79 = load i32, i32* %msize, align 4, !dbg !299
  %cmp89 = icmp sgt i32 %78, %79, !dbg !300
  br i1 %cmp89, label %if.then91, label %if.else129, !dbg !301

if.then91:                                        ; preds = %if.end86
  %80 = load i32, i32* %bsec, align 4, !dbg !302
  %tobool92 = icmp ne i32 %80, 0, !dbg !302
  br i1 %tobool92, label %cond.true93, label %cond.false94, !dbg !302

cond.true93:                                      ; preds = %if.then91
  %81 = load i32, i32* %bsize, align 4, !dbg !304
  %add = add nsw i32 %81, 1, !dbg !306
  br label %cond.end95, !dbg !302

cond.false94:                                     ; preds = %if.then91
  br label %cond.end95, !dbg !307

cond.end95:                                       ; preds = %cond.false94, %cond.true93
  %cond96 = phi i32 [ %add, %cond.true93 ], [ 0, %cond.false94 ], !dbg !302
  store i32 %cond96, i32* %bp_nlimbs, align 4, !dbg !309
  %82 = load i32, i32* %bsize, align 4, !dbg !312
  %add97 = add nsw i32 %82, 1, !dbg !312
  %83 = load i32, i32* %bsec, align 4, !dbg !312
  %call98 = call i64* @_gcry_mpi_alloc_limb_space(i32 %add97, i32 %83), !dbg !312
  store i64* %call98, i64** %bp_marker, align 8, !dbg !313
  store i64* %call98, i64** %bp, align 8, !dbg !314
  br label %do.body99, !dbg !315

do.body99:                                        ; preds = %cond.end95
  call void @llvm.dbg.declare(metadata i32* %_i100, metadata !316, metadata !46), !dbg !318
  store i32 0, i32* %_i100, align 4, !dbg !319
  br label %for.cond101, !dbg !319

for.cond101:                                      ; preds = %for.inc110, %do.body99
  %84 = load i32, i32* %_i100, align 4, !dbg !322
  %85 = load i32, i32* %bsize, align 4, !dbg !322
  %cmp102 = icmp slt i32 %84, %85, !dbg !322
  br i1 %cmp102, label %for.body104, label %for.end112, !dbg !326

for.body104:                                      ; preds = %for.cond101
  %86 = load i32, i32* %_i100, align 4, !dbg !327
  %idxprom105 = sext i32 %86 to i64, !dbg !327
  %87 = load %struct.gcry_mpi*, %struct.gcry_mpi** %base.addr, align 8, !dbg !327
  %d106 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %87, i32 0, i32 4, !dbg !327
  %88 = load i64*, i64** %d106, align 8, !dbg !327
  %arrayidx107 = getelementptr inbounds i64, i64* %88, i64 %idxprom105, !dbg !327
  %89 = load i64, i64* %arrayidx107, align 8, !dbg !327
  %90 = load i32, i32* %_i100, align 4, !dbg !327
  %idxprom108 = sext i32 %90 to i64, !dbg !327
  %91 = load i64*, i64** %bp, align 8, !dbg !327
  %arrayidx109 = getelementptr inbounds i64, i64* %91, i64 %idxprom108, !dbg !327
  store i64 %89, i64* %arrayidx109, align 8, !dbg !327
  br label %for.inc110, !dbg !327

for.inc110:                                       ; preds = %for.body104
  %92 = load i32, i32* %_i100, align 4, !dbg !329
  %inc111 = add nsw i32 %92, 1, !dbg !329
  store i32 %inc111, i32* %_i100, align 4, !dbg !329
  br label %for.cond101, !dbg !329

for.end112:                                       ; preds = %for.cond101
  br label %do.end113, !dbg !331

do.end113:                                        ; preds = %for.end112
  %93 = load i64*, i64** %bp, align 8, !dbg !333
  %94 = load i32, i32* %msize, align 4, !dbg !334
  %idx.ext = sext i32 %94 to i64, !dbg !335
  %add.ptr = getelementptr inbounds i64, i64* %93, i64 %idx.ext, !dbg !335
  %95 = load i64*, i64** %bp, align 8, !dbg !336
  %96 = load i32, i32* %bsize, align 4, !dbg !337
  %97 = load i64*, i64** %mp, align 8, !dbg !338
  %98 = load i32, i32* %msize, align 4, !dbg !339
  %call114 = call i64 @_gcry_mpih_divrem(i64* %add.ptr, i32 0, i64* %95, i32 %96, i64* %97, i32 %98), !dbg !340
  %99 = load i32, i32* %msize, align 4, !dbg !341
  store i32 %99, i32* %bsize, align 4, !dbg !342
  br label %do.body115, !dbg !343

do.body115:                                       ; preds = %do.end113
  br label %while.cond116, !dbg !344

while.cond116:                                    ; preds = %if.end125, %do.body115
  %100 = load i32, i32* %bsize, align 4, !dbg !347
  %cmp117 = icmp sgt i32 %100, 0, !dbg !347
  br i1 %cmp117, label %while.body119, label %while.end127, !dbg !347

while.body119:                                    ; preds = %while.cond116
  %101 = load i32, i32* %bsize, align 4, !dbg !350
  %sub120 = sub nsw i32 %101, 1, !dbg !350
  %idxprom121 = sext i32 %sub120 to i64, !dbg !350
  %102 = load i64*, i64** %bp, align 8, !dbg !350
  %arrayidx122 = getelementptr inbounds i64, i64* %102, i64 %idxprom121, !dbg !350
  %103 = load i64, i64* %arrayidx122, align 8, !dbg !350
  %tobool123 = icmp ne i64 %103, 0, !dbg !350
  br i1 %tobool123, label %if.then124, label %if.end125, !dbg !354

if.then124:                                       ; preds = %while.body119
  br label %while.end127, !dbg !355

if.end125:                                        ; preds = %while.body119
  %104 = load i32, i32* %bsize, align 4, !dbg !357
  %dec126 = add nsw i32 %104, -1, !dbg !357
  store i32 %dec126, i32* %bsize, align 4, !dbg !357
  br label %while.cond116, !dbg !359

while.end127:                                     ; preds = %if.then124, %while.cond116
  br label %do.end128, !dbg !360

do.end128:                                        ; preds = %while.end127
  br label %if.end131, !dbg !363

if.else129:                                       ; preds = %if.end86
  %105 = load %struct.gcry_mpi*, %struct.gcry_mpi** %base.addr, align 8, !dbg !364
  %d130 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %105, i32 0, i32 4, !dbg !365
  %106 = load i64*, i64** %d130, align 8, !dbg !365
  store i64* %106, i64** %bp, align 8, !dbg !366
  br label %if.end131

if.end131:                                        ; preds = %if.else129, %do.end128
  %107 = load i32, i32* %bsize, align 4, !dbg !367
  %tobool132 = icmp ne i32 %107, 0, !dbg !367
  br i1 %tobool132, label %if.end136, label %if.then133, !dbg !369

if.then133:                                       ; preds = %if.end131
  %108 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !370
  %nlimbs134 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %108, i32 0, i32 1, !dbg !372
  store i32 0, i32* %nlimbs134, align 4, !dbg !373
  %109 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !374
  %sign135 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %109, i32 0, i32 2, !dbg !375
  store i32 0, i32* %sign135, align 4, !dbg !376
  br label %leave, !dbg !377

if.end136:                                        ; preds = %if.end131
  %110 = load i64*, i64** %rp, align 8, !dbg !378
  %cmp137 = icmp eq i64* %110, null, !dbg !380
  br i1 %cmp137, label %if.then139, label %if.end150, !dbg !381

if.then139:                                       ; preds = %if.end136
  %111 = load i64*, i64** %bp_marker, align 8, !dbg !382
  %tobool140 = icmp ne i64* %111, null, !dbg !382
  br i1 %tobool140, label %cond.false142, label %cond.true141, !dbg !382

cond.true141:                                     ; preds = %if.then139
  br label %cond.end143, !dbg !384

cond.false142:                                    ; preds = %if.then139
  call void @_gcry_assert_failed(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @.str1, i32 0, i32 0), i32 518, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @__FUNCTION__._gcry_mpi_powm, i32 0, i32 0)) #5, !dbg !386
  unreachable, !dbg !386
                                                  ; No predecessors!
  br label %cond.end143, !dbg !382

cond.end143:                                      ; preds = %112, %cond.true141
  %113 = load i32, i32* %bsec, align 4, !dbg !388
  %tobool144 = icmp ne i32 %113, 0, !dbg !388
  br i1 %tobool144, label %cond.true145, label %cond.false146, !dbg !388

cond.true145:                                     ; preds = %cond.end143
  %114 = load i32, i32* %bsize, align 4, !dbg !389
  br label %cond.end147, !dbg !388

cond.false146:                                    ; preds = %cond.end143
  br label %cond.end147, !dbg !390

cond.end147:                                      ; preds = %cond.false146, %cond.true145
  %cond148 = phi i32 [ %114, %cond.true145 ], [ 0, %cond.false146 ], !dbg !388
  store i32 %cond148, i32* %bp_nlimbs, align 4, !dbg !391
  %115 = load i32, i32* %bsize, align 4, !dbg !394
  %116 = load i32, i32* %bsec, align 4, !dbg !394
  %call149 = call i64* @_gcry_mpi_alloc_limb_space(i32 %115, i32 %116), !dbg !394
  store i64* %call149, i64** %bp_marker, align 8, !dbg !395
  store i64* %call149, i64** %bp, align 8, !dbg !396
  br label %if.end150, !dbg !397

if.end150:                                        ; preds = %cond.end147, %if.end136
  %117 = load i64*, i64** %rp, align 8, !dbg !398
  %118 = load i64*, i64** %ep, align 8, !dbg !400
  %cmp151 = icmp eq i64* %117, %118, !dbg !401
  br i1 %cmp151, label %if.then153, label %if.end174, !dbg !402

if.then153:                                       ; preds = %if.end150
  %119 = load i32, i32* %esec, align 4, !dbg !403
  %tobool154 = icmp ne i32 %119, 0, !dbg !403
  br i1 %tobool154, label %cond.true155, label %cond.false156, !dbg !403

cond.true155:                                     ; preds = %if.then153
  %120 = load i32, i32* %esize, align 4, !dbg !405
  br label %cond.end157, !dbg !403

cond.false156:                                    ; preds = %if.then153
  br label %cond.end157, !dbg !407

cond.end157:                                      ; preds = %cond.false156, %cond.true155
  %cond158 = phi i32 [ %120, %cond.true155 ], [ 0, %cond.false156 ], !dbg !403
  store i32 %cond158, i32* %ep_nlimbs, align 4, !dbg !409
  %121 = load i32, i32* %esize, align 4, !dbg !412
  %122 = load i32, i32* %esec, align 4, !dbg !412
  %call159 = call i64* @_gcry_mpi_alloc_limb_space(i32 %121, i32 %122), !dbg !412
  store i64* %call159, i64** %ep_marker, align 8, !dbg !413
  store i64* %call159, i64** %ep, align 8, !dbg !414
  br label %do.body160, !dbg !415

do.body160:                                       ; preds = %cond.end157
  call void @llvm.dbg.declare(metadata i32* %_i161, metadata !416, metadata !46), !dbg !418
  store i32 0, i32* %_i161, align 4, !dbg !419
  br label %for.cond162, !dbg !419

for.cond162:                                      ; preds = %for.inc170, %do.body160
  %123 = load i32, i32* %_i161, align 4, !dbg !422
  %124 = load i32, i32* %esize, align 4, !dbg !422
  %cmp163 = icmp slt i32 %123, %124, !dbg !422
  br i1 %cmp163, label %for.body165, label %for.end172, !dbg !426

for.body165:                                      ; preds = %for.cond162
  %125 = load i32, i32* %_i161, align 4, !dbg !427
  %idxprom166 = sext i32 %125 to i64, !dbg !427
  %126 = load i64*, i64** %rp, align 8, !dbg !427
  %arrayidx167 = getelementptr inbounds i64, i64* %126, i64 %idxprom166, !dbg !427
  %127 = load i64, i64* %arrayidx167, align 8, !dbg !427
  %128 = load i32, i32* %_i161, align 4, !dbg !427
  %idxprom168 = sext i32 %128 to i64, !dbg !427
  %129 = load i64*, i64** %ep, align 8, !dbg !427
  %arrayidx169 = getelementptr inbounds i64, i64* %129, i64 %idxprom168, !dbg !427
  store i64 %127, i64* %arrayidx169, align 8, !dbg !427
  br label %for.inc170, !dbg !427

for.inc170:                                       ; preds = %for.body165
  %130 = load i32, i32* %_i161, align 4, !dbg !429
  %inc171 = add nsw i32 %130, 1, !dbg !429
  store i32 %inc171, i32* %_i161, align 4, !dbg !429
  br label %for.cond162, !dbg !429

for.end172:                                       ; preds = %for.cond162
  br label %do.end173, !dbg !431

do.end173:                                        ; preds = %for.end172
  br label %if.end174, !dbg !433

if.end174:                                        ; preds = %do.end173, %if.end150
  %131 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !434
  %alloced175 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %131, i32 0, i32 0, !dbg !436
  %132 = load i32, i32* %alloced175, align 4, !dbg !436
  %133 = load i32, i32* %size, align 4, !dbg !437
  %cmp176 = icmp slt i32 %132, %133, !dbg !438
  br i1 %cmp176, label %if.then178, label %if.end180, !dbg !439

if.then178:                                       ; preds = %if.end174
  %134 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !440
  %135 = load i32, i32* %size, align 4, !dbg !440
  call void @_gcry_mpi_resize(%struct.gcry_mpi* %134, i32 %135), !dbg !440
  %136 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !442
  %d179 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %136, i32 0, i32 4, !dbg !443
  %137 = load i64*, i64** %d179, align 8, !dbg !443
  store i64* %137, i64** %rp, align 8, !dbg !444
  br label %if.end180, !dbg !445

if.end180:                                        ; preds = %if.then178, %if.end174
  call void @llvm.dbg.declare(metadata i32* %i, metadata !446, metadata !46), !dbg !448
  call void @llvm.dbg.declare(metadata i32* %j, metadata !449, metadata !46), !dbg !450
  call void @llvm.dbg.declare(metadata i32* %k, metadata !451, metadata !46), !dbg !452
  call void @llvm.dbg.declare(metadata i64** %xp, metadata !453, metadata !46), !dbg !454
  call void @llvm.dbg.declare(metadata i32* %xsize, metadata !455, metadata !46), !dbg !456
  call void @llvm.dbg.declare(metadata i32* %c, metadata !457, metadata !46), !dbg !458
  call void @llvm.dbg.declare(metadata i64* %e, metadata !459, metadata !46), !dbg !460
  call void @llvm.dbg.declare(metadata i64* %carry_limb, metadata !461, metadata !46), !dbg !462
  call void @llvm.dbg.declare(metadata %struct.karatsuba_ctx* %karactx, metadata !463, metadata !46), !dbg !464
  call void @llvm.dbg.declare(metadata i64** %tp, metadata !465, metadata !46), !dbg !466
  %138 = load i32, i32* %msec, align 4, !dbg !467
  %tobool181 = icmp ne i32 %138, 0, !dbg !467
  br i1 %tobool181, label %cond.true182, label %cond.false185, !dbg !467

cond.true182:                                     ; preds = %if.end180
  %139 = load i32, i32* %msize, align 4, !dbg !468
  %add183 = add nsw i32 %139, 1, !dbg !470
  %mul184 = mul nsw i32 2, %add183, !dbg !471
  br label %cond.end186, !dbg !467

cond.false185:                                    ; preds = %if.end180
  br label %cond.end186, !dbg !472

cond.end186:                                      ; preds = %cond.false185, %cond.true182
  %cond187 = phi i32 [ %mul184, %cond.true182 ], [ 0, %cond.false185 ], !dbg !467
  store i32 %cond187, i32* %xp_nlimbs, align 4, !dbg !474
  %140 = load i32, i32* %msize, align 4, !dbg !477
  %add188 = add nsw i32 %140, 1, !dbg !477
  %mul189 = mul nsw i32 2, %add188, !dbg !477
  %141 = load i32, i32* %msec, align 4, !dbg !477
  %call190 = call i64* @_gcry_mpi_alloc_limb_space(i32 %mul189, i32 %141), !dbg !477
  store i64* %call190, i64** %xp_marker, align 8, !dbg !478
  store i64* %call190, i64** %xp, align 8, !dbg !479
  %142 = bitcast %struct.karatsuba_ctx* %karactx to i8*, !dbg !480
  call void @llvm.memset.p0i8.i64(i8* %142, i8 0, i64 40, i32 8, i1 false), !dbg !480
  %143 = load i64*, i64** %ep, align 8, !dbg !481
  %arrayidx191 = getelementptr inbounds i64, i64* %143, i64 0, !dbg !481
  %144 = load i64, i64* %arrayidx191, align 8, !dbg !481
  %and192 = and i64 %144, 1, !dbg !482
  %tobool193 = icmp ne i64 %and192, 0, !dbg !482
  br i1 %tobool193, label %land.rhs194, label %land.end196, !dbg !483

land.rhs194:                                      ; preds = %cond.end186
  %145 = load i32, i32* %bsign, align 4, !dbg !484
  %tobool195 = icmp ne i32 %145, 0, !dbg !483
  br label %land.end196

land.end196:                                      ; preds = %land.rhs194, %cond.end186
  %146 = phi i1 [ false, %cond.end186 ], [ %tobool195, %land.rhs194 ]
  %land.ext197 = zext i1 %146 to i32, !dbg !485
  store i32 %land.ext197, i32* %negative_result, align 4, !dbg !486
  %147 = load i32, i32* %W, align 4, !dbg !487
  %cmp198 = icmp sgt i32 %147, 1, !dbg !489
  br i1 %cmp198, label %if.then200, label %if.end201, !dbg !490

if.then200:                                       ; preds = %land.end196
  %148 = load i64*, i64** %xp, align 8, !dbg !491
  %149 = load i64*, i64** %bp, align 8, !dbg !492
  %150 = load i32, i32* %bsize, align 4, !dbg !493
  %151 = load i64*, i64** %bp, align 8, !dbg !494
  %152 = load i32, i32* %bsize, align 4, !dbg !495
  %153 = load i64*, i64** %mp, align 8, !dbg !496
  %154 = load i32, i32* %msize, align 4, !dbg !497
  call void @mul_mod(i64* %148, i32* %xsize, i64* %149, i32 %150, i64* %151, i32 %152, i64* %153, i32 %154, %struct.karatsuba_ctx* %karactx), !dbg !498
  br label %if.end201, !dbg !498

if.end201:                                        ; preds = %if.then200, %land.end196
  %155 = load i32, i32* %bsize, align 4, !dbg !499
  %156 = load i32, i32* %esec, align 4, !dbg !499
  %call202 = call i64* @_gcry_mpi_alloc_limb_space(i32 %155, i32 %156), !dbg !499
  %arrayidx203 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 0, !dbg !500
  store i64* %call202, i64** %arrayidx203, align 8, !dbg !501
  store i64* %call202, i64** %base_u, align 8, !dbg !502
  %157 = load i32, i32* %bsize, align 4, !dbg !503
  %arrayidx204 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 0, !dbg !504
  store i32 %157, i32* %arrayidx204, align 4, !dbg !505
  store i32 %157, i32* %max_u_size, align 4, !dbg !506
  store i32 %157, i32* %base_u_size, align 4, !dbg !507
  br label %do.body205, !dbg !508

do.body205:                                       ; preds = %if.end201
  call void @llvm.dbg.declare(metadata i32* %_i206, metadata !509, metadata !46), !dbg !511
  store i32 0, i32* %_i206, align 4, !dbg !512
  br label %for.cond207, !dbg !512

for.cond207:                                      ; preds = %for.inc216, %do.body205
  %158 = load i32, i32* %_i206, align 4, !dbg !515
  %159 = load i32, i32* %bsize, align 4, !dbg !515
  %cmp208 = icmp slt i32 %158, %159, !dbg !515
  br i1 %cmp208, label %for.body210, label %for.end218, !dbg !519

for.body210:                                      ; preds = %for.cond207
  %160 = load i32, i32* %_i206, align 4, !dbg !520
  %idxprom211 = sext i32 %160 to i64, !dbg !520
  %161 = load i64*, i64** %bp, align 8, !dbg !520
  %arrayidx212 = getelementptr inbounds i64, i64* %161, i64 %idxprom211, !dbg !520
  %162 = load i64, i64* %arrayidx212, align 8, !dbg !520
  %163 = load i32, i32* %_i206, align 4, !dbg !520
  %idxprom213 = sext i32 %163 to i64, !dbg !520
  %arrayidx214 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 0, !dbg !520
  %164 = load i64*, i64** %arrayidx214, align 8, !dbg !520
  %arrayidx215 = getelementptr inbounds i64, i64* %164, i64 %idxprom213, !dbg !520
  store i64 %162, i64* %arrayidx215, align 8, !dbg !520
  br label %for.inc216, !dbg !520

for.inc216:                                       ; preds = %for.body210
  %165 = load i32, i32* %_i206, align 4, !dbg !522
  %inc217 = add nsw i32 %165, 1, !dbg !522
  store i32 %inc217, i32* %_i206, align 4, !dbg !522
  br label %for.cond207, !dbg !522

for.end218:                                       ; preds = %for.cond207
  br label %do.end219, !dbg !524

do.end219:                                        ; preds = %for.end218
  store i32 1, i32* %i, align 4, !dbg !526
  br label %for.cond220, !dbg !528

for.cond220:                                      ; preds = %for.inc255, %do.end219
  %166 = load i32, i32* %i, align 4, !dbg !529
  %167 = load i32, i32* %W, align 4, !dbg !533
  %sub221 = sub nsw i32 %167, 1, !dbg !534
  %shl = shl i32 1, %sub221, !dbg !535
  %cmp222 = icmp slt i32 %166, %shl, !dbg !536
  br i1 %cmp222, label %for.body224, label %for.end257, !dbg !537

for.body224:                                      ; preds = %for.cond220
  %168 = load i32, i32* %xsize, align 4, !dbg !538
  %169 = load i32, i32* %base_u_size, align 4, !dbg !541
  %cmp225 = icmp sge i32 %168, %169, !dbg !542
  br i1 %cmp225, label %if.then227, label %if.else228, !dbg !543

if.then227:                                       ; preds = %for.body224
  %170 = load i64*, i64** %rp, align 8, !dbg !544
  %171 = load i64*, i64** %xp, align 8, !dbg !545
  %172 = load i32, i32* %xsize, align 4, !dbg !546
  %173 = load i64*, i64** %base_u, align 8, !dbg !547
  %174 = load i32, i32* %base_u_size, align 4, !dbg !548
  %175 = load i64*, i64** %mp, align 8, !dbg !549
  %176 = load i32, i32* %msize, align 4, !dbg !550
  call void @mul_mod(i64* %170, i32* %rsize, i64* %171, i32 %172, i64* %173, i32 %174, i64* %175, i32 %176, %struct.karatsuba_ctx* %karactx), !dbg !551
  br label %if.end229, !dbg !551

if.else228:                                       ; preds = %for.body224
  %177 = load i64*, i64** %rp, align 8, !dbg !552
  %178 = load i64*, i64** %base_u, align 8, !dbg !553
  %179 = load i32, i32* %base_u_size, align 4, !dbg !554
  %180 = load i64*, i64** %xp, align 8, !dbg !555
  %181 = load i32, i32* %xsize, align 4, !dbg !556
  %182 = load i64*, i64** %mp, align 8, !dbg !557
  %183 = load i32, i32* %msize, align 4, !dbg !558
  call void @mul_mod(i64* %177, i32* %rsize, i64* %178, i32 %179, i64* %180, i32 %181, i64* %182, i32 %183, %struct.karatsuba_ctx* %karactx), !dbg !559
  br label %if.end229

if.end229:                                        ; preds = %if.else228, %if.then227
  %184 = load i32, i32* %rsize, align 4, !dbg !560
  %185 = load i32, i32* %esec, align 4, !dbg !560
  %call230 = call i64* @_gcry_mpi_alloc_limb_space(i32 %184, i32 %185), !dbg !560
  %186 = load i32, i32* %i, align 4, !dbg !561
  %idxprom231 = sext i32 %186 to i64, !dbg !562
  %arrayidx232 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 %idxprom231, !dbg !562
  store i64* %call230, i64** %arrayidx232, align 8, !dbg !563
  store i64* %call230, i64** %base_u, align 8, !dbg !564
  %187 = load i32, i32* %rsize, align 4, !dbg !565
  %188 = load i32, i32* %i, align 4, !dbg !566
  %idxprom233 = sext i32 %188 to i64, !dbg !567
  %arrayidx234 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom233, !dbg !567
  store i32 %187, i32* %arrayidx234, align 4, !dbg !568
  store i32 %187, i32* %base_u_size, align 4, !dbg !569
  %189 = load i32, i32* %max_u_size, align 4, !dbg !570
  %190 = load i32, i32* %base_u_size, align 4, !dbg !572
  %cmp235 = icmp slt i32 %189, %190, !dbg !573
  br i1 %cmp235, label %if.then237, label %if.end238, !dbg !574

if.then237:                                       ; preds = %if.end229
  %191 = load i32, i32* %base_u_size, align 4, !dbg !575
  store i32 %191, i32* %max_u_size, align 4, !dbg !576
  br label %if.end238, !dbg !577

if.end238:                                        ; preds = %if.then237, %if.end229
  br label %do.body239, !dbg !578

do.body239:                                       ; preds = %if.end238
  call void @llvm.dbg.declare(metadata i32* %_i240, metadata !579, metadata !46), !dbg !581
  store i32 0, i32* %_i240, align 4, !dbg !582
  br label %for.cond241, !dbg !582

for.cond241:                                      ; preds = %for.inc251, %do.body239
  %192 = load i32, i32* %_i240, align 4, !dbg !585
  %193 = load i32, i32* %rsize, align 4, !dbg !585
  %cmp242 = icmp slt i32 %192, %193, !dbg !585
  br i1 %cmp242, label %for.body244, label %for.end253, !dbg !589

for.body244:                                      ; preds = %for.cond241
  %194 = load i32, i32* %_i240, align 4, !dbg !590
  %idxprom245 = sext i32 %194 to i64, !dbg !590
  %195 = load i64*, i64** %rp, align 8, !dbg !590
  %arrayidx246 = getelementptr inbounds i64, i64* %195, i64 %idxprom245, !dbg !590
  %196 = load i64, i64* %arrayidx246, align 8, !dbg !590
  %197 = load i32, i32* %_i240, align 4, !dbg !590
  %idxprom247 = sext i32 %197 to i64, !dbg !590
  %198 = load i32, i32* %i, align 4, !dbg !590
  %idxprom248 = sext i32 %198 to i64, !dbg !590
  %arrayidx249 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 %idxprom248, !dbg !590
  %199 = load i64*, i64** %arrayidx249, align 8, !dbg !590
  %arrayidx250 = getelementptr inbounds i64, i64* %199, i64 %idxprom247, !dbg !590
  store i64 %196, i64* %arrayidx250, align 8, !dbg !590
  br label %for.inc251, !dbg !590

for.inc251:                                       ; preds = %for.body244
  %200 = load i32, i32* %_i240, align 4, !dbg !592
  %inc252 = add nsw i32 %200, 1, !dbg !592
  store i32 %inc252, i32* %_i240, align 4, !dbg !592
  br label %for.cond241, !dbg !592

for.end253:                                       ; preds = %for.cond241
  br label %do.end254, !dbg !594

do.end254:                                        ; preds = %for.end253
  br label %for.inc255, !dbg !596

for.inc255:                                       ; preds = %do.end254
  %201 = load i32, i32* %i, align 4, !dbg !597
  %inc256 = add nsw i32 %201, 1, !dbg !597
  store i32 %inc256, i32* %i, align 4, !dbg !597
  br label %for.cond220, !dbg !598

for.end257:                                       ; preds = %for.cond220
  %202 = load i32, i32* %max_u_size, align 4, !dbg !599
  %203 = load i32, i32* %esec, align 4, !dbg !599
  %call258 = call i64* @_gcry_mpi_alloc_limb_space(i32 %202, i32 %203), !dbg !599
  store i64* %call258, i64** %base_u, align 8, !dbg !600
  br label %do.body259, !dbg !601

do.body259:                                       ; preds = %for.end257
  call void @llvm.dbg.declare(metadata i32* %_i260, metadata !602, metadata !46), !dbg !604
  store i32 0, i32* %_i260, align 4, !dbg !605
  br label %for.cond261, !dbg !605

for.cond261:                                      ; preds = %for.inc267, %do.body259
  %204 = load i32, i32* %_i260, align 4, !dbg !608
  %205 = load i32, i32* %max_u_size, align 4, !dbg !608
  %cmp262 = icmp slt i32 %204, %205, !dbg !608
  br i1 %cmp262, label %for.body264, label %for.end269, !dbg !612

for.body264:                                      ; preds = %for.cond261
  %206 = load i32, i32* %_i260, align 4, !dbg !613
  %idxprom265 = sext i32 %206 to i64, !dbg !613
  %207 = load i64*, i64** %base_u, align 8, !dbg !613
  %arrayidx266 = getelementptr inbounds i64, i64* %207, i64 %idxprom265, !dbg !613
  store i64 0, i64* %arrayidx266, align 8, !dbg !613
  br label %for.inc267, !dbg !613

for.inc267:                                       ; preds = %for.body264
  %208 = load i32, i32* %_i260, align 4, !dbg !615
  %inc268 = add nsw i32 %208, 1, !dbg !615
  store i32 %inc268, i32* %_i260, align 4, !dbg !615
  br label %for.cond261, !dbg !615

for.end269:                                       ; preds = %for.cond261
  br label %do.end270, !dbg !617

do.end270:                                        ; preds = %for.end269
  %209 = load i32, i32* %esize, align 4, !dbg !619
  %sub271 = sub nsw i32 %209, 1, !dbg !620
  store i32 %sub271, i32* %i, align 4, !dbg !621
  store i32 0, i32* %rsign, align 4, !dbg !622
  %210 = load i32, i32* %W, align 4, !dbg !623
  %cmp272 = icmp eq i32 %210, 1, !dbg !625
  br i1 %cmp272, label %if.then274, label %if.else275, !dbg !626

if.then274:                                       ; preds = %do.end270
  %211 = load i32, i32* %bsize, align 4, !dbg !627
  store i32 %211, i32* %rsize, align 4, !dbg !629
  br label %if.end288, !dbg !630

if.else275:                                       ; preds = %do.end270
  %212 = load i32, i32* %msize, align 4, !dbg !631
  store i32 %212, i32* %rsize, align 4, !dbg !633
  br label %do.body276, !dbg !634

do.body276:                                       ; preds = %if.else275
  call void @llvm.dbg.declare(metadata i32* %_i277, metadata !635, metadata !46), !dbg !637
  store i32 0, i32* %_i277, align 4, !dbg !638
  br label %for.cond278, !dbg !638

for.cond278:                                      ; preds = %for.inc284, %do.body276
  %213 = load i32, i32* %_i277, align 4, !dbg !641
  %214 = load i32, i32* %rsize, align 4, !dbg !641
  %cmp279 = icmp slt i32 %213, %214, !dbg !641
  br i1 %cmp279, label %for.body281, label %for.end286, !dbg !645

for.body281:                                      ; preds = %for.cond278
  %215 = load i32, i32* %_i277, align 4, !dbg !646
  %idxprom282 = sext i32 %215 to i64, !dbg !646
  %216 = load i64*, i64** %rp, align 8, !dbg !646
  %arrayidx283 = getelementptr inbounds i64, i64* %216, i64 %idxprom282, !dbg !646
  store i64 0, i64* %arrayidx283, align 8, !dbg !646
  br label %for.inc284, !dbg !646

for.inc284:                                       ; preds = %for.body281
  %217 = load i32, i32* %_i277, align 4, !dbg !648
  %inc285 = add nsw i32 %217, 1, !dbg !648
  store i32 %inc285, i32* %_i277, align 4, !dbg !648
  br label %for.cond278, !dbg !648

for.end286:                                       ; preds = %for.cond278
  br label %do.end287, !dbg !650

do.end287:                                        ; preds = %for.end286
  br label %if.end288

if.end288:                                        ; preds = %do.end287, %if.then274
  br label %do.body289, !dbg !652

do.body289:                                       ; preds = %if.end288
  call void @llvm.dbg.declare(metadata i32* %_i290, metadata !653, metadata !46), !dbg !655
  store i32 0, i32* %_i290, align 4, !dbg !656
  br label %for.cond291, !dbg !656

for.cond291:                                      ; preds = %for.inc299, %do.body289
  %218 = load i32, i32* %_i290, align 4, !dbg !659
  %219 = load i32, i32* %bsize, align 4, !dbg !659
  %cmp292 = icmp slt i32 %218, %219, !dbg !659
  br i1 %cmp292, label %for.body294, label %for.end301, !dbg !663

for.body294:                                      ; preds = %for.cond291
  %220 = load i32, i32* %_i290, align 4, !dbg !664
  %idxprom295 = sext i32 %220 to i64, !dbg !664
  %221 = load i64*, i64** %bp, align 8, !dbg !664
  %arrayidx296 = getelementptr inbounds i64, i64* %221, i64 %idxprom295, !dbg !664
  %222 = load i64, i64* %arrayidx296, align 8, !dbg !664
  %223 = load i32, i32* %_i290, align 4, !dbg !664
  %idxprom297 = sext i32 %223 to i64, !dbg !664
  %224 = load i64*, i64** %rp, align 8, !dbg !664
  %arrayidx298 = getelementptr inbounds i64, i64* %224, i64 %idxprom297, !dbg !664
  store i64 %222, i64* %arrayidx298, align 8, !dbg !664
  br label %for.inc299, !dbg !664

for.inc299:                                       ; preds = %for.body294
  %225 = load i32, i32* %_i290, align 4, !dbg !666
  %inc300 = add nsw i32 %225, 1, !dbg !666
  store i32 %inc300, i32* %_i290, align 4, !dbg !666
  br label %for.cond291, !dbg !666

for.end301:                                       ; preds = %for.cond291
  br label %do.end302, !dbg !668

do.end302:                                        ; preds = %for.end301
  %226 = load i32, i32* %i, align 4, !dbg !670
  %idxprom303 = sext i32 %226 to i64, !dbg !671
  %227 = load i64*, i64** %ep, align 8, !dbg !671
  %arrayidx304 = getelementptr inbounds i64, i64* %227, i64 %idxprom303, !dbg !671
  %228 = load i64, i64* %arrayidx304, align 8, !dbg !671
  store i64 %228, i64* %e, align 8, !dbg !672
  br label %do.body305, !dbg !673

do.body305:                                       ; preds = %do.end302
  call void @llvm.dbg.declare(metadata i64* %__cbtmp306, metadata !674, metadata !46), !dbg !676
  %229 = load i64, i64* %e, align 8, !dbg !677
  %230 = call i64 asm "bsrq $1,$0", "=r,rm,~{cc},~{dirflag},~{fpsr},~{flags}"(i64 %229) #4, !dbg !677, !srcloc !679
  store i64 %230, i64* %__cbtmp306, align 8, !dbg !677
  %231 = load i64, i64* %__cbtmp306, align 8, !dbg !677
  %xor307 = xor i64 %231, 63, !dbg !677
  %conv308 = trunc i64 %xor307 to i32, !dbg !677
  store i32 %conv308, i32* %c, align 4, !dbg !677
  br label %do.end309, !dbg !677

do.end309:                                        ; preds = %do.body305
  %232 = load i64, i64* %e, align 8, !dbg !680
  %233 = load i32, i32* %c, align 4, !dbg !681
  %sh_prom = zext i32 %233 to i64, !dbg !682
  %shl310 = shl i64 %232, %sh_prom, !dbg !682
  %shl311 = shl i64 %shl310, 1, !dbg !683
  store i64 %shl311, i64* %e, align 8, !dbg !684
  %234 = load i32, i32* %c, align 4, !dbg !685
  %sub312 = sub nsw i32 63, %234, !dbg !686
  store i32 %sub312, i32* %c, align 4, !dbg !687
  store i32 0, i32* %j, align 4, !dbg !688
  br label %for.cond313, !dbg !689

for.cond313:                                      ; preds = %if.end422, %do.end309
  %235 = load i64, i64* %e, align 8, !dbg !690
  %cmp314 = icmp eq i64 %235, 0, !dbg !694
  br i1 %cmp314, label %if.then316, label %if.else325, !dbg !695

if.then316:                                       ; preds = %for.cond313
  %236 = load i32, i32* %c, align 4, !dbg !696
  %237 = load i32, i32* %j, align 4, !dbg !698
  %add317 = add nsw i32 %237, %236, !dbg !698
  store i32 %add317, i32* %j, align 4, !dbg !698
  %238 = load i32, i32* %i, align 4, !dbg !699
  %dec318 = add nsw i32 %238, -1, !dbg !699
  store i32 %dec318, i32* %i, align 4, !dbg !699
  %239 = load i32, i32* %i, align 4, !dbg !700
  %cmp319 = icmp slt i32 %239, 0, !dbg !702
  br i1 %cmp319, label %if.then321, label %if.end322, !dbg !703

if.then321:                                       ; preds = %if.then316
  store i32 0, i32* %c, align 4, !dbg !704
  br label %for.end423, !dbg !706

if.end322:                                        ; preds = %if.then316
  %240 = load i32, i32* %i, align 4, !dbg !707
  %idxprom323 = sext i32 %240 to i64, !dbg !708
  %241 = load i64*, i64** %ep, align 8, !dbg !708
  %arrayidx324 = getelementptr inbounds i64, i64* %241, i64 %idxprom323, !dbg !708
  %242 = load i64, i64* %arrayidx324, align 8, !dbg !708
  store i64 %242, i64* %e, align 8, !dbg !709
  store i32 64, i32* %c, align 4, !dbg !710
  br label %if.end422, !dbg !711

if.else325:                                       ; preds = %for.cond313
  call void @llvm.dbg.declare(metadata i32* %c0, metadata !712, metadata !46), !dbg !714
  call void @llvm.dbg.declare(metadata i64* %e0, metadata !715, metadata !46), !dbg !716
  br label %do.body326, !dbg !717

do.body326:                                       ; preds = %if.else325
  call void @llvm.dbg.declare(metadata i64* %__cbtmp327, metadata !718, metadata !46), !dbg !720
  %243 = load i64, i64* %e, align 8, !dbg !721
  %244 = call i64 asm "bsrq $1,$0", "=r,rm,~{cc},~{dirflag},~{fpsr},~{flags}"(i64 %243) #4, !dbg !721, !srcloc !723
  store i64 %244, i64* %__cbtmp327, align 8, !dbg !721
  %245 = load i64, i64* %__cbtmp327, align 8, !dbg !721
  %xor328 = xor i64 %245, 63, !dbg !721
  %conv329 = trunc i64 %xor328 to i32, !dbg !721
  store i32 %conv329, i32* %c0, align 4, !dbg !721
  br label %do.end330, !dbg !721

do.end330:                                        ; preds = %do.body326
  %246 = load i64, i64* %e, align 8, !dbg !724
  %247 = load i32, i32* %c0, align 4, !dbg !725
  %sh_prom331 = zext i32 %247 to i64, !dbg !726
  %shl332 = shl i64 %246, %sh_prom331, !dbg !726
  store i64 %shl332, i64* %e, align 8, !dbg !727
  %248 = load i32, i32* %c0, align 4, !dbg !728
  %249 = load i32, i32* %c, align 4, !dbg !729
  %sub333 = sub nsw i32 %249, %248, !dbg !729
  store i32 %sub333, i32* %c, align 4, !dbg !729
  %250 = load i32, i32* %c0, align 4, !dbg !730
  %251 = load i32, i32* %j, align 4, !dbg !731
  %add334 = add nsw i32 %251, %250, !dbg !731
  store i32 %add334, i32* %j, align 4, !dbg !731
  %252 = load i32, i32* %c, align 4, !dbg !732
  %253 = load i32, i32* %W, align 4, !dbg !734
  %cmp335 = icmp sge i32 %252, %253, !dbg !735
  br i1 %cmp335, label %if.then337, label %if.else343, !dbg !736

if.then337:                                       ; preds = %do.end330
  %254 = load i64, i64* %e, align 8, !dbg !737
  %255 = load i32, i32* %W, align 4, !dbg !739
  %sub338 = sub nsw i32 64, %255, !dbg !740
  %sh_prom339 = zext i32 %sub338 to i64, !dbg !741
  %shr = lshr i64 %254, %sh_prom339, !dbg !741
  store i64 %shr, i64* %e0, align 8, !dbg !742
  %256 = load i64, i64* %e, align 8, !dbg !743
  %257 = load i32, i32* %W, align 4, !dbg !744
  %sh_prom340 = zext i32 %257 to i64, !dbg !745
  %shl341 = shl i64 %256, %sh_prom340, !dbg !745
  store i64 %shl341, i64* %e, align 8, !dbg !746
  %258 = load i32, i32* %W, align 4, !dbg !747
  %259 = load i32, i32* %c, align 4, !dbg !748
  %sub342 = sub nsw i32 %259, %258, !dbg !748
  store i32 %sub342, i32* %c, align 4, !dbg !748
  br label %if.end368, !dbg !749

if.else343:                                       ; preds = %do.end330
  %260 = load i32, i32* %i, align 4, !dbg !750
  %dec344 = add nsw i32 %260, -1, !dbg !750
  store i32 %dec344, i32* %i, align 4, !dbg !750
  %261 = load i32, i32* %i, align 4, !dbg !752
  %cmp345 = icmp slt i32 %261, 0, !dbg !754
  br i1 %cmp345, label %if.then347, label %if.end351, !dbg !755

if.then347:                                       ; preds = %if.else343
  %262 = load i64, i64* %e, align 8, !dbg !756
  %263 = load i32, i32* %c, align 4, !dbg !758
  %sub348 = sub nsw i32 64, %263, !dbg !759
  %sh_prom349 = zext i32 %sub348 to i64, !dbg !760
  %shr350 = lshr i64 %262, %sh_prom349, !dbg !760
  store i64 %shr350, i64* %e, align 8, !dbg !761
  br label %for.end423, !dbg !762

if.end351:                                        ; preds = %if.else343
  %264 = load i32, i32* %c, align 4, !dbg !763
  store i32 %264, i32* %c0, align 4, !dbg !764
  %265 = load i64, i64* %e, align 8, !dbg !765
  %266 = load i32, i32* %W, align 4, !dbg !766
  %sub352 = sub nsw i32 64, %266, !dbg !767
  %sh_prom353 = zext i32 %sub352 to i64, !dbg !768
  %shr354 = lshr i64 %265, %sh_prom353, !dbg !768
  %267 = load i32, i32* %i, align 4, !dbg !769
  %idxprom355 = sext i32 %267 to i64, !dbg !770
  %268 = load i64*, i64** %ep, align 8, !dbg !770
  %arrayidx356 = getelementptr inbounds i64, i64* %268, i64 %idxprom355, !dbg !770
  %269 = load i64, i64* %arrayidx356, align 8, !dbg !770
  %270 = load i32, i32* %W, align 4, !dbg !771
  %sub357 = sub nsw i32 64, %270, !dbg !772
  %271 = load i32, i32* %c0, align 4, !dbg !773
  %add358 = add nsw i32 %sub357, %271, !dbg !774
  %sh_prom359 = zext i32 %add358 to i64, !dbg !775
  %shr360 = lshr i64 %269, %sh_prom359, !dbg !775
  %or = or i64 %shr354, %shr360, !dbg !776
  store i64 %or, i64* %e0, align 8, !dbg !777
  %272 = load i32, i32* %i, align 4, !dbg !778
  %idxprom361 = sext i32 %272 to i64, !dbg !779
  %273 = load i64*, i64** %ep, align 8, !dbg !779
  %arrayidx362 = getelementptr inbounds i64, i64* %273, i64 %idxprom361, !dbg !779
  %274 = load i64, i64* %arrayidx362, align 8, !dbg !779
  %275 = load i32, i32* %W, align 4, !dbg !780
  %276 = load i32, i32* %c0, align 4, !dbg !781
  %sub363 = sub nsw i32 %275, %276, !dbg !782
  %sh_prom364 = zext i32 %sub363 to i64, !dbg !783
  %shl365 = shl i64 %274, %sh_prom364, !dbg !783
  store i64 %shl365, i64* %e, align 8, !dbg !784
  %277 = load i32, i32* %W, align 4, !dbg !785
  %sub366 = sub nsw i32 64, %277, !dbg !786
  %278 = load i32, i32* %c0, align 4, !dbg !787
  %add367 = add nsw i32 %sub366, %278, !dbg !788
  store i32 %add367, i32* %c, align 4, !dbg !789
  br label %if.end368

if.end368:                                        ; preds = %if.end351, %if.then337
  br label %do.body369, !dbg !790

do.body369:                                       ; preds = %if.end368
  call void @llvm.dbg.declare(metadata i64* %__cbtmp370, metadata !791, metadata !46), !dbg !793
  %279 = load i64, i64* %e0, align 8, !dbg !794
  %280 = call i64 asm "bsfq $1,$0", "=r,rm,~{cc},~{dirflag},~{fpsr},~{flags}"(i64 %279) #4, !dbg !794, !srcloc !796
  store i64 %280, i64* %__cbtmp370, align 8, !dbg !794
  %281 = load i64, i64* %__cbtmp370, align 8, !dbg !794
  %conv371 = trunc i64 %281 to i32, !dbg !794
  store i32 %conv371, i32* %c0, align 4, !dbg !794
  br label %do.end372, !dbg !794

do.end372:                                        ; preds = %do.body369
  %282 = load i64, i64* %e0, align 8, !dbg !797
  %283 = load i32, i32* %c0, align 4, !dbg !798
  %sh_prom373 = zext i32 %283 to i64, !dbg !799
  %shr374 = lshr i64 %282, %sh_prom373, !dbg !799
  %shr375 = lshr i64 %shr374, 1, !dbg !800
  store i64 %shr375, i64* %e0, align 8, !dbg !801
  %284 = load i32, i32* %W, align 4, !dbg !802
  %285 = load i32, i32* %c0, align 4, !dbg !804
  %sub376 = sub nsw i32 %284, %285, !dbg !805
  %286 = load i32, i32* %j, align 4, !dbg !806
  %add377 = add nsw i32 %286, %sub376, !dbg !806
  store i32 %add377, i32* %j, align 4, !dbg !806
  br label %for.cond378, !dbg !807

for.cond378:                                      ; preds = %for.inc381, %do.end372
  %287 = load i32, i32* %j, align 4, !dbg !808
  %tobool379 = icmp ne i32 %287, 0, !dbg !812
  br i1 %tobool379, label %for.body380, label %for.end383, !dbg !812

for.body380:                                      ; preds = %for.cond378
  %288 = load i64*, i64** %xp, align 8, !dbg !813
  %289 = load i64*, i64** %rp, align 8, !dbg !815
  %290 = load i32, i32* %rsize, align 4, !dbg !816
  %291 = load i64*, i64** %rp, align 8, !dbg !817
  %292 = load i32, i32* %rsize, align 4, !dbg !818
  %293 = load i64*, i64** %mp, align 8, !dbg !819
  %294 = load i32, i32* %msize, align 4, !dbg !820
  call void @mul_mod(i64* %288, i32* %xsize, i64* %289, i32 %290, i64* %291, i32 %292, i64* %293, i32 %294, %struct.karatsuba_ctx* %karactx), !dbg !821
  %295 = load i64*, i64** %rp, align 8, !dbg !822
  store i64* %295, i64** %tp, align 8, !dbg !823
  %296 = load i64*, i64** %xp, align 8, !dbg !824
  store i64* %296, i64** %rp, align 8, !dbg !825
  %297 = load i64*, i64** %tp, align 8, !dbg !826
  store i64* %297, i64** %xp, align 8, !dbg !827
  %298 = load i32, i32* %xsize, align 4, !dbg !828
  store i32 %298, i32* %rsize, align 4, !dbg !829
  br label %for.inc381, !dbg !830

for.inc381:                                       ; preds = %for.body380
  %299 = load i32, i32* %j, align 4, !dbg !831
  %dec382 = add nsw i32 %299, -1, !dbg !831
  store i32 %dec382, i32* %j, align 4, !dbg !831
  br label %for.cond378, !dbg !832

for.end383:                                       ; preds = %for.cond378
  store i32 0, i32* %base_u_size, align 4, !dbg !833
  store i32 0, i32* %k, align 4, !dbg !834
  br label %for.cond384, !dbg !836

for.cond384:                                      ; preds = %for.inc419, %for.end383
  %300 = load i32, i32* %k, align 4, !dbg !837
  %301 = load i32, i32* %W, align 4, !dbg !841
  %sub385 = sub nsw i32 %301, 1, !dbg !842
  %shl386 = shl i32 1, %sub385, !dbg !843
  %cmp387 = icmp slt i32 %300, %shl386, !dbg !844
  br i1 %cmp387, label %for.body389, label %for.end421, !dbg !845

for.body389:                                      ; preds = %for.cond384
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi* %w, metadata !846, metadata !46), !dbg !848
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi* %u, metadata !849, metadata !46), !dbg !850
  %302 = load i32, i32* %k, align 4, !dbg !851
  %idxprom390 = sext i32 %302 to i64, !dbg !852
  %arrayidx391 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom390, !dbg !852
  %303 = load i32, i32* %arrayidx391, align 4, !dbg !852
  %nlimbs392 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w, i32 0, i32 1, !dbg !853
  store i32 %303, i32* %nlimbs392, align 4, !dbg !854
  %alloced393 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w, i32 0, i32 0, !dbg !855
  store i32 %303, i32* %alloced393, align 4, !dbg !856
  %304 = load i32, i32* %k, align 4, !dbg !857
  %idxprom394 = sext i32 %304 to i64, !dbg !858
  %arrayidx395 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom394, !dbg !858
  %305 = load i32, i32* %arrayidx395, align 4, !dbg !858
  %nlimbs396 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u, i32 0, i32 1, !dbg !859
  store i32 %305, i32* %nlimbs396, align 4, !dbg !860
  %alloced397 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u, i32 0, i32 0, !dbg !861
  store i32 %305, i32* %alloced397, align 4, !dbg !862
  %sign398 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u, i32 0, i32 2, !dbg !863
  store i32 0, i32* %sign398, align 4, !dbg !864
  %sign399 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w, i32 0, i32 2, !dbg !865
  store i32 0, i32* %sign399, align 4, !dbg !866
  %flags400 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u, i32 0, i32 3, !dbg !867
  store i32 0, i32* %flags400, align 4, !dbg !868
  %flags401 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w, i32 0, i32 3, !dbg !869
  store i32 0, i32* %flags401, align 4, !dbg !870
  %306 = load i64*, i64** %base_u, align 8, !dbg !871
  %d402 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w, i32 0, i32 4, !dbg !872
  store i64* %306, i64** %d402, align 8, !dbg !873
  %307 = load i32, i32* %k, align 4, !dbg !874
  %idxprom403 = sext i32 %307 to i64, !dbg !875
  %arrayidx404 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 %idxprom403, !dbg !875
  %308 = load i64*, i64** %arrayidx404, align 8, !dbg !875
  %d405 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u, i32 0, i32 4, !dbg !876
  store i64* %308, i64** %d405, align 8, !dbg !877
  %309 = load i32, i32* %k, align 4, !dbg !878
  %conv406 = sext i32 %309 to i64, !dbg !878
  %310 = load i64, i64* %e0, align 8, !dbg !878
  %cmp407 = icmp eq i64 %conv406, %310, !dbg !878
  %conv408 = zext i1 %cmp407 to i32, !dbg !878
  %conv409 = sext i32 %conv408 to i64, !dbg !878
  %call410 = call %struct.gcry_mpi* @_gcry_mpi_set_cond(%struct.gcry_mpi* %w, %struct.gcry_mpi* %u, i64 %conv409), !dbg !878
  %311 = load i32, i32* %k, align 4, !dbg !879
  %idxprom411 = sext i32 %311 to i64, !dbg !880
  %arrayidx412 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom411, !dbg !880
  %312 = load i32, i32* %arrayidx412, align 4, !dbg !880
  %313 = load i32, i32* %k, align 4, !dbg !881
  %conv413 = sext i32 %313 to i64, !dbg !881
  %314 = load i64, i64* %e0, align 8, !dbg !882
  %cmp414 = icmp eq i64 %conv413, %314, !dbg !883
  %conv415 = zext i1 %cmp414 to i32, !dbg !883
  %sub416 = sub nsw i32 0, %conv415, !dbg !884
  %and417 = and i32 %312, %sub416, !dbg !885
  %315 = load i32, i32* %base_u_size, align 4, !dbg !886
  %or418 = or i32 %315, %and417, !dbg !886
  store i32 %or418, i32* %base_u_size, align 4, !dbg !886
  br label %for.inc419, !dbg !887

for.inc419:                                       ; preds = %for.body389
  %316 = load i32, i32* %k, align 4, !dbg !888
  %inc420 = add nsw i32 %316, 1, !dbg !888
  store i32 %inc420, i32* %k, align 4, !dbg !888
  br label %for.cond384, !dbg !889

for.end421:                                       ; preds = %for.cond384
  %317 = load i64*, i64** %xp, align 8, !dbg !890
  %318 = load i64*, i64** %rp, align 8, !dbg !891
  %319 = load i32, i32* %rsize, align 4, !dbg !892
  %320 = load i64*, i64** %base_u, align 8, !dbg !893
  %321 = load i32, i32* %base_u_size, align 4, !dbg !894
  %322 = load i64*, i64** %mp, align 8, !dbg !895
  %323 = load i32, i32* %msize, align 4, !dbg !896
  call void @mul_mod(i64* %317, i32* %xsize, i64* %318, i32 %319, i64* %320, i32 %321, i64* %322, i32 %323, %struct.karatsuba_ctx* %karactx), !dbg !897
  %324 = load i64*, i64** %rp, align 8, !dbg !898
  store i64* %324, i64** %tp, align 8, !dbg !899
  %325 = load i64*, i64** %xp, align 8, !dbg !900
  store i64* %325, i64** %rp, align 8, !dbg !901
  %326 = load i64*, i64** %tp, align 8, !dbg !902
  store i64* %326, i64** %xp, align 8, !dbg !903
  %327 = load i32, i32* %xsize, align 4, !dbg !904
  store i32 %327, i32* %rsize, align 4, !dbg !905
  %328 = load i32, i32* %c0, align 4, !dbg !906
  store i32 %328, i32* %j, align 4, !dbg !907
  br label %if.end422

if.end422:                                        ; preds = %for.end421, %if.end322
  br label %for.cond313, !dbg !908

for.end423:                                       ; preds = %if.then347, %if.then321
  %329 = load i32, i32* %c, align 4, !dbg !909
  %cmp424 = icmp ne i32 %329, 0, !dbg !911
  br i1 %cmp424, label %if.then426, label %if.end435, !dbg !912

if.then426:                                       ; preds = %for.end423
  %330 = load i32, i32* %c, align 4, !dbg !913
  %331 = load i32, i32* %j, align 4, !dbg !915
  %add427 = add nsw i32 %331, %330, !dbg !915
  store i32 %add427, i32* %j, align 4, !dbg !915
  br label %do.body428, !dbg !916

do.body428:                                       ; preds = %if.then426
  call void @llvm.dbg.declare(metadata i64* %__cbtmp429, metadata !917, metadata !46), !dbg !919
  %332 = load i64, i64* %e, align 8, !dbg !920
  %333 = call i64 asm "bsfq $1,$0", "=r,rm,~{cc},~{dirflag},~{fpsr},~{flags}"(i64 %332) #4, !dbg !920, !srcloc !922
  store i64 %333, i64* %__cbtmp429, align 8, !dbg !920
  %334 = load i64, i64* %__cbtmp429, align 8, !dbg !920
  %conv430 = trunc i64 %334 to i32, !dbg !920
  store i32 %conv430, i32* %c, align 4, !dbg !920
  br label %do.end431, !dbg !920

do.end431:                                        ; preds = %do.body428
  %335 = load i64, i64* %e, align 8, !dbg !923
  %336 = load i32, i32* %c, align 4, !dbg !924
  %sh_prom432 = zext i32 %336 to i64, !dbg !925
  %shr433 = lshr i64 %335, %sh_prom432, !dbg !925
  store i64 %shr433, i64* %e, align 8, !dbg !926
  %337 = load i32, i32* %c, align 4, !dbg !927
  %338 = load i32, i32* %j, align 4, !dbg !928
  %sub434 = sub nsw i32 %338, %337, !dbg !928
  store i32 %sub434, i32* %j, align 4, !dbg !928
  br label %if.end435, !dbg !929

if.end435:                                        ; preds = %do.end431, %for.end423
  br label %while.cond436, !dbg !930

while.cond436:                                    ; preds = %while.body439, %if.end435
  %339 = load i32, i32* %j, align 4, !dbg !931
  %dec437 = add nsw i32 %339, -1, !dbg !931
  store i32 %dec437, i32* %j, align 4, !dbg !931
  %tobool438 = icmp ne i32 %339, 0, !dbg !930
  br i1 %tobool438, label %while.body439, label %while.end440, !dbg !930

while.body439:                                    ; preds = %while.cond436
  %340 = load i64*, i64** %xp, align 8, !dbg !933
  %341 = load i64*, i64** %rp, align 8, !dbg !935
  %342 = load i32, i32* %rsize, align 4, !dbg !936
  %343 = load i64*, i64** %rp, align 8, !dbg !937
  %344 = load i32, i32* %rsize, align 4, !dbg !938
  %345 = load i64*, i64** %mp, align 8, !dbg !939
  %346 = load i32, i32* %msize, align 4, !dbg !940
  call void @mul_mod(i64* %340, i32* %xsize, i64* %341, i32 %342, i64* %343, i32 %344, i64* %345, i32 %346, %struct.karatsuba_ctx* %karactx), !dbg !941
  %347 = load i64*, i64** %rp, align 8, !dbg !942
  store i64* %347, i64** %tp, align 8, !dbg !943
  %348 = load i64*, i64** %xp, align 8, !dbg !944
  store i64* %348, i64** %rp, align 8, !dbg !945
  %349 = load i64*, i64** %tp, align 8, !dbg !946
  store i64* %349, i64** %xp, align 8, !dbg !947
  %350 = load i32, i32* %xsize, align 4, !dbg !948
  store i32 %350, i32* %rsize, align 4, !dbg !949
  br label %while.cond436, !dbg !930

while.end440:                                     ; preds = %while.cond436
  %351 = load i64, i64* %e, align 8, !dbg !950
  %cmp441 = icmp ne i64 %351, 0, !dbg !952
  br i1 %cmp441, label %if.then443, label %if.end492, !dbg !953

if.then443:                                       ; preds = %while.end440
  store i32 0, i32* %base_u_size, align 4, !dbg !954
  store i32 0, i32* %k, align 4, !dbg !956
  br label %for.cond444, !dbg !958

for.cond444:                                      ; preds = %for.inc483, %if.then443
  %352 = load i32, i32* %k, align 4, !dbg !959
  %353 = load i32, i32* %W, align 4, !dbg !963
  %sub445 = sub nsw i32 %353, 1, !dbg !964
  %shl446 = shl i32 1, %sub445, !dbg !965
  %cmp447 = icmp slt i32 %352, %shl446, !dbg !966
  br i1 %cmp447, label %for.body449, label %for.end485, !dbg !967

for.body449:                                      ; preds = %for.cond444
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi* %w450, metadata !968, metadata !46), !dbg !970
  call void @llvm.dbg.declare(metadata %struct.gcry_mpi* %u451, metadata !971, metadata !46), !dbg !972
  %354 = load i32, i32* %k, align 4, !dbg !973
  %idxprom452 = sext i32 %354 to i64, !dbg !974
  %arrayidx453 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom452, !dbg !974
  %355 = load i32, i32* %arrayidx453, align 4, !dbg !974
  %nlimbs454 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w450, i32 0, i32 1, !dbg !975
  store i32 %355, i32* %nlimbs454, align 4, !dbg !976
  %alloced455 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w450, i32 0, i32 0, !dbg !977
  store i32 %355, i32* %alloced455, align 4, !dbg !978
  %356 = load i32, i32* %k, align 4, !dbg !979
  %idxprom456 = sext i32 %356 to i64, !dbg !980
  %arrayidx457 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom456, !dbg !980
  %357 = load i32, i32* %arrayidx457, align 4, !dbg !980
  %nlimbs458 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u451, i32 0, i32 1, !dbg !981
  store i32 %357, i32* %nlimbs458, align 4, !dbg !982
  %alloced459 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u451, i32 0, i32 0, !dbg !983
  store i32 %357, i32* %alloced459, align 4, !dbg !984
  %sign460 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u451, i32 0, i32 2, !dbg !985
  store i32 0, i32* %sign460, align 4, !dbg !986
  %sign461 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w450, i32 0, i32 2, !dbg !987
  store i32 0, i32* %sign461, align 4, !dbg !988
  %flags462 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u451, i32 0, i32 3, !dbg !989
  store i32 0, i32* %flags462, align 4, !dbg !990
  %flags463 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w450, i32 0, i32 3, !dbg !991
  store i32 0, i32* %flags463, align 4, !dbg !992
  %358 = load i64*, i64** %base_u, align 8, !dbg !993
  %d464 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %w450, i32 0, i32 4, !dbg !994
  store i64* %358, i64** %d464, align 8, !dbg !995
  %359 = load i32, i32* %k, align 4, !dbg !996
  %idxprom465 = sext i32 %359 to i64, !dbg !997
  %arrayidx466 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 %idxprom465, !dbg !997
  %360 = load i64*, i64** %arrayidx466, align 8, !dbg !997
  %d467 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %u451, i32 0, i32 4, !dbg !998
  store i64* %360, i64** %d467, align 8, !dbg !999
  %361 = load i32, i32* %k, align 4, !dbg !1000
  %conv468 = sext i32 %361 to i64, !dbg !1000
  %362 = load i64, i64* %e, align 8, !dbg !1000
  %shr469 = lshr i64 %362, 1, !dbg !1000
  %cmp470 = icmp eq i64 %conv468, %shr469, !dbg !1000
  %conv471 = zext i1 %cmp470 to i32, !dbg !1000
  %conv472 = sext i32 %conv471 to i64, !dbg !1000
  %call473 = call %struct.gcry_mpi* @_gcry_mpi_set_cond(%struct.gcry_mpi* %w450, %struct.gcry_mpi* %u451, i64 %conv472), !dbg !1000
  %363 = load i32, i32* %k, align 4, !dbg !1001
  %idxprom474 = sext i32 %363 to i64, !dbg !1002
  %arrayidx475 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom474, !dbg !1002
  %364 = load i32, i32* %arrayidx475, align 4, !dbg !1002
  %365 = load i32, i32* %k, align 4, !dbg !1003
  %conv476 = sext i32 %365 to i64, !dbg !1003
  %366 = load i64, i64* %e, align 8, !dbg !1004
  %shr477 = lshr i64 %366, 1, !dbg !1005
  %cmp478 = icmp eq i64 %conv476, %shr477, !dbg !1006
  %conv479 = zext i1 %cmp478 to i32, !dbg !1006
  %sub480 = sub nsw i32 0, %conv479, !dbg !1007
  %and481 = and i32 %364, %sub480, !dbg !1008
  %367 = load i32, i32* %base_u_size, align 4, !dbg !1009
  %or482 = or i32 %367, %and481, !dbg !1009
  store i32 %or482, i32* %base_u_size, align 4, !dbg !1009
  br label %for.inc483, !dbg !1010

for.inc483:                                       ; preds = %for.body449
  %368 = load i32, i32* %k, align 4, !dbg !1011
  %inc484 = add nsw i32 %368, 1, !dbg !1011
  store i32 %inc484, i32* %k, align 4, !dbg !1011
  br label %for.cond444, !dbg !1012

for.end485:                                       ; preds = %for.cond444
  %369 = load i64*, i64** %xp, align 8, !dbg !1013
  %370 = load i64*, i64** %rp, align 8, !dbg !1014
  %371 = load i32, i32* %rsize, align 4, !dbg !1015
  %372 = load i64*, i64** %base_u, align 8, !dbg !1016
  %373 = load i32, i32* %base_u_size, align 4, !dbg !1017
  %374 = load i64*, i64** %mp, align 8, !dbg !1018
  %375 = load i32, i32* %msize, align 4, !dbg !1019
  call void @mul_mod(i64* %369, i32* %xsize, i64* %370, i32 %371, i64* %372, i32 %373, i64* %374, i32 %375, %struct.karatsuba_ctx* %karactx), !dbg !1020
  %376 = load i64*, i64** %rp, align 8, !dbg !1021
  store i64* %376, i64** %tp, align 8, !dbg !1022
  %377 = load i64*, i64** %xp, align 8, !dbg !1023
  store i64* %377, i64** %rp, align 8, !dbg !1024
  %378 = load i64*, i64** %tp, align 8, !dbg !1025
  store i64* %378, i64** %xp, align 8, !dbg !1026
  %379 = load i32, i32* %xsize, align 4, !dbg !1027
  store i32 %379, i32* %rsize, align 4, !dbg !1028
  br label %for.cond486, !dbg !1029

for.cond486:                                      ; preds = %for.inc489, %for.end485
  %380 = load i32, i32* %c, align 4, !dbg !1030
  %tobool487 = icmp ne i32 %380, 0, !dbg !1035
  br i1 %tobool487, label %for.body488, label %for.end491, !dbg !1035

for.body488:                                      ; preds = %for.cond486
  %381 = load i64*, i64** %xp, align 8, !dbg !1036
  %382 = load i64*, i64** %rp, align 8, !dbg !1038
  %383 = load i32, i32* %rsize, align 4, !dbg !1039
  %384 = load i64*, i64** %rp, align 8, !dbg !1040
  %385 = load i32, i32* %rsize, align 4, !dbg !1041
  %386 = load i64*, i64** %mp, align 8, !dbg !1042
  %387 = load i32, i32* %msize, align 4, !dbg !1043
  call void @mul_mod(i64* %381, i32* %xsize, i64* %382, i32 %383, i64* %384, i32 %385, i64* %386, i32 %387, %struct.karatsuba_ctx* %karactx), !dbg !1044
  %388 = load i64*, i64** %rp, align 8, !dbg !1045
  store i64* %388, i64** %tp, align 8, !dbg !1046
  %389 = load i64*, i64** %xp, align 8, !dbg !1047
  store i64* %389, i64** %rp, align 8, !dbg !1048
  %390 = load i64*, i64** %tp, align 8, !dbg !1049
  store i64* %390, i64** %xp, align 8, !dbg !1050
  %391 = load i32, i32* %xsize, align 4, !dbg !1051
  store i32 %391, i32* %rsize, align 4, !dbg !1052
  br label %for.inc489, !dbg !1053

for.inc489:                                       ; preds = %for.body488
  %392 = load i32, i32* %c, align 4, !dbg !1054
  %dec490 = add nsw i32 %392, -1, !dbg !1054
  store i32 %dec490, i32* %c, align 4, !dbg !1054
  br label %for.cond486, !dbg !1055

for.end491:                                       ; preds = %for.cond486
  br label %if.end492, !dbg !1056

if.end492:                                        ; preds = %for.end491, %while.end440
  %393 = load i32, i32* %mod_shift_cnt, align 4, !dbg !1057
  %tobool493 = icmp ne i32 %393, 0, !dbg !1057
  br i1 %tobool493, label %if.then494, label %if.else504, !dbg !1059

if.then494:                                       ; preds = %if.end492
  %394 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1060
  %d495 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %394, i32 0, i32 4, !dbg !1062
  %395 = load i64*, i64** %d495, align 8, !dbg !1062
  %396 = load i64*, i64** %rp, align 8, !dbg !1063
  %397 = load i32, i32* %rsize, align 4, !dbg !1064
  %398 = load i32, i32* %mod_shift_cnt, align 4, !dbg !1065
  %call496 = call i64 @_gcry_mpih_lshift(i64* %395, i64* %396, i32 %397, i32 %398), !dbg !1066
  store i64 %call496, i64* %carry_limb, align 8, !dbg !1067
  %399 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1068
  %d497 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %399, i32 0, i32 4, !dbg !1069
  %400 = load i64*, i64** %d497, align 8, !dbg !1069
  store i64* %400, i64** %rp, align 8, !dbg !1070
  %401 = load i64, i64* %carry_limb, align 8, !dbg !1071
  %tobool498 = icmp ne i64 %401, 0, !dbg !1071
  br i1 %tobool498, label %if.then499, label %if.end503, !dbg !1073

if.then499:                                       ; preds = %if.then494
  %402 = load i64, i64* %carry_limb, align 8, !dbg !1074
  %403 = load i32, i32* %rsize, align 4, !dbg !1076
  %idxprom500 = sext i32 %403 to i64, !dbg !1077
  %404 = load i64*, i64** %rp, align 8, !dbg !1077
  %arrayidx501 = getelementptr inbounds i64, i64* %404, i64 %idxprom500, !dbg !1077
  store i64 %402, i64* %arrayidx501, align 8, !dbg !1078
  %405 = load i32, i32* %rsize, align 4, !dbg !1079
  %inc502 = add nsw i32 %405, 1, !dbg !1079
  store i32 %inc502, i32* %rsize, align 4, !dbg !1079
  br label %if.end503, !dbg !1080

if.end503:                                        ; preds = %if.then499, %if.then494
  br label %if.end526, !dbg !1081

if.else504:                                       ; preds = %if.end492
  %406 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1082
  %d505 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %406, i32 0, i32 4, !dbg !1084
  %407 = load i64*, i64** %d505, align 8, !dbg !1084
  %408 = load i64*, i64** %rp, align 8, !dbg !1085
  %cmp506 = icmp ne i64* %407, %408, !dbg !1086
  br i1 %cmp506, label %if.then508, label %if.end525, !dbg !1087

if.then508:                                       ; preds = %if.else504
  br label %do.body509, !dbg !1088

do.body509:                                       ; preds = %if.then508
  call void @llvm.dbg.declare(metadata i32* %_i510, metadata !1090, metadata !46), !dbg !1092
  store i32 0, i32* %_i510, align 4, !dbg !1093
  br label %for.cond511, !dbg !1093

for.cond511:                                      ; preds = %for.inc520, %do.body509
  %409 = load i32, i32* %_i510, align 4, !dbg !1096
  %410 = load i32, i32* %rsize, align 4, !dbg !1096
  %cmp512 = icmp slt i32 %409, %410, !dbg !1096
  br i1 %cmp512, label %for.body514, label %for.end522, !dbg !1100

for.body514:                                      ; preds = %for.cond511
  %411 = load i32, i32* %_i510, align 4, !dbg !1101
  %idxprom515 = sext i32 %411 to i64, !dbg !1101
  %412 = load i64*, i64** %rp, align 8, !dbg !1101
  %arrayidx516 = getelementptr inbounds i64, i64* %412, i64 %idxprom515, !dbg !1101
  %413 = load i64, i64* %arrayidx516, align 8, !dbg !1101
  %414 = load i32, i32* %_i510, align 4, !dbg !1101
  %idxprom517 = sext i32 %414 to i64, !dbg !1101
  %415 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1101
  %d518 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %415, i32 0, i32 4, !dbg !1101
  %416 = load i64*, i64** %d518, align 8, !dbg !1101
  %arrayidx519 = getelementptr inbounds i64, i64* %416, i64 %idxprom517, !dbg !1101
  store i64 %413, i64* %arrayidx519, align 8, !dbg !1101
  br label %for.inc520, !dbg !1101

for.inc520:                                       ; preds = %for.body514
  %417 = load i32, i32* %_i510, align 4, !dbg !1103
  %inc521 = add nsw i32 %417, 1, !dbg !1103
  store i32 %inc521, i32* %_i510, align 4, !dbg !1103
  br label %for.cond511, !dbg !1103

for.end522:                                       ; preds = %for.cond511
  br label %do.end523, !dbg !1105

do.end523:                                        ; preds = %for.end522
  %418 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1107
  %d524 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %418, i32 0, i32 4, !dbg !1108
  %419 = load i64*, i64** %d524, align 8, !dbg !1108
  store i64* %419, i64** %rp, align 8, !dbg !1109
  br label %if.end525, !dbg !1110

if.end525:                                        ; preds = %do.end523, %if.else504
  br label %if.end526

if.end526:                                        ; preds = %if.end525, %if.end503
  %420 = load i32, i32* %rsize, align 4, !dbg !1111
  %421 = load i32, i32* %msize, align 4, !dbg !1113
  %cmp527 = icmp sge i32 %420, %421, !dbg !1114
  br i1 %cmp527, label %if.then529, label %if.end533, !dbg !1115

if.then529:                                       ; preds = %if.end526
  %422 = load i64*, i64** %rp, align 8, !dbg !1116
  %423 = load i32, i32* %msize, align 4, !dbg !1118
  %idx.ext530 = sext i32 %423 to i64, !dbg !1119
  %add.ptr531 = getelementptr inbounds i64, i64* %422, i64 %idx.ext530, !dbg !1119
  %424 = load i64*, i64** %rp, align 8, !dbg !1120
  %425 = load i32, i32* %rsize, align 4, !dbg !1121
  %426 = load i64*, i64** %mp, align 8, !dbg !1122
  %427 = load i32, i32* %msize, align 4, !dbg !1123
  %call532 = call i64 @_gcry_mpih_divrem(i64* %add.ptr531, i32 0, i64* %424, i32 %425, i64* %426, i32 %427), !dbg !1124
  %428 = load i32, i32* %msize, align 4, !dbg !1125
  store i32 %428, i32* %rsize, align 4, !dbg !1126
  br label %if.end533, !dbg !1127

if.end533:                                        ; preds = %if.then529, %if.end526
  %429 = load i32, i32* %mod_shift_cnt, align 4, !dbg !1128
  %tobool534 = icmp ne i32 %429, 0, !dbg !1128
  br i1 %tobool534, label %if.then535, label %if.end537, !dbg !1130

if.then535:                                       ; preds = %if.end533
  %430 = load i64*, i64** %rp, align 8, !dbg !1131
  %431 = load i64*, i64** %rp, align 8, !dbg !1132
  %432 = load i32, i32* %rsize, align 4, !dbg !1133
  %433 = load i32, i32* %mod_shift_cnt, align 4, !dbg !1134
  %call536 = call i64 @_gcry_mpih_rshift(i64* %430, i64* %431, i32 %432, i32 %433), !dbg !1135
  br label %if.end537, !dbg !1135

if.end537:                                        ; preds = %if.then535, %if.end533
  br label %do.body538, !dbg !1136

do.body538:                                       ; preds = %if.end537
  br label %while.cond539, !dbg !1137

while.cond539:                                    ; preds = %if.end548, %do.body538
  %434 = load i32, i32* %rsize, align 4, !dbg !1140
  %cmp540 = icmp sgt i32 %434, 0, !dbg !1140
  br i1 %cmp540, label %while.body542, label %while.end550, !dbg !1140

while.body542:                                    ; preds = %while.cond539
  %435 = load i32, i32* %rsize, align 4, !dbg !1143
  %sub543 = sub nsw i32 %435, 1, !dbg !1143
  %idxprom544 = sext i32 %sub543 to i64, !dbg !1143
  %436 = load i64*, i64** %rp, align 8, !dbg !1143
  %arrayidx545 = getelementptr inbounds i64, i64* %436, i64 %idxprom544, !dbg !1143
  %437 = load i64, i64* %arrayidx545, align 8, !dbg !1143
  %tobool546 = icmp ne i64 %437, 0, !dbg !1143
  br i1 %tobool546, label %if.then547, label %if.end548, !dbg !1147

if.then547:                                       ; preds = %while.body542
  br label %while.end550, !dbg !1148

if.end548:                                        ; preds = %while.body542
  %438 = load i32, i32* %rsize, align 4, !dbg !1150
  %dec549 = add nsw i32 %438, -1, !dbg !1150
  store i32 %dec549, i32* %rsize, align 4, !dbg !1150
  br label %while.cond539, !dbg !1152

while.end550:                                     ; preds = %if.then547, %while.cond539
  br label %do.end551, !dbg !1153

do.end551:                                        ; preds = %while.end550
  call void @_gcry_mpih_release_karatsuba_ctx(%struct.karatsuba_ctx* %karactx), !dbg !1156
  store i32 0, i32* %i, align 4, !dbg !1157
  br label %for.cond552, !dbg !1159

for.cond552:                                      ; preds = %for.inc567, %do.end551
  %439 = load i32, i32* %i, align 4, !dbg !1160
  %440 = load i32, i32* %W, align 4, !dbg !1164
  %sub553 = sub nsw i32 %440, 1, !dbg !1165
  %shl554 = shl i32 1, %sub553, !dbg !1166
  %cmp555 = icmp slt i32 %439, %shl554, !dbg !1167
  br i1 %cmp555, label %for.body557, label %for.end569, !dbg !1168

for.body557:                                      ; preds = %for.cond552
  %441 = load i32, i32* %i, align 4, !dbg !1169
  %idxprom558 = sext i32 %441 to i64, !dbg !1170
  %arrayidx559 = getelementptr inbounds [16 x i64*], [16 x i64*]* %precomp, i32 0, i64 %idxprom558, !dbg !1170
  %442 = load i64*, i64** %arrayidx559, align 8, !dbg !1170
  %443 = load i32, i32* %esec, align 4, !dbg !1171
  %tobool560 = icmp ne i32 %443, 0, !dbg !1171
  br i1 %tobool560, label %cond.true561, label %cond.false564, !dbg !1171

cond.true561:                                     ; preds = %for.body557
  %444 = load i32, i32* %i, align 4, !dbg !1172
  %idxprom562 = sext i32 %444 to i64, !dbg !1173
  %arrayidx563 = getelementptr inbounds [16 x i32], [16 x i32]* %precomp_size, i32 0, i64 %idxprom562, !dbg !1173
  %445 = load i32, i32* %arrayidx563, align 4, !dbg !1173
  br label %cond.end565, !dbg !1171

cond.false564:                                    ; preds = %for.body557
  br label %cond.end565, !dbg !1174

cond.end565:                                      ; preds = %cond.false564, %cond.true561
  %cond566 = phi i32 [ %445, %cond.true561 ], [ 0, %cond.false564 ], !dbg !1171
  call void @_gcry_mpi_free_limb_space(i64* %442, i32 %cond566), !dbg !1176
  br label %for.inc567, !dbg !1176

for.inc567:                                       ; preds = %cond.end565
  %446 = load i32, i32* %i, align 4, !dbg !1179
  %inc568 = add nsw i32 %446, 1, !dbg !1179
  store i32 %inc568, i32* %i, align 4, !dbg !1179
  br label %for.cond552, !dbg !1180

for.end569:                                       ; preds = %for.cond552
  %447 = load i64*, i64** %base_u, align 8, !dbg !1181
  %448 = load i32, i32* %esec, align 4, !dbg !1182
  %tobool570 = icmp ne i32 %448, 0, !dbg !1182
  br i1 %tobool570, label %cond.true571, label %cond.false572, !dbg !1182

cond.true571:                                     ; preds = %for.end569
  %449 = load i32, i32* %max_u_size, align 4, !dbg !1183
  br label %cond.end573, !dbg !1182

cond.false572:                                    ; preds = %for.end569
  br label %cond.end573, !dbg !1184

cond.end573:                                      ; preds = %cond.false572, %cond.true571
  %cond574 = phi i32 [ %449, %cond.true571 ], [ 0, %cond.false572 ], !dbg !1182
  call void @_gcry_mpi_free_limb_space(i64* %447, i32 %cond574), !dbg !1185
  %450 = load i32, i32* %negative_result, align 4, !dbg !1186
  %tobool575 = icmp ne i32 %450, 0, !dbg !1186
  br i1 %tobool575, label %land.lhs.true, label %if.end597, !dbg !1188

land.lhs.true:                                    ; preds = %cond.end573
  %451 = load i32, i32* %rsize, align 4, !dbg !1189
  %tobool576 = icmp ne i32 %451, 0, !dbg !1189
  br i1 %tobool576, label %if.then577, label %if.end597, !dbg !1191

if.then577:                                       ; preds = %land.lhs.true
  %452 = load i32, i32* %mod_shift_cnt, align 4, !dbg !1192
  %tobool578 = icmp ne i32 %452, 0, !dbg !1192
  br i1 %tobool578, label %if.then579, label %if.end581, !dbg !1195

if.then579:                                       ; preds = %if.then577
  %453 = load i64*, i64** %mp, align 8, !dbg !1196
  %454 = load i64*, i64** %mp, align 8, !dbg !1197
  %455 = load i32, i32* %msize, align 4, !dbg !1198
  %456 = load i32, i32* %mod_shift_cnt, align 4, !dbg !1199
  %call580 = call i64 @_gcry_mpih_rshift(i64* %453, i64* %454, i32 %455, i32 %456), !dbg !1200
  br label %if.end581, !dbg !1200

if.end581:                                        ; preds = %if.then579, %if.then577
  %457 = load i64*, i64** %rp, align 8, !dbg !1201
  %458 = load i64*, i64** %mp, align 8, !dbg !1202
  %459 = load i32, i32* %msize, align 4, !dbg !1203
  %460 = load i64*, i64** %rp, align 8, !dbg !1204
  %461 = load i32, i32* %rsize, align 4, !dbg !1205
  %call582 = call i64 @_gcry_mpih_sub(i64* %457, i64* %458, i32 %459, i64* %460, i32 %461), !dbg !1206
  %462 = load i32, i32* %msize, align 4, !dbg !1207
  store i32 %462, i32* %rsize, align 4, !dbg !1208
  %463 = load i32, i32* %msign, align 4, !dbg !1209
  store i32 %463, i32* %rsign, align 4, !dbg !1210
  br label %do.body583, !dbg !1211

do.body583:                                       ; preds = %if.end581
  br label %while.cond584, !dbg !1212

while.cond584:                                    ; preds = %if.end593, %do.body583
  %464 = load i32, i32* %rsize, align 4, !dbg !1215
  %cmp585 = icmp sgt i32 %464, 0, !dbg !1215
  br i1 %cmp585, label %while.body587, label %while.end595, !dbg !1215

while.body587:                                    ; preds = %while.cond584
  %465 = load i32, i32* %rsize, align 4, !dbg !1218
  %sub588 = sub nsw i32 %465, 1, !dbg !1218
  %idxprom589 = sext i32 %sub588 to i64, !dbg !1218
  %466 = load i64*, i64** %rp, align 8, !dbg !1218
  %arrayidx590 = getelementptr inbounds i64, i64* %466, i64 %idxprom589, !dbg !1218
  %467 = load i64, i64* %arrayidx590, align 8, !dbg !1218
  %tobool591 = icmp ne i64 %467, 0, !dbg !1218
  br i1 %tobool591, label %if.then592, label %if.end593, !dbg !1222

if.then592:                                       ; preds = %while.body587
  br label %while.end595, !dbg !1223

if.end593:                                        ; preds = %while.body587
  %468 = load i32, i32* %rsize, align 4, !dbg !1225
  %dec594 = add nsw i32 %468, -1, !dbg !1225
  store i32 %dec594, i32* %rsize, align 4, !dbg !1225
  br label %while.cond584, !dbg !1227

while.end595:                                     ; preds = %if.then592, %while.cond584
  br label %do.end596, !dbg !1228

do.end596:                                        ; preds = %while.end595
  br label %if.end597, !dbg !1231

if.end597:                                        ; preds = %do.end596, %land.lhs.true, %cond.end573
  %469 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1232
  %d598 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %469, i32 0, i32 4, !dbg !1232
  %470 = load i64*, i64** %d598, align 8, !dbg !1232
  %471 = load i64*, i64** %rp, align 8, !dbg !1232
  %cmp599 = icmp eq i64* %470, %471, !dbg !1232
  br i1 %cmp599, label %cond.true601, label %cond.false602, !dbg !1232

cond.true601:                                     ; preds = %if.end597
  br label %cond.end603, !dbg !1233

cond.false602:                                    ; preds = %if.end597
  call void @_gcry_assert_failed(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str2, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @.str1, i32 0, i32 0), i32 789, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @__FUNCTION__._gcry_mpi_powm, i32 0, i32 0)) #5, !dbg !1234
  unreachable, !dbg !1234
                                                  ; No predecessors!
  br label %cond.end603, !dbg !1232

cond.end603:                                      ; preds = %472, %cond.true601
  %473 = load i32, i32* %rsize, align 4, !dbg !1235
  %474 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1236
  %nlimbs604 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %474, i32 0, i32 1, !dbg !1237
  store i32 %473, i32* %nlimbs604, align 4, !dbg !1238
  %475 = load i32, i32* %rsign, align 4, !dbg !1239
  %476 = load %struct.gcry_mpi*, %struct.gcry_mpi** %res.addr, align 8, !dbg !1240
  %sign605 = getelementptr inbounds %struct.gcry_mpi, %struct.gcry_mpi* %476, i32 0, i32 2, !dbg !1241
  store i32 %475, i32* %sign605, align 4, !dbg !1242
  br label %leave, !dbg !1240

leave:                                            ; preds = %cond.end603, %if.then133, %if.end61
  %477 = load i64*, i64** %mp_marker, align 8, !dbg !1243
  %tobool606 = icmp ne i64* %477, null, !dbg !1243
  br i1 %tobool606, label %if.then607, label %if.end608, !dbg !1245

if.then607:                                       ; preds = %leave
  %478 = load i64*, i64** %mp_marker, align 8, !dbg !1246
  %479 = load i32, i32* %mp_nlimbs, align 4, !dbg !1247
  call void @_gcry_mpi_free_limb_space(i64* %478, i32 %479), !dbg !1248
  br label %if.end608, !dbg !1248

if.end608:                                        ; preds = %if.then607, %leave
  %480 = load i64*, i64** %bp_marker, align 8, !dbg !1249
  %tobool609 = icmp ne i64* %480, null, !dbg !1249
  br i1 %tobool609, label %if.then610, label %if.end611, !dbg !1251

if.then610:                                       ; preds = %if.end608
  %481 = load i64*, i64** %bp_marker, align 8, !dbg !1252
  %482 = load i32, i32* %bp_nlimbs, align 4, !dbg !1253
  call void @_gcry_mpi_free_limb_space(i64* %481, i32 %482), !dbg !1254
  br label %if.end611, !dbg !1254

if.end611:                                        ; preds = %if.then610, %if.end608
  %483 = load i64*, i64** %ep_marker, align 8, !dbg !1255
  %tobool612 = icmp ne i64* %483, null, !dbg !1255
  br i1 %tobool612, label %if.then613, label %if.end614, !dbg !1257

if.then613:                                       ; preds = %if.end611
  %484 = load i64*, i64** %ep_marker, align 8, !dbg !1258
  %485 = load i32, i32* %ep_nlimbs, align 4, !dbg !1259
  call void @_gcry_mpi_free_limb_space(i64* %484, i32 %485), !dbg !1260
  br label %if.end614, !dbg !1260

if.end614:                                        ; preds = %if.then613, %if.end611
  %486 = load i64*, i64** %xp_marker, align 8, !dbg !1261
  %tobool615 = icmp ne i64* %486, null, !dbg !1261
  br i1 %tobool615, label %if.then616, label %if.end617, !dbg !1263

if.then616:                                       ; preds = %if.end614
  %487 = load i64*, i64** %xp_marker, align 8, !dbg !1264
  %488 = load i32, i32* %xp_nlimbs, align 4, !dbg !1265
  call void @_gcry_mpi_free_limb_space(i64* %487, i32 %488), !dbg !1266
  br label %if.end617, !dbg !1266

if.end617:                                        ; preds = %if.then616, %if.end614
  ret void, !dbg !1267
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: noreturn
declare void @_gcry_divide_by_zero() #2

declare void @_gcry_mpi_resize(%struct.gcry_mpi*, i32) #3

declare i64* @_gcry_mpi_alloc_limb_space(i32, i32) #3

declare i64 @_gcry_mpih_lshift(i64*, i64*, i32, i32) #3

declare i64 @_gcry_mpih_divrem(i64*, i32, i64*, i32, i64*, i32) #3

; Function Attrs: noreturn
declare void @_gcry_assert_failed(i8*, i8*, i32, i8*) #2

; Function Attrs: nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture, i8, i64, i32, i1) #4

; Function Attrs: nounwind uwtable
define internal void @mul_mod(i64* %xp, i32* %xsize_p, i64* %rp, i32 %rsize, i64* %sp, i32 %ssize, i64* %mp, i32 %msize, %struct.karatsuba_ctx* %karactx_p) #0 {
entry:
  %xp.addr = alloca i64*, align 8
  %xsize_p.addr = alloca i32*, align 8
  %rp.addr = alloca i64*, align 8
  %rsize.addr = alloca i32, align 4
  %sp.addr = alloca i64*, align 8
  %ssize.addr = alloca i32, align 4
  %mp.addr = alloca i64*, align 8
  %msize.addr = alloca i32, align 4
  %karactx_p.addr = alloca %struct.karatsuba_ctx*, align 8
  store i64* %xp, i64** %xp.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %xp.addr, metadata !1268, metadata !46), !dbg !1269
  store i32* %xsize_p, i32** %xsize_p.addr, align 8
  call void @llvm.dbg.declare(metadata i32** %xsize_p.addr, metadata !1270, metadata !46), !dbg !1271
  store i64* %rp, i64** %rp.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %rp.addr, metadata !1272, metadata !46), !dbg !1273
  store i32 %rsize, i32* %rsize.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %rsize.addr, metadata !1274, metadata !46), !dbg !1275
  store i64* %sp, i64** %sp.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %sp.addr, metadata !1276, metadata !46), !dbg !1277
  store i32 %ssize, i32* %ssize.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %ssize.addr, metadata !1278, metadata !46), !dbg !1279
  store i64* %mp, i64** %mp.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %mp.addr, metadata !1280, metadata !46), !dbg !1281
  store i32 %msize, i32* %msize.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %msize.addr, metadata !1282, metadata !46), !dbg !1283
  store %struct.karatsuba_ctx* %karactx_p, %struct.karatsuba_ctx** %karactx_p.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.karatsuba_ctx** %karactx_p.addr, metadata !1284, metadata !46), !dbg !1285
  %0 = load i32, i32* %ssize.addr, align 4, !dbg !1286
  %cmp = icmp slt i32 %0, 16, !dbg !1288
  br i1 %cmp, label %if.then, label %if.else, !dbg !1289

if.then:                                          ; preds = %entry
  %1 = load i64*, i64** %xp.addr, align 8, !dbg !1290
  %2 = load i64*, i64** %rp.addr, align 8, !dbg !1291
  %3 = load i32, i32* %rsize.addr, align 4, !dbg !1292
  %4 = load i64*, i64** %sp.addr, align 8, !dbg !1293
  %5 = load i32, i32* %ssize.addr, align 4, !dbg !1294
  %call = call i64 @_gcry_mpih_mul(i64* %1, i64* %2, i32 %3, i64* %4, i32 %5), !dbg !1295
  br label %if.end, !dbg !1295

if.else:                                          ; preds = %entry
  %6 = load i64*, i64** %xp.addr, align 8, !dbg !1296
  %7 = load i64*, i64** %rp.addr, align 8, !dbg !1297
  %8 = load i32, i32* %rsize.addr, align 4, !dbg !1298
  %9 = load i64*, i64** %sp.addr, align 8, !dbg !1299
  %10 = load i32, i32* %ssize.addr, align 4, !dbg !1300
  %11 = load %struct.karatsuba_ctx*, %struct.karatsuba_ctx** %karactx_p.addr, align 8, !dbg !1301
  call void @_gcry_mpih_mul_karatsuba_case(i64* %6, i64* %7, i32 %8, i64* %9, i32 %10, %struct.karatsuba_ctx* %11), !dbg !1302
  br label %if.end

if.end:                                           ; preds = %if.else, %if.then
  %12 = load i32, i32* %rsize.addr, align 4, !dbg !1303
  %13 = load i32, i32* %ssize.addr, align 4, !dbg !1305
  %add = add nsw i32 %12, %13, !dbg !1306
  %14 = load i32, i32* %msize.addr, align 4, !dbg !1307
  %cmp1 = icmp sgt i32 %add, %14, !dbg !1308
  br i1 %cmp1, label %if.then2, label %if.else5, !dbg !1309

if.then2:                                         ; preds = %if.end
  %15 = load i64*, i64** %xp.addr, align 8, !dbg !1310
  %16 = load i32, i32* %msize.addr, align 4, !dbg !1312
  %idx.ext = sext i32 %16 to i64, !dbg !1313
  %add.ptr = getelementptr inbounds i64, i64* %15, i64 %idx.ext, !dbg !1313
  %17 = load i64*, i64** %xp.addr, align 8, !dbg !1314
  %18 = load i32, i32* %rsize.addr, align 4, !dbg !1315
  %19 = load i32, i32* %ssize.addr, align 4, !dbg !1316
  %add3 = add nsw i32 %18, %19, !dbg !1317
  %20 = load i64*, i64** %mp.addr, align 8, !dbg !1318
  %21 = load i32, i32* %msize.addr, align 4, !dbg !1319
  %call4 = call i64 @_gcry_mpih_divrem(i64* %add.ptr, i32 0, i64* %17, i32 %add3, i64* %20, i32 %21), !dbg !1320
  %22 = load i32, i32* %msize.addr, align 4, !dbg !1321
  %23 = load i32*, i32** %xsize_p.addr, align 8, !dbg !1322
  store i32 %22, i32* %23, align 4, !dbg !1323
  br label %if.end7, !dbg !1324

if.else5:                                         ; preds = %if.end
  %24 = load i32, i32* %rsize.addr, align 4, !dbg !1325
  %25 = load i32, i32* %ssize.addr, align 4, !dbg !1326
  %add6 = add nsw i32 %24, %25, !dbg !1327
  %26 = load i32*, i32** %xsize_p.addr, align 8, !dbg !1328
  store i32 %add6, i32* %26, align 4, !dbg !1329
  br label %if.end7

if.end7:                                          ; preds = %if.else5, %if.then2
  ret void, !dbg !1330
}

declare %struct.gcry_mpi* @_gcry_mpi_set_cond(%struct.gcry_mpi*, %struct.gcry_mpi*, i64) #3

declare i64 @_gcry_mpih_rshift(i64*, i64*, i32, i32) #3

declare void @_gcry_mpih_release_karatsuba_ctx(%struct.karatsuba_ctx*) #3

declare void @_gcry_mpi_free_limb_space(i64*, i32) #3

declare i64 @_gcry_mpih_sub(i64*, i64*, i32, i64*, i32) #3

declare i64 @_gcry_mpih_mul(i64*, i64*, i32, i64*, i32) #3

declare void @_gcry_mpih_mul_karatsuba_case(i64*, i64*, i32, i64*, i32, %struct.karatsuba_ctx*) #3

attributes #0 = { nounwind uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { noreturn "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { nounwind }
attributes #5 = { noreturn }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!42, !43}
!llvm.ident = !{!44}

!0 = !MDCompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !3, subprograms: !9, globals: !2, imports: !2)
!1 = !MDFile(filename: "mpi-pow.c", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/libgcrypt1.7.6/mpi")
!2 = !{}
!3 = !{!4, !7}
!4 = !MDDerivedType(tag: DW_TAG_typedef, name: "UDItype", file: !5, line: 267, baseType: !6)
!5 = !MDFile(filename: "./mpi-internal.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/libgcrypt1.7.6/mpi")
!6 = !MDBasicType(name: "long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!7 = !MDDerivedType(tag: DW_TAG_typedef, name: "mpi_size_t", file: !5, line: 72, baseType: !8)
!8 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!9 = !{!10, !27}
!10 = !MDSubprogram(name: "_gcry_mpi_powm", scope: !1, file: !1, line: 399, type: !11, isLocal: false, isDefinition: true, scopeLine: 401, flags: DIFlagPrototyped, isOptimized: false, function: void (%struct.gcry_mpi*, %struct.gcry_mpi*, %struct.gcry_mpi*, %struct.gcry_mpi*)* @_gcry_mpi_powm, variables: !2)
!11 = !MDSubroutineType(types: !12)
!12 = !{null, !13, !13, !13, !13}
!13 = !MDDerivedType(tag: DW_TAG_typedef, name: "gcry_mpi_t", file: !14, line: 236, baseType: !15)
!14 = !MDFile(filename: "../include/gcrypt.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/libgcrypt1.7.6/mpi")
!15 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !16, size: 64, align: 64)
!16 = !MDCompositeType(tag: DW_TAG_structure_type, name: "gcry_mpi", file: !17, line: 65, size: 192, align: 64, elements: !18)
!17 = !MDFile(filename: "../include/mpi.h", directory: "/home/adam/research/LLVM-Deps/projects/llvm-deps/mod_exp_tests/libgcrypt1.7.6/mpi")
!18 = !{!19, !20, !21, !22, !24}
!19 = !MDDerivedType(tag: DW_TAG_member, name: "alloced", scope: !16, file: !17, line: 67, baseType: !8, size: 32, align: 32)
!20 = !MDDerivedType(tag: DW_TAG_member, name: "nlimbs", scope: !16, file: !17, line: 68, baseType: !8, size: 32, align: 32, offset: 32)
!21 = !MDDerivedType(tag: DW_TAG_member, name: "sign", scope: !16, file: !17, line: 69, baseType: !8, size: 32, align: 32, offset: 64)
!22 = !MDDerivedType(tag: DW_TAG_member, name: "flags", scope: !16, file: !17, line: 71, baseType: !23, size: 32, align: 32, offset: 96)
!23 = !MDBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!24 = !MDDerivedType(tag: DW_TAG_member, name: "d", scope: !16, file: !17, line: 75, baseType: !25, size: 64, align: 64, offset: 128)
!25 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !26, size: 64, align: 64)
!26 = !MDDerivedType(tag: DW_TAG_typedef, name: "mpi_limb_t", file: !5, line: 38, baseType: !6)
!27 = !MDSubprogram(name: "mul_mod", scope: !1, file: !1, line: 365, type: !28, isLocal: true, isDefinition: true, scopeLine: 370, flags: DIFlagPrototyped, isOptimized: false, function: void (i64*, i32*, i64*, i32, i64*, i32, i64*, i32, %struct.karatsuba_ctx*)* @mul_mod, variables: !2)
!28 = !MDSubroutineType(types: !29)
!29 = !{null, !30, !31, !30, !7, !30, !7, !30, !7, !32}
!30 = !MDDerivedType(tag: DW_TAG_typedef, name: "mpi_ptr_t", file: !5, line: 71, baseType: !25)
!31 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !7, size: 64, align: 64)
!32 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !33, size: 64, align: 64)
!33 = !MDCompositeType(tag: DW_TAG_structure_type, name: "karatsuba_ctx", file: !5, line: 207, size: 320, align: 64, elements: !34)
!34 = !{!35, !36, !37, !38, !39, !40, !41}
!35 = !MDDerivedType(tag: DW_TAG_member, name: "next", scope: !33, file: !5, line: 208, baseType: !32, size: 64, align: 64)
!36 = !MDDerivedType(tag: DW_TAG_member, name: "tspace", scope: !33, file: !5, line: 209, baseType: !30, size: 64, align: 64, offset: 64)
!37 = !MDDerivedType(tag: DW_TAG_member, name: "tspace_nlimbs", scope: !33, file: !5, line: 210, baseType: !23, size: 32, align: 32, offset: 128)
!38 = !MDDerivedType(tag: DW_TAG_member, name: "tspace_size", scope: !33, file: !5, line: 211, baseType: !7, size: 32, align: 32, offset: 160)
!39 = !MDDerivedType(tag: DW_TAG_member, name: "tp", scope: !33, file: !5, line: 212, baseType: !30, size: 64, align: 64, offset: 192)
!40 = !MDDerivedType(tag: DW_TAG_member, name: "tp_nlimbs", scope: !33, file: !5, line: 213, baseType: !23, size: 32, align: 32, offset: 256)
!41 = !MDDerivedType(tag: DW_TAG_member, name: "tp_size", scope: !33, file: !5, line: 214, baseType: !7, size: 32, align: 32, offset: 288)
!42 = !{i32 2, !"Dwarf Version", i32 4}
!43 = !{i32 2, !"Debug Info Version", i32 3}
!44 = !{!"clang version 3.7.0 (trunk) (https://git.psu.edu/dbz5017/LLVM-Deps.git 9a6ab583de97608754c2961079257073e80a0028)"}
!45 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "res", arg: 1, scope: !10, file: !1, line: 399, type: !13)
!46 = !MDExpression()
!47 = !MDLocation(line: 399, column: 28, scope: !10)
!48 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "base", arg: 2, scope: !10, file: !1, line: 400, type: !13)
!49 = !MDLocation(line: 400, column: 28, scope: !10)
!50 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "expo", arg: 3, scope: !10, file: !1, line: 400, type: !13)
!51 = !MDLocation(line: 400, column: 45, scope: !10)
!52 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mod", arg: 4, scope: !10, file: !1, line: 400, type: !13)
!53 = !MDLocation(line: 400, column: 62, scope: !10)
!54 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rp", scope: !10, file: !1, line: 403, type: !30)
!55 = !MDLocation(line: 403, column: 14, scope: !10)
!56 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ep", scope: !10, file: !1, line: 403, type: !30)
!57 = !MDLocation(line: 403, column: 18, scope: !10)
!58 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mp", scope: !10, file: !1, line: 403, type: !30)
!59 = !MDLocation(line: 403, column: 22, scope: !10)
!60 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bp", scope: !10, file: !1, line: 403, type: !30)
!61 = !MDLocation(line: 403, column: 26, scope: !10)
!62 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "esize", scope: !10, file: !1, line: 404, type: !7)
!63 = !MDLocation(line: 404, column: 14, scope: !10)
!64 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "msize", scope: !10, file: !1, line: 404, type: !7)
!65 = !MDLocation(line: 404, column: 21, scope: !10)
!66 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bsize", scope: !10, file: !1, line: 404, type: !7)
!67 = !MDLocation(line: 404, column: 28, scope: !10)
!68 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rsize", scope: !10, file: !1, line: 404, type: !7)
!69 = !MDLocation(line: 404, column: 35, scope: !10)
!70 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "msign", scope: !10, file: !1, line: 405, type: !8)
!71 = !MDLocation(line: 405, column: 21, scope: !10)
!72 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bsign", scope: !10, file: !1, line: 405, type: !8)
!73 = !MDLocation(line: 405, column: 28, scope: !10)
!74 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rsign", scope: !10, file: !1, line: 405, type: !8)
!75 = !MDLocation(line: 405, column: 35, scope: !10)
!76 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "esec", scope: !10, file: !1, line: 407, type: !8)
!77 = !MDLocation(line: 407, column: 14, scope: !10)
!78 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "msec", scope: !10, file: !1, line: 407, type: !8)
!79 = !MDLocation(line: 407, column: 21, scope: !10)
!80 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bsec", scope: !10, file: !1, line: 407, type: !8)
!81 = !MDLocation(line: 407, column: 28, scope: !10)
!82 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "size", scope: !10, file: !1, line: 409, type: !7)
!83 = !MDLocation(line: 409, column: 14, scope: !10)
!84 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mod_shift_cnt", scope: !10, file: !1, line: 411, type: !8)
!85 = !MDLocation(line: 411, column: 7, scope: !10)
!86 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "negative_result", scope: !10, file: !1, line: 412, type: !8)
!87 = !MDLocation(line: 412, column: 7, scope: !10)
!88 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mp_marker", scope: !10, file: !1, line: 413, type: !30)
!89 = !MDLocation(line: 413, column: 13, scope: !10)
!90 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bp_marker", scope: !10, file: !1, line: 414, type: !30)
!91 = !MDLocation(line: 414, column: 13, scope: !10)
!92 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ep_marker", scope: !10, file: !1, line: 415, type: !30)
!93 = !MDLocation(line: 415, column: 13, scope: !10)
!94 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "xp_marker", scope: !10, file: !1, line: 416, type: !30)
!95 = !MDLocation(line: 416, column: 13, scope: !10)
!96 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mp_nlimbs", scope: !10, file: !1, line: 417, type: !23)
!97 = !MDLocation(line: 417, column: 16, scope: !10)
!98 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bp_nlimbs", scope: !10, file: !1, line: 418, type: !23)
!99 = !MDLocation(line: 418, column: 16, scope: !10)
!100 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ep_nlimbs", scope: !10, file: !1, line: 419, type: !23)
!101 = !MDLocation(line: 419, column: 16, scope: !10)
!102 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "xp_nlimbs", scope: !10, file: !1, line: 420, type: !23)
!103 = !MDLocation(line: 420, column: 16, scope: !10)
!104 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "precomp", scope: !10, file: !1, line: 421, type: !105)
!105 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !30, size: 1024, align: 64, elements: !106)
!106 = !{!107}
!107 = !MDSubrange(count: 16)
!108 = !MDLocation(line: 421, column: 13, scope: !10)
!109 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "precomp_size", scope: !10, file: !1, line: 422, type: !110)
!110 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !7, size: 512, align: 32, elements: !106)
!111 = !MDLocation(line: 422, column: 14, scope: !10)
!112 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "W", scope: !10, file: !1, line: 423, type: !7)
!113 = !MDLocation(line: 423, column: 14, scope: !10)
!114 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "base_u", scope: !10, file: !1, line: 424, type: !30)
!115 = !MDLocation(line: 424, column: 13, scope: !10)
!116 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "base_u_size", scope: !10, file: !1, line: 425, type: !7)
!117 = !MDLocation(line: 425, column: 14, scope: !10)
!118 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "max_u_size", scope: !10, file: !1, line: 426, type: !7)
!119 = !MDLocation(line: 426, column: 14, scope: !10)
!120 = !MDLocation(line: 428, column: 11, scope: !10)
!121 = !MDLocation(line: 428, column: 17, scope: !10)
!122 = !MDLocation(line: 428, column: 9, scope: !10)
!123 = !MDLocation(line: 429, column: 11, scope: !10)
!124 = !MDLocation(line: 429, column: 16, scope: !10)
!125 = !MDLocation(line: 429, column: 9, scope: !10)
!126 = !MDLocation(line: 430, column: 14, scope: !10)
!127 = !MDLocation(line: 430, column: 12, scope: !10)
!128 = !MDLocation(line: 430, column: 8, scope: !10)
!129 = !MDLocation(line: 431, column: 11, scope: !10)
!130 = !MDLocation(line: 431, column: 16, scope: !10)
!131 = !MDLocation(line: 431, column: 9, scope: !10)
!132 = !MDLocation(line: 433, column: 8, scope: !10)
!133 = !MDLocation(line: 433, column: 14, scope: !10)
!134 = !MDLocation(line: 433, column: 6, scope: !10)
!135 = !MDLocation(line: 434, column: 3, scope: !10)
!136 = !MDLocation(line: 434, column: 3, scope: !137)
!137 = !MDLexicalBlockFile(scope: !138, file: !1, discriminator: 1)
!138 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 434, column: 3)
!139 = !MDLocation(line: 434, column: 3, scope: !140)
!140 = !MDLexicalBlockFile(scope: !141, file: !1, discriminator: 8)
!141 = !MDLexicalBlockFile(scope: !138, file: !1, discriminator: 2)
!142 = !MDLocation(line: 434, column: 3, scope: !143)
!143 = !MDLexicalBlockFile(scope: !144, file: !1, discriminator: 3)
!144 = distinct !MDLexicalBlock(scope: !145, file: !1, line: 434, column: 3)
!145 = distinct !MDLexicalBlock(scope: !138, file: !1, line: 434, column: 3)
!146 = !MDLocation(line: 434, column: 3, scope: !145)
!147 = !MDLocation(line: 434, column: 3, scope: !148)
!148 = !MDLexicalBlockFile(scope: !144, file: !1, discriminator: 5)
!149 = !MDLocation(line: 434, column: 3, scope: !150)
!150 = !MDLexicalBlockFile(scope: !145, file: !1, discriminator: 6)
!151 = !MDLocation(line: 434, column: 3, scope: !138)
!152 = !MDLocation(line: 434, column: 3, scope: !153)
!153 = !MDLexicalBlockFile(scope: !154, file: !1, discriminator: 7)
!154 = !MDLexicalBlockFile(scope: !138, file: !1, discriminator: 4)
!155 = !MDLocation(line: 436, column: 7, scope: !156)
!156 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 436, column: 7)
!157 = !MDLocation(line: 436, column: 13, scope: !156)
!158 = !MDLocation(line: 436, column: 33, scope: !156)
!159 = !MDLocation(line: 436, column: 7, scope: !10)
!160 = !MDLocation(line: 437, column: 7, scope: !156)
!161 = !MDLocation(line: 437, column: 5, scope: !156)
!162 = !MDLocation(line: 438, column: 12, scope: !163)
!163 = distinct !MDLexicalBlock(scope: !156, file: !1, line: 438, column: 12)
!164 = !MDLocation(line: 438, column: 18, scope: !163)
!165 = !MDLocation(line: 438, column: 38, scope: !163)
!166 = !MDLocation(line: 438, column: 12, scope: !156)
!167 = !MDLocation(line: 439, column: 7, scope: !163)
!168 = !MDLocation(line: 439, column: 5, scope: !163)
!169 = !MDLocation(line: 440, column: 12, scope: !170)
!170 = distinct !MDLexicalBlock(scope: !163, file: !1, line: 440, column: 12)
!171 = !MDLocation(line: 440, column: 18, scope: !170)
!172 = !MDLocation(line: 440, column: 38, scope: !170)
!173 = !MDLocation(line: 440, column: 12, scope: !163)
!174 = !MDLocation(line: 441, column: 7, scope: !170)
!175 = !MDLocation(line: 441, column: 5, scope: !170)
!176 = !MDLocation(line: 442, column: 12, scope: !177)
!177 = distinct !MDLexicalBlock(scope: !170, file: !1, line: 442, column: 12)
!178 = !MDLocation(line: 442, column: 18, scope: !177)
!179 = !MDLocation(line: 442, column: 38, scope: !177)
!180 = !MDLocation(line: 442, column: 12, scope: !170)
!181 = !MDLocation(line: 443, column: 7, scope: !177)
!182 = !MDLocation(line: 443, column: 5, scope: !177)
!183 = !MDLocation(line: 445, column: 7, scope: !177)
!184 = !MDLocation(line: 447, column: 10, scope: !10)
!185 = !MDLocation(line: 447, column: 10, scope: !186)
!186 = !MDLexicalBlockFile(scope: !10, file: !1, discriminator: 1)
!187 = !MDLocation(line: 447, column: 10, scope: !188)
!188 = !MDLexicalBlockFile(scope: !10, file: !1, discriminator: 2)
!189 = !MDLocation(line: 447, column: 8, scope: !10)
!190 = !MDLocation(line: 448, column: 10, scope: !10)
!191 = !MDLocation(line: 448, column: 10, scope: !186)
!192 = !MDLocation(line: 448, column: 10, scope: !188)
!193 = !MDLocation(line: 448, column: 8, scope: !10)
!194 = !MDLocation(line: 449, column: 10, scope: !10)
!195 = !MDLocation(line: 449, column: 10, scope: !186)
!196 = !MDLocation(line: 449, column: 10, scope: !188)
!197 = !MDLocation(line: 449, column: 8, scope: !10)
!198 = !MDLocation(line: 451, column: 8, scope: !10)
!199 = !MDLocation(line: 451, column: 13, scope: !10)
!200 = !MDLocation(line: 451, column: 6, scope: !10)
!201 = !MDLocation(line: 453, column: 8, scope: !202)
!202 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 453, column: 7)
!203 = !MDLocation(line: 453, column: 7, scope: !10)
!204 = !MDLocation(line: 454, column: 5, scope: !202)
!205 = !MDLocation(line: 456, column: 8, scope: !206)
!206 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 456, column: 7)
!207 = !MDLocation(line: 456, column: 7, scope: !10)
!208 = !MDLocation(line: 460, column: 22, scope: !209)
!209 = distinct !MDLexicalBlock(scope: !206, file: !1, line: 457, column: 5)
!210 = !MDLocation(line: 460, column: 28, scope: !209)
!211 = !MDLocation(line: 460, column: 33, scope: !209)
!212 = !MDLocation(line: 460, column: 36, scope: !213)
!213 = !MDLexicalBlockFile(scope: !209, file: !1, discriminator: 1)
!214 = !MDLocation(line: 460, column: 41, scope: !209)
!215 = !MDLocation(line: 460, column: 36, scope: !209)
!216 = !MDLocation(line: 460, column: 46, scope: !209)
!217 = !MDLocation(line: 460, column: 21, scope: !218)
!218 = !MDLexicalBlockFile(scope: !209, file: !1, discriminator: 2)
!219 = !MDLocation(line: 460, column: 7, scope: !209)
!220 = !MDLocation(line: 460, column: 12, scope: !209)
!221 = !MDLocation(line: 460, column: 19, scope: !209)
!222 = !MDLocation(line: 461, column: 11, scope: !223)
!223 = distinct !MDLexicalBlock(scope: !209, file: !1, line: 461, column: 11)
!224 = !MDLocation(line: 461, column: 16, scope: !223)
!225 = !MDLocation(line: 461, column: 11, scope: !209)
!226 = !MDLocation(line: 463, column: 11, scope: !227)
!227 = distinct !MDLexicalBlock(scope: !223, file: !1, line: 462, column: 9)
!228 = !MDLocation(line: 463, column: 11, scope: !229)
!229 = !MDLexicalBlockFile(scope: !230, file: !1, discriminator: 1)
!230 = distinct !MDLexicalBlock(scope: !231, file: !1, line: 463, column: 11)
!231 = distinct !MDLexicalBlock(scope: !227, file: !1, line: 463, column: 11)
!232 = !MDLocation(line: 463, column: 11, scope: !231)
!233 = !MDLocation(line: 463, column: 11, scope: !234)
!234 = !MDLexicalBlockFile(scope: !230, file: !1, discriminator: 2)
!235 = !MDLocation(line: 463, column: 11, scope: !236)
!236 = !MDLexicalBlockFile(scope: !237, file: !1, discriminator: 4)
!237 = !MDLexicalBlockFile(scope: !231, file: !1, discriminator: 3)
!238 = !MDLocation(line: 464, column: 16, scope: !227)
!239 = !MDLocation(line: 464, column: 21, scope: !227)
!240 = !MDLocation(line: 464, column: 14, scope: !227)
!241 = !MDLocation(line: 465, column: 11, scope: !227)
!242 = !MDLocation(line: 465, column: 17, scope: !227)
!243 = !MDLocation(line: 466, column: 9, scope: !227)
!244 = !MDLocation(line: 467, column: 7, scope: !209)
!245 = !MDLocation(line: 467, column: 12, scope: !209)
!246 = !MDLocation(line: 467, column: 17, scope: !209)
!247 = !MDLocation(line: 468, column: 7, scope: !209)
!248 = !MDLocation(line: 475, column: 15, scope: !10)
!249 = !MDLocation(line: 475, column: 21, scope: !186)
!250 = !MDLocation(line: 475, column: 15, scope: !188)
!251 = !MDLocation(line: 475, column: 13, scope: !252)
!252 = !MDLexicalBlockFile(scope: !253, file: !1, discriminator: 4)
!253 = !MDLexicalBlockFile(scope: !10, file: !1, discriminator: 3)
!254 = !MDLocation(line: 476, column: 20, scope: !10)
!255 = !MDLocation(line: 476, column: 18, scope: !10)
!256 = !MDLocation(line: 476, column: 6, scope: !10)
!257 = !MDLocation(line: 477, column: 3, scope: !10)
!258 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__cbtmp", scope: !259, file: !1, line: 477, type: !4)
!259 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 477, column: 3)
!260 = !MDLocation(line: 477, column: 3, scope: !259)
!261 = !MDLocation(line: 477, column: 3, scope: !262)
!262 = !MDLexicalBlockFile(scope: !259, file: !1, discriminator: 1)
!263 = !{i32 -2146641467}
!264 = !MDLocation(line: 478, column: 7, scope: !265)
!265 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 478, column: 7)
!266 = !MDLocation(line: 478, column: 7, scope: !10)
!267 = !MDLocation(line: 479, column: 24, scope: !265)
!268 = !MDLocation(line: 479, column: 28, scope: !265)
!269 = !MDLocation(line: 479, column: 33, scope: !265)
!270 = !MDLocation(line: 479, column: 36, scope: !265)
!271 = !MDLocation(line: 479, column: 43, scope: !265)
!272 = !MDLocation(line: 479, column: 5, scope: !265)
!273 = !MDLocation(line: 481, column: 5, scope: !265)
!274 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !275, file: !1, line: 481, type: !7)
!275 = distinct !MDLexicalBlock(scope: !265, file: !1, line: 481, column: 5)
!276 = !MDLocation(line: 481, column: 5, scope: !275)
!277 = !MDLocation(line: 481, column: 5, scope: !278)
!278 = !MDLexicalBlockFile(scope: !279, file: !1, discriminator: 1)
!279 = distinct !MDLexicalBlock(scope: !275, file: !1, line: 481, column: 5)
!280 = !MDLocation(line: 481, column: 5, scope: !281)
!281 = !MDLexicalBlockFile(scope: !282, file: !1, discriminator: 6)
!282 = !MDLexicalBlockFile(scope: !283, file: !1, discriminator: 2)
!283 = distinct !MDLexicalBlock(scope: !279, file: !1, line: 481, column: 5)
!284 = !MDLocation(line: 481, column: 5, scope: !279)
!285 = !MDLocation(line: 481, column: 5, scope: !286)
!286 = !MDLexicalBlockFile(scope: !283, file: !1, discriminator: 3)
!287 = !MDLocation(line: 481, column: 5, scope: !288)
!288 = !MDLexicalBlockFile(scope: !283, file: !1, discriminator: 5)
!289 = !MDLocation(line: 481, column: 5, scope: !290)
!290 = !MDLexicalBlockFile(scope: !275, file: !1, discriminator: 4)
!291 = !MDLocation(line: 483, column: 11, scope: !10)
!292 = !MDLocation(line: 483, column: 17, scope: !10)
!293 = !MDLocation(line: 483, column: 9, scope: !10)
!294 = !MDLocation(line: 484, column: 11, scope: !10)
!295 = !MDLocation(line: 484, column: 17, scope: !10)
!296 = !MDLocation(line: 484, column: 9, scope: !10)
!297 = !MDLocation(line: 485, column: 7, scope: !298)
!298 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 485, column: 7)
!299 = !MDLocation(line: 485, column: 15, scope: !298)
!300 = !MDLocation(line: 485, column: 13, scope: !298)
!301 = !MDLocation(line: 485, column: 7, scope: !10)
!302 = !MDLocation(line: 491, column: 19, scope: !303)
!303 = distinct !MDLexicalBlock(scope: !298, file: !1, line: 486, column: 5)
!304 = !MDLocation(line: 491, column: 27, scope: !305)
!305 = !MDLexicalBlockFile(scope: !303, file: !1, discriminator: 1)
!306 = !MDLocation(line: 491, column: 33, scope: !303)
!307 = !MDLocation(line: 491, column: 19, scope: !308)
!308 = !MDLexicalBlockFile(scope: !303, file: !1, discriminator: 2)
!309 = !MDLocation(line: 491, column: 17, scope: !310)
!310 = !MDLexicalBlockFile(scope: !311, file: !1, discriminator: 4)
!311 = !MDLexicalBlockFile(scope: !303, file: !1, discriminator: 3)
!312 = !MDLocation(line: 492, column: 24, scope: !303)
!313 = !MDLocation(line: 492, column: 22, scope: !303)
!314 = !MDLocation(line: 492, column: 10, scope: !303)
!315 = !MDLocation(line: 493, column: 7, scope: !303)
!316 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !317, file: !1, line: 493, type: !7)
!317 = distinct !MDLexicalBlock(scope: !303, file: !1, line: 493, column: 7)
!318 = !MDLocation(line: 493, column: 7, scope: !317)
!319 = !MDLocation(line: 493, column: 7, scope: !320)
!320 = !MDLexicalBlockFile(scope: !321, file: !1, discriminator: 1)
!321 = distinct !MDLexicalBlock(scope: !317, file: !1, line: 493, column: 7)
!322 = !MDLocation(line: 493, column: 7, scope: !323)
!323 = !MDLexicalBlockFile(scope: !324, file: !1, discriminator: 6)
!324 = !MDLexicalBlockFile(scope: !325, file: !1, discriminator: 2)
!325 = distinct !MDLexicalBlock(scope: !321, file: !1, line: 493, column: 7)
!326 = !MDLocation(line: 493, column: 7, scope: !321)
!327 = !MDLocation(line: 493, column: 7, scope: !328)
!328 = !MDLexicalBlockFile(scope: !325, file: !1, discriminator: 3)
!329 = !MDLocation(line: 493, column: 7, scope: !330)
!330 = !MDLexicalBlockFile(scope: !325, file: !1, discriminator: 5)
!331 = !MDLocation(line: 493, column: 7, scope: !332)
!332 = !MDLexicalBlockFile(scope: !317, file: !1, discriminator: 4)
!333 = !MDLocation(line: 496, column: 26, scope: !303)
!334 = !MDLocation(line: 496, column: 31, scope: !303)
!335 = !MDLocation(line: 496, column: 29, scope: !303)
!336 = !MDLocation(line: 496, column: 41, scope: !303)
!337 = !MDLocation(line: 496, column: 45, scope: !303)
!338 = !MDLocation(line: 496, column: 52, scope: !303)
!339 = !MDLocation(line: 496, column: 56, scope: !303)
!340 = !MDLocation(line: 496, column: 7, scope: !303)
!341 = !MDLocation(line: 497, column: 15, scope: !303)
!342 = !MDLocation(line: 497, column: 13, scope: !303)
!343 = !MDLocation(line: 500, column: 7, scope: !303)
!344 = !MDLocation(line: 500, column: 7, scope: !345)
!345 = !MDLexicalBlockFile(scope: !346, file: !1, discriminator: 1)
!346 = distinct !MDLexicalBlock(scope: !303, file: !1, line: 500, column: 7)
!347 = !MDLocation(line: 500, column: 7, scope: !348)
!348 = !MDLexicalBlockFile(scope: !349, file: !1, discriminator: 8)
!349 = !MDLexicalBlockFile(scope: !346, file: !1, discriminator: 2)
!350 = !MDLocation(line: 500, column: 7, scope: !351)
!351 = !MDLexicalBlockFile(scope: !352, file: !1, discriminator: 3)
!352 = distinct !MDLexicalBlock(scope: !353, file: !1, line: 500, column: 7)
!353 = distinct !MDLexicalBlock(scope: !346, file: !1, line: 500, column: 7)
!354 = !MDLocation(line: 500, column: 7, scope: !353)
!355 = !MDLocation(line: 500, column: 7, scope: !356)
!356 = !MDLexicalBlockFile(scope: !352, file: !1, discriminator: 5)
!357 = !MDLocation(line: 500, column: 7, scope: !358)
!358 = !MDLexicalBlockFile(scope: !353, file: !1, discriminator: 6)
!359 = !MDLocation(line: 500, column: 7, scope: !346)
!360 = !MDLocation(line: 500, column: 7, scope: !361)
!361 = !MDLexicalBlockFile(scope: !362, file: !1, discriminator: 7)
!362 = !MDLexicalBlockFile(scope: !346, file: !1, discriminator: 4)
!363 = !MDLocation(line: 501, column: 5, scope: !303)
!364 = !MDLocation(line: 503, column: 10, scope: !298)
!365 = !MDLocation(line: 503, column: 16, scope: !298)
!366 = !MDLocation(line: 503, column: 8, scope: !298)
!367 = !MDLocation(line: 505, column: 8, scope: !368)
!368 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 505, column: 7)
!369 = !MDLocation(line: 505, column: 7, scope: !10)
!370 = !MDLocation(line: 507, column: 7, scope: !371)
!371 = distinct !MDLexicalBlock(scope: !368, file: !1, line: 506, column: 5)
!372 = !MDLocation(line: 507, column: 12, scope: !371)
!373 = !MDLocation(line: 507, column: 19, scope: !371)
!374 = !MDLocation(line: 508, column: 7, scope: !371)
!375 = !MDLocation(line: 508, column: 12, scope: !371)
!376 = !MDLocation(line: 508, column: 17, scope: !371)
!377 = !MDLocation(line: 509, column: 7, scope: !371)
!378 = !MDLocation(line: 515, column: 8, scope: !379)
!379 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 515, column: 8)
!380 = !MDLocation(line: 515, column: 11, scope: !379)
!381 = !MDLocation(line: 515, column: 8, scope: !10)
!382 = !MDLocation(line: 518, column: 7, scope: !383)
!383 = distinct !MDLexicalBlock(scope: !379, file: !1, line: 516, column: 5)
!384 = !MDLocation(line: 518, column: 7, scope: !385)
!385 = !MDLexicalBlockFile(scope: !383, file: !1, discriminator: 2)
!386 = !MDLocation(line: 518, column: 7, scope: !387)
!387 = !MDLexicalBlockFile(scope: !383, file: !1, discriminator: 1)
!388 = !MDLocation(line: 519, column: 19, scope: !383)
!389 = !MDLocation(line: 519, column: 25, scope: !387)
!390 = !MDLocation(line: 519, column: 19, scope: !385)
!391 = !MDLocation(line: 519, column: 17, scope: !392)
!392 = !MDLexicalBlockFile(scope: !393, file: !1, discriminator: 4)
!393 = !MDLexicalBlockFile(scope: !383, file: !1, discriminator: 3)
!394 = !MDLocation(line: 520, column: 24, scope: !383)
!395 = !MDLocation(line: 520, column: 22, scope: !383)
!396 = !MDLocation(line: 520, column: 10, scope: !383)
!397 = !MDLocation(line: 522, column: 5, scope: !383)
!398 = !MDLocation(line: 523, column: 8, scope: !399)
!399 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 523, column: 8)
!400 = !MDLocation(line: 523, column: 14, scope: !399)
!401 = !MDLocation(line: 523, column: 11, scope: !399)
!402 = !MDLocation(line: 523, column: 8, scope: !10)
!403 = !MDLocation(line: 526, column: 19, scope: !404)
!404 = distinct !MDLexicalBlock(scope: !399, file: !1, line: 524, column: 5)
!405 = !MDLocation(line: 526, column: 25, scope: !406)
!406 = !MDLexicalBlockFile(scope: !404, file: !1, discriminator: 1)
!407 = !MDLocation(line: 526, column: 19, scope: !408)
!408 = !MDLexicalBlockFile(scope: !404, file: !1, discriminator: 2)
!409 = !MDLocation(line: 526, column: 17, scope: !410)
!410 = !MDLexicalBlockFile(scope: !411, file: !1, discriminator: 4)
!411 = !MDLexicalBlockFile(scope: !404, file: !1, discriminator: 3)
!412 = !MDLocation(line: 527, column: 24, scope: !404)
!413 = !MDLocation(line: 527, column: 22, scope: !404)
!414 = !MDLocation(line: 527, column: 10, scope: !404)
!415 = !MDLocation(line: 528, column: 7, scope: !404)
!416 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !417, file: !1, line: 528, type: !7)
!417 = distinct !MDLexicalBlock(scope: !404, file: !1, line: 528, column: 7)
!418 = !MDLocation(line: 528, column: 7, scope: !417)
!419 = !MDLocation(line: 528, column: 7, scope: !420)
!420 = !MDLexicalBlockFile(scope: !421, file: !1, discriminator: 1)
!421 = distinct !MDLexicalBlock(scope: !417, file: !1, line: 528, column: 7)
!422 = !MDLocation(line: 528, column: 7, scope: !423)
!423 = !MDLexicalBlockFile(scope: !424, file: !1, discriminator: 6)
!424 = !MDLexicalBlockFile(scope: !425, file: !1, discriminator: 2)
!425 = distinct !MDLexicalBlock(scope: !421, file: !1, line: 528, column: 7)
!426 = !MDLocation(line: 528, column: 7, scope: !421)
!427 = !MDLocation(line: 528, column: 7, scope: !428)
!428 = !MDLexicalBlockFile(scope: !425, file: !1, discriminator: 3)
!429 = !MDLocation(line: 528, column: 7, scope: !430)
!430 = !MDLexicalBlockFile(scope: !425, file: !1, discriminator: 5)
!431 = !MDLocation(line: 528, column: 7, scope: !432)
!432 = !MDLexicalBlockFile(scope: !417, file: !1, discriminator: 4)
!433 = !MDLocation(line: 529, column: 5, scope: !404)
!434 = !MDLocation(line: 532, column: 7, scope: !435)
!435 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 532, column: 7)
!436 = !MDLocation(line: 532, column: 12, scope: !435)
!437 = !MDLocation(line: 532, column: 22, scope: !435)
!438 = !MDLocation(line: 532, column: 20, scope: !435)
!439 = !MDLocation(line: 532, column: 7, scope: !10)
!440 = !MDLocation(line: 534, column: 7, scope: !441)
!441 = distinct !MDLexicalBlock(scope: !435, file: !1, line: 533, column: 5)
!442 = !MDLocation(line: 535, column: 12, scope: !441)
!443 = !MDLocation(line: 535, column: 17, scope: !441)
!444 = !MDLocation(line: 535, column: 10, scope: !441)
!445 = !MDLocation(line: 536, column: 5, scope: !441)
!446 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !447, file: !1, line: 540, type: !7)
!447 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 539, column: 3)
!448 = !MDLocation(line: 540, column: 16, scope: !447)
!449 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "j", scope: !447, file: !1, line: 540, type: !7)
!450 = !MDLocation(line: 540, column: 19, scope: !447)
!451 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "k", scope: !447, file: !1, line: 540, type: !7)
!452 = !MDLocation(line: 540, column: 22, scope: !447)
!453 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "xp", scope: !447, file: !1, line: 541, type: !30)
!454 = !MDLocation(line: 541, column: 15, scope: !447)
!455 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "xsize", scope: !447, file: !1, line: 542, type: !7)
!456 = !MDLocation(line: 542, column: 16, scope: !447)
!457 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "c", scope: !447, file: !1, line: 543, type: !8)
!458 = !MDLocation(line: 543, column: 9, scope: !447)
!459 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "e", scope: !447, file: !1, line: 544, type: !26)
!460 = !MDLocation(line: 544, column: 16, scope: !447)
!461 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "carry_limb", scope: !447, file: !1, line: 545, type: !26)
!462 = !MDLocation(line: 545, column: 16, scope: !447)
!463 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "karactx", scope: !447, file: !1, line: 546, type: !33)
!464 = !MDLocation(line: 546, column: 26, scope: !447)
!465 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "tp", scope: !447, file: !1, line: 547, type: !30)
!466 = !MDLocation(line: 547, column: 15, scope: !447)
!467 = !MDLocation(line: 549, column: 17, scope: !447)
!468 = !MDLocation(line: 549, column: 29, scope: !469)
!469 = !MDLexicalBlockFile(scope: !447, file: !1, discriminator: 1)
!470 = !MDLocation(line: 549, column: 35, scope: !447)
!471 = !MDLocation(line: 549, column: 26, scope: !447)
!472 = !MDLocation(line: 549, column: 17, scope: !473)
!473 = !MDLexicalBlockFile(scope: !447, file: !1, discriminator: 2)
!474 = !MDLocation(line: 549, column: 15, scope: !475)
!475 = !MDLexicalBlockFile(scope: !476, file: !1, discriminator: 4)
!476 = !MDLexicalBlockFile(scope: !447, file: !1, discriminator: 3)
!477 = !MDLocation(line: 550, column: 22, scope: !447)
!478 = !MDLocation(line: 550, column: 20, scope: !447)
!479 = !MDLocation(line: 550, column: 8, scope: !447)
!480 = !MDLocation(line: 552, column: 5, scope: !447)
!481 = !MDLocation(line: 553, column: 24, scope: !447)
!482 = !MDLocation(line: 553, column: 30, scope: !447)
!483 = !MDLocation(line: 553, column: 35, scope: !447)
!484 = !MDLocation(line: 553, column: 38, scope: !469)
!485 = !MDLocation(line: 553, column: 35, scope: !473)
!486 = !MDLocation(line: 553, column: 21, scope: !447)
!487 = !MDLocation(line: 556, column: 9, scope: !488)
!488 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 556, column: 9)
!489 = !MDLocation(line: 556, column: 11, scope: !488)
!490 = !MDLocation(line: 556, column: 9, scope: !447)
!491 = !MDLocation(line: 557, column: 16, scope: !488)
!492 = !MDLocation(line: 557, column: 28, scope: !488)
!493 = !MDLocation(line: 557, column: 32, scope: !488)
!494 = !MDLocation(line: 557, column: 39, scope: !488)
!495 = !MDLocation(line: 557, column: 43, scope: !488)
!496 = !MDLocation(line: 557, column: 50, scope: !488)
!497 = !MDLocation(line: 557, column: 54, scope: !488)
!498 = !MDLocation(line: 557, column: 7, scope: !488)
!499 = !MDLocation(line: 558, column: 27, scope: !447)
!500 = !MDLocation(line: 558, column: 14, scope: !447)
!501 = !MDLocation(line: 558, column: 25, scope: !447)
!502 = !MDLocation(line: 558, column: 12, scope: !447)
!503 = !MDLocation(line: 559, column: 50, scope: !447)
!504 = !MDLocation(line: 559, column: 32, scope: !447)
!505 = !MDLocation(line: 559, column: 48, scope: !447)
!506 = !MDLocation(line: 559, column: 30, scope: !447)
!507 = !MDLocation(line: 559, column: 17, scope: !447)
!508 = !MDLocation(line: 560, column: 5, scope: !447)
!509 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !510, file: !1, line: 560, type: !7)
!510 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 560, column: 5)
!511 = !MDLocation(line: 560, column: 5, scope: !510)
!512 = !MDLocation(line: 560, column: 5, scope: !513)
!513 = !MDLexicalBlockFile(scope: !514, file: !1, discriminator: 1)
!514 = distinct !MDLexicalBlock(scope: !510, file: !1, line: 560, column: 5)
!515 = !MDLocation(line: 560, column: 5, scope: !516)
!516 = !MDLexicalBlockFile(scope: !517, file: !1, discriminator: 6)
!517 = !MDLexicalBlockFile(scope: !518, file: !1, discriminator: 2)
!518 = distinct !MDLexicalBlock(scope: !514, file: !1, line: 560, column: 5)
!519 = !MDLocation(line: 560, column: 5, scope: !514)
!520 = !MDLocation(line: 560, column: 5, scope: !521)
!521 = !MDLexicalBlockFile(scope: !518, file: !1, discriminator: 3)
!522 = !MDLocation(line: 560, column: 5, scope: !523)
!523 = !MDLexicalBlockFile(scope: !518, file: !1, discriminator: 5)
!524 = !MDLocation(line: 560, column: 5, scope: !525)
!525 = !MDLexicalBlockFile(scope: !510, file: !1, discriminator: 4)
!526 = !MDLocation(line: 561, column: 12, scope: !527)
!527 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 561, column: 5)
!528 = !MDLocation(line: 561, column: 10, scope: !527)
!529 = !MDLocation(line: 561, column: 17, scope: !530)
!530 = !MDLexicalBlockFile(scope: !531, file: !1, discriminator: 2)
!531 = !MDLexicalBlockFile(scope: !532, file: !1, discriminator: 1)
!532 = distinct !MDLexicalBlock(scope: !527, file: !1, line: 561, column: 5)
!533 = !MDLocation(line: 561, column: 28, scope: !532)
!534 = !MDLocation(line: 561, column: 30, scope: !532)
!535 = !MDLocation(line: 561, column: 24, scope: !532)
!536 = !MDLocation(line: 561, column: 19, scope: !532)
!537 = !MDLocation(line: 561, column: 5, scope: !527)
!538 = !MDLocation(line: 563, column: 13, scope: !539)
!539 = distinct !MDLexicalBlock(scope: !540, file: !1, line: 563, column: 13)
!540 = distinct !MDLexicalBlock(scope: !532, file: !1, line: 562, column: 7)
!541 = !MDLocation(line: 563, column: 22, scope: !539)
!542 = !MDLocation(line: 563, column: 19, scope: !539)
!543 = !MDLocation(line: 563, column: 13, scope: !540)
!544 = !MDLocation(line: 564, column: 20, scope: !539)
!545 = !MDLocation(line: 564, column: 32, scope: !539)
!546 = !MDLocation(line: 564, column: 36, scope: !539)
!547 = !MDLocation(line: 564, column: 43, scope: !539)
!548 = !MDLocation(line: 564, column: 51, scope: !539)
!549 = !MDLocation(line: 565, column: 20, scope: !539)
!550 = !MDLocation(line: 565, column: 24, scope: !539)
!551 = !MDLocation(line: 564, column: 11, scope: !539)
!552 = !MDLocation(line: 567, column: 20, scope: !539)
!553 = !MDLocation(line: 567, column: 32, scope: !539)
!554 = !MDLocation(line: 567, column: 40, scope: !539)
!555 = !MDLocation(line: 567, column: 53, scope: !539)
!556 = !MDLocation(line: 567, column: 57, scope: !539)
!557 = !MDLocation(line: 568, column: 20, scope: !539)
!558 = !MDLocation(line: 568, column: 24, scope: !539)
!559 = !MDLocation(line: 567, column: 11, scope: !539)
!560 = !MDLocation(line: 569, column: 31, scope: !540)
!561 = !MDLocation(line: 569, column: 26, scope: !540)
!562 = !MDLocation(line: 569, column: 18, scope: !540)
!563 = !MDLocation(line: 569, column: 29, scope: !540)
!564 = !MDLocation(line: 569, column: 16, scope: !540)
!565 = !MDLocation(line: 570, column: 41, scope: !540)
!566 = !MDLocation(line: 570, column: 36, scope: !540)
!567 = !MDLocation(line: 570, column: 23, scope: !540)
!568 = !MDLocation(line: 570, column: 39, scope: !540)
!569 = !MDLocation(line: 570, column: 21, scope: !540)
!570 = !MDLocation(line: 571, column: 13, scope: !571)
!571 = distinct !MDLexicalBlock(scope: !540, file: !1, line: 571, column: 13)
!572 = !MDLocation(line: 571, column: 26, scope: !571)
!573 = !MDLocation(line: 571, column: 24, scope: !571)
!574 = !MDLocation(line: 571, column: 13, scope: !540)
!575 = !MDLocation(line: 572, column: 24, scope: !571)
!576 = !MDLocation(line: 572, column: 22, scope: !571)
!577 = !MDLocation(line: 572, column: 11, scope: !571)
!578 = !MDLocation(line: 573, column: 9, scope: !540)
!579 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !580, file: !1, line: 573, type: !7)
!580 = distinct !MDLexicalBlock(scope: !540, file: !1, line: 573, column: 9)
!581 = !MDLocation(line: 573, column: 9, scope: !580)
!582 = !MDLocation(line: 573, column: 9, scope: !583)
!583 = !MDLexicalBlockFile(scope: !584, file: !1, discriminator: 1)
!584 = distinct !MDLexicalBlock(scope: !580, file: !1, line: 573, column: 9)
!585 = !MDLocation(line: 573, column: 9, scope: !586)
!586 = !MDLexicalBlockFile(scope: !587, file: !1, discriminator: 6)
!587 = !MDLexicalBlockFile(scope: !588, file: !1, discriminator: 2)
!588 = distinct !MDLexicalBlock(scope: !584, file: !1, line: 573, column: 9)
!589 = !MDLocation(line: 573, column: 9, scope: !584)
!590 = !MDLocation(line: 573, column: 9, scope: !591)
!591 = !MDLexicalBlockFile(scope: !588, file: !1, discriminator: 3)
!592 = !MDLocation(line: 573, column: 9, scope: !593)
!593 = !MDLexicalBlockFile(scope: !588, file: !1, discriminator: 5)
!594 = !MDLocation(line: 573, column: 9, scope: !595)
!595 = !MDLexicalBlockFile(scope: !580, file: !1, discriminator: 4)
!596 = !MDLocation(line: 574, column: 7, scope: !540)
!597 = !MDLocation(line: 561, column: 38, scope: !532)
!598 = !MDLocation(line: 561, column: 5, scope: !532)
!599 = !MDLocation(line: 576, column: 14, scope: !447)
!600 = !MDLocation(line: 576, column: 12, scope: !447)
!601 = !MDLocation(line: 577, column: 5, scope: !447)
!602 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !603, file: !1, line: 577, type: !8)
!603 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 577, column: 5)
!604 = !MDLocation(line: 577, column: 5, scope: !603)
!605 = !MDLocation(line: 577, column: 5, scope: !606)
!606 = !MDLexicalBlockFile(scope: !607, file: !1, discriminator: 1)
!607 = distinct !MDLexicalBlock(scope: !603, file: !1, line: 577, column: 5)
!608 = !MDLocation(line: 577, column: 5, scope: !609)
!609 = !MDLexicalBlockFile(scope: !610, file: !1, discriminator: 6)
!610 = !MDLexicalBlockFile(scope: !611, file: !1, discriminator: 2)
!611 = distinct !MDLexicalBlock(scope: !607, file: !1, line: 577, column: 5)
!612 = !MDLocation(line: 577, column: 5, scope: !607)
!613 = !MDLocation(line: 577, column: 5, scope: !614)
!614 = !MDLexicalBlockFile(scope: !611, file: !1, discriminator: 3)
!615 = !MDLocation(line: 577, column: 5, scope: !616)
!616 = !MDLexicalBlockFile(scope: !611, file: !1, discriminator: 5)
!617 = !MDLocation(line: 577, column: 5, scope: !618)
!618 = !MDLexicalBlockFile(scope: !603, file: !1, discriminator: 4)
!619 = !MDLocation(line: 579, column: 9, scope: !447)
!620 = !MDLocation(line: 579, column: 15, scope: !447)
!621 = !MDLocation(line: 579, column: 7, scope: !447)
!622 = !MDLocation(line: 589, column: 11, scope: !447)
!623 = !MDLocation(line: 590, column: 9, scope: !624)
!624 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 590, column: 9)
!625 = !MDLocation(line: 590, column: 11, scope: !624)
!626 = !MDLocation(line: 590, column: 9, scope: !447)
!627 = !MDLocation(line: 592, column: 17, scope: !628)
!628 = distinct !MDLexicalBlock(scope: !624, file: !1, line: 591, column: 7)
!629 = !MDLocation(line: 592, column: 15, scope: !628)
!630 = !MDLocation(line: 593, column: 7, scope: !628)
!631 = !MDLocation(line: 596, column: 17, scope: !632)
!632 = distinct !MDLexicalBlock(scope: !624, file: !1, line: 595, column: 7)
!633 = !MDLocation(line: 596, column: 15, scope: !632)
!634 = !MDLocation(line: 597, column: 9, scope: !632)
!635 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !636, file: !1, line: 597, type: !8)
!636 = distinct !MDLexicalBlock(scope: !632, file: !1, line: 597, column: 9)
!637 = !MDLocation(line: 597, column: 9, scope: !636)
!638 = !MDLocation(line: 597, column: 9, scope: !639)
!639 = !MDLexicalBlockFile(scope: !640, file: !1, discriminator: 1)
!640 = distinct !MDLexicalBlock(scope: !636, file: !1, line: 597, column: 9)
!641 = !MDLocation(line: 597, column: 9, scope: !642)
!642 = !MDLexicalBlockFile(scope: !643, file: !1, discriminator: 6)
!643 = !MDLexicalBlockFile(scope: !644, file: !1, discriminator: 2)
!644 = distinct !MDLexicalBlock(scope: !640, file: !1, line: 597, column: 9)
!645 = !MDLocation(line: 597, column: 9, scope: !640)
!646 = !MDLocation(line: 597, column: 9, scope: !647)
!647 = !MDLexicalBlockFile(scope: !644, file: !1, discriminator: 3)
!648 = !MDLocation(line: 597, column: 9, scope: !649)
!649 = !MDLexicalBlockFile(scope: !644, file: !1, discriminator: 5)
!650 = !MDLocation(line: 597, column: 9, scope: !651)
!651 = !MDLexicalBlockFile(scope: !636, file: !1, discriminator: 4)
!652 = !MDLocation(line: 599, column: 5, scope: !447)
!653 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !654, file: !1, line: 599, type: !7)
!654 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 599, column: 5)
!655 = !MDLocation(line: 599, column: 5, scope: !654)
!656 = !MDLocation(line: 599, column: 5, scope: !657)
!657 = !MDLexicalBlockFile(scope: !658, file: !1, discriminator: 1)
!658 = distinct !MDLexicalBlock(scope: !654, file: !1, line: 599, column: 5)
!659 = !MDLocation(line: 599, column: 5, scope: !660)
!660 = !MDLexicalBlockFile(scope: !661, file: !1, discriminator: 6)
!661 = !MDLexicalBlockFile(scope: !662, file: !1, discriminator: 2)
!662 = distinct !MDLexicalBlock(scope: !658, file: !1, line: 599, column: 5)
!663 = !MDLocation(line: 599, column: 5, scope: !658)
!664 = !MDLocation(line: 599, column: 5, scope: !665)
!665 = !MDLexicalBlockFile(scope: !662, file: !1, discriminator: 3)
!666 = !MDLocation(line: 599, column: 5, scope: !667)
!667 = !MDLexicalBlockFile(scope: !662, file: !1, discriminator: 5)
!668 = !MDLocation(line: 599, column: 5, scope: !669)
!669 = !MDLexicalBlockFile(scope: !654, file: !1, discriminator: 4)
!670 = !MDLocation(line: 601, column: 12, scope: !447)
!671 = !MDLocation(line: 601, column: 9, scope: !447)
!672 = !MDLocation(line: 601, column: 7, scope: !447)
!673 = !MDLocation(line: 602, column: 5, scope: !447)
!674 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__cbtmp", scope: !675, file: !1, line: 602, type: !4)
!675 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 602, column: 5)
!676 = !MDLocation(line: 602, column: 5, scope: !675)
!677 = !MDLocation(line: 602, column: 5, scope: !678)
!678 = !MDLexicalBlockFile(scope: !675, file: !1, discriminator: 1)
!679 = !{i32 -2146639327}
!680 = !MDLocation(line: 603, column: 10, scope: !447)
!681 = !MDLocation(line: 603, column: 15, scope: !447)
!682 = !MDLocation(line: 603, column: 12, scope: !447)
!683 = !MDLocation(line: 603, column: 18, scope: !447)
!684 = !MDLocation(line: 603, column: 7, scope: !447)
!685 = !MDLocation(line: 604, column: 33, scope: !447)
!686 = !MDLocation(line: 604, column: 31, scope: !447)
!687 = !MDLocation(line: 604, column: 7, scope: !447)
!688 = !MDLocation(line: 606, column: 7, scope: !447)
!689 = !MDLocation(line: 608, column: 5, scope: !447)
!690 = !MDLocation(line: 609, column: 11, scope: !691)
!691 = distinct !MDLexicalBlock(scope: !692, file: !1, line: 609, column: 11)
!692 = distinct !MDLexicalBlock(scope: !693, file: !1, line: 608, column: 5)
!693 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 608, column: 5)
!694 = !MDLocation(line: 609, column: 13, scope: !691)
!695 = !MDLocation(line: 609, column: 11, scope: !692)
!696 = !MDLocation(line: 611, column: 16, scope: !697)
!697 = distinct !MDLexicalBlock(scope: !691, file: !1, line: 610, column: 9)
!698 = !MDLocation(line: 611, column: 13, scope: !697)
!699 = !MDLocation(line: 612, column: 12, scope: !697)
!700 = !MDLocation(line: 613, column: 16, scope: !701)
!701 = distinct !MDLexicalBlock(scope: !697, file: !1, line: 613, column: 16)
!702 = !MDLocation(line: 613, column: 18, scope: !701)
!703 = !MDLocation(line: 613, column: 16, scope: !697)
!704 = !MDLocation(line: 615, column: 17, scope: !705)
!705 = distinct !MDLexicalBlock(scope: !701, file: !1, line: 614, column: 13)
!706 = !MDLocation(line: 616, column: 15, scope: !705)
!707 = !MDLocation(line: 619, column: 18, scope: !697)
!708 = !MDLocation(line: 619, column: 15, scope: !697)
!709 = !MDLocation(line: 619, column: 13, scope: !697)
!710 = !MDLocation(line: 620, column: 13, scope: !697)
!711 = !MDLocation(line: 621, column: 9, scope: !697)
!712 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "c0", scope: !713, file: !1, line: 624, type: !8)
!713 = distinct !MDLexicalBlock(scope: !691, file: !1, line: 623, column: 9)
!714 = !MDLocation(line: 624, column: 15, scope: !713)
!715 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "e0", scope: !713, file: !1, line: 625, type: !26)
!716 = !MDLocation(line: 625, column: 22, scope: !713)
!717 = !MDLocation(line: 627, column: 11, scope: !713)
!718 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__cbtmp", scope: !719, file: !1, line: 627, type: !4)
!719 = distinct !MDLexicalBlock(scope: !713, file: !1, line: 627, column: 11)
!720 = !MDLocation(line: 627, column: 11, scope: !719)
!721 = !MDLocation(line: 627, column: 11, scope: !722)
!722 = !MDLexicalBlockFile(scope: !719, file: !1, discriminator: 1)
!723 = !{i32 -2146638764}
!724 = !MDLocation(line: 628, column: 16, scope: !713)
!725 = !MDLocation(line: 628, column: 21, scope: !713)
!726 = !MDLocation(line: 628, column: 18, scope: !713)
!727 = !MDLocation(line: 628, column: 13, scope: !713)
!728 = !MDLocation(line: 629, column: 16, scope: !713)
!729 = !MDLocation(line: 629, column: 13, scope: !713)
!730 = !MDLocation(line: 630, column: 16, scope: !713)
!731 = !MDLocation(line: 630, column: 13, scope: !713)
!732 = !MDLocation(line: 632, column: 15, scope: !733)
!733 = distinct !MDLexicalBlock(scope: !713, file: !1, line: 632, column: 15)
!734 = !MDLocation(line: 632, column: 20, scope: !733)
!735 = !MDLocation(line: 632, column: 17, scope: !733)
!736 = !MDLocation(line: 632, column: 15, scope: !713)
!737 = !MDLocation(line: 634, column: 21, scope: !738)
!738 = distinct !MDLexicalBlock(scope: !733, file: !1, line: 633, column: 13)
!739 = !MDLocation(line: 634, column: 47, scope: !738)
!740 = !MDLocation(line: 634, column: 45, scope: !738)
!741 = !MDLocation(line: 634, column: 23, scope: !738)
!742 = !MDLocation(line: 634, column: 18, scope: !738)
!743 = !MDLocation(line: 635, column: 20, scope: !738)
!744 = !MDLocation(line: 635, column: 25, scope: !738)
!745 = !MDLocation(line: 635, column: 22, scope: !738)
!746 = !MDLocation(line: 635, column: 17, scope: !738)
!747 = !MDLocation(line: 636, column: 20, scope: !738)
!748 = !MDLocation(line: 636, column: 17, scope: !738)
!749 = !MDLocation(line: 637, column: 13, scope: !738)
!750 = !MDLocation(line: 640, column: 16, scope: !751)
!751 = distinct !MDLexicalBlock(scope: !733, file: !1, line: 639, column: 13)
!752 = !MDLocation(line: 641, column: 20, scope: !753)
!753 = distinct !MDLexicalBlock(scope: !751, file: !1, line: 641, column: 20)
!754 = !MDLocation(line: 641, column: 22, scope: !753)
!755 = !MDLocation(line: 641, column: 20, scope: !751)
!756 = !MDLocation(line: 643, column: 24, scope: !757)
!757 = distinct !MDLexicalBlock(scope: !753, file: !1, line: 642, column: 17)
!758 = !MDLocation(line: 643, column: 50, scope: !757)
!759 = !MDLocation(line: 643, column: 48, scope: !757)
!760 = !MDLocation(line: 643, column: 26, scope: !757)
!761 = !MDLocation(line: 643, column: 21, scope: !757)
!762 = !MDLocation(line: 644, column: 19, scope: !757)
!763 = !MDLocation(line: 647, column: 20, scope: !751)
!764 = !MDLocation(line: 647, column: 18, scope: !751)
!765 = !MDLocation(line: 648, column: 21, scope: !751)
!766 = !MDLocation(line: 648, column: 47, scope: !751)
!767 = !MDLocation(line: 648, column: 45, scope: !751)
!768 = !MDLocation(line: 648, column: 23, scope: !751)
!769 = !MDLocation(line: 649, column: 23, scope: !751)
!770 = !MDLocation(line: 649, column: 20, scope: !751)
!771 = !MDLocation(line: 649, column: 50, scope: !751)
!772 = !MDLocation(line: 649, column: 48, scope: !751)
!773 = !MDLocation(line: 649, column: 54, scope: !751)
!774 = !MDLocation(line: 649, column: 52, scope: !751)
!775 = !MDLocation(line: 649, column: 26, scope: !751)
!776 = !MDLocation(line: 649, column: 17, scope: !751)
!777 = !MDLocation(line: 648, column: 18, scope: !751)
!778 = !MDLocation(line: 650, column: 23, scope: !751)
!779 = !MDLocation(line: 650, column: 20, scope: !751)
!780 = !MDLocation(line: 650, column: 30, scope: !751)
!781 = !MDLocation(line: 650, column: 34, scope: !751)
!782 = !MDLocation(line: 650, column: 32, scope: !751)
!783 = !MDLocation(line: 650, column: 26, scope: !751)
!784 = !MDLocation(line: 650, column: 17, scope: !751)
!785 = !MDLocation(line: 651, column: 39, scope: !751)
!786 = !MDLocation(line: 651, column: 37, scope: !751)
!787 = !MDLocation(line: 651, column: 43, scope: !751)
!788 = !MDLocation(line: 651, column: 41, scope: !751)
!789 = !MDLocation(line: 651, column: 17, scope: !751)
!790 = !MDLocation(line: 654, column: 11, scope: !713)
!791 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__cbtmp", scope: !792, file: !1, line: 654, type: !4)
!792 = distinct !MDLexicalBlock(scope: !713, file: !1, line: 654, column: 11)
!793 = !MDLocation(line: 654, column: 11, scope: !792)
!794 = !MDLocation(line: 654, column: 11, scope: !795)
!795 = !MDLexicalBlockFile(scope: !792, file: !1, discriminator: 1)
!796 = !{i32 -2146638056}
!797 = !MDLocation(line: 655, column: 17, scope: !713)
!798 = !MDLocation(line: 655, column: 23, scope: !713)
!799 = !MDLocation(line: 655, column: 20, scope: !713)
!800 = !MDLocation(line: 655, column: 27, scope: !713)
!801 = !MDLocation(line: 655, column: 14, scope: !713)
!802 = !MDLocation(line: 657, column: 21, scope: !803)
!803 = distinct !MDLexicalBlock(scope: !713, file: !1, line: 657, column: 11)
!804 = !MDLocation(line: 657, column: 25, scope: !803)
!805 = !MDLocation(line: 657, column: 23, scope: !803)
!806 = !MDLocation(line: 657, column: 18, scope: !803)
!807 = !MDLocation(line: 657, column: 16, scope: !803)
!808 = !MDLocation(line: 657, column: 29, scope: !809)
!809 = !MDLexicalBlockFile(scope: !810, file: !1, discriminator: 2)
!810 = !MDLexicalBlockFile(scope: !811, file: !1, discriminator: 1)
!811 = distinct !MDLexicalBlock(scope: !803, file: !1, line: 657, column: 11)
!812 = !MDLocation(line: 657, column: 11, scope: !803)
!813 = !MDLocation(line: 659, column: 24, scope: !814)
!814 = distinct !MDLexicalBlock(scope: !811, file: !1, line: 658, column: 13)
!815 = !MDLocation(line: 659, column: 36, scope: !814)
!816 = !MDLocation(line: 659, column: 40, scope: !814)
!817 = !MDLocation(line: 659, column: 47, scope: !814)
!818 = !MDLocation(line: 659, column: 51, scope: !814)
!819 = !MDLocation(line: 659, column: 58, scope: !814)
!820 = !MDLocation(line: 659, column: 62, scope: !814)
!821 = !MDLocation(line: 659, column: 15, scope: !814)
!822 = !MDLocation(line: 660, column: 20, scope: !814)
!823 = !MDLocation(line: 660, column: 18, scope: !814)
!824 = !MDLocation(line: 660, column: 29, scope: !814)
!825 = !MDLocation(line: 660, column: 27, scope: !814)
!826 = !MDLocation(line: 660, column: 38, scope: !814)
!827 = !MDLocation(line: 660, column: 36, scope: !814)
!828 = !MDLocation(line: 661, column: 23, scope: !814)
!829 = !MDLocation(line: 661, column: 21, scope: !814)
!830 = !MDLocation(line: 662, column: 13, scope: !814)
!831 = !MDLocation(line: 657, column: 33, scope: !811)
!832 = !MDLocation(line: 657, column: 11, scope: !811)
!833 = !MDLocation(line: 668, column: 23, scope: !713)
!834 = !MDLocation(line: 669, column: 18, scope: !835)
!835 = distinct !MDLexicalBlock(scope: !713, file: !1, line: 669, column: 11)
!836 = !MDLocation(line: 669, column: 16, scope: !835)
!837 = !MDLocation(line: 669, column: 23, scope: !838)
!838 = !MDLexicalBlockFile(scope: !839, file: !1, discriminator: 2)
!839 = !MDLexicalBlockFile(scope: !840, file: !1, discriminator: 1)
!840 = distinct !MDLexicalBlock(scope: !835, file: !1, line: 669, column: 11)
!841 = !MDLocation(line: 669, column: 33, scope: !840)
!842 = !MDLocation(line: 669, column: 35, scope: !840)
!843 = !MDLocation(line: 669, column: 29, scope: !840)
!844 = !MDLocation(line: 669, column: 25, scope: !840)
!845 = !MDLocation(line: 669, column: 11, scope: !835)
!846 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "w", scope: !847, file: !1, line: 671, type: !16)
!847 = distinct !MDLexicalBlock(scope: !840, file: !1, line: 670, column: 13)
!848 = !MDLocation(line: 671, column: 31, scope: !847)
!849 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "u", scope: !847, file: !1, line: 671, type: !16)
!850 = !MDLocation(line: 671, column: 34, scope: !847)
!851 = !MDLocation(line: 672, column: 51, scope: !847)
!852 = !MDLocation(line: 672, column: 38, scope: !847)
!853 = !MDLocation(line: 672, column: 29, scope: !847)
!854 = !MDLocation(line: 672, column: 36, scope: !847)
!855 = !MDLocation(line: 672, column: 17, scope: !847)
!856 = !MDLocation(line: 672, column: 25, scope: !847)
!857 = !MDLocation(line: 673, column: 51, scope: !847)
!858 = !MDLocation(line: 673, column: 38, scope: !847)
!859 = !MDLocation(line: 673, column: 29, scope: !847)
!860 = !MDLocation(line: 673, column: 36, scope: !847)
!861 = !MDLocation(line: 673, column: 17, scope: !847)
!862 = !MDLocation(line: 673, column: 25, scope: !847)
!863 = !MDLocation(line: 674, column: 26, scope: !847)
!864 = !MDLocation(line: 674, column: 31, scope: !847)
!865 = !MDLocation(line: 674, column: 17, scope: !847)
!866 = !MDLocation(line: 674, column: 22, scope: !847)
!867 = !MDLocation(line: 675, column: 27, scope: !847)
!868 = !MDLocation(line: 675, column: 33, scope: !847)
!869 = !MDLocation(line: 675, column: 17, scope: !847)
!870 = !MDLocation(line: 675, column: 23, scope: !847)
!871 = !MDLocation(line: 676, column: 21, scope: !847)
!872 = !MDLocation(line: 676, column: 17, scope: !847)
!873 = !MDLocation(line: 676, column: 19, scope: !847)
!874 = !MDLocation(line: 677, column: 29, scope: !847)
!875 = !MDLocation(line: 677, column: 21, scope: !847)
!876 = !MDLocation(line: 677, column: 17, scope: !847)
!877 = !MDLocation(line: 677, column: 19, scope: !847)
!878 = !MDLocation(line: 679, column: 15, scope: !847)
!879 = !MDLocation(line: 680, column: 44, scope: !847)
!880 = !MDLocation(line: 680, column: 31, scope: !847)
!881 = !MDLocation(line: 680, column: 67, scope: !847)
!882 = !MDLocation(line: 680, column: 72, scope: !847)
!883 = !MDLocation(line: 680, column: 69, scope: !847)
!884 = !MDLocation(line: 680, column: 64, scope: !847)
!885 = !MDLocation(line: 680, column: 47, scope: !847)
!886 = !MDLocation(line: 680, column: 27, scope: !847)
!887 = !MDLocation(line: 681, column: 13, scope: !847)
!888 = !MDLocation(line: 669, column: 43, scope: !840)
!889 = !MDLocation(line: 669, column: 11, scope: !840)
!890 = !MDLocation(line: 683, column: 20, scope: !713)
!891 = !MDLocation(line: 683, column: 32, scope: !713)
!892 = !MDLocation(line: 683, column: 36, scope: !713)
!893 = !MDLocation(line: 683, column: 43, scope: !713)
!894 = !MDLocation(line: 683, column: 51, scope: !713)
!895 = !MDLocation(line: 684, column: 20, scope: !713)
!896 = !MDLocation(line: 684, column: 24, scope: !713)
!897 = !MDLocation(line: 683, column: 11, scope: !713)
!898 = !MDLocation(line: 685, column: 16, scope: !713)
!899 = !MDLocation(line: 685, column: 14, scope: !713)
!900 = !MDLocation(line: 685, column: 25, scope: !713)
!901 = !MDLocation(line: 685, column: 23, scope: !713)
!902 = !MDLocation(line: 685, column: 34, scope: !713)
!903 = !MDLocation(line: 685, column: 32, scope: !713)
!904 = !MDLocation(line: 686, column: 19, scope: !713)
!905 = !MDLocation(line: 686, column: 17, scope: !713)
!906 = !MDLocation(line: 688, column: 15, scope: !713)
!907 = !MDLocation(line: 688, column: 13, scope: !713)
!908 = !MDLocation(line: 608, column: 5, scope: !692)
!909 = !MDLocation(line: 691, column: 9, scope: !910)
!910 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 691, column: 9)
!911 = !MDLocation(line: 691, column: 11, scope: !910)
!912 = !MDLocation(line: 691, column: 9, scope: !447)
!913 = !MDLocation(line: 693, column: 14, scope: !914)
!914 = distinct !MDLexicalBlock(scope: !910, file: !1, line: 692, column: 7)
!915 = !MDLocation(line: 693, column: 11, scope: !914)
!916 = !MDLocation(line: 694, column: 9, scope: !914)
!917 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "__cbtmp", scope: !918, file: !1, line: 694, type: !4)
!918 = distinct !MDLexicalBlock(scope: !914, file: !1, line: 694, column: 9)
!919 = !MDLocation(line: 694, column: 9, scope: !918)
!920 = !MDLocation(line: 694, column: 9, scope: !921)
!921 = !MDLexicalBlockFile(scope: !918, file: !1, discriminator: 1)
!922 = !{i32 -2146637538}
!923 = !MDLocation(line: 695, column: 14, scope: !914)
!924 = !MDLocation(line: 695, column: 19, scope: !914)
!925 = !MDLocation(line: 695, column: 16, scope: !914)
!926 = !MDLocation(line: 695, column: 11, scope: !914)
!927 = !MDLocation(line: 696, column: 14, scope: !914)
!928 = !MDLocation(line: 696, column: 11, scope: !914)
!929 = !MDLocation(line: 697, column: 7, scope: !914)
!930 = !MDLocation(line: 699, column: 5, scope: !447)
!931 = !MDLocation(line: 699, column: 13, scope: !932)
!932 = !MDLexicalBlockFile(scope: !469, file: !1, discriminator: 2)
!933 = !MDLocation(line: 701, column: 18, scope: !934)
!934 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 700, column: 7)
!935 = !MDLocation(line: 701, column: 30, scope: !934)
!936 = !MDLocation(line: 701, column: 34, scope: !934)
!937 = !MDLocation(line: 701, column: 41, scope: !934)
!938 = !MDLocation(line: 701, column: 45, scope: !934)
!939 = !MDLocation(line: 701, column: 52, scope: !934)
!940 = !MDLocation(line: 701, column: 56, scope: !934)
!941 = !MDLocation(line: 701, column: 9, scope: !934)
!942 = !MDLocation(line: 702, column: 14, scope: !934)
!943 = !MDLocation(line: 702, column: 12, scope: !934)
!944 = !MDLocation(line: 702, column: 23, scope: !934)
!945 = !MDLocation(line: 702, column: 21, scope: !934)
!946 = !MDLocation(line: 702, column: 32, scope: !934)
!947 = !MDLocation(line: 702, column: 30, scope: !934)
!948 = !MDLocation(line: 703, column: 17, scope: !934)
!949 = !MDLocation(line: 703, column: 15, scope: !934)
!950 = !MDLocation(line: 706, column: 9, scope: !951)
!951 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 706, column: 9)
!952 = !MDLocation(line: 706, column: 11, scope: !951)
!953 = !MDLocation(line: 706, column: 9, scope: !447)
!954 = !MDLocation(line: 712, column: 21, scope: !955)
!955 = distinct !MDLexicalBlock(scope: !951, file: !1, line: 707, column: 7)
!956 = !MDLocation(line: 713, column: 16, scope: !957)
!957 = distinct !MDLexicalBlock(scope: !955, file: !1, line: 713, column: 9)
!958 = !MDLocation(line: 713, column: 14, scope: !957)
!959 = !MDLocation(line: 713, column: 21, scope: !960)
!960 = !MDLexicalBlockFile(scope: !961, file: !1, discriminator: 2)
!961 = !MDLexicalBlockFile(scope: !962, file: !1, discriminator: 1)
!962 = distinct !MDLexicalBlock(scope: !957, file: !1, line: 713, column: 9)
!963 = !MDLocation(line: 713, column: 31, scope: !962)
!964 = !MDLocation(line: 713, column: 33, scope: !962)
!965 = !MDLocation(line: 713, column: 27, scope: !962)
!966 = !MDLocation(line: 713, column: 23, scope: !962)
!967 = !MDLocation(line: 713, column: 9, scope: !957)
!968 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "w", scope: !969, file: !1, line: 715, type: !16)
!969 = distinct !MDLexicalBlock(scope: !962, file: !1, line: 714, column: 11)
!970 = !MDLocation(line: 715, column: 29, scope: !969)
!971 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "u", scope: !969, file: !1, line: 715, type: !16)
!972 = !MDLocation(line: 715, column: 32, scope: !969)
!973 = !MDLocation(line: 716, column: 49, scope: !969)
!974 = !MDLocation(line: 716, column: 36, scope: !969)
!975 = !MDLocation(line: 716, column: 27, scope: !969)
!976 = !MDLocation(line: 716, column: 34, scope: !969)
!977 = !MDLocation(line: 716, column: 15, scope: !969)
!978 = !MDLocation(line: 716, column: 23, scope: !969)
!979 = !MDLocation(line: 717, column: 49, scope: !969)
!980 = !MDLocation(line: 717, column: 36, scope: !969)
!981 = !MDLocation(line: 717, column: 27, scope: !969)
!982 = !MDLocation(line: 717, column: 34, scope: !969)
!983 = !MDLocation(line: 717, column: 15, scope: !969)
!984 = !MDLocation(line: 717, column: 23, scope: !969)
!985 = !MDLocation(line: 718, column: 24, scope: !969)
!986 = !MDLocation(line: 718, column: 29, scope: !969)
!987 = !MDLocation(line: 718, column: 15, scope: !969)
!988 = !MDLocation(line: 718, column: 20, scope: !969)
!989 = !MDLocation(line: 719, column: 25, scope: !969)
!990 = !MDLocation(line: 719, column: 31, scope: !969)
!991 = !MDLocation(line: 719, column: 15, scope: !969)
!992 = !MDLocation(line: 719, column: 21, scope: !969)
!993 = !MDLocation(line: 720, column: 19, scope: !969)
!994 = !MDLocation(line: 720, column: 15, scope: !969)
!995 = !MDLocation(line: 720, column: 17, scope: !969)
!996 = !MDLocation(line: 721, column: 27, scope: !969)
!997 = !MDLocation(line: 721, column: 19, scope: !969)
!998 = !MDLocation(line: 721, column: 15, scope: !969)
!999 = !MDLocation(line: 721, column: 17, scope: !969)
!1000 = !MDLocation(line: 723, column: 13, scope: !969)
!1001 = !MDLocation(line: 724, column: 42, scope: !969)
!1002 = !MDLocation(line: 724, column: 29, scope: !969)
!1003 = !MDLocation(line: 724, column: 65, scope: !969)
!1004 = !MDLocation(line: 724, column: 71, scope: !969)
!1005 = !MDLocation(line: 724, column: 72, scope: !969)
!1006 = !MDLocation(line: 724, column: 67, scope: !969)
!1007 = !MDLocation(line: 724, column: 62, scope: !969)
!1008 = !MDLocation(line: 724, column: 45, scope: !969)
!1009 = !MDLocation(line: 724, column: 25, scope: !969)
!1010 = !MDLocation(line: 725, column: 11, scope: !969)
!1011 = !MDLocation(line: 713, column: 41, scope: !962)
!1012 = !MDLocation(line: 713, column: 9, scope: !962)
!1013 = !MDLocation(line: 727, column: 18, scope: !955)
!1014 = !MDLocation(line: 727, column: 30, scope: !955)
!1015 = !MDLocation(line: 727, column: 34, scope: !955)
!1016 = !MDLocation(line: 727, column: 41, scope: !955)
!1017 = !MDLocation(line: 727, column: 49, scope: !955)
!1018 = !MDLocation(line: 728, column: 18, scope: !955)
!1019 = !MDLocation(line: 728, column: 22, scope: !955)
!1020 = !MDLocation(line: 727, column: 9, scope: !955)
!1021 = !MDLocation(line: 729, column: 14, scope: !955)
!1022 = !MDLocation(line: 729, column: 12, scope: !955)
!1023 = !MDLocation(line: 729, column: 23, scope: !955)
!1024 = !MDLocation(line: 729, column: 21, scope: !955)
!1025 = !MDLocation(line: 729, column: 32, scope: !955)
!1026 = !MDLocation(line: 729, column: 30, scope: !955)
!1027 = !MDLocation(line: 730, column: 17, scope: !955)
!1028 = !MDLocation(line: 730, column: 15, scope: !955)
!1029 = !MDLocation(line: 732, column: 9, scope: !955)
!1030 = !MDLocation(line: 732, column: 16, scope: !1031)
!1031 = !MDLexicalBlockFile(scope: !1032, file: !1, discriminator: 2)
!1032 = !MDLexicalBlockFile(scope: !1033, file: !1, discriminator: 1)
!1033 = distinct !MDLexicalBlock(scope: !1034, file: !1, line: 732, column: 9)
!1034 = distinct !MDLexicalBlock(scope: !955, file: !1, line: 732, column: 9)
!1035 = !MDLocation(line: 732, column: 9, scope: !1034)
!1036 = !MDLocation(line: 734, column: 22, scope: !1037)
!1037 = distinct !MDLexicalBlock(scope: !1033, file: !1, line: 733, column: 11)
!1038 = !MDLocation(line: 734, column: 34, scope: !1037)
!1039 = !MDLocation(line: 734, column: 38, scope: !1037)
!1040 = !MDLocation(line: 734, column: 45, scope: !1037)
!1041 = !MDLocation(line: 734, column: 49, scope: !1037)
!1042 = !MDLocation(line: 734, column: 56, scope: !1037)
!1043 = !MDLocation(line: 734, column: 60, scope: !1037)
!1044 = !MDLocation(line: 734, column: 13, scope: !1037)
!1045 = !MDLocation(line: 735, column: 18, scope: !1037)
!1046 = !MDLocation(line: 735, column: 16, scope: !1037)
!1047 = !MDLocation(line: 735, column: 27, scope: !1037)
!1048 = !MDLocation(line: 735, column: 25, scope: !1037)
!1049 = !MDLocation(line: 735, column: 36, scope: !1037)
!1050 = !MDLocation(line: 735, column: 34, scope: !1037)
!1051 = !MDLocation(line: 736, column: 21, scope: !1037)
!1052 = !MDLocation(line: 736, column: 19, scope: !1037)
!1053 = !MDLocation(line: 737, column: 11, scope: !1037)
!1054 = !MDLocation(line: 732, column: 20, scope: !1033)
!1055 = !MDLocation(line: 732, column: 9, scope: !1033)
!1056 = !MDLocation(line: 738, column: 7, scope: !955)
!1057 = !MDLocation(line: 746, column: 10, scope: !1058)
!1058 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 746, column: 10)
!1059 = !MDLocation(line: 746, column: 10, scope: !447)
!1060 = !MDLocation(line: 748, column: 41, scope: !1061)
!1061 = distinct !MDLexicalBlock(scope: !1058, file: !1, line: 747, column: 7)
!1062 = !MDLocation(line: 748, column: 46, scope: !1061)
!1063 = !MDLocation(line: 748, column: 49, scope: !1061)
!1064 = !MDLocation(line: 748, column: 53, scope: !1061)
!1065 = !MDLocation(line: 748, column: 60, scope: !1061)
!1066 = !MDLocation(line: 748, column: 22, scope: !1061)
!1067 = !MDLocation(line: 748, column: 20, scope: !1061)
!1068 = !MDLocation(line: 749, column: 14, scope: !1061)
!1069 = !MDLocation(line: 749, column: 19, scope: !1061)
!1070 = !MDLocation(line: 749, column: 12, scope: !1061)
!1071 = !MDLocation(line: 750, column: 14, scope: !1072)
!1072 = distinct !MDLexicalBlock(scope: !1061, file: !1, line: 750, column: 14)
!1073 = !MDLocation(line: 750, column: 14, scope: !1061)
!1074 = !MDLocation(line: 752, column: 25, scope: !1075)
!1075 = distinct !MDLexicalBlock(scope: !1072, file: !1, line: 751, column: 11)
!1076 = !MDLocation(line: 752, column: 16, scope: !1075)
!1077 = !MDLocation(line: 752, column: 13, scope: !1075)
!1078 = !MDLocation(line: 752, column: 23, scope: !1075)
!1079 = !MDLocation(line: 753, column: 18, scope: !1075)
!1080 = !MDLocation(line: 754, column: 11, scope: !1075)
!1081 = !MDLocation(line: 755, column: 7, scope: !1061)
!1082 = !MDLocation(line: 756, column: 14, scope: !1083)
!1083 = distinct !MDLexicalBlock(scope: !1058, file: !1, line: 756, column: 14)
!1084 = !MDLocation(line: 756, column: 19, scope: !1083)
!1085 = !MDLocation(line: 756, column: 24, scope: !1083)
!1086 = !MDLocation(line: 756, column: 21, scope: !1083)
!1087 = !MDLocation(line: 756, column: 14, scope: !1058)
!1088 = !MDLocation(line: 758, column: 9, scope: !1089)
!1089 = distinct !MDLexicalBlock(scope: !1083, file: !1, line: 757, column: 7)
!1090 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "_i", scope: !1091, file: !1, line: 758, type: !7)
!1091 = distinct !MDLexicalBlock(scope: !1089, file: !1, line: 758, column: 9)
!1092 = !MDLocation(line: 758, column: 9, scope: !1091)
!1093 = !MDLocation(line: 758, column: 9, scope: !1094)
!1094 = !MDLexicalBlockFile(scope: !1095, file: !1, discriminator: 1)
!1095 = distinct !MDLexicalBlock(scope: !1091, file: !1, line: 758, column: 9)
!1096 = !MDLocation(line: 758, column: 9, scope: !1097)
!1097 = !MDLexicalBlockFile(scope: !1098, file: !1, discriminator: 6)
!1098 = !MDLexicalBlockFile(scope: !1099, file: !1, discriminator: 2)
!1099 = distinct !MDLexicalBlock(scope: !1095, file: !1, line: 758, column: 9)
!1100 = !MDLocation(line: 758, column: 9, scope: !1095)
!1101 = !MDLocation(line: 758, column: 9, scope: !1102)
!1102 = !MDLexicalBlockFile(scope: !1099, file: !1, discriminator: 3)
!1103 = !MDLocation(line: 758, column: 9, scope: !1104)
!1104 = !MDLexicalBlockFile(scope: !1099, file: !1, discriminator: 5)
!1105 = !MDLocation(line: 758, column: 9, scope: !1106)
!1106 = !MDLexicalBlockFile(scope: !1091, file: !1, discriminator: 4)
!1107 = !MDLocation(line: 759, column: 14, scope: !1089)
!1108 = !MDLocation(line: 759, column: 19, scope: !1089)
!1109 = !MDLocation(line: 759, column: 12, scope: !1089)
!1110 = !MDLocation(line: 760, column: 7, scope: !1089)
!1111 = !MDLocation(line: 762, column: 10, scope: !1112)
!1112 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 762, column: 10)
!1113 = !MDLocation(line: 762, column: 19, scope: !1112)
!1114 = !MDLocation(line: 762, column: 16, scope: !1112)
!1115 = !MDLocation(line: 762, column: 10, scope: !447)
!1116 = !MDLocation(line: 764, column: 27, scope: !1117)
!1117 = distinct !MDLexicalBlock(scope: !1112, file: !1, line: 763, column: 7)
!1118 = !MDLocation(line: 764, column: 32, scope: !1117)
!1119 = !MDLocation(line: 764, column: 30, scope: !1117)
!1120 = !MDLocation(line: 764, column: 42, scope: !1117)
!1121 = !MDLocation(line: 764, column: 46, scope: !1117)
!1122 = !MDLocation(line: 764, column: 53, scope: !1117)
!1123 = !MDLocation(line: 764, column: 57, scope: !1117)
!1124 = !MDLocation(line: 764, column: 9, scope: !1117)
!1125 = !MDLocation(line: 765, column: 17, scope: !1117)
!1126 = !MDLocation(line: 765, column: 15, scope: !1117)
!1127 = !MDLocation(line: 766, column: 7, scope: !1117)
!1128 = !MDLocation(line: 769, column: 10, scope: !1129)
!1129 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 769, column: 10)
!1130 = !MDLocation(line: 769, column: 10, scope: !447)
!1131 = !MDLocation(line: 770, column: 26, scope: !1129)
!1132 = !MDLocation(line: 770, column: 30, scope: !1129)
!1133 = !MDLocation(line: 770, column: 34, scope: !1129)
!1134 = !MDLocation(line: 770, column: 41, scope: !1129)
!1135 = !MDLocation(line: 770, column: 7, scope: !1129)
!1136 = !MDLocation(line: 771, column: 5, scope: !447)
!1137 = !MDLocation(line: 771, column: 5, scope: !1138)
!1138 = !MDLexicalBlockFile(scope: !1139, file: !1, discriminator: 1)
!1139 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 771, column: 5)
!1140 = !MDLocation(line: 771, column: 5, scope: !1141)
!1141 = !MDLexicalBlockFile(scope: !1142, file: !1, discriminator: 8)
!1142 = !MDLexicalBlockFile(scope: !1139, file: !1, discriminator: 2)
!1143 = !MDLocation(line: 771, column: 5, scope: !1144)
!1144 = !MDLexicalBlockFile(scope: !1145, file: !1, discriminator: 3)
!1145 = distinct !MDLexicalBlock(scope: !1146, file: !1, line: 771, column: 5)
!1146 = distinct !MDLexicalBlock(scope: !1139, file: !1, line: 771, column: 5)
!1147 = !MDLocation(line: 771, column: 5, scope: !1146)
!1148 = !MDLocation(line: 771, column: 5, scope: !1149)
!1149 = !MDLexicalBlockFile(scope: !1145, file: !1, discriminator: 5)
!1150 = !MDLocation(line: 771, column: 5, scope: !1151)
!1151 = !MDLexicalBlockFile(scope: !1146, file: !1, discriminator: 6)
!1152 = !MDLocation(line: 771, column: 5, scope: !1139)
!1153 = !MDLocation(line: 771, column: 5, scope: !1154)
!1154 = !MDLexicalBlockFile(scope: !1155, file: !1, discriminator: 7)
!1155 = !MDLexicalBlockFile(scope: !1139, file: !1, discriminator: 4)
!1156 = !MDLocation(line: 773, column: 5, scope: !447)
!1157 = !MDLocation(line: 774, column: 12, scope: !1158)
!1158 = distinct !MDLexicalBlock(scope: !447, file: !1, line: 774, column: 5)
!1159 = !MDLocation(line: 774, column: 10, scope: !1158)
!1160 = !MDLocation(line: 774, column: 17, scope: !1161)
!1161 = !MDLexicalBlockFile(scope: !1162, file: !1, discriminator: 2)
!1162 = !MDLexicalBlockFile(scope: !1163, file: !1, discriminator: 1)
!1163 = distinct !MDLexicalBlock(scope: !1158, file: !1, line: 774, column: 5)
!1164 = !MDLocation(line: 774, column: 28, scope: !1163)
!1165 = !MDLocation(line: 774, column: 30, scope: !1163)
!1166 = !MDLocation(line: 774, column: 24, scope: !1163)
!1167 = !MDLocation(line: 774, column: 19, scope: !1163)
!1168 = !MDLocation(line: 774, column: 5, scope: !1158)
!1169 = !MDLocation(line: 775, column: 42, scope: !1163)
!1170 = !MDLocation(line: 775, column: 34, scope: !1163)
!1171 = !MDLocation(line: 775, column: 46, scope: !1163)
!1172 = !MDLocation(line: 775, column: 66, scope: !1162)
!1173 = !MDLocation(line: 775, column: 53, scope: !1163)
!1174 = !MDLocation(line: 775, column: 46, scope: !1175)
!1175 = !MDLexicalBlockFile(scope: !1163, file: !1, discriminator: 2)
!1176 = !MDLocation(line: 775, column: 7, scope: !1177)
!1177 = !MDLexicalBlockFile(scope: !1178, file: !1, discriminator: 4)
!1178 = !MDLexicalBlockFile(scope: !1163, file: !1, discriminator: 3)
!1179 = !MDLocation(line: 774, column: 38, scope: !1163)
!1180 = !MDLocation(line: 774, column: 5, scope: !1163)
!1181 = !MDLocation(line: 776, column: 32, scope: !447)
!1182 = !MDLocation(line: 776, column: 40, scope: !447)
!1183 = !MDLocation(line: 776, column: 47, scope: !469)
!1184 = !MDLocation(line: 776, column: 40, scope: !473)
!1185 = !MDLocation(line: 776, column: 5, scope: !475)
!1186 = !MDLocation(line: 780, column: 8, scope: !1187)
!1187 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 780, column: 8)
!1188 = !MDLocation(line: 780, column: 24, scope: !1187)
!1189 = !MDLocation(line: 780, column: 27, scope: !1190)
!1190 = !MDLexicalBlockFile(scope: !1187, file: !1, discriminator: 1)
!1191 = !MDLocation(line: 780, column: 8, scope: !10)
!1192 = !MDLocation(line: 782, column: 12, scope: !1193)
!1193 = distinct !MDLexicalBlock(scope: !1194, file: !1, line: 782, column: 12)
!1194 = distinct !MDLexicalBlock(scope: !1187, file: !1, line: 781, column: 5)
!1195 = !MDLocation(line: 782, column: 12, scope: !1194)
!1196 = !MDLocation(line: 783, column: 28, scope: !1193)
!1197 = !MDLocation(line: 783, column: 32, scope: !1193)
!1198 = !MDLocation(line: 783, column: 36, scope: !1193)
!1199 = !MDLocation(line: 783, column: 43, scope: !1193)
!1200 = !MDLocation(line: 783, column: 9, scope: !1193)
!1201 = !MDLocation(line: 784, column: 23, scope: !1194)
!1202 = !MDLocation(line: 784, column: 27, scope: !1194)
!1203 = !MDLocation(line: 784, column: 31, scope: !1194)
!1204 = !MDLocation(line: 784, column: 38, scope: !1194)
!1205 = !MDLocation(line: 784, column: 42, scope: !1194)
!1206 = !MDLocation(line: 784, column: 7, scope: !1194)
!1207 = !MDLocation(line: 785, column: 15, scope: !1194)
!1208 = !MDLocation(line: 785, column: 13, scope: !1194)
!1209 = !MDLocation(line: 786, column: 15, scope: !1194)
!1210 = !MDLocation(line: 786, column: 13, scope: !1194)
!1211 = !MDLocation(line: 787, column: 7, scope: !1194)
!1212 = !MDLocation(line: 787, column: 7, scope: !1213)
!1213 = !MDLexicalBlockFile(scope: !1214, file: !1, discriminator: 1)
!1214 = distinct !MDLexicalBlock(scope: !1194, file: !1, line: 787, column: 7)
!1215 = !MDLocation(line: 787, column: 7, scope: !1216)
!1216 = !MDLexicalBlockFile(scope: !1217, file: !1, discriminator: 8)
!1217 = !MDLexicalBlockFile(scope: !1214, file: !1, discriminator: 2)
!1218 = !MDLocation(line: 787, column: 7, scope: !1219)
!1219 = !MDLexicalBlockFile(scope: !1220, file: !1, discriminator: 3)
!1220 = distinct !MDLexicalBlock(scope: !1221, file: !1, line: 787, column: 7)
!1221 = distinct !MDLexicalBlock(scope: !1214, file: !1, line: 787, column: 7)
!1222 = !MDLocation(line: 787, column: 7, scope: !1221)
!1223 = !MDLocation(line: 787, column: 7, scope: !1224)
!1224 = !MDLexicalBlockFile(scope: !1220, file: !1, discriminator: 5)
!1225 = !MDLocation(line: 787, column: 7, scope: !1226)
!1226 = !MDLexicalBlockFile(scope: !1221, file: !1, discriminator: 6)
!1227 = !MDLocation(line: 787, column: 7, scope: !1214)
!1228 = !MDLocation(line: 787, column: 7, scope: !1229)
!1229 = !MDLexicalBlockFile(scope: !1230, file: !1, discriminator: 7)
!1230 = !MDLexicalBlockFile(scope: !1214, file: !1, discriminator: 4)
!1231 = !MDLocation(line: 788, column: 5, scope: !1194)
!1232 = !MDLocation(line: 789, column: 3, scope: !10)
!1233 = !MDLocation(line: 789, column: 3, scope: !186)
!1234 = !MDLocation(line: 789, column: 3, scope: !188)
!1235 = !MDLocation(line: 790, column: 17, scope: !10)
!1236 = !MDLocation(line: 790, column: 3, scope: !10)
!1237 = !MDLocation(line: 790, column: 8, scope: !10)
!1238 = !MDLocation(line: 790, column: 15, scope: !10)
!1239 = !MDLocation(line: 791, column: 15, scope: !10)
!1240 = !MDLocation(line: 791, column: 3, scope: !10)
!1241 = !MDLocation(line: 791, column: 8, scope: !10)
!1242 = !MDLocation(line: 791, column: 13, scope: !10)
!1243 = !MDLocation(line: 794, column: 7, scope: !1244)
!1244 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 794, column: 7)
!1245 = !MDLocation(line: 794, column: 7, scope: !10)
!1246 = !MDLocation(line: 795, column: 32, scope: !1244)
!1247 = !MDLocation(line: 795, column: 43, scope: !1244)
!1248 = !MDLocation(line: 795, column: 5, scope: !1244)
!1249 = !MDLocation(line: 796, column: 7, scope: !1250)
!1250 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 796, column: 7)
!1251 = !MDLocation(line: 796, column: 7, scope: !10)
!1252 = !MDLocation(line: 797, column: 32, scope: !1250)
!1253 = !MDLocation(line: 797, column: 43, scope: !1250)
!1254 = !MDLocation(line: 797, column: 5, scope: !1250)
!1255 = !MDLocation(line: 798, column: 7, scope: !1256)
!1256 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 798, column: 7)
!1257 = !MDLocation(line: 798, column: 7, scope: !10)
!1258 = !MDLocation(line: 799, column: 32, scope: !1256)
!1259 = !MDLocation(line: 799, column: 43, scope: !1256)
!1260 = !MDLocation(line: 799, column: 5, scope: !1256)
!1261 = !MDLocation(line: 800, column: 7, scope: !1262)
!1262 = distinct !MDLexicalBlock(scope: !10, file: !1, line: 800, column: 7)
!1263 = !MDLocation(line: 800, column: 7, scope: !10)
!1264 = !MDLocation(line: 801, column: 32, scope: !1262)
!1265 = !MDLocation(line: 801, column: 43, scope: !1262)
!1266 = !MDLocation(line: 801, column: 5, scope: !1262)
!1267 = !MDLocation(line: 802, column: 1, scope: !10)
!1268 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "xp", arg: 1, scope: !27, file: !1, line: 365, type: !30)
!1269 = !MDLocation(line: 365, column: 20, scope: !27)
!1270 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "xsize_p", arg: 2, scope: !27, file: !1, line: 365, type: !31)
!1271 = !MDLocation(line: 365, column: 36, scope: !27)
!1272 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "rp", arg: 3, scope: !27, file: !1, line: 366, type: !30)
!1273 = !MDLocation(line: 366, column: 20, scope: !27)
!1274 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "rsize", arg: 4, scope: !27, file: !1, line: 366, type: !7)
!1275 = !MDLocation(line: 366, column: 35, scope: !27)
!1276 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sp", arg: 5, scope: !27, file: !1, line: 367, type: !30)
!1277 = !MDLocation(line: 367, column: 20, scope: !27)
!1278 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ssize", arg: 6, scope: !27, file: !1, line: 367, type: !7)
!1279 = !MDLocation(line: 367, column: 35, scope: !27)
!1280 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mp", arg: 7, scope: !27, file: !1, line: 368, type: !30)
!1281 = !MDLocation(line: 368, column: 20, scope: !27)
!1282 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "msize", arg: 8, scope: !27, file: !1, line: 368, type: !7)
!1283 = !MDLocation(line: 368, column: 35, scope: !27)
!1284 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "karactx_p", arg: 9, scope: !27, file: !1, line: 369, type: !32)
!1285 = !MDLocation(line: 369, column: 32, scope: !27)
!1286 = !MDLocation(line: 371, column: 7, scope: !1287)
!1287 = distinct !MDLexicalBlock(scope: !27, file: !1, line: 371, column: 7)
!1288 = !MDLocation(line: 371, column: 13, scope: !1287)
!1289 = !MDLocation(line: 371, column: 7, scope: !27)
!1290 = !MDLocation(line: 372, column: 22, scope: !1287)
!1291 = !MDLocation(line: 372, column: 26, scope: !1287)
!1292 = !MDLocation(line: 372, column: 30, scope: !1287)
!1293 = !MDLocation(line: 372, column: 37, scope: !1287)
!1294 = !MDLocation(line: 372, column: 41, scope: !1287)
!1295 = !MDLocation(line: 372, column: 5, scope: !1287)
!1296 = !MDLocation(line: 374, column: 36, scope: !1287)
!1297 = !MDLocation(line: 374, column: 40, scope: !1287)
!1298 = !MDLocation(line: 374, column: 44, scope: !1287)
!1299 = !MDLocation(line: 374, column: 51, scope: !1287)
!1300 = !MDLocation(line: 374, column: 55, scope: !1287)
!1301 = !MDLocation(line: 374, column: 62, scope: !1287)
!1302 = !MDLocation(line: 374, column: 5, scope: !1287)
!1303 = !MDLocation(line: 376, column: 8, scope: !1304)
!1304 = distinct !MDLexicalBlock(scope: !27, file: !1, line: 376, column: 8)
!1305 = !MDLocation(line: 376, column: 16, scope: !1304)
!1306 = !MDLocation(line: 376, column: 14, scope: !1304)
!1307 = !MDLocation(line: 376, column: 24, scope: !1304)
!1308 = !MDLocation(line: 376, column: 22, scope: !1304)
!1309 = !MDLocation(line: 376, column: 8, scope: !27)
!1310 = !MDLocation(line: 378, column: 26, scope: !1311)
!1311 = distinct !MDLexicalBlock(scope: !1304, file: !1, line: 377, column: 5)
!1312 = !MDLocation(line: 378, column: 31, scope: !1311)
!1313 = !MDLocation(line: 378, column: 29, scope: !1311)
!1314 = !MDLocation(line: 378, column: 41, scope: !1311)
!1315 = !MDLocation(line: 378, column: 45, scope: !1311)
!1316 = !MDLocation(line: 378, column: 53, scope: !1311)
!1317 = !MDLocation(line: 378, column: 51, scope: !1311)
!1318 = !MDLocation(line: 378, column: 60, scope: !1311)
!1319 = !MDLocation(line: 378, column: 64, scope: !1311)
!1320 = !MDLocation(line: 378, column: 7, scope: !1311)
!1321 = !MDLocation(line: 379, column: 18, scope: !1311)
!1322 = !MDLocation(line: 379, column: 8, scope: !1311)
!1323 = !MDLocation(line: 379, column: 16, scope: !1311)
!1324 = !MDLocation(line: 380, column: 5, scope: !1311)
!1325 = !MDLocation(line: 382, column: 17, scope: !1304)
!1326 = !MDLocation(line: 382, column: 25, scope: !1304)
!1327 = !MDLocation(line: 382, column: 23, scope: !1304)
!1328 = !MDLocation(line: 382, column: 7, scope: !1304)
!1329 = !MDLocation(line: 382, column: 15, scope: !1304)
!1330 = !MDLocation(line: 383, column: 1, scope: !27)
