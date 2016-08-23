; ModuleID = 'rsa.bc'
target datalayout = "e-m:o-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-apple-macosx10.11.0"

%struct.mbedtls_rsa_context = type { i32, i64, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, %struct.mbedtls_mpi, i32, i32 }
%struct.mbedtls_mpi = type { i32, i64, i64* }
%struct.mbedtls_md_info_t = type opaque
%struct.mbedtls_md_context_t = type { %struct.mbedtls_md_info_t*, i8*, i8* }
%struct.mbedtls_asn1_buf = type { i32, i64, i8* }

@.str = private unnamed_addr constant [257 x i8] c"9292758453063D803DD603D5E777D7888ED1D5BF35786190FA2F23EBC0848AEADDA92CA6C3D80B32C4D109BE0F36D6AE7130B9CED7ACDF54CFC7555AC14EEBAB93A89813FBF3C4F8066D2D800F7C38A81AE31942917403FF4946B0A83D3D3E05EE57C6F5F5606FB5D4BC6CD34EE0801A5E94BB77B07507233A0BC7BAC8F90F79\00", align 1
@.str1 = private unnamed_addr constant [6 x i8] c"10001\00", align 1
@.str2 = private unnamed_addr constant [257 x i8] c"24BF6185468786FDD303083D25E64EFC66CA472BC44D253102F8B4A9D3BFA75091386C0077937FE33FA3252D28855837AE1B484A8A9A45F7EE8C0C634F99E8CDDF79C5CE07EE72C7F123142198164234CABB724CF78B8173B9F880FC86322407AF1FEDFDDE2BEB674CA15F3E81A1521E071513A1E85B5DFA031F21ECAE91A34D\00", align 1
@.str3 = private unnamed_addr constant [129 x i8] c"C36D0EB7FCD285223CFB5AABA5BDA3D82C01CAD19EA484A87EA4377637E75500FCB2005C5C7DD6EC4AC023CDA285D796C3D9E75E1EFC42488BB4F1D13AC30A57\00", align 1
@.str4 = private unnamed_addr constant [129 x i8] c"C000DF51A7C77AE8D7C7370C1FF55B69E211C2B9E5DB1ED0BF61D0D9899620F4910E4168387E3C30AA1E00C339A795088452DD96A9A5EA5D9DCA68DA636032AF\00", align 1
@.str5 = private unnamed_addr constant [129 x i8] c"C1ACF567564274FB07A0BBAD5D26E2983C94D22288ACD763FD8E5600ED4A702DF84198A5F06C2E72236AE490C93F07F83CC559CD27BC2D1CA488811730BB5725\00", align 1
@.str6 = private unnamed_addr constant [129 x i8] c"4959CBF6F8FEF750AEE6977C155579C7D8AAEA56749EA28623272E4F7D0592AF7C1F1313CAC9471B5C523BFE592F517B407A1BD76C164B93DA2D32A383E58357\00", align 1
@.str7 = private unnamed_addr constant [129 x i8] c"9AE7FBC99546432DF71896FC239EADAEF38D18D2B2F0E2DD275AA977E2BF4411F5A3B2A5D33605AEBBCCBA7FEB9F2D2FA74206CEC169D74BF5A8C50D6F48EA08\00", align 1
@.str8 = private unnamed_addr constant [23 x i8] c"  RSA key validation: \00", align 1
@.str9 = private unnamed_addr constant [8 x i8] c"failed\0A\00", align 1
@.str10 = private unnamed_addr constant [30 x i8] c"passed\0A  PKCS#1 encryption : \00", align 1
@.str11 = private unnamed_addr constant [25 x i8] c"\AA\BB\CC\03\02\01\00\FF\FF\FF\FF\FF\11\223\0A\0B\0C\CC\DD\DD\DD\DD\DD\00", align 1
@.str12 = private unnamed_addr constant [30 x i8] c"passed\0A  PKCS#1 decryption : \00", align 1
@.str13 = private unnamed_addr constant [8 x i8] c"passed\0A\00", align 1
@.str14 = private unnamed_addr constant [21 x i8] c"PKCS#1 data sign  : \00", align 1
@.str15 = private unnamed_addr constant [30 x i8] c"passed\0A  PKCS#1 sig. verify: \00", align 1
@.str16 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1

; Function Attrs: nounwind ssp uwtable
define void @mbedtls_rsa_init(%struct.mbedtls_rsa_context* %ctx, i32 %padding, i32 %hash_id) #0 {
entry:
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %padding.addr = alloca i32, align 4
  %hash_id.addr = alloca i32, align 4
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !148, metadata !149), !dbg !150
  store i32 %padding, i32* %padding.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %padding.addr, metadata !151, metadata !149), !dbg !152
  store i32 %hash_id, i32* %hash_id.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hash_id.addr, metadata !153, metadata !149), !dbg !154
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !155
  %1 = bitcast %struct.mbedtls_rsa_context* %0 to i8*, !dbg !155
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !155
  %3 = bitcast %struct.mbedtls_rsa_context* %2 to i8*, !dbg !155
  %4 = call i64 @llvm.objectsize.i64.p0i8(i8* %3, i1 false), !dbg !155
  %call = call i8* @__memset_chk(i8* %1, i32 0, i64 336, i64 %4) #4, !dbg !155
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !156
  %6 = load i32, i32* %padding.addr, align 4, !dbg !157
  %7 = load i32, i32* %hash_id.addr, align 4, !dbg !158
  call void @mbedtls_rsa_set_padding(%struct.mbedtls_rsa_context* %5, i32 %6, i32 %7), !dbg !159
  ret void, !dbg !160
}

; Function Attrs: nounwind readnone
declare void @llvm.dbg.declare(metadata, metadata, metadata) #1

; Function Attrs: nounwind
declare i8* @__memset_chk(i8*, i32, i64, i64) #2

; Function Attrs: nounwind readnone
declare i64 @llvm.objectsize.i64.p0i8(i8*, i1) #1

; Function Attrs: nounwind ssp uwtable
define void @mbedtls_rsa_set_padding(%struct.mbedtls_rsa_context* %ctx, i32 %padding, i32 %hash_id) #0 {
entry:
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %padding.addr = alloca i32, align 4
  %hash_id.addr = alloca i32, align 4
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !161, metadata !149), !dbg !162
  store i32 %padding, i32* %padding.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %padding.addr, metadata !163, metadata !149), !dbg !164
  store i32 %hash_id, i32* %hash_id.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hash_id.addr, metadata !165, metadata !149), !dbg !166
  %0 = load i32, i32* %padding.addr, align 4, !dbg !167
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !168
  %padding1 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 15, !dbg !169
  store i32 %0, i32* %padding1, align 4, !dbg !170
  %2 = load i32, i32* %hash_id.addr, align 4, !dbg !171
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !172
  %hash_id2 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 16, !dbg !173
  store i32 %2, i32* %hash_id2, align 4, !dbg !174
  ret void, !dbg !175
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_gen_key(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %nbits, i32 %exponent) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %nbits.addr = alloca i32, align 4
  %exponent.addr = alloca i32, align 4
  %ret = alloca i32, align 4
  %P1 = alloca %struct.mbedtls_mpi, align 8
  %Q1 = alloca %struct.mbedtls_mpi, align 8
  %H = alloca %struct.mbedtls_mpi, align 8
  %G = alloca %struct.mbedtls_mpi, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !176, metadata !149), !dbg !177
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !178, metadata !149), !dbg !179
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !180, metadata !149), !dbg !181
  store i32 %nbits, i32* %nbits.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %nbits.addr, metadata !182, metadata !149), !dbg !183
  store i32 %exponent, i32* %exponent.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %exponent.addr, metadata !184, metadata !149), !dbg !185
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !186, metadata !149), !dbg !187
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %P1, metadata !188, metadata !149), !dbg !189
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %Q1, metadata !190, metadata !149), !dbg !191
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %H, metadata !192, metadata !149), !dbg !193
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %G, metadata !194, metadata !149), !dbg !195
  %0 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !196
  %cmp = icmp eq i32 (i8*, i8*, i64)* %0, null, !dbg !198
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !199

lor.lhs.false:                                    ; preds = %entry
  %1 = load i32, i32* %nbits.addr, align 4, !dbg !200
  %cmp1 = icmp ult i32 %1, 128, !dbg !201
  br i1 %cmp1, label %if.then, label %lor.lhs.false2, !dbg !202

lor.lhs.false2:                                   ; preds = %lor.lhs.false
  %2 = load i32, i32* %exponent.addr, align 4, !dbg !203
  %cmp3 = icmp slt i32 %2, 3, !dbg !204
  br i1 %cmp3, label %if.then, label %if.end, !dbg !205

if.then:                                          ; preds = %lor.lhs.false2, %lor.lhs.false, %entry
  store i32 -16512, i32* %retval, !dbg !206
  br label %return, !dbg !206

if.end:                                           ; preds = %lor.lhs.false2
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %P1), !dbg !207
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %Q1), !dbg !208
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %H), !dbg !209
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %G), !dbg !210
  br label %do.body, !dbg !211

do.body:                                          ; preds = %if.end
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !212
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 3, !dbg !212
  %4 = load i32, i32* %exponent.addr, align 4, !dbg !212
  %conv = sext i32 %4 to i64, !dbg !212
  %call = call i32 @mbedtls_mpi_lset(%struct.mbedtls_mpi* %E, i64 %conv), !dbg !212
  store i32 %call, i32* %ret, align 4, !dbg !212
  %cmp4 = icmp ne i32 %call, 0, !dbg !212
  br i1 %cmp4, label %if.then6, label %if.end7, !dbg !215

if.then6:                                         ; preds = %do.body
  br label %cleanup, !dbg !212

if.end7:                                          ; preds = %do.body
  br label %do.end, !dbg !215

do.end:                                           ; preds = %if.end7
  br label %do.body8, !dbg !216

do.body8:                                         ; preds = %do.cond, %do.end
  br label %do.body9, !dbg !217

do.body9:                                         ; preds = %do.body8
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !219
  %P = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 5, !dbg !219
  %6 = load i32, i32* %nbits.addr, align 4, !dbg !219
  %add = add i32 %6, 1, !dbg !219
  %shr = lshr i32 %add, 1, !dbg !219
  %conv10 = zext i32 %shr to i64, !dbg !219
  %7 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !219
  %8 = load i8*, i8** %p_rng.addr, align 8, !dbg !219
  %call11 = call i32 @mbedtls_mpi_gen_prime(%struct.mbedtls_mpi* %P, i64 %conv10, i32 0, i32 (i8*, i8*, i64)* %7, i8* %8), !dbg !219
  store i32 %call11, i32* %ret, align 4, !dbg !219
  %cmp12 = icmp ne i32 %call11, 0, !dbg !219
  br i1 %cmp12, label %if.then14, label %if.end15, !dbg !222

if.then14:                                        ; preds = %do.body9
  br label %cleanup, !dbg !219

if.end15:                                         ; preds = %do.body9
  br label %do.end16, !dbg !222

do.end16:                                         ; preds = %if.end15
  br label %do.body17, !dbg !223

do.body17:                                        ; preds = %do.end16
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !224
  %Q = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %9, i32 0, i32 6, !dbg !224
  %10 = load i32, i32* %nbits.addr, align 4, !dbg !224
  %add18 = add i32 %10, 1, !dbg !224
  %shr19 = lshr i32 %add18, 1, !dbg !224
  %conv20 = zext i32 %shr19 to i64, !dbg !224
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !224
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !224
  %call21 = call i32 @mbedtls_mpi_gen_prime(%struct.mbedtls_mpi* %Q, i64 %conv20, i32 0, i32 (i8*, i8*, i64)* %11, i8* %12), !dbg !224
  store i32 %call21, i32* %ret, align 4, !dbg !224
  %cmp22 = icmp ne i32 %call21, 0, !dbg !224
  br i1 %cmp22, label %if.then24, label %if.end25, !dbg !227

if.then24:                                        ; preds = %do.body17
  br label %cleanup, !dbg !224

if.end25:                                         ; preds = %do.body17
  br label %do.end26, !dbg !227

do.end26:                                         ; preds = %if.end25
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !228
  %P27 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %13, i32 0, i32 5, !dbg !230
  %14 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !231
  %Q28 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %14, i32 0, i32 6, !dbg !232
  %call29 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %P27, %struct.mbedtls_mpi* %Q28), !dbg !233
  %cmp30 = icmp slt i32 %call29, 0, !dbg !234
  br i1 %cmp30, label %if.then32, label %if.end35, !dbg !235

if.then32:                                        ; preds = %do.end26
  %15 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !236
  %P33 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %15, i32 0, i32 5, !dbg !237
  %16 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !238
  %Q34 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %16, i32 0, i32 6, !dbg !239
  call void @mbedtls_mpi_swap(%struct.mbedtls_mpi* %P33, %struct.mbedtls_mpi* %Q34), !dbg !240
  br label %if.end35, !dbg !240

if.end35:                                         ; preds = %if.then32, %do.end26
  %17 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !241
  %P36 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %17, i32 0, i32 5, !dbg !243
  %18 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !244
  %Q37 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %18, i32 0, i32 6, !dbg !245
  %call38 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %P36, %struct.mbedtls_mpi* %Q37), !dbg !246
  %cmp39 = icmp eq i32 %call38, 0, !dbg !247
  br i1 %cmp39, label %if.then41, label %if.end42, !dbg !248

if.then41:                                        ; preds = %if.end35
  br label %do.cond, !dbg !249

if.end42:                                         ; preds = %if.end35
  br label %do.body43, !dbg !250

do.body43:                                        ; preds = %if.end42
  %19 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !251
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %19, i32 0, i32 2, !dbg !251
  %20 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !251
  %P44 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %20, i32 0, i32 5, !dbg !251
  %21 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !251
  %Q45 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %21, i32 0, i32 6, !dbg !251
  %call46 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %N, %struct.mbedtls_mpi* %P44, %struct.mbedtls_mpi* %Q45), !dbg !251
  store i32 %call46, i32* %ret, align 4, !dbg !251
  %cmp47 = icmp ne i32 %call46, 0, !dbg !251
  br i1 %cmp47, label %if.then49, label %if.end50, !dbg !254

if.then49:                                        ; preds = %do.body43
  br label %cleanup, !dbg !251

if.end50:                                         ; preds = %do.body43
  br label %do.end51, !dbg !254

do.end51:                                         ; preds = %if.end50
  %22 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !255
  %N52 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %22, i32 0, i32 2, !dbg !257
  %call53 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N52), !dbg !258
  %23 = load i32, i32* %nbits.addr, align 4, !dbg !259
  %conv54 = zext i32 %23 to i64, !dbg !259
  %cmp55 = icmp ne i64 %call53, %conv54, !dbg !260
  br i1 %cmp55, label %if.then57, label %if.end58, !dbg !261

if.then57:                                        ; preds = %do.end51
  br label %do.cond, !dbg !262

if.end58:                                         ; preds = %do.end51
  br label %do.body59, !dbg !263

do.body59:                                        ; preds = %if.end58
  %24 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !264
  %P60 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %24, i32 0, i32 5, !dbg !264
  %call61 = call i32 @mbedtls_mpi_sub_int(%struct.mbedtls_mpi* %P1, %struct.mbedtls_mpi* %P60, i64 1), !dbg !264
  store i32 %call61, i32* %ret, align 4, !dbg !264
  %cmp62 = icmp ne i32 %call61, 0, !dbg !264
  br i1 %cmp62, label %if.then64, label %if.end65, !dbg !267

if.then64:                                        ; preds = %do.body59
  br label %cleanup, !dbg !264

if.end65:                                         ; preds = %do.body59
  br label %do.end66, !dbg !267

do.end66:                                         ; preds = %if.end65
  br label %do.body67, !dbg !268

do.body67:                                        ; preds = %do.end66
  %25 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !269
  %Q68 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %25, i32 0, i32 6, !dbg !269
  %call69 = call i32 @mbedtls_mpi_sub_int(%struct.mbedtls_mpi* %Q1, %struct.mbedtls_mpi* %Q68, i64 1), !dbg !269
  store i32 %call69, i32* %ret, align 4, !dbg !269
  %cmp70 = icmp ne i32 %call69, 0, !dbg !269
  br i1 %cmp70, label %if.then72, label %if.end73, !dbg !272

if.then72:                                        ; preds = %do.body67
  br label %cleanup, !dbg !269

if.end73:                                         ; preds = %do.body67
  br label %do.end74, !dbg !272

do.end74:                                         ; preds = %if.end73
  br label %do.body75, !dbg !273

do.body75:                                        ; preds = %do.end74
  %call76 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %H, %struct.mbedtls_mpi* %P1, %struct.mbedtls_mpi* %Q1), !dbg !274
  store i32 %call76, i32* %ret, align 4, !dbg !274
  %cmp77 = icmp ne i32 %call76, 0, !dbg !274
  br i1 %cmp77, label %if.then79, label %if.end80, !dbg !277

if.then79:                                        ; preds = %do.body75
  br label %cleanup, !dbg !274

if.end80:                                         ; preds = %do.body75
  br label %do.end81, !dbg !277

do.end81:                                         ; preds = %if.end80
  br label %do.body82, !dbg !278

do.body82:                                        ; preds = %do.end81
  %26 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !279
  %E83 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %26, i32 0, i32 3, !dbg !279
  %call84 = call i32 @mbedtls_mpi_gcd(%struct.mbedtls_mpi* %G, %struct.mbedtls_mpi* %E83, %struct.mbedtls_mpi* %H), !dbg !279
  store i32 %call84, i32* %ret, align 4, !dbg !279
  %cmp85 = icmp ne i32 %call84, 0, !dbg !279
  br i1 %cmp85, label %if.then87, label %if.end88, !dbg !282

if.then87:                                        ; preds = %do.body82
  br label %cleanup, !dbg !279

if.end88:                                         ; preds = %do.body82
  br label %do.end89, !dbg !282

do.end89:                                         ; preds = %if.end88
  br label %do.cond, !dbg !283

do.cond:                                          ; preds = %do.end89, %if.then57, %if.then41
  %call90 = call i32 @mbedtls_mpi_cmp_int(%struct.mbedtls_mpi* %G, i64 1), !dbg !284
  %cmp91 = icmp ne i32 %call90, 0, !dbg !285
  br i1 %cmp91, label %do.body8, label %do.end93, !dbg !283

do.end93:                                         ; preds = %do.cond
  br label %do.body94, !dbg !286

do.body94:                                        ; preds = %do.end93
  %27 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !287
  %D = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %27, i32 0, i32 4, !dbg !287
  %28 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !287
  %E95 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %28, i32 0, i32 3, !dbg !287
  %call96 = call i32 @mbedtls_mpi_inv_mod(%struct.mbedtls_mpi* %D, %struct.mbedtls_mpi* %E95, %struct.mbedtls_mpi* %H), !dbg !287
  store i32 %call96, i32* %ret, align 4, !dbg !287
  %cmp97 = icmp ne i32 %call96, 0, !dbg !287
  br i1 %cmp97, label %if.then99, label %if.end100, !dbg !290

if.then99:                                        ; preds = %do.body94
  br label %cleanup, !dbg !287

if.end100:                                        ; preds = %do.body94
  br label %do.end102, !dbg !290

do.end102:                                        ; preds = %if.end100
  br label %do.body103, !dbg !291

do.body103:                                       ; preds = %do.end102
  %29 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !292
  %DP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %29, i32 0, i32 7, !dbg !292
  %30 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !292
  %D104 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %30, i32 0, i32 4, !dbg !292
  %call105 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %DP, %struct.mbedtls_mpi* %D104, %struct.mbedtls_mpi* %P1), !dbg !292
  store i32 %call105, i32* %ret, align 4, !dbg !292
  %cmp106 = icmp ne i32 %call105, 0, !dbg !292
  br i1 %cmp106, label %if.then108, label %if.end109, !dbg !295

if.then108:                                       ; preds = %do.body103
  br label %cleanup, !dbg !292

if.end109:                                        ; preds = %do.body103
  br label %do.end111, !dbg !295

do.end111:                                        ; preds = %if.end109
  br label %do.body112, !dbg !296

do.body112:                                       ; preds = %do.end111
  %31 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !297
  %DQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %31, i32 0, i32 8, !dbg !297
  %32 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !297
  %D113 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %32, i32 0, i32 4, !dbg !297
  %call114 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %DQ, %struct.mbedtls_mpi* %D113, %struct.mbedtls_mpi* %Q1), !dbg !297
  store i32 %call114, i32* %ret, align 4, !dbg !297
  %cmp115 = icmp ne i32 %call114, 0, !dbg !297
  br i1 %cmp115, label %if.then117, label %if.end118, !dbg !300

if.then117:                                       ; preds = %do.body112
  br label %cleanup, !dbg !297

if.end118:                                        ; preds = %do.body112
  br label %do.end120, !dbg !300

do.end120:                                        ; preds = %if.end118
  br label %do.body121, !dbg !301

do.body121:                                       ; preds = %do.end120
  %33 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !302
  %QP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %33, i32 0, i32 9, !dbg !302
  %34 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !302
  %Q122 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %34, i32 0, i32 6, !dbg !302
  %35 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !302
  %P123 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %35, i32 0, i32 5, !dbg !302
  %call124 = call i32 @mbedtls_mpi_inv_mod(%struct.mbedtls_mpi* %QP, %struct.mbedtls_mpi* %Q122, %struct.mbedtls_mpi* %P123), !dbg !302
  store i32 %call124, i32* %ret, align 4, !dbg !302
  %cmp125 = icmp ne i32 %call124, 0, !dbg !302
  br i1 %cmp125, label %if.then127, label %if.end128, !dbg !305

if.then127:                                       ; preds = %do.body121
  br label %cleanup, !dbg !302

if.end128:                                        ; preds = %do.body121
  br label %do.end130, !dbg !305

do.end130:                                        ; preds = %if.end128
  %36 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !306
  %N131 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %36, i32 0, i32 2, !dbg !307
  %call132 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N131), !dbg !308
  %add133 = add i64 %call132, 7, !dbg !309
  %shr134 = lshr i64 %add133, 3, !dbg !310
  %37 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !311
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %37, i32 0, i32 1, !dbg !312
  store i64 %shr134, i64* %len, align 8, !dbg !313
  br label %cleanup, !dbg !311

cleanup:                                          ; preds = %do.end130, %if.then127, %if.then117, %if.then108, %if.then99, %if.then87, %if.then79, %if.then72, %if.then64, %if.then49, %if.then24, %if.then14, %if.then6
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %P1), !dbg !314
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %Q1), !dbg !315
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %H), !dbg !316
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %G), !dbg !317
  %38 = load i32, i32* %ret, align 4, !dbg !318
  %cmp135 = icmp ne i32 %38, 0, !dbg !320
  br i1 %cmp135, label %if.then137, label %if.end139, !dbg !321

if.then137:                                       ; preds = %cleanup
  %39 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !322
  call void @mbedtls_rsa_free(%struct.mbedtls_rsa_context* %39), !dbg !324
  %40 = load i32, i32* %ret, align 4, !dbg !325
  %add138 = add nsw i32 -16768, %40, !dbg !326
  store i32 %add138, i32* %retval, !dbg !327
  br label %return, !dbg !327

if.end139:                                        ; preds = %cleanup
  store i32 0, i32* %retval, !dbg !328
  br label %return, !dbg !328

return:                                           ; preds = %if.end139, %if.then137, %if.then
  %41 = load i32, i32* %retval, !dbg !329
  ret i32 %41, !dbg !329
}

declare void @mbedtls_mpi_init(%struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_lset(%struct.mbedtls_mpi*, i64) #3

declare i32 @mbedtls_mpi_gen_prime(%struct.mbedtls_mpi*, i64, i32, i32 (i8*, i8*, i64)*, i8*) #3

declare i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare void @mbedtls_mpi_swap(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_sub_int(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, i64) #3

declare i32 @mbedtls_mpi_gcd(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_cmp_int(%struct.mbedtls_mpi*, i64) #3

declare i32 @mbedtls_mpi_inv_mod(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare void @mbedtls_mpi_free(%struct.mbedtls_mpi*) #3

; Function Attrs: nounwind ssp uwtable
define void @mbedtls_rsa_free(%struct.mbedtls_rsa_context* %ctx) #0 {
entry:
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !330, metadata !149), !dbg !331
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !332
  %Vi = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 13, !dbg !333
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %Vi), !dbg !334
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !335
  %Vf = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 14, !dbg !336
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %Vf), !dbg !337
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !338
  %RQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 12, !dbg !339
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %RQ), !dbg !340
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !341
  %RP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 11, !dbg !342
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %RP), !dbg !343
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !344
  %RN = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 10, !dbg !345
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %RN), !dbg !346
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !347
  %QP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 9, !dbg !348
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %QP), !dbg !349
  %6 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !350
  %DQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %6, i32 0, i32 8, !dbg !351
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %DQ), !dbg !352
  %7 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !353
  %DP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %7, i32 0, i32 7, !dbg !354
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %DP), !dbg !355
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !356
  %Q = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 6, !dbg !357
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %Q), !dbg !358
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !359
  %P = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %9, i32 0, i32 5, !dbg !360
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %P), !dbg !361
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !362
  %D = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %10, i32 0, i32 4, !dbg !363
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %D), !dbg !364
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !365
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 3, !dbg !366
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %E), !dbg !367
  %12 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !368
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %12, i32 0, i32 2, !dbg !369
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %N), !dbg !370
  ret void, !dbg !371
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_check_pubkey(%struct.mbedtls_rsa_context* %ctx) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !372, metadata !149), !dbg !373
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !374
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 2, !dbg !376
  %p = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %N, i32 0, i32 2, !dbg !377
  %1 = load i64*, i64** %p, align 8, !dbg !377
  %tobool = icmp ne i64* %1, null, !dbg !374
  br i1 %tobool, label %lor.lhs.false, label %if.then, !dbg !378

lor.lhs.false:                                    ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !379
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 3, !dbg !380
  %p1 = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %E, i32 0, i32 2, !dbg !381
  %3 = load i64*, i64** %p1, align 8, !dbg !381
  %tobool2 = icmp ne i64* %3, null, !dbg !379
  br i1 %tobool2, label %if.end, label %if.then, !dbg !382

if.then:                                          ; preds = %lor.lhs.false, %entry
  store i32 -16896, i32* %retval, !dbg !383
  br label %return, !dbg !383

if.end:                                           ; preds = %lor.lhs.false
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !384
  %N3 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 2, !dbg !386
  %p4 = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %N3, i32 0, i32 2, !dbg !387
  %5 = load i64*, i64** %p4, align 8, !dbg !387
  %arrayidx = getelementptr inbounds i64, i64* %5, i64 0, !dbg !384
  %6 = load i64, i64* %arrayidx, align 8, !dbg !384
  %and = and i64 %6, 1, !dbg !388
  %cmp = icmp eq i64 %and, 0, !dbg !389
  br i1 %cmp, label %if.then11, label %lor.lhs.false5, !dbg !390

lor.lhs.false5:                                   ; preds = %if.end
  %7 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !391
  %E6 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %7, i32 0, i32 3, !dbg !392
  %p7 = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %E6, i32 0, i32 2, !dbg !393
  %8 = load i64*, i64** %p7, align 8, !dbg !393
  %arrayidx8 = getelementptr inbounds i64, i64* %8, i64 0, !dbg !391
  %9 = load i64, i64* %arrayidx8, align 8, !dbg !391
  %and9 = and i64 %9, 1, !dbg !394
  %cmp10 = icmp eq i64 %and9, 0, !dbg !395
  br i1 %cmp10, label %if.then11, label %if.end12, !dbg !396

if.then11:                                        ; preds = %lor.lhs.false5, %if.end
  store i32 -16896, i32* %retval, !dbg !397
  br label %return, !dbg !397

if.end12:                                         ; preds = %lor.lhs.false5
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !398
  %N13 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %10, i32 0, i32 2, !dbg !400
  %call = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N13), !dbg !401
  %cmp14 = icmp ult i64 %call, 128, !dbg !402
  br i1 %cmp14, label %if.then19, label %lor.lhs.false15, !dbg !403

lor.lhs.false15:                                  ; preds = %if.end12
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !404
  %N16 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 2, !dbg !405
  %call17 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N16), !dbg !406
  %cmp18 = icmp ugt i64 %call17, 8192, !dbg !407
  br i1 %cmp18, label %if.then19, label %if.end20, !dbg !408

if.then19:                                        ; preds = %lor.lhs.false15, %if.end12
  store i32 -16896, i32* %retval, !dbg !409
  br label %return, !dbg !409

if.end20:                                         ; preds = %lor.lhs.false15
  %12 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !410
  %E21 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %12, i32 0, i32 3, !dbg !412
  %call22 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %E21), !dbg !413
  %cmp23 = icmp ult i64 %call22, 2, !dbg !414
  br i1 %cmp23, label %if.then29, label %lor.lhs.false24, !dbg !415

lor.lhs.false24:                                  ; preds = %if.end20
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !416
  %E25 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %13, i32 0, i32 3, !dbg !417
  %14 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !418
  %N26 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %14, i32 0, i32 2, !dbg !419
  %call27 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %E25, %struct.mbedtls_mpi* %N26), !dbg !420
  %cmp28 = icmp sge i32 %call27, 0, !dbg !421
  br i1 %cmp28, label %if.then29, label %if.end30, !dbg !422

if.then29:                                        ; preds = %lor.lhs.false24, %if.end20
  store i32 -16896, i32* %retval, !dbg !423
  br label %return, !dbg !423

if.end30:                                         ; preds = %lor.lhs.false24
  store i32 0, i32* %retval, !dbg !424
  br label %return, !dbg !424

return:                                           ; preds = %if.end30, %if.then29, %if.then19, %if.then11, %if.then
  %15 = load i32, i32* %retval, !dbg !425
  ret i32 %15, !dbg !425
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_check_privkey(%struct.mbedtls_rsa_context* %ctx) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %ret = alloca i32, align 4
  %PQ = alloca %struct.mbedtls_mpi, align 8
  %DE = alloca %struct.mbedtls_mpi, align 8
  %P1 = alloca %struct.mbedtls_mpi, align 8
  %Q1 = alloca %struct.mbedtls_mpi, align 8
  %H = alloca %struct.mbedtls_mpi, align 8
  %I = alloca %struct.mbedtls_mpi, align 8
  %G = alloca %struct.mbedtls_mpi, align 8
  %G2 = alloca %struct.mbedtls_mpi, align 8
  %L1 = alloca %struct.mbedtls_mpi, align 8
  %L2 = alloca %struct.mbedtls_mpi, align 8
  %DP = alloca %struct.mbedtls_mpi, align 8
  %DQ = alloca %struct.mbedtls_mpi, align 8
  %QP = alloca %struct.mbedtls_mpi, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !426, metadata !149), !dbg !427
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !428, metadata !149), !dbg !429
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %PQ, metadata !430, metadata !149), !dbg !431
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %DE, metadata !432, metadata !149), !dbg !433
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %P1, metadata !434, metadata !149), !dbg !435
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %Q1, metadata !436, metadata !149), !dbg !437
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %H, metadata !438, metadata !149), !dbg !439
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %I, metadata !440, metadata !149), !dbg !441
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %G, metadata !442, metadata !149), !dbg !443
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %G2, metadata !444, metadata !149), !dbg !445
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %L1, metadata !446, metadata !149), !dbg !447
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %L2, metadata !448, metadata !149), !dbg !449
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %DP, metadata !450, metadata !149), !dbg !451
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %DQ, metadata !452, metadata !149), !dbg !453
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %QP, metadata !454, metadata !149), !dbg !455
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !456
  %call = call i32 @mbedtls_rsa_check_pubkey(%struct.mbedtls_rsa_context* %0), !dbg !458
  store i32 %call, i32* %ret, align 4, !dbg !459
  %cmp = icmp ne i32 %call, 0, !dbg !460
  br i1 %cmp, label %if.then, label %if.end, !dbg !461

if.then:                                          ; preds = %entry
  %1 = load i32, i32* %ret, align 4, !dbg !462
  store i32 %1, i32* %retval, !dbg !463
  br label %return, !dbg !463

if.end:                                           ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !464
  %P = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 5, !dbg !466
  %p = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %P, i32 0, i32 2, !dbg !467
  %3 = load i64*, i64** %p, align 8, !dbg !467
  %tobool = icmp ne i64* %3, null, !dbg !464
  br i1 %tobool, label %lor.lhs.false, label %if.then6, !dbg !468

lor.lhs.false:                                    ; preds = %if.end
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !469
  %Q = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 6, !dbg !470
  %p1 = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %Q, i32 0, i32 2, !dbg !471
  %5 = load i64*, i64** %p1, align 8, !dbg !471
  %tobool2 = icmp ne i64* %5, null, !dbg !469
  br i1 %tobool2, label %lor.lhs.false3, label %if.then6, !dbg !472

lor.lhs.false3:                                   ; preds = %lor.lhs.false
  %6 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !473
  %D = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %6, i32 0, i32 4, !dbg !474
  %p4 = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %D, i32 0, i32 2, !dbg !475
  %7 = load i64*, i64** %p4, align 8, !dbg !475
  %tobool5 = icmp ne i64* %7, null, !dbg !473
  br i1 %tobool5, label %if.end7, label %if.then6, !dbg !476

if.then6:                                         ; preds = %lor.lhs.false3, %lor.lhs.false, %if.end
  store i32 -16896, i32* %retval, !dbg !477
  br label %return, !dbg !477

if.end7:                                          ; preds = %lor.lhs.false3
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %PQ), !dbg !478
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %DE), !dbg !479
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %P1), !dbg !480
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %Q1), !dbg !481
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %H), !dbg !482
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %I), !dbg !483
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %G), !dbg !484
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %G2), !dbg !485
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %L1), !dbg !486
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %L2), !dbg !487
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %DP), !dbg !488
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %DQ), !dbg !489
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %QP), !dbg !490
  br label %do.body, !dbg !491

do.body:                                          ; preds = %if.end7
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !492
  %P8 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 5, !dbg !492
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !492
  %Q9 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %9, i32 0, i32 6, !dbg !492
  %call10 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %PQ, %struct.mbedtls_mpi* %P8, %struct.mbedtls_mpi* %Q9), !dbg !492
  store i32 %call10, i32* %ret, align 4, !dbg !492
  %cmp11 = icmp ne i32 %call10, 0, !dbg !492
  br i1 %cmp11, label %if.then12, label %if.end13, !dbg !495

if.then12:                                        ; preds = %do.body
  br label %cleanup, !dbg !492

if.end13:                                         ; preds = %do.body
  br label %do.end, !dbg !495

do.end:                                           ; preds = %if.end13
  br label %do.body14, !dbg !496

do.body14:                                        ; preds = %do.end
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !497
  %D15 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %10, i32 0, i32 4, !dbg !497
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !497
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 3, !dbg !497
  %call16 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %DE, %struct.mbedtls_mpi* %D15, %struct.mbedtls_mpi* %E), !dbg !497
  store i32 %call16, i32* %ret, align 4, !dbg !497
  %cmp17 = icmp ne i32 %call16, 0, !dbg !497
  br i1 %cmp17, label %if.then18, label %if.end19, !dbg !500

if.then18:                                        ; preds = %do.body14
  br label %cleanup, !dbg !497

if.end19:                                         ; preds = %do.body14
  br label %do.end20, !dbg !500

do.end20:                                         ; preds = %if.end19
  br label %do.body21, !dbg !501

do.body21:                                        ; preds = %do.end20
  %12 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !502
  %P22 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %12, i32 0, i32 5, !dbg !502
  %call23 = call i32 @mbedtls_mpi_sub_int(%struct.mbedtls_mpi* %P1, %struct.mbedtls_mpi* %P22, i64 1), !dbg !502
  store i32 %call23, i32* %ret, align 4, !dbg !502
  %cmp24 = icmp ne i32 %call23, 0, !dbg !502
  br i1 %cmp24, label %if.then25, label %if.end26, !dbg !505

if.then25:                                        ; preds = %do.body21
  br label %cleanup, !dbg !502

if.end26:                                         ; preds = %do.body21
  br label %do.end27, !dbg !505

do.end27:                                         ; preds = %if.end26
  br label %do.body28, !dbg !506

do.body28:                                        ; preds = %do.end27
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !507
  %Q29 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %13, i32 0, i32 6, !dbg !507
  %call30 = call i32 @mbedtls_mpi_sub_int(%struct.mbedtls_mpi* %Q1, %struct.mbedtls_mpi* %Q29, i64 1), !dbg !507
  store i32 %call30, i32* %ret, align 4, !dbg !507
  %cmp31 = icmp ne i32 %call30, 0, !dbg !507
  br i1 %cmp31, label %if.then32, label %if.end33, !dbg !510

if.then32:                                        ; preds = %do.body28
  br label %cleanup, !dbg !507

if.end33:                                         ; preds = %do.body28
  br label %do.end34, !dbg !510

do.end34:                                         ; preds = %if.end33
  br label %do.body35, !dbg !511

do.body35:                                        ; preds = %do.end34
  %call36 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %H, %struct.mbedtls_mpi* %P1, %struct.mbedtls_mpi* %Q1), !dbg !512
  store i32 %call36, i32* %ret, align 4, !dbg !512
  %cmp37 = icmp ne i32 %call36, 0, !dbg !512
  br i1 %cmp37, label %if.then38, label %if.end39, !dbg !515

if.then38:                                        ; preds = %do.body35
  br label %cleanup, !dbg !512

if.end39:                                         ; preds = %do.body35
  br label %do.end40, !dbg !515

do.end40:                                         ; preds = %if.end39
  br label %do.body41, !dbg !516

do.body41:                                        ; preds = %do.end40
  %14 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !517
  %E42 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %14, i32 0, i32 3, !dbg !517
  %call43 = call i32 @mbedtls_mpi_gcd(%struct.mbedtls_mpi* %G, %struct.mbedtls_mpi* %E42, %struct.mbedtls_mpi* %H), !dbg !517
  store i32 %call43, i32* %ret, align 4, !dbg !517
  %cmp44 = icmp ne i32 %call43, 0, !dbg !517
  br i1 %cmp44, label %if.then45, label %if.end46, !dbg !520

if.then45:                                        ; preds = %do.body41
  br label %cleanup, !dbg !517

if.end46:                                         ; preds = %do.body41
  br label %do.end47, !dbg !520

do.end47:                                         ; preds = %if.end46
  br label %do.body48, !dbg !521

do.body48:                                        ; preds = %do.end47
  %call49 = call i32 @mbedtls_mpi_gcd(%struct.mbedtls_mpi* %G2, %struct.mbedtls_mpi* %P1, %struct.mbedtls_mpi* %Q1), !dbg !522
  store i32 %call49, i32* %ret, align 4, !dbg !522
  %cmp50 = icmp ne i32 %call49, 0, !dbg !522
  br i1 %cmp50, label %if.then51, label %if.end52, !dbg !525

if.then51:                                        ; preds = %do.body48
  br label %cleanup, !dbg !522

if.end52:                                         ; preds = %do.body48
  br label %do.end53, !dbg !525

do.end53:                                         ; preds = %if.end52
  br label %do.body54, !dbg !526

do.body54:                                        ; preds = %do.end53
  %call55 = call i32 @mbedtls_mpi_div_mpi(%struct.mbedtls_mpi* %L1, %struct.mbedtls_mpi* %L2, %struct.mbedtls_mpi* %H, %struct.mbedtls_mpi* %G2), !dbg !527
  store i32 %call55, i32* %ret, align 4, !dbg !527
  %cmp56 = icmp ne i32 %call55, 0, !dbg !527
  br i1 %cmp56, label %if.then57, label %if.end58, !dbg !530

if.then57:                                        ; preds = %do.body54
  br label %cleanup, !dbg !527

if.end58:                                         ; preds = %do.body54
  br label %do.end59, !dbg !530

do.end59:                                         ; preds = %if.end58
  br label %do.body60, !dbg !531

do.body60:                                        ; preds = %do.end59
  %call61 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %I, %struct.mbedtls_mpi* %DE, %struct.mbedtls_mpi* %L1), !dbg !532
  store i32 %call61, i32* %ret, align 4, !dbg !532
  %cmp62 = icmp ne i32 %call61, 0, !dbg !532
  br i1 %cmp62, label %if.then63, label %if.end64, !dbg !535

if.then63:                                        ; preds = %do.body60
  br label %cleanup, !dbg !532

if.end64:                                         ; preds = %do.body60
  br label %do.end65, !dbg !535

do.end65:                                         ; preds = %if.end64
  br label %do.body66, !dbg !536

do.body66:                                        ; preds = %do.end65
  %15 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !537
  %D67 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %15, i32 0, i32 4, !dbg !537
  %call68 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %DP, %struct.mbedtls_mpi* %D67, %struct.mbedtls_mpi* %P1), !dbg !537
  store i32 %call68, i32* %ret, align 4, !dbg !537
  %cmp69 = icmp ne i32 %call68, 0, !dbg !537
  br i1 %cmp69, label %if.then70, label %if.end71, !dbg !540

if.then70:                                        ; preds = %do.body66
  br label %cleanup, !dbg !537

if.end71:                                         ; preds = %do.body66
  br label %do.end72, !dbg !540

do.end72:                                         ; preds = %if.end71
  br label %do.body73, !dbg !541

do.body73:                                        ; preds = %do.end72
  %16 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !542
  %D74 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %16, i32 0, i32 4, !dbg !542
  %call75 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %DQ, %struct.mbedtls_mpi* %D74, %struct.mbedtls_mpi* %Q1), !dbg !542
  store i32 %call75, i32* %ret, align 4, !dbg !542
  %cmp76 = icmp ne i32 %call75, 0, !dbg !542
  br i1 %cmp76, label %if.then77, label %if.end78, !dbg !545

if.then77:                                        ; preds = %do.body73
  br label %cleanup, !dbg !542

if.end78:                                         ; preds = %do.body73
  br label %do.end79, !dbg !545

do.end79:                                         ; preds = %if.end78
  br label %do.body80, !dbg !546

do.body80:                                        ; preds = %do.end79
  %17 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !547
  %Q81 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %17, i32 0, i32 6, !dbg !547
  %18 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !547
  %P82 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %18, i32 0, i32 5, !dbg !547
  %call83 = call i32 @mbedtls_mpi_inv_mod(%struct.mbedtls_mpi* %QP, %struct.mbedtls_mpi* %Q81, %struct.mbedtls_mpi* %P82), !dbg !547
  store i32 %call83, i32* %ret, align 4, !dbg !547
  %cmp84 = icmp ne i32 %call83, 0, !dbg !547
  br i1 %cmp84, label %if.then85, label %if.end86, !dbg !550

if.then85:                                        ; preds = %do.body80
  br label %cleanup, !dbg !547

if.end86:                                         ; preds = %do.body80
  br label %do.end87, !dbg !550

do.end87:                                         ; preds = %if.end86
  %19 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !551
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %19, i32 0, i32 2, !dbg !553
  %call88 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %PQ, %struct.mbedtls_mpi* %N), !dbg !554
  %cmp89 = icmp ne i32 %call88, 0, !dbg !555
  br i1 %cmp89, label %if.then111, label %lor.lhs.false90, !dbg !556

lor.lhs.false90:                                  ; preds = %do.end87
  %20 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !557
  %DP91 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %20, i32 0, i32 7, !dbg !558
  %call92 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %DP, %struct.mbedtls_mpi* %DP91), !dbg !559
  %cmp93 = icmp ne i32 %call92, 0, !dbg !560
  br i1 %cmp93, label %if.then111, label %lor.lhs.false94, !dbg !561

lor.lhs.false94:                                  ; preds = %lor.lhs.false90
  %21 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !562
  %DQ95 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %21, i32 0, i32 8, !dbg !563
  %call96 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %DQ, %struct.mbedtls_mpi* %DQ95), !dbg !564
  %cmp97 = icmp ne i32 %call96, 0, !dbg !565
  br i1 %cmp97, label %if.then111, label %lor.lhs.false98, !dbg !566

lor.lhs.false98:                                  ; preds = %lor.lhs.false94
  %22 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !567
  %QP99 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %22, i32 0, i32 9, !dbg !568
  %call100 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %QP, %struct.mbedtls_mpi* %QP99), !dbg !569
  %cmp101 = icmp ne i32 %call100, 0, !dbg !570
  br i1 %cmp101, label %if.then111, label %lor.lhs.false102, !dbg !571

lor.lhs.false102:                                 ; preds = %lor.lhs.false98
  %call103 = call i32 @mbedtls_mpi_cmp_int(%struct.mbedtls_mpi* %L2, i64 0), !dbg !572
  %cmp104 = icmp ne i32 %call103, 0, !dbg !573
  br i1 %cmp104, label %if.then111, label %lor.lhs.false105, !dbg !574

lor.lhs.false105:                                 ; preds = %lor.lhs.false102
  %call106 = call i32 @mbedtls_mpi_cmp_int(%struct.mbedtls_mpi* %I, i64 1), !dbg !575
  %cmp107 = icmp ne i32 %call106, 0, !dbg !576
  br i1 %cmp107, label %if.then111, label %lor.lhs.false108, !dbg !577

lor.lhs.false108:                                 ; preds = %lor.lhs.false105
  %call109 = call i32 @mbedtls_mpi_cmp_int(%struct.mbedtls_mpi* %G, i64 1), !dbg !578
  %cmp110 = icmp ne i32 %call109, 0, !dbg !579
  br i1 %cmp110, label %if.then111, label %if.end112, !dbg !580

if.then111:                                       ; preds = %lor.lhs.false108, %lor.lhs.false105, %lor.lhs.false102, %lor.lhs.false98, %lor.lhs.false94, %lor.lhs.false90, %do.end87
  store i32 -16896, i32* %ret, align 4, !dbg !581
  br label %if.end112, !dbg !583

if.end112:                                        ; preds = %if.then111, %lor.lhs.false108
  br label %cleanup, !dbg !584

cleanup:                                          ; preds = %if.end112, %if.then85, %if.then77, %if.then70, %if.then63, %if.then57, %if.then51, %if.then45, %if.then38, %if.then32, %if.then25, %if.then18, %if.then12
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %PQ), !dbg !585
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %DE), !dbg !586
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %P1), !dbg !587
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %Q1), !dbg !588
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %H), !dbg !589
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %I), !dbg !590
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %G), !dbg !591
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %G2), !dbg !592
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %L1), !dbg !593
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %L2), !dbg !594
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %DP), !dbg !595
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %DQ), !dbg !596
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %QP), !dbg !597
  %23 = load i32, i32* %ret, align 4, !dbg !598
  %cmp113 = icmp eq i32 %23, -16896, !dbg !600
  br i1 %cmp113, label %if.then114, label %if.end115, !dbg !601

if.then114:                                       ; preds = %cleanup
  %24 = load i32, i32* %ret, align 4, !dbg !602
  store i32 %24, i32* %retval, !dbg !603
  br label %return, !dbg !603

if.end115:                                        ; preds = %cleanup
  %25 = load i32, i32* %ret, align 4, !dbg !604
  %cmp116 = icmp ne i32 %25, 0, !dbg !606
  br i1 %cmp116, label %if.then117, label %if.end118, !dbg !607

if.then117:                                       ; preds = %if.end115
  %26 = load i32, i32* %ret, align 4, !dbg !608
  %add = add nsw i32 -16896, %26, !dbg !609
  store i32 %add, i32* %retval, !dbg !610
  br label %return, !dbg !610

if.end118:                                        ; preds = %if.end115
  store i32 0, i32* %retval, !dbg !611
  br label %return, !dbg !611

return:                                           ; preds = %if.end118, %if.then117, %if.then114, %if.then6, %if.then
  %27 = load i32, i32* %retval, !dbg !612
  ret i32 %27, !dbg !612
}

declare i32 @mbedtls_mpi_div_mpi(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_check_pub_priv(%struct.mbedtls_rsa_context* %pub, %struct.mbedtls_rsa_context* %prv) #0 {
entry:
  %retval = alloca i32, align 4
  %pub.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %prv.addr = alloca %struct.mbedtls_rsa_context*, align 8
  store %struct.mbedtls_rsa_context* %pub, %struct.mbedtls_rsa_context** %pub.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %pub.addr, metadata !613, metadata !149), !dbg !614
  store %struct.mbedtls_rsa_context* %prv, %struct.mbedtls_rsa_context** %prv.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %prv.addr, metadata !615, metadata !149), !dbg !616
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %pub.addr, align 8, !dbg !617
  %call = call i32 @mbedtls_rsa_check_pubkey(%struct.mbedtls_rsa_context* %0), !dbg !619
  %cmp = icmp ne i32 %call, 0, !dbg !620
  br i1 %cmp, label %if.then, label %lor.lhs.false, !dbg !621

lor.lhs.false:                                    ; preds = %entry
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %prv.addr, align 8, !dbg !622
  %call1 = call i32 @mbedtls_rsa_check_privkey(%struct.mbedtls_rsa_context* %1), !dbg !623
  %cmp2 = icmp ne i32 %call1, 0, !dbg !624
  br i1 %cmp2, label %if.then, label %if.end, !dbg !625

if.then:                                          ; preds = %lor.lhs.false, %entry
  store i32 -16896, i32* %retval, !dbg !626
  br label %return, !dbg !626

if.end:                                           ; preds = %lor.lhs.false
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %pub.addr, align 8, !dbg !628
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 2, !dbg !630
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %prv.addr, align 8, !dbg !631
  %N3 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 2, !dbg !632
  %call4 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %N, %struct.mbedtls_mpi* %N3), !dbg !633
  %cmp5 = icmp ne i32 %call4, 0, !dbg !634
  br i1 %cmp5, label %if.then10, label %lor.lhs.false6, !dbg !635

lor.lhs.false6:                                   ; preds = %if.end
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %pub.addr, align 8, !dbg !636
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 3, !dbg !637
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %prv.addr, align 8, !dbg !638
  %E7 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 3, !dbg !639
  %call8 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %E, %struct.mbedtls_mpi* %E7), !dbg !640
  %cmp9 = icmp ne i32 %call8, 0, !dbg !641
  br i1 %cmp9, label %if.then10, label %if.end11, !dbg !642

if.then10:                                        ; preds = %lor.lhs.false6, %if.end
  store i32 -16896, i32* %retval, !dbg !643
  br label %return, !dbg !643

if.end11:                                         ; preds = %lor.lhs.false6
  store i32 0, i32* %retval, !dbg !645
  br label %return, !dbg !645

return:                                           ; preds = %if.end11, %if.then10, %if.then
  %6 = load i32, i32* %retval, !dbg !646
  ret i32 %6, !dbg !646
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %ctx, i8* %input, i8* %output) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %ret = alloca i32, align 4
  %olen = alloca i64, align 8
  %T = alloca %struct.mbedtls_mpi, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !647, metadata !149), !dbg !648
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !649, metadata !149), !dbg !650
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !651, metadata !149), !dbg !652
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !653, metadata !149), !dbg !654
  call void @llvm.dbg.declare(metadata i64* %olen, metadata !655, metadata !149), !dbg !656
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %T, metadata !657, metadata !149), !dbg !658
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %T), !dbg !659
  br label %do.body, !dbg !660

do.body:                                          ; preds = %entry
  %0 = load i8*, i8** %input.addr, align 8, !dbg !661
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !661
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 1, !dbg !661
  %2 = load i64, i64* %len, align 8, !dbg !661
  %call = call i32 @mbedtls_mpi_read_binary(%struct.mbedtls_mpi* %T, i8* %0, i64 %2), !dbg !661
  store i32 %call, i32* %ret, align 4, !dbg !661
  %cmp = icmp ne i32 %call, 0, !dbg !661
  br i1 %cmp, label %if.then, label %if.end, !dbg !664

if.then:                                          ; preds = %do.body
  br label %cleanup, !dbg !661

if.end:                                           ; preds = %do.body
  br label %do.end, !dbg !664

do.end:                                           ; preds = %if.end
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !665
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 2, !dbg !667
  %call1 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %N), !dbg !668
  %cmp2 = icmp sge i32 %call1, 0, !dbg !669
  br i1 %cmp2, label %if.then3, label %if.end4, !dbg !670

if.then3:                                         ; preds = %do.end
  store i32 -4, i32* %ret, align 4, !dbg !671
  br label %cleanup, !dbg !673

if.end4:                                          ; preds = %do.end
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !674
  %len5 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 1, !dbg !675
  %5 = load i64, i64* %len5, align 8, !dbg !675
  store i64 %5, i64* %olen, align 8, !dbg !676
  br label %do.body6, !dbg !677

do.body6:                                         ; preds = %if.end4
  %6 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !678
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %6, i32 0, i32 3, !dbg !678
  %7 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !678
  %N7 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %7, i32 0, i32 2, !dbg !678
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !678
  %RN = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 10, !dbg !678
  %call8 = call i32 @mbedtls_mpi_exp_mod(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %E, %struct.mbedtls_mpi* %N7, %struct.mbedtls_mpi* %RN), !dbg !678
  store i32 %call8, i32* %ret, align 4, !dbg !678
  %cmp9 = icmp ne i32 %call8, 0, !dbg !678
  br i1 %cmp9, label %if.then10, label %if.end11, !dbg !681

if.then10:                                        ; preds = %do.body6
  br label %cleanup, !dbg !678

if.end11:                                         ; preds = %do.body6
  br label %do.end12, !dbg !681

do.end12:                                         ; preds = %if.end11
  br label %do.body13, !dbg !682

do.body13:                                        ; preds = %do.end12
  %9 = load i8*, i8** %output.addr, align 8, !dbg !683
  %10 = load i64, i64* %olen, align 8, !dbg !683
  %call14 = call i32 @mbedtls_mpi_write_binary(%struct.mbedtls_mpi* %T, i8* %9, i64 %10), !dbg !683
  store i32 %call14, i32* %ret, align 4, !dbg !683
  %cmp15 = icmp ne i32 %call14, 0, !dbg !683
  br i1 %cmp15, label %if.then16, label %if.end17, !dbg !686

if.then16:                                        ; preds = %do.body13
  br label %cleanup, !dbg !683

if.end17:                                         ; preds = %do.body13
  br label %do.end18, !dbg !686

do.end18:                                         ; preds = %if.end17
  br label %cleanup, !dbg !686

cleanup:                                          ; preds = %do.end18, %if.then16, %if.then10, %if.then3, %if.then
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %T), !dbg !687
  %11 = load i32, i32* %ret, align 4, !dbg !688
  %cmp19 = icmp ne i32 %11, 0, !dbg !690
  br i1 %cmp19, label %if.then20, label %if.end21, !dbg !691

if.then20:                                        ; preds = %cleanup
  %12 = load i32, i32* %ret, align 4, !dbg !692
  %add = add nsw i32 -17024, %12, !dbg !693
  store i32 %add, i32* %retval, !dbg !694
  br label %return, !dbg !694

if.end21:                                         ; preds = %cleanup
  store i32 0, i32* %retval, !dbg !695
  br label %return, !dbg !695

return:                                           ; preds = %if.end21, %if.then20
  %13 = load i32, i32* %retval, !dbg !696
  ret i32 %13, !dbg !696
}

declare i32 @mbedtls_mpi_read_binary(%struct.mbedtls_mpi*, i8*, i64) #3

declare i32 @mbedtls_mpi_exp_mod(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_write_binary(%struct.mbedtls_mpi*, i8*, i64) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i8* %input, i8* %output) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %ret = alloca i32, align 4
  %olen = alloca i64, align 8
  %T = alloca %struct.mbedtls_mpi, align 8
  %T1 = alloca %struct.mbedtls_mpi, align 8
  %T2 = alloca %struct.mbedtls_mpi, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !697, metadata !149), !dbg !698
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !699, metadata !149), !dbg !700
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !701, metadata !149), !dbg !702
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !703, metadata !149), !dbg !704
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !705, metadata !149), !dbg !706
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !707, metadata !149), !dbg !708
  call void @llvm.dbg.declare(metadata i64* %olen, metadata !709, metadata !149), !dbg !710
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %T, metadata !711, metadata !149), !dbg !712
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %T1, metadata !713, metadata !149), !dbg !714
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %T2, metadata !715, metadata !149), !dbg !716
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %T), !dbg !717
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %T1), !dbg !718
  call void @mbedtls_mpi_init(%struct.mbedtls_mpi* %T2), !dbg !719
  br label %do.body, !dbg !720

do.body:                                          ; preds = %entry
  %0 = load i8*, i8** %input.addr, align 8, !dbg !721
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !721
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 1, !dbg !721
  %2 = load i64, i64* %len, align 8, !dbg !721
  %call = call i32 @mbedtls_mpi_read_binary(%struct.mbedtls_mpi* %T, i8* %0, i64 %2), !dbg !721
  store i32 %call, i32* %ret, align 4, !dbg !721
  %cmp = icmp ne i32 %call, 0, !dbg !721
  br i1 %cmp, label %if.then, label %if.end, !dbg !724

if.then:                                          ; preds = %do.body
  br label %cleanup, !dbg !721

if.end:                                           ; preds = %do.body
  br label %do.end, !dbg !724

do.end:                                           ; preds = %if.end
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !725
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 2, !dbg !727
  %call1 = call i32 @mbedtls_mpi_cmp_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %N), !dbg !728
  %cmp2 = icmp sge i32 %call1, 0, !dbg !729
  br i1 %cmp2, label %if.then3, label %if.end4, !dbg !730

if.then3:                                         ; preds = %do.end
  store i32 -4, i32* %ret, align 4, !dbg !731
  br label %cleanup, !dbg !733

if.end4:                                          ; preds = %do.end
  %4 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !734
  %cmp5 = icmp ne i32 (i8*, i8*, i64)* %4, null, !dbg !736
  br i1 %cmp5, label %if.then6, label %if.end26, !dbg !737

if.then6:                                         ; preds = %if.end4
  br label %do.body7, !dbg !738

do.body7:                                         ; preds = %if.then6
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !740
  %6 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !740
  %7 = load i8*, i8** %p_rng.addr, align 8, !dbg !740
  %call8 = call i32 @rsa_prepare_blinding(%struct.mbedtls_rsa_context* %5, i32 (i8*, i8*, i64)* %6, i8* %7), !dbg !740
  store i32 %call8, i32* %ret, align 4, !dbg !740
  %cmp9 = icmp ne i32 %call8, 0, !dbg !740
  br i1 %cmp9, label %if.then10, label %if.end11, !dbg !743

if.then10:                                        ; preds = %do.body7
  br label %cleanup, !dbg !740

if.end11:                                         ; preds = %do.body7
  br label %do.end12, !dbg !743

do.end12:                                         ; preds = %if.end11
  br label %do.body13, !dbg !744

do.body13:                                        ; preds = %do.end12
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !745
  %Vi = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 13, !dbg !745
  %call14 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %Vi), !dbg !745
  store i32 %call14, i32* %ret, align 4, !dbg !745
  %cmp15 = icmp ne i32 %call14, 0, !dbg !745
  br i1 %cmp15, label %if.then16, label %if.end17, !dbg !748

if.then16:                                        ; preds = %do.body13
  br label %cleanup, !dbg !745

if.end17:                                         ; preds = %do.body13
  br label %do.end18, !dbg !748

do.end18:                                         ; preds = %if.end17
  br label %do.body19, !dbg !749

do.body19:                                        ; preds = %do.end18
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !750
  %N20 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %9, i32 0, i32 2, !dbg !750
  %call21 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %N20), !dbg !750
  store i32 %call21, i32* %ret, align 4, !dbg !750
  %cmp22 = icmp ne i32 %call21, 0, !dbg !750
  br i1 %cmp22, label %if.then23, label %if.end24, !dbg !753

if.then23:                                        ; preds = %do.body19
  br label %cleanup, !dbg !750

if.end24:                                         ; preds = %do.body19
  br label %do.end25, !dbg !753

do.end25:                                         ; preds = %if.end24
  br label %if.end26, !dbg !754

if.end26:                                         ; preds = %do.end25, %if.end4
  br label %do.body27, !dbg !755

do.body27:                                        ; preds = %if.end26
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !756
  %DP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %10, i32 0, i32 7, !dbg !756
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !756
  %P = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 5, !dbg !756
  %12 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !756
  %RP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %12, i32 0, i32 11, !dbg !756
  %call28 = call i32 @mbedtls_mpi_exp_mod(%struct.mbedtls_mpi* %T1, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %DP, %struct.mbedtls_mpi* %P, %struct.mbedtls_mpi* %RP), !dbg !756
  store i32 %call28, i32* %ret, align 4, !dbg !756
  %cmp29 = icmp ne i32 %call28, 0, !dbg !756
  br i1 %cmp29, label %if.then30, label %if.end31, !dbg !759

if.then30:                                        ; preds = %do.body27
  br label %cleanup, !dbg !756

if.end31:                                         ; preds = %do.body27
  br label %do.end32, !dbg !759

do.end32:                                         ; preds = %if.end31
  br label %do.body33, !dbg !760

do.body33:                                        ; preds = %do.end32
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !761
  %DQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %13, i32 0, i32 8, !dbg !761
  %14 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !761
  %Q = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %14, i32 0, i32 6, !dbg !761
  %15 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !761
  %RQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %15, i32 0, i32 12, !dbg !761
  %call34 = call i32 @mbedtls_mpi_exp_mod(%struct.mbedtls_mpi* %T2, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %DQ, %struct.mbedtls_mpi* %Q, %struct.mbedtls_mpi* %RQ), !dbg !761
  store i32 %call34, i32* %ret, align 4, !dbg !761
  %cmp35 = icmp ne i32 %call34, 0, !dbg !761
  br i1 %cmp35, label %if.then36, label %if.end37, !dbg !764

if.then36:                                        ; preds = %do.body33
  br label %cleanup, !dbg !761

if.end37:                                         ; preds = %do.body33
  br label %do.end38, !dbg !764

do.end38:                                         ; preds = %if.end37
  br label %do.body39, !dbg !765

do.body39:                                        ; preds = %do.end38
  %call40 = call i32 @mbedtls_mpi_sub_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T1, %struct.mbedtls_mpi* %T2), !dbg !766
  store i32 %call40, i32* %ret, align 4, !dbg !766
  %cmp41 = icmp ne i32 %call40, 0, !dbg !766
  br i1 %cmp41, label %if.then42, label %if.end43, !dbg !769

if.then42:                                        ; preds = %do.body39
  br label %cleanup, !dbg !766

if.end43:                                         ; preds = %do.body39
  br label %do.end44, !dbg !769

do.end44:                                         ; preds = %if.end43
  br label %do.body45, !dbg !770

do.body45:                                        ; preds = %do.end44
  %16 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !771
  %QP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %16, i32 0, i32 9, !dbg !771
  %call46 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %T1, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %QP), !dbg !771
  store i32 %call46, i32* %ret, align 4, !dbg !771
  %cmp47 = icmp ne i32 %call46, 0, !dbg !771
  br i1 %cmp47, label %if.then48, label %if.end49, !dbg !774

if.then48:                                        ; preds = %do.body45
  br label %cleanup, !dbg !771

if.end49:                                         ; preds = %do.body45
  br label %do.end50, !dbg !774

do.end50:                                         ; preds = %if.end49
  br label %do.body51, !dbg !775

do.body51:                                        ; preds = %do.end50
  %17 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !776
  %P52 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %17, i32 0, i32 5, !dbg !776
  %call53 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T1, %struct.mbedtls_mpi* %P52), !dbg !776
  store i32 %call53, i32* %ret, align 4, !dbg !776
  %cmp54 = icmp ne i32 %call53, 0, !dbg !776
  br i1 %cmp54, label %if.then55, label %if.end56, !dbg !779

if.then55:                                        ; preds = %do.body51
  br label %cleanup, !dbg !776

if.end56:                                         ; preds = %do.body51
  br label %do.end57, !dbg !779

do.end57:                                         ; preds = %if.end56
  br label %do.body58, !dbg !780

do.body58:                                        ; preds = %do.end57
  %18 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !781
  %Q59 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %18, i32 0, i32 6, !dbg !781
  %call60 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %T1, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %Q59), !dbg !781
  store i32 %call60, i32* %ret, align 4, !dbg !781
  %cmp61 = icmp ne i32 %call60, 0, !dbg !781
  br i1 %cmp61, label %if.then62, label %if.end63, !dbg !784

if.then62:                                        ; preds = %do.body58
  br label %cleanup, !dbg !781

if.end63:                                         ; preds = %do.body58
  br label %do.end64, !dbg !784

do.end64:                                         ; preds = %if.end63
  br label %do.body65, !dbg !785

do.body65:                                        ; preds = %do.end64
  %call66 = call i32 @mbedtls_mpi_add_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T2, %struct.mbedtls_mpi* %T1), !dbg !786
  store i32 %call66, i32* %ret, align 4, !dbg !786
  %cmp67 = icmp ne i32 %call66, 0, !dbg !786
  br i1 %cmp67, label %if.then68, label %if.end69, !dbg !789

if.then68:                                        ; preds = %do.body65
  br label %cleanup, !dbg !786

if.end69:                                         ; preds = %do.body65
  br label %do.end70, !dbg !789

do.end70:                                         ; preds = %if.end69
  %19 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !790
  %cmp71 = icmp ne i32 (i8*, i8*, i64)* %19, null, !dbg !792
  br i1 %cmp71, label %if.then72, label %if.end86, !dbg !793

if.then72:                                        ; preds = %do.end70
  br label %do.body73, !dbg !794

do.body73:                                        ; preds = %if.then72
  %20 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !796
  %Vf = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %20, i32 0, i32 14, !dbg !796
  %call74 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %Vf), !dbg !796
  store i32 %call74, i32* %ret, align 4, !dbg !796
  %cmp75 = icmp ne i32 %call74, 0, !dbg !796
  br i1 %cmp75, label %if.then76, label %if.end77, !dbg !799

if.then76:                                        ; preds = %do.body73
  br label %cleanup, !dbg !796

if.end77:                                         ; preds = %do.body73
  br label %do.end78, !dbg !799

do.end78:                                         ; preds = %if.end77
  br label %do.body79, !dbg !800

do.body79:                                        ; preds = %do.end78
  %21 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !801
  %N80 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %21, i32 0, i32 2, !dbg !801
  %call81 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %T, %struct.mbedtls_mpi* %N80), !dbg !801
  store i32 %call81, i32* %ret, align 4, !dbg !801
  %cmp82 = icmp ne i32 %call81, 0, !dbg !801
  br i1 %cmp82, label %if.then83, label %if.end84, !dbg !804

if.then83:                                        ; preds = %do.body79
  br label %cleanup, !dbg !801

if.end84:                                         ; preds = %do.body79
  br label %do.end85, !dbg !804

do.end85:                                         ; preds = %if.end84
  br label %if.end86, !dbg !805

if.end86:                                         ; preds = %do.end85, %do.end70
  %22 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !806
  %len87 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %22, i32 0, i32 1, !dbg !807
  %23 = load i64, i64* %len87, align 8, !dbg !807
  store i64 %23, i64* %olen, align 8, !dbg !808
  br label %do.body88, !dbg !809

do.body88:                                        ; preds = %if.end86
  %24 = load i8*, i8** %output.addr, align 8, !dbg !810
  %25 = load i64, i64* %olen, align 8, !dbg !810
  %call89 = call i32 @mbedtls_mpi_write_binary(%struct.mbedtls_mpi* %T, i8* %24, i64 %25), !dbg !810
  store i32 %call89, i32* %ret, align 4, !dbg !810
  %cmp90 = icmp ne i32 %call89, 0, !dbg !810
  br i1 %cmp90, label %if.then91, label %if.end92, !dbg !813

if.then91:                                        ; preds = %do.body88
  br label %cleanup, !dbg !810

if.end92:                                         ; preds = %do.body88
  br label %do.end93, !dbg !813

do.end93:                                         ; preds = %if.end92
  br label %cleanup, !dbg !813

cleanup:                                          ; preds = %do.end93, %if.then91, %if.then83, %if.then76, %if.then68, %if.then62, %if.then55, %if.then48, %if.then42, %if.then36, %if.then30, %if.then23, %if.then16, %if.then10, %if.then3, %if.then
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %T), !dbg !814
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %T1), !dbg !815
  call void @mbedtls_mpi_free(%struct.mbedtls_mpi* %T2), !dbg !816
  %26 = load i32, i32* %ret, align 4, !dbg !817
  %cmp94 = icmp ne i32 %26, 0, !dbg !819
  br i1 %cmp94, label %if.then95, label %if.end96, !dbg !820

if.then95:                                        ; preds = %cleanup
  %27 = load i32, i32* %ret, align 4, !dbg !821
  %add = add nsw i32 -17152, %27, !dbg !822
  store i32 %add, i32* %retval, !dbg !823
  br label %return, !dbg !823

if.end96:                                         ; preds = %cleanup
  store i32 0, i32* %retval, !dbg !824
  br label %return, !dbg !824

return:                                           ; preds = %if.end96, %if.then95
  %28 = load i32, i32* %retval, !dbg !825
  ret i32 %28, !dbg !825
}

; Function Attrs: nounwind ssp uwtable
define internal i32 @rsa_prepare_blinding(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %ret = alloca i32, align 4
  %count = alloca i32, align 4
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !826, metadata !149), !dbg !827
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !828, metadata !149), !dbg !829
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !830, metadata !149), !dbg !831
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !832, metadata !149), !dbg !833
  call void @llvm.dbg.declare(metadata i32* %count, metadata !834, metadata !149), !dbg !835
  store i32 0, i32* %count, align 4, !dbg !835
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !836
  %Vf = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 14, !dbg !838
  %p = getelementptr inbounds %struct.mbedtls_mpi, %struct.mbedtls_mpi* %Vf, i32 0, i32 2, !dbg !839
  %1 = load i64*, i64** %p, align 8, !dbg !839
  %cmp = icmp ne i64* %1, null, !dbg !840
  br i1 %cmp, label %if.then, label %if.end31, !dbg !841

if.then:                                          ; preds = %entry
  br label %do.body, !dbg !842

do.body:                                          ; preds = %if.then
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !844
  %Vi = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 13, !dbg !844
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !844
  %Vi1 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 13, !dbg !844
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !844
  %Vi2 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 13, !dbg !844
  %call = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %Vi, %struct.mbedtls_mpi* %Vi1, %struct.mbedtls_mpi* %Vi2), !dbg !844
  store i32 %call, i32* %ret, align 4, !dbg !844
  %cmp3 = icmp ne i32 %call, 0, !dbg !844
  br i1 %cmp3, label %if.then4, label %if.end, !dbg !847

if.then4:                                         ; preds = %do.body
  br label %cleanup, !dbg !844

if.end:                                           ; preds = %do.body
  br label %do.end, !dbg !847

do.end:                                           ; preds = %if.end
  br label %do.body5, !dbg !848

do.body5:                                         ; preds = %do.end
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !849
  %Vi6 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 13, !dbg !849
  %6 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !849
  %Vi7 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %6, i32 0, i32 13, !dbg !849
  %7 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !849
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %7, i32 0, i32 2, !dbg !849
  %call8 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %Vi6, %struct.mbedtls_mpi* %Vi7, %struct.mbedtls_mpi* %N), !dbg !849
  store i32 %call8, i32* %ret, align 4, !dbg !849
  %cmp9 = icmp ne i32 %call8, 0, !dbg !849
  br i1 %cmp9, label %if.then10, label %if.end11, !dbg !852

if.then10:                                        ; preds = %do.body5
  br label %cleanup, !dbg !849

if.end11:                                         ; preds = %do.body5
  br label %do.end12, !dbg !852

do.end12:                                         ; preds = %if.end11
  br label %do.body13, !dbg !853

do.body13:                                        ; preds = %do.end12
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !854
  %Vf14 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 14, !dbg !854
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !854
  %Vf15 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %9, i32 0, i32 14, !dbg !854
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !854
  %Vf16 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %10, i32 0, i32 14, !dbg !854
  %call17 = call i32 @mbedtls_mpi_mul_mpi(%struct.mbedtls_mpi* %Vf14, %struct.mbedtls_mpi* %Vf15, %struct.mbedtls_mpi* %Vf16), !dbg !854
  store i32 %call17, i32* %ret, align 4, !dbg !854
  %cmp18 = icmp ne i32 %call17, 0, !dbg !854
  br i1 %cmp18, label %if.then19, label %if.end20, !dbg !857

if.then19:                                        ; preds = %do.body13
  br label %cleanup, !dbg !854

if.end20:                                         ; preds = %do.body13
  br label %do.end21, !dbg !857

do.end21:                                         ; preds = %if.end20
  br label %do.body22, !dbg !858

do.body22:                                        ; preds = %do.end21
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !859
  %Vf23 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 14, !dbg !859
  %12 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !859
  %Vf24 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %12, i32 0, i32 14, !dbg !859
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !859
  %N25 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %13, i32 0, i32 2, !dbg !859
  %call26 = call i32 @mbedtls_mpi_mod_mpi(%struct.mbedtls_mpi* %Vf23, %struct.mbedtls_mpi* %Vf24, %struct.mbedtls_mpi* %N25), !dbg !859
  store i32 %call26, i32* %ret, align 4, !dbg !859
  %cmp27 = icmp ne i32 %call26, 0, !dbg !859
  br i1 %cmp27, label %if.then28, label %if.end29, !dbg !862

if.then28:                                        ; preds = %do.body22
  br label %cleanup, !dbg !859

if.end29:                                         ; preds = %do.body22
  br label %do.end30, !dbg !862

do.end30:                                         ; preds = %if.end29
  br label %cleanup, !dbg !863

if.end31:                                         ; preds = %entry
  br label %do.body32, !dbg !864

do.body32:                                        ; preds = %do.cond, %if.end31
  %14 = load i32, i32* %count, align 4, !dbg !865
  %inc = add nsw i32 %14, 1, !dbg !865
  store i32 %inc, i32* %count, align 4, !dbg !865
  %cmp33 = icmp sgt i32 %14, 10, !dbg !868
  br i1 %cmp33, label %if.then34, label %if.end35, !dbg !869

if.then34:                                        ; preds = %do.body32
  store i32 -17536, i32* %retval, !dbg !870
  br label %return, !dbg !870

if.end35:                                         ; preds = %do.body32
  br label %do.body36, !dbg !871

do.body36:                                        ; preds = %if.end35
  %15 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !872
  %Vf37 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %15, i32 0, i32 14, !dbg !872
  %16 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !872
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %16, i32 0, i32 1, !dbg !872
  %17 = load i64, i64* %len, align 8, !dbg !872
  %sub = sub i64 %17, 1, !dbg !872
  %18 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !872
  %19 = load i8*, i8** %p_rng.addr, align 8, !dbg !872
  %call38 = call i32 @mbedtls_mpi_fill_random(%struct.mbedtls_mpi* %Vf37, i64 %sub, i32 (i8*, i8*, i64)* %18, i8* %19), !dbg !872
  store i32 %call38, i32* %ret, align 4, !dbg !872
  %cmp39 = icmp ne i32 %call38, 0, !dbg !872
  br i1 %cmp39, label %if.then40, label %if.end41, !dbg !875

if.then40:                                        ; preds = %do.body36
  br label %cleanup, !dbg !872

if.end41:                                         ; preds = %do.body36
  br label %do.end42, !dbg !875

do.end42:                                         ; preds = %if.end41
  br label %do.body43, !dbg !876

do.body43:                                        ; preds = %do.end42
  %20 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !877
  %Vi44 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %20, i32 0, i32 13, !dbg !877
  %21 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !877
  %Vf45 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %21, i32 0, i32 14, !dbg !877
  %22 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !877
  %N46 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %22, i32 0, i32 2, !dbg !877
  %call47 = call i32 @mbedtls_mpi_gcd(%struct.mbedtls_mpi* %Vi44, %struct.mbedtls_mpi* %Vf45, %struct.mbedtls_mpi* %N46), !dbg !877
  store i32 %call47, i32* %ret, align 4, !dbg !877
  %cmp48 = icmp ne i32 %call47, 0, !dbg !877
  br i1 %cmp48, label %if.then49, label %if.end50, !dbg !880

if.then49:                                        ; preds = %do.body43
  br label %cleanup, !dbg !877

if.end50:                                         ; preds = %do.body43
  br label %do.end51, !dbg !880

do.end51:                                         ; preds = %if.end50
  br label %do.cond, !dbg !881

do.cond:                                          ; preds = %do.end51
  %23 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !882
  %Vi52 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %23, i32 0, i32 13, !dbg !883
  %call53 = call i32 @mbedtls_mpi_cmp_int(%struct.mbedtls_mpi* %Vi52, i64 1), !dbg !884
  %cmp54 = icmp ne i32 %call53, 0, !dbg !885
  br i1 %cmp54, label %do.body32, label %do.end55, !dbg !881

do.end55:                                         ; preds = %do.cond
  br label %do.body56, !dbg !886

do.body56:                                        ; preds = %do.end55
  %24 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !887
  %Vi57 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %24, i32 0, i32 13, !dbg !887
  %25 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !887
  %Vf58 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %25, i32 0, i32 14, !dbg !887
  %26 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !887
  %N59 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %26, i32 0, i32 2, !dbg !887
  %call60 = call i32 @mbedtls_mpi_inv_mod(%struct.mbedtls_mpi* %Vi57, %struct.mbedtls_mpi* %Vf58, %struct.mbedtls_mpi* %N59), !dbg !887
  store i32 %call60, i32* %ret, align 4, !dbg !887
  %cmp61 = icmp ne i32 %call60, 0, !dbg !887
  br i1 %cmp61, label %if.then62, label %if.end63, !dbg !890

if.then62:                                        ; preds = %do.body56
  br label %cleanup, !dbg !887

if.end63:                                         ; preds = %do.body56
  br label %do.end65, !dbg !890

do.end65:                                         ; preds = %if.end63
  br label %do.body66, !dbg !891

do.body66:                                        ; preds = %do.end65
  %27 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !892
  %Vi67 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %27, i32 0, i32 13, !dbg !892
  %28 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !892
  %Vi68 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %28, i32 0, i32 13, !dbg !892
  %29 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !892
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %29, i32 0, i32 3, !dbg !892
  %30 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !892
  %N69 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %30, i32 0, i32 2, !dbg !892
  %31 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !892
  %RN = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %31, i32 0, i32 10, !dbg !892
  %call70 = call i32 @mbedtls_mpi_exp_mod(%struct.mbedtls_mpi* %Vi67, %struct.mbedtls_mpi* %Vi68, %struct.mbedtls_mpi* %E, %struct.mbedtls_mpi* %N69, %struct.mbedtls_mpi* %RN), !dbg !892
  store i32 %call70, i32* %ret, align 4, !dbg !892
  %cmp71 = icmp ne i32 %call70, 0, !dbg !892
  br i1 %cmp71, label %if.then72, label %if.end73, !dbg !895

if.then72:                                        ; preds = %do.body66
  br label %cleanup, !dbg !892

if.end73:                                         ; preds = %do.body66
  br label %do.end75, !dbg !895

do.end75:                                         ; preds = %if.end73
  br label %cleanup, !dbg !895

cleanup:                                          ; preds = %do.end75, %if.then72, %if.then62, %if.then49, %if.then40, %do.end30, %if.then28, %if.then19, %if.then10, %if.then4
  %32 = load i32, i32* %ret, align 4, !dbg !896
  store i32 %32, i32* %retval, !dbg !897
  br label %return, !dbg !897

return:                                           ; preds = %cleanup, %if.then34
  %33 = load i32, i32* %retval, !dbg !898
  ret i32 %33, !dbg !898
}

declare i32 @mbedtls_mpi_sub_mpi(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

declare i32 @mbedtls_mpi_add_mpi(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsaes_oaep_encrypt(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i8* %label, i64 %label_len, i64 %ilen, i8* %input, i8* %output) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %label.addr = alloca i8*, align 8
  %label_len.addr = alloca i64, align 8
  %ilen.addr = alloca i64, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %olen = alloca i64, align 8
  %ret = alloca i32, align 4
  %p = alloca i8*, align 8
  %hlen = alloca i32, align 4
  %md_info = alloca %struct.mbedtls_md_info_t*, align 8
  %md_ctx = alloca %struct.mbedtls_md_context_t, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !899, metadata !149), !dbg !900
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !901, metadata !149), !dbg !902
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !903, metadata !149), !dbg !904
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !905, metadata !149), !dbg !906
  store i8* %label, i8** %label.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %label.addr, metadata !907, metadata !149), !dbg !908
  store i64 %label_len, i64* %label_len.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %label_len.addr, metadata !909, metadata !149), !dbg !910
  store i64 %ilen, i64* %ilen.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %ilen.addr, metadata !911, metadata !149), !dbg !912
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !913, metadata !149), !dbg !914
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !915, metadata !149), !dbg !916
  call void @llvm.dbg.declare(metadata i64* %olen, metadata !917, metadata !149), !dbg !918
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !919, metadata !149), !dbg !920
  call void @llvm.dbg.declare(metadata i8** %p, metadata !921, metadata !149), !dbg !922
  %0 = load i8*, i8** %output.addr, align 8, !dbg !923
  store i8* %0, i8** %p, align 8, !dbg !922
  call void @llvm.dbg.declare(metadata i32* %hlen, metadata !924, metadata !149), !dbg !925
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_info_t** %md_info, metadata !926, metadata !149), !dbg !927
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_context_t* %md_ctx, metadata !928, metadata !149), !dbg !929
  %1 = load i32, i32* %mode.addr, align 4, !dbg !930
  %cmp = icmp eq i32 %1, 1, !dbg !932
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !933

land.lhs.true:                                    ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !934
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 15, !dbg !935
  %3 = load i32, i32* %padding, align 4, !dbg !935
  %cmp1 = icmp ne i32 %3, 1, !dbg !936
  br i1 %cmp1, label %if.then, label %if.end, !dbg !937

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !938
  br label %return, !dbg !938

if.end:                                           ; preds = %land.lhs.true, %entry
  %4 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !939
  %cmp2 = icmp eq i32 (i8*, i8*, i64)* %4, null, !dbg !941
  br i1 %cmp2, label %if.then3, label %if.end4, !dbg !942

if.then3:                                         ; preds = %if.end
  store i32 -16512, i32* %retval, !dbg !943
  br label %return, !dbg !943

if.end4:                                          ; preds = %if.end
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !944
  %hash_id = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 16, !dbg !945
  %6 = load i32, i32* %hash_id, align 4, !dbg !945
  %call = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %6), !dbg !946
  store %struct.mbedtls_md_info_t* %call, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !947
  %7 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !948
  %cmp5 = icmp eq %struct.mbedtls_md_info_t* %7, null, !dbg !950
  br i1 %cmp5, label %if.then6, label %if.end7, !dbg !951

if.then6:                                         ; preds = %if.end4
  store i32 -16512, i32* %retval, !dbg !952
  br label %return, !dbg !952

if.end7:                                          ; preds = %if.end4
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !953
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 1, !dbg !954
  %9 = load i64, i64* %len, align 8, !dbg !954
  store i64 %9, i64* %olen, align 8, !dbg !955
  %10 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !956
  %call8 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %10), !dbg !957
  %conv = zext i8 %call8 to i32, !dbg !957
  store i32 %conv, i32* %hlen, align 4, !dbg !958
  %11 = load i64, i64* %olen, align 8, !dbg !959
  %12 = load i64, i64* %ilen.addr, align 8, !dbg !961
  %13 = load i32, i32* %hlen, align 4, !dbg !962
  %mul = mul i32 2, %13, !dbg !963
  %conv9 = zext i32 %mul to i64, !dbg !964
  %add = add i64 %12, %conv9, !dbg !965
  %add10 = add i64 %add, 2, !dbg !966
  %cmp11 = icmp ult i64 %11, %add10, !dbg !967
  br i1 %cmp11, label %if.then13, label %if.end14, !dbg !968

if.then13:                                        ; preds = %if.end7
  store i32 -16512, i32* %retval, !dbg !969
  br label %return, !dbg !969

if.end14:                                         ; preds = %if.end7
  %14 = load i8*, i8** %output.addr, align 8, !dbg !970
  %15 = load i64, i64* %olen, align 8, !dbg !970
  %16 = load i8*, i8** %output.addr, align 8, !dbg !970
  %17 = call i64 @llvm.objectsize.i64.p0i8(i8* %16, i1 false), !dbg !970
  %call15 = call i8* @__memset_chk(i8* %14, i32 0, i64 %15, i64 %17) #4, !dbg !970
  %18 = load i8*, i8** %p, align 8, !dbg !971
  %incdec.ptr = getelementptr inbounds i8, i8* %18, i32 1, !dbg !971
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !971
  store i8 0, i8* %18, align 1, !dbg !972
  %19 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !973
  %20 = load i8*, i8** %p_rng.addr, align 8, !dbg !975
  %21 = load i8*, i8** %p, align 8, !dbg !976
  %22 = load i32, i32* %hlen, align 4, !dbg !977
  %conv16 = zext i32 %22 to i64, !dbg !977
  %call17 = call i32 %19(i8* %20, i8* %21, i64 %conv16), !dbg !973
  store i32 %call17, i32* %ret, align 4, !dbg !978
  %cmp18 = icmp ne i32 %call17, 0, !dbg !979
  br i1 %cmp18, label %if.then20, label %if.end22, !dbg !980

if.then20:                                        ; preds = %if.end14
  %23 = load i32, i32* %ret, align 4, !dbg !981
  %add21 = add nsw i32 -17536, %23, !dbg !982
  store i32 %add21, i32* %retval, !dbg !983
  br label %return, !dbg !983

if.end22:                                         ; preds = %if.end14
  %24 = load i32, i32* %hlen, align 4, !dbg !984
  %25 = load i8*, i8** %p, align 8, !dbg !985
  %idx.ext = zext i32 %24 to i64, !dbg !985
  %add.ptr = getelementptr inbounds i8, i8* %25, i64 %idx.ext, !dbg !985
  store i8* %add.ptr, i8** %p, align 8, !dbg !985
  %26 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !986
  %27 = load i8*, i8** %label.addr, align 8, !dbg !987
  %28 = load i64, i64* %label_len.addr, align 8, !dbg !988
  %29 = load i8*, i8** %p, align 8, !dbg !989
  %call23 = call i32 @mbedtls_md(%struct.mbedtls_md_info_t* %26, i8* %27, i64 %28, i8* %29), !dbg !990
  %30 = load i32, i32* %hlen, align 4, !dbg !991
  %31 = load i8*, i8** %p, align 8, !dbg !992
  %idx.ext24 = zext i32 %30 to i64, !dbg !992
  %add.ptr25 = getelementptr inbounds i8, i8* %31, i64 %idx.ext24, !dbg !992
  store i8* %add.ptr25, i8** %p, align 8, !dbg !992
  %32 = load i64, i64* %olen, align 8, !dbg !993
  %33 = load i32, i32* %hlen, align 4, !dbg !994
  %mul26 = mul i32 2, %33, !dbg !995
  %conv27 = zext i32 %mul26 to i64, !dbg !996
  %sub = sub i64 %32, %conv27, !dbg !997
  %sub28 = sub i64 %sub, 2, !dbg !998
  %34 = load i64, i64* %ilen.addr, align 8, !dbg !999
  %sub29 = sub i64 %sub28, %34, !dbg !1000
  %35 = load i8*, i8** %p, align 8, !dbg !1001
  %add.ptr30 = getelementptr inbounds i8, i8* %35, i64 %sub29, !dbg !1001
  store i8* %add.ptr30, i8** %p, align 8, !dbg !1001
  %36 = load i8*, i8** %p, align 8, !dbg !1002
  %incdec.ptr31 = getelementptr inbounds i8, i8* %36, i32 1, !dbg !1002
  store i8* %incdec.ptr31, i8** %p, align 8, !dbg !1002
  store i8 1, i8* %36, align 1, !dbg !1003
  %37 = load i8*, i8** %p, align 8, !dbg !1004
  %38 = load i8*, i8** %input.addr, align 8, !dbg !1004
  %39 = load i64, i64* %ilen.addr, align 8, !dbg !1004
  %40 = load i8*, i8** %p, align 8, !dbg !1004
  %41 = call i64 @llvm.objectsize.i64.p0i8(i8* %40, i1 false), !dbg !1004
  %call32 = call i8* @__memcpy_chk(i8* %37, i8* %38, i64 %39, i64 %41) #4, !dbg !1004
  call void @mbedtls_md_init(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1005
  %42 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1006
  %call33 = call i32 @mbedtls_md_setup(%struct.mbedtls_md_context_t* %md_ctx, %struct.mbedtls_md_info_t* %42, i32 0), !dbg !1007
  %43 = load i8*, i8** %output.addr, align 8, !dbg !1008
  %44 = load i32, i32* %hlen, align 4, !dbg !1009
  %idx.ext34 = zext i32 %44 to i64, !dbg !1010
  %add.ptr35 = getelementptr inbounds i8, i8* %43, i64 %idx.ext34, !dbg !1010
  %add.ptr36 = getelementptr inbounds i8, i8* %add.ptr35, i64 1, !dbg !1011
  %45 = load i64, i64* %olen, align 8, !dbg !1012
  %46 = load i32, i32* %hlen, align 4, !dbg !1013
  %conv37 = zext i32 %46 to i64, !dbg !1013
  %sub38 = sub i64 %45, %conv37, !dbg !1014
  %sub39 = sub i64 %sub38, 1, !dbg !1015
  %47 = load i8*, i8** %output.addr, align 8, !dbg !1016
  %add.ptr40 = getelementptr inbounds i8, i8* %47, i64 1, !dbg !1017
  %48 = load i32, i32* %hlen, align 4, !dbg !1018
  %conv41 = zext i32 %48 to i64, !dbg !1018
  call void @mgf_mask(i8* %add.ptr36, i64 %sub39, i8* %add.ptr40, i64 %conv41, %struct.mbedtls_md_context_t* %md_ctx), !dbg !1019
  %49 = load i8*, i8** %output.addr, align 8, !dbg !1020
  %add.ptr42 = getelementptr inbounds i8, i8* %49, i64 1, !dbg !1021
  %50 = load i32, i32* %hlen, align 4, !dbg !1022
  %conv43 = zext i32 %50 to i64, !dbg !1022
  %51 = load i8*, i8** %output.addr, align 8, !dbg !1023
  %52 = load i32, i32* %hlen, align 4, !dbg !1024
  %idx.ext44 = zext i32 %52 to i64, !dbg !1025
  %add.ptr45 = getelementptr inbounds i8, i8* %51, i64 %idx.ext44, !dbg !1025
  %add.ptr46 = getelementptr inbounds i8, i8* %add.ptr45, i64 1, !dbg !1026
  %53 = load i64, i64* %olen, align 8, !dbg !1027
  %54 = load i32, i32* %hlen, align 4, !dbg !1028
  %conv47 = zext i32 %54 to i64, !dbg !1028
  %sub48 = sub i64 %53, %conv47, !dbg !1029
  %sub49 = sub i64 %sub48, 1, !dbg !1030
  call void @mgf_mask(i8* %add.ptr42, i64 %conv43, i8* %add.ptr46, i64 %sub49, %struct.mbedtls_md_context_t* %md_ctx), !dbg !1031
  call void @mbedtls_md_free(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1032
  %55 = load i32, i32* %mode.addr, align 4, !dbg !1033
  %cmp50 = icmp eq i32 %55, 0, !dbg !1034
  br i1 %cmp50, label %cond.true, label %cond.false, !dbg !1035

cond.true:                                        ; preds = %if.end22
  %56 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1036
  %57 = load i8*, i8** %output.addr, align 8, !dbg !1037
  %58 = load i8*, i8** %output.addr, align 8, !dbg !1038
  %call52 = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %56, i8* %57, i8* %58), !dbg !1039
  br label %cond.end, !dbg !1035

cond.false:                                       ; preds = %if.end22
  %59 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1040
  %60 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1041
  %61 = load i8*, i8** %p_rng.addr, align 8, !dbg !1042
  %62 = load i8*, i8** %output.addr, align 8, !dbg !1043
  %63 = load i8*, i8** %output.addr, align 8, !dbg !1044
  %call53 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %59, i32 (i8*, i8*, i64)* %60, i8* %61, i8* %62, i8* %63), !dbg !1045
  br label %cond.end, !dbg !1035

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call52, %cond.true ], [ %call53, %cond.false ], !dbg !1035
  store i32 %cond, i32* %retval, !dbg !1046
  br label %return, !dbg !1046

return:                                           ; preds = %cond.end, %if.then20, %if.then13, %if.then6, %if.then3, %if.then
  %64 = load i32, i32* %retval, !dbg !1047
  ret i32 %64, !dbg !1047
}

declare %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32) #3

declare zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t*) #3

declare i32 @mbedtls_md(%struct.mbedtls_md_info_t*, i8*, i64, i8*) #3

; Function Attrs: nounwind
declare i8* @__memcpy_chk(i8*, i8*, i64, i64) #2

declare void @mbedtls_md_init(%struct.mbedtls_md_context_t*) #3

declare i32 @mbedtls_md_setup(%struct.mbedtls_md_context_t*, %struct.mbedtls_md_info_t*, i32) #3

; Function Attrs: nounwind ssp uwtable
define internal void @mgf_mask(i8* %dst, i64 %dlen, i8* %src, i64 %slen, %struct.mbedtls_md_context_t* %md_ctx) #0 {
entry:
  %dst.addr = alloca i8*, align 8
  %dlen.addr = alloca i64, align 8
  %src.addr = alloca i8*, align 8
  %slen.addr = alloca i64, align 8
  %md_ctx.addr = alloca %struct.mbedtls_md_context_t*, align 8
  %mask = alloca [64 x i8], align 16
  %counter = alloca [4 x i8], align 1
  %p = alloca i8*, align 8
  %hlen = alloca i32, align 4
  %i = alloca i64, align 8
  %use_len = alloca i64, align 8
  store i8* %dst, i8** %dst.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %dst.addr, metadata !1048, metadata !149), !dbg !1049
  store i64 %dlen, i64* %dlen.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %dlen.addr, metadata !1050, metadata !149), !dbg !1051
  store i8* %src, i8** %src.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %src.addr, metadata !1052, metadata !149), !dbg !1053
  store i64 %slen, i64* %slen.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %slen.addr, metadata !1054, metadata !149), !dbg !1055
  store %struct.mbedtls_md_context_t* %md_ctx, %struct.mbedtls_md_context_t** %md_ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_context_t** %md_ctx.addr, metadata !1056, metadata !149), !dbg !1057
  call void @llvm.dbg.declare(metadata [64 x i8]* %mask, metadata !1058, metadata !149), !dbg !1062
  call void @llvm.dbg.declare(metadata [4 x i8]* %counter, metadata !1063, metadata !149), !dbg !1067
  call void @llvm.dbg.declare(metadata i8** %p, metadata !1068, metadata !149), !dbg !1069
  call void @llvm.dbg.declare(metadata i32* %hlen, metadata !1070, metadata !149), !dbg !1071
  call void @llvm.dbg.declare(metadata i64* %i, metadata !1072, metadata !149), !dbg !1073
  call void @llvm.dbg.declare(metadata i64* %use_len, metadata !1074, metadata !149), !dbg !1075
  %0 = bitcast [64 x i8]* %mask to i8*, !dbg !1076
  call void @llvm.memset.p0i8.i64(i8* %0, i8 0, i64 64, i32 16, i1 false), !dbg !1076
  %1 = bitcast [4 x i8]* %counter to i8*, !dbg !1077
  call void @llvm.memset.p0i8.i64(i8* %1, i8 0, i64 4, i32 1, i1 false), !dbg !1077
  %2 = load %struct.mbedtls_md_context_t*, %struct.mbedtls_md_context_t** %md_ctx.addr, align 8, !dbg !1078
  %md_info = getelementptr inbounds %struct.mbedtls_md_context_t, %struct.mbedtls_md_context_t* %2, i32 0, i32 0, !dbg !1079
  %3 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1079
  %call = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %3), !dbg !1080
  %conv = zext i8 %call to i32, !dbg !1080
  store i32 %conv, i32* %hlen, align 4, !dbg !1081
  %4 = load i8*, i8** %dst.addr, align 8, !dbg !1082
  store i8* %4, i8** %p, align 8, !dbg !1083
  br label %while.cond, !dbg !1084

while.cond:                                       ; preds = %for.end, %entry
  %5 = load i64, i64* %dlen.addr, align 8, !dbg !1085
  %cmp = icmp ugt i64 %5, 0, !dbg !1086
  br i1 %cmp, label %while.body, label %while.end, !dbg !1084

while.body:                                       ; preds = %while.cond
  %6 = load i32, i32* %hlen, align 4, !dbg !1087
  %conv2 = zext i32 %6 to i64, !dbg !1087
  store i64 %conv2, i64* %use_len, align 8, !dbg !1089
  %7 = load i64, i64* %dlen.addr, align 8, !dbg !1090
  %8 = load i32, i32* %hlen, align 4, !dbg !1092
  %conv3 = zext i32 %8 to i64, !dbg !1092
  %cmp4 = icmp ult i64 %7, %conv3, !dbg !1093
  br i1 %cmp4, label %if.then, label %if.end, !dbg !1094

if.then:                                          ; preds = %while.body
  %9 = load i64, i64* %dlen.addr, align 8, !dbg !1095
  store i64 %9, i64* %use_len, align 8, !dbg !1096
  br label %if.end, !dbg !1097

if.end:                                           ; preds = %if.then, %while.body
  %10 = load %struct.mbedtls_md_context_t*, %struct.mbedtls_md_context_t** %md_ctx.addr, align 8, !dbg !1098
  %call6 = call i32 @mbedtls_md_starts(%struct.mbedtls_md_context_t* %10), !dbg !1099
  %11 = load %struct.mbedtls_md_context_t*, %struct.mbedtls_md_context_t** %md_ctx.addr, align 8, !dbg !1100
  %12 = load i8*, i8** %src.addr, align 8, !dbg !1101
  %13 = load i64, i64* %slen.addr, align 8, !dbg !1102
  %call7 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %11, i8* %12, i64 %13), !dbg !1103
  %14 = load %struct.mbedtls_md_context_t*, %struct.mbedtls_md_context_t** %md_ctx.addr, align 8, !dbg !1104
  %arraydecay = getelementptr inbounds [4 x i8], [4 x i8]* %counter, i32 0, i32 0, !dbg !1105
  %call8 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %14, i8* %arraydecay, i64 4), !dbg !1106
  %15 = load %struct.mbedtls_md_context_t*, %struct.mbedtls_md_context_t** %md_ctx.addr, align 8, !dbg !1107
  %arraydecay9 = getelementptr inbounds [64 x i8], [64 x i8]* %mask, i32 0, i32 0, !dbg !1108
  %call10 = call i32 @mbedtls_md_finish(%struct.mbedtls_md_context_t* %15, i8* %arraydecay9), !dbg !1109
  store i64 0, i64* %i, align 8, !dbg !1110
  br label %for.cond, !dbg !1112

for.cond:                                         ; preds = %for.inc, %if.end
  %16 = load i64, i64* %i, align 8, !dbg !1113
  %17 = load i64, i64* %use_len, align 8, !dbg !1115
  %cmp11 = icmp ult i64 %16, %17, !dbg !1116
  br i1 %cmp11, label %for.body, label %for.end, !dbg !1117

for.body:                                         ; preds = %for.cond
  %18 = load i64, i64* %i, align 8, !dbg !1118
  %arrayidx = getelementptr inbounds [64 x i8], [64 x i8]* %mask, i32 0, i64 %18, !dbg !1119
  %19 = load i8, i8* %arrayidx, align 1, !dbg !1119
  %conv13 = zext i8 %19 to i32, !dbg !1119
  %20 = load i8*, i8** %p, align 8, !dbg !1120
  %incdec.ptr = getelementptr inbounds i8, i8* %20, i32 1, !dbg !1120
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !1120
  %21 = load i8, i8* %20, align 1, !dbg !1121
  %conv14 = zext i8 %21 to i32, !dbg !1121
  %xor = xor i32 %conv14, %conv13, !dbg !1121
  %conv15 = trunc i32 %xor to i8, !dbg !1121
  store i8 %conv15, i8* %20, align 1, !dbg !1121
  br label %for.inc, !dbg !1122

for.inc:                                          ; preds = %for.body
  %22 = load i64, i64* %i, align 8, !dbg !1123
  %inc = add i64 %22, 1, !dbg !1123
  store i64 %inc, i64* %i, align 8, !dbg !1123
  br label %for.cond, !dbg !1124

for.end:                                          ; preds = %for.cond
  %arrayidx16 = getelementptr inbounds [4 x i8], [4 x i8]* %counter, i32 0, i64 3, !dbg !1125
  %23 = load i8, i8* %arrayidx16, align 1, !dbg !1126
  %inc17 = add i8 %23, 1, !dbg !1126
  store i8 %inc17, i8* %arrayidx16, align 1, !dbg !1126
  %24 = load i64, i64* %use_len, align 8, !dbg !1127
  %25 = load i64, i64* %dlen.addr, align 8, !dbg !1128
  %sub = sub i64 %25, %24, !dbg !1128
  store i64 %sub, i64* %dlen.addr, align 8, !dbg !1128
  br label %while.cond, !dbg !1084

while.end:                                        ; preds = %while.cond
  ret void, !dbg !1129
}

declare void @mbedtls_md_free(%struct.mbedtls_md_context_t*) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsaes_pkcs1_v15_encrypt(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i64 %ilen, i8* %input, i8* %output) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %ilen.addr = alloca i64, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %nb_pad = alloca i64, align 8
  %olen = alloca i64, align 8
  %ret = alloca i32, align 4
  %p = alloca i8*, align 8
  %rng_dl = alloca i32, align 4
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1130, metadata !149), !dbg !1131
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1132, metadata !149), !dbg !1133
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1134, metadata !149), !dbg !1135
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1136, metadata !149), !dbg !1137
  store i64 %ilen, i64* %ilen.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %ilen.addr, metadata !1138, metadata !149), !dbg !1139
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !1140, metadata !149), !dbg !1141
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !1142, metadata !149), !dbg !1143
  call void @llvm.dbg.declare(metadata i64* %nb_pad, metadata !1144, metadata !149), !dbg !1145
  call void @llvm.dbg.declare(metadata i64* %olen, metadata !1146, metadata !149), !dbg !1147
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1148, metadata !149), !dbg !1149
  call void @llvm.dbg.declare(metadata i8** %p, metadata !1150, metadata !149), !dbg !1151
  %0 = load i8*, i8** %output.addr, align 8, !dbg !1152
  store i8* %0, i8** %p, align 8, !dbg !1151
  %1 = load i32, i32* %mode.addr, align 4, !dbg !1153
  %cmp = icmp eq i32 %1, 1, !dbg !1155
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !1156

land.lhs.true:                                    ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1157
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 15, !dbg !1158
  %3 = load i32, i32* %padding, align 4, !dbg !1158
  %cmp1 = icmp ne i32 %3, 0, !dbg !1159
  br i1 %cmp1, label %if.then, label %if.end, !dbg !1160

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !1161
  br label %return, !dbg !1161

if.end:                                           ; preds = %land.lhs.true, %entry
  %4 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1162
  %cmp2 = icmp eq i32 (i8*, i8*, i64)* %4, null, !dbg !1164
  br i1 %cmp2, label %if.then3, label %if.end4, !dbg !1165

if.then3:                                         ; preds = %if.end
  store i32 -16512, i32* %retval, !dbg !1166
  br label %return, !dbg !1166

if.end4:                                          ; preds = %if.end
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1167
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 1, !dbg !1168
  %6 = load i64, i64* %len, align 8, !dbg !1168
  store i64 %6, i64* %olen, align 8, !dbg !1169
  %7 = load i64, i64* %olen, align 8, !dbg !1170
  %8 = load i64, i64* %ilen.addr, align 8, !dbg !1172
  %add = add i64 %8, 11, !dbg !1173
  %cmp5 = icmp ult i64 %7, %add, !dbg !1174
  br i1 %cmp5, label %if.then6, label %if.end7, !dbg !1175

if.then6:                                         ; preds = %if.end4
  store i32 -16512, i32* %retval, !dbg !1176
  br label %return, !dbg !1176

if.end7:                                          ; preds = %if.end4
  %9 = load i64, i64* %olen, align 8, !dbg !1177
  %sub = sub i64 %9, 3, !dbg !1178
  %10 = load i64, i64* %ilen.addr, align 8, !dbg !1179
  %sub8 = sub i64 %sub, %10, !dbg !1180
  store i64 %sub8, i64* %nb_pad, align 8, !dbg !1181
  %11 = load i8*, i8** %p, align 8, !dbg !1182
  %incdec.ptr = getelementptr inbounds i8, i8* %11, i32 1, !dbg !1182
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !1182
  store i8 0, i8* %11, align 1, !dbg !1183
  %12 = load i32, i32* %mode.addr, align 4, !dbg !1184
  %cmp9 = icmp eq i32 %12, 0, !dbg !1186
  br i1 %cmp9, label %if.then10, label %if.else, !dbg !1187

if.then10:                                        ; preds = %if.end7
  %13 = load i8*, i8** %p, align 8, !dbg !1188
  %incdec.ptr11 = getelementptr inbounds i8, i8* %13, i32 1, !dbg !1188
  store i8* %incdec.ptr11, i8** %p, align 8, !dbg !1188
  store i8 2, i8* %13, align 1, !dbg !1190
  br label %while.cond, !dbg !1191

while.cond:                                       ; preds = %if.end25, %if.then10
  %14 = load i64, i64* %nb_pad, align 8, !dbg !1192
  %dec = add i64 %14, -1, !dbg !1192
  store i64 %dec, i64* %nb_pad, align 8, !dbg !1192
  %cmp12 = icmp ugt i64 %14, 0, !dbg !1193
  br i1 %cmp12, label %while.body, label %while.end, !dbg !1191

while.body:                                       ; preds = %while.cond
  call void @llvm.dbg.declare(metadata i32* %rng_dl, metadata !1194, metadata !149), !dbg !1196
  store i32 100, i32* %rng_dl, align 4, !dbg !1196
  br label %do.body, !dbg !1197

do.body:                                          ; preds = %land.end, %while.body
  %15 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1198
  %16 = load i8*, i8** %p_rng.addr, align 8, !dbg !1200
  %17 = load i8*, i8** %p, align 8, !dbg !1201
  %call = call i32 %15(i8* %16, i8* %17, i64 1), !dbg !1198
  store i32 %call, i32* %ret, align 4, !dbg !1202
  br label %do.cond, !dbg !1203

do.cond:                                          ; preds = %do.body
  %18 = load i8*, i8** %p, align 8, !dbg !1204
  %19 = load i8, i8* %18, align 1, !dbg !1205
  %conv = zext i8 %19 to i32, !dbg !1205
  %cmp13 = icmp eq i32 %conv, 0, !dbg !1206
  br i1 %cmp13, label %land.lhs.true15, label %land.end, !dbg !1207

land.lhs.true15:                                  ; preds = %do.cond
  %20 = load i32, i32* %rng_dl, align 4, !dbg !1208
  %dec16 = add nsw i32 %20, -1, !dbg !1208
  store i32 %dec16, i32* %rng_dl, align 4, !dbg !1208
  %tobool = icmp ne i32 %dec16, 0, !dbg !1208
  br i1 %tobool, label %land.rhs, label %land.end, !dbg !1209

land.rhs:                                         ; preds = %land.lhs.true15
  %21 = load i32, i32* %ret, align 4, !dbg !1210
  %cmp17 = icmp eq i32 %21, 0, !dbg !1211
  br label %land.end

land.end:                                         ; preds = %land.rhs, %land.lhs.true15, %do.cond
  %22 = phi i1 [ false, %land.lhs.true15 ], [ false, %do.cond ], [ %cmp17, %land.rhs ]
  br i1 %22, label %do.body, label %do.end, !dbg !1203

do.end:                                           ; preds = %land.end
  %23 = load i32, i32* %rng_dl, align 4, !dbg !1212
  %cmp19 = icmp eq i32 %23, 0, !dbg !1214
  br i1 %cmp19, label %if.then23, label %lor.lhs.false, !dbg !1215

lor.lhs.false:                                    ; preds = %do.end
  %24 = load i32, i32* %ret, align 4, !dbg !1216
  %cmp21 = icmp ne i32 %24, 0, !dbg !1217
  br i1 %cmp21, label %if.then23, label %if.end25, !dbg !1218

if.then23:                                        ; preds = %lor.lhs.false, %do.end
  %25 = load i32, i32* %ret, align 4, !dbg !1219
  %add24 = add nsw i32 -17536, %25, !dbg !1220
  store i32 %add24, i32* %retval, !dbg !1221
  br label %return, !dbg !1221

if.end25:                                         ; preds = %lor.lhs.false
  %26 = load i8*, i8** %p, align 8, !dbg !1222
  %incdec.ptr26 = getelementptr inbounds i8, i8* %26, i32 1, !dbg !1222
  store i8* %incdec.ptr26, i8** %p, align 8, !dbg !1222
  br label %while.cond, !dbg !1191

while.end:                                        ; preds = %while.cond
  br label %if.end35, !dbg !1223

if.else:                                          ; preds = %if.end7
  %27 = load i8*, i8** %p, align 8, !dbg !1224
  %incdec.ptr27 = getelementptr inbounds i8, i8* %27, i32 1, !dbg !1224
  store i8* %incdec.ptr27, i8** %p, align 8, !dbg !1224
  store i8 1, i8* %27, align 1, !dbg !1226
  br label %while.cond28, !dbg !1227

while.cond28:                                     ; preds = %while.body32, %if.else
  %28 = load i64, i64* %nb_pad, align 8, !dbg !1228
  %dec29 = add i64 %28, -1, !dbg !1228
  store i64 %dec29, i64* %nb_pad, align 8, !dbg !1228
  %cmp30 = icmp ugt i64 %28, 0, !dbg !1229
  br i1 %cmp30, label %while.body32, label %while.end34, !dbg !1227

while.body32:                                     ; preds = %while.cond28
  %29 = load i8*, i8** %p, align 8, !dbg !1230
  %incdec.ptr33 = getelementptr inbounds i8, i8* %29, i32 1, !dbg !1230
  store i8* %incdec.ptr33, i8** %p, align 8, !dbg !1230
  store i8 -1, i8* %29, align 1, !dbg !1231
  br label %while.cond28, !dbg !1227

while.end34:                                      ; preds = %while.cond28
  br label %if.end35

if.end35:                                         ; preds = %while.end34, %while.end
  %30 = load i8*, i8** %p, align 8, !dbg !1232
  %incdec.ptr36 = getelementptr inbounds i8, i8* %30, i32 1, !dbg !1232
  store i8* %incdec.ptr36, i8** %p, align 8, !dbg !1232
  store i8 0, i8* %30, align 1, !dbg !1233
  %31 = load i8*, i8** %p, align 8, !dbg !1234
  %32 = load i8*, i8** %input.addr, align 8, !dbg !1234
  %33 = load i64, i64* %ilen.addr, align 8, !dbg !1234
  %34 = load i8*, i8** %p, align 8, !dbg !1234
  %35 = call i64 @llvm.objectsize.i64.p0i8(i8* %34, i1 false), !dbg !1234
  %call37 = call i8* @__memcpy_chk(i8* %31, i8* %32, i64 %33, i64 %35) #4, !dbg !1234
  %36 = load i32, i32* %mode.addr, align 4, !dbg !1235
  %cmp38 = icmp eq i32 %36, 0, !dbg !1236
  br i1 %cmp38, label %cond.true, label %cond.false, !dbg !1237

cond.true:                                        ; preds = %if.end35
  %37 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1238
  %38 = load i8*, i8** %output.addr, align 8, !dbg !1239
  %39 = load i8*, i8** %output.addr, align 8, !dbg !1240
  %call40 = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %37, i8* %38, i8* %39), !dbg !1241
  br label %cond.end, !dbg !1237

cond.false:                                       ; preds = %if.end35
  %40 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1242
  %41 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1243
  %42 = load i8*, i8** %p_rng.addr, align 8, !dbg !1244
  %43 = load i8*, i8** %output.addr, align 8, !dbg !1245
  %44 = load i8*, i8** %output.addr, align 8, !dbg !1246
  %call41 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %40, i32 (i8*, i8*, i64)* %41, i8* %42, i8* %43, i8* %44), !dbg !1247
  br label %cond.end, !dbg !1237

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call40, %cond.true ], [ %call41, %cond.false ], !dbg !1237
  store i32 %cond, i32* %retval, !dbg !1248
  br label %return, !dbg !1248

return:                                           ; preds = %cond.end, %if.then23, %if.then6, %if.then3, %if.then
  %45 = load i32, i32* %retval, !dbg !1249
  ret i32 %45, !dbg !1249
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_pkcs1_encrypt(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i64 %ilen, i8* %input, i8* %output) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %ilen.addr = alloca i64, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1250, metadata !149), !dbg !1251
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1252, metadata !149), !dbg !1253
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1254, metadata !149), !dbg !1255
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1256, metadata !149), !dbg !1257
  store i64 %ilen, i64* %ilen.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %ilen.addr, metadata !1258, metadata !149), !dbg !1259
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !1260, metadata !149), !dbg !1261
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !1262, metadata !149), !dbg !1263
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1264
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 15, !dbg !1265
  %1 = load i32, i32* %padding, align 4, !dbg !1265
  switch i32 %1, label %sw.default [
    i32 0, label %sw.bb
    i32 1, label %sw.bb1
  ], !dbg !1266

sw.bb:                                            ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1267
  %3 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1269
  %4 = load i8*, i8** %p_rng.addr, align 8, !dbg !1270
  %5 = load i32, i32* %mode.addr, align 4, !dbg !1271
  %6 = load i64, i64* %ilen.addr, align 8, !dbg !1272
  %7 = load i8*, i8** %input.addr, align 8, !dbg !1273
  %8 = load i8*, i8** %output.addr, align 8, !dbg !1274
  %call = call i32 @mbedtls_rsa_rsaes_pkcs1_v15_encrypt(%struct.mbedtls_rsa_context* %2, i32 (i8*, i8*, i64)* %3, i8* %4, i32 %5, i64 %6, i8* %7, i8* %8), !dbg !1275
  store i32 %call, i32* %retval, !dbg !1276
  br label %return, !dbg !1276

sw.bb1:                                           ; preds = %entry
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1277
  %10 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1278
  %11 = load i8*, i8** %p_rng.addr, align 8, !dbg !1279
  %12 = load i32, i32* %mode.addr, align 4, !dbg !1280
  %13 = load i64, i64* %ilen.addr, align 8, !dbg !1281
  %14 = load i8*, i8** %input.addr, align 8, !dbg !1282
  %15 = load i8*, i8** %output.addr, align 8, !dbg !1283
  %call2 = call i32 @mbedtls_rsa_rsaes_oaep_encrypt(%struct.mbedtls_rsa_context* %9, i32 (i8*, i8*, i64)* %10, i8* %11, i32 %12, i8* null, i64 0, i64 %13, i8* %14, i8* %15), !dbg !1284
  store i32 %call2, i32* %retval, !dbg !1285
  br label %return, !dbg !1285

sw.default:                                       ; preds = %entry
  store i32 -16640, i32* %retval, !dbg !1286
  br label %return, !dbg !1286

return:                                           ; preds = %sw.default, %sw.bb1, %sw.bb
  %16 = load i32, i32* %retval, !dbg !1287
  ret i32 %16, !dbg !1287
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsaes_oaep_decrypt(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i8* %label, i64 %label_len, i64* %olen, i8* %input, i8* %output, i64 %output_max_len) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %label.addr = alloca i8*, align 8
  %label_len.addr = alloca i64, align 8
  %olen.addr = alloca i64*, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %output_max_len.addr = alloca i64, align 8
  %ret = alloca i32, align 4
  %ilen = alloca i64, align 8
  %i = alloca i64, align 8
  %pad_len = alloca i64, align 8
  %p = alloca i8*, align 8
  %bad = alloca i8, align 1
  %pad_done = alloca i8, align 1
  %buf = alloca [1024 x i8], align 16
  %lhash = alloca [64 x i8], align 16
  %hlen = alloca i32, align 4
  %md_info = alloca %struct.mbedtls_md_info_t*, align 8
  %md_ctx = alloca %struct.mbedtls_md_context_t, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1288, metadata !149), !dbg !1289
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1290, metadata !149), !dbg !1291
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1292, metadata !149), !dbg !1293
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1294, metadata !149), !dbg !1295
  store i8* %label, i8** %label.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %label.addr, metadata !1296, metadata !149), !dbg !1297
  store i64 %label_len, i64* %label_len.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %label_len.addr, metadata !1298, metadata !149), !dbg !1299
  store i64* %olen, i64** %olen.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %olen.addr, metadata !1300, metadata !149), !dbg !1301
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !1302, metadata !149), !dbg !1303
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !1304, metadata !149), !dbg !1305
  store i64 %output_max_len, i64* %output_max_len.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %output_max_len.addr, metadata !1306, metadata !149), !dbg !1307
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1308, metadata !149), !dbg !1309
  call void @llvm.dbg.declare(metadata i64* %ilen, metadata !1310, metadata !149), !dbg !1311
  call void @llvm.dbg.declare(metadata i64* %i, metadata !1312, metadata !149), !dbg !1313
  call void @llvm.dbg.declare(metadata i64* %pad_len, metadata !1314, metadata !149), !dbg !1315
  call void @llvm.dbg.declare(metadata i8** %p, metadata !1316, metadata !149), !dbg !1317
  call void @llvm.dbg.declare(metadata i8* %bad, metadata !1318, metadata !149), !dbg !1319
  call void @llvm.dbg.declare(metadata i8* %pad_done, metadata !1320, metadata !149), !dbg !1321
  call void @llvm.dbg.declare(metadata [1024 x i8]* %buf, metadata !1322, metadata !149), !dbg !1326
  call void @llvm.dbg.declare(metadata [64 x i8]* %lhash, metadata !1327, metadata !149), !dbg !1328
  call void @llvm.dbg.declare(metadata i32* %hlen, metadata !1329, metadata !149), !dbg !1330
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_info_t** %md_info, metadata !1331, metadata !149), !dbg !1332
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_context_t* %md_ctx, metadata !1333, metadata !149), !dbg !1334
  %0 = load i32, i32* %mode.addr, align 4, !dbg !1335
  %cmp = icmp eq i32 %0, 1, !dbg !1337
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !1338

land.lhs.true:                                    ; preds = %entry
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1339
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 15, !dbg !1340
  %2 = load i32, i32* %padding, align 4, !dbg !1340
  %cmp1 = icmp ne i32 %2, 1, !dbg !1341
  br i1 %cmp1, label %if.then, label %if.end, !dbg !1342

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !1343
  br label %return, !dbg !1343

if.end:                                           ; preds = %land.lhs.true, %entry
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1344
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 1, !dbg !1345
  %4 = load i64, i64* %len, align 8, !dbg !1345
  store i64 %4, i64* %ilen, align 8, !dbg !1346
  %5 = load i64, i64* %ilen, align 8, !dbg !1347
  %cmp2 = icmp ult i64 %5, 16, !dbg !1349
  br i1 %cmp2, label %if.then4, label %lor.lhs.false, !dbg !1350

lor.lhs.false:                                    ; preds = %if.end
  %6 = load i64, i64* %ilen, align 8, !dbg !1351
  %cmp3 = icmp ugt i64 %6, 1024, !dbg !1352
  br i1 %cmp3, label %if.then4, label %if.end5, !dbg !1353

if.then4:                                         ; preds = %lor.lhs.false, %if.end
  store i32 -16512, i32* %retval, !dbg !1354
  br label %return, !dbg !1354

if.end5:                                          ; preds = %lor.lhs.false
  %7 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1355
  %hash_id = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %7, i32 0, i32 16, !dbg !1356
  %8 = load i32, i32* %hash_id, align 4, !dbg !1356
  %call = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %8), !dbg !1357
  store %struct.mbedtls_md_info_t* %call, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1358
  %9 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1359
  %cmp6 = icmp eq %struct.mbedtls_md_info_t* %9, null, !dbg !1361
  br i1 %cmp6, label %if.then7, label %if.end8, !dbg !1362

if.then7:                                         ; preds = %if.end5
  store i32 -16512, i32* %retval, !dbg !1363
  br label %return, !dbg !1363

if.end8:                                          ; preds = %if.end5
  %10 = load i32, i32* %mode.addr, align 4, !dbg !1364
  %cmp9 = icmp eq i32 %10, 0, !dbg !1365
  br i1 %cmp9, label %cond.true, label %cond.false, !dbg !1366

cond.true:                                        ; preds = %if.end8
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1367
  %12 = load i8*, i8** %input.addr, align 8, !dbg !1368
  %arraydecay = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1369
  %call10 = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %11, i8* %12, i8* %arraydecay), !dbg !1370
  br label %cond.end, !dbg !1366

cond.false:                                       ; preds = %if.end8
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1371
  %14 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1372
  %15 = load i8*, i8** %p_rng.addr, align 8, !dbg !1373
  %16 = load i8*, i8** %input.addr, align 8, !dbg !1374
  %arraydecay11 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1375
  %call12 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %13, i32 (i8*, i8*, i64)* %14, i8* %15, i8* %16, i8* %arraydecay11), !dbg !1376
  br label %cond.end, !dbg !1366

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call10, %cond.true ], [ %call12, %cond.false ], !dbg !1366
  store i32 %cond, i32* %ret, align 4, !dbg !1377
  %17 = load i32, i32* %ret, align 4, !dbg !1378
  %cmp13 = icmp ne i32 %17, 0, !dbg !1380
  br i1 %cmp13, label %if.then14, label %if.end15, !dbg !1381

if.then14:                                        ; preds = %cond.end
  %18 = load i32, i32* %ret, align 4, !dbg !1382
  store i32 %18, i32* %retval, !dbg !1383
  br label %return, !dbg !1383

if.end15:                                         ; preds = %cond.end
  %19 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1384
  %call16 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %19), !dbg !1385
  %conv = zext i8 %call16 to i32, !dbg !1385
  store i32 %conv, i32* %hlen, align 4, !dbg !1386
  call void @mbedtls_md_init(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1387
  %20 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1388
  %call17 = call i32 @mbedtls_md_setup(%struct.mbedtls_md_context_t* %md_ctx, %struct.mbedtls_md_info_t* %20, i32 0), !dbg !1389
  %21 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1390
  %22 = load i8*, i8** %label.addr, align 8, !dbg !1391
  %23 = load i64, i64* %label_len.addr, align 8, !dbg !1392
  %arraydecay18 = getelementptr inbounds [64 x i8], [64 x i8]* %lhash, i32 0, i32 0, !dbg !1393
  %call19 = call i32 @mbedtls_md(%struct.mbedtls_md_info_t* %21, i8* %22, i64 %23, i8* %arraydecay18), !dbg !1394
  %arraydecay20 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1395
  %add.ptr = getelementptr inbounds i8, i8* %arraydecay20, i64 1, !dbg !1396
  %24 = load i32, i32* %hlen, align 4, !dbg !1397
  %conv21 = zext i32 %24 to i64, !dbg !1397
  %arraydecay22 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1398
  %25 = load i32, i32* %hlen, align 4, !dbg !1399
  %idx.ext = zext i32 %25 to i64, !dbg !1400
  %add.ptr23 = getelementptr inbounds i8, i8* %arraydecay22, i64 %idx.ext, !dbg !1400
  %add.ptr24 = getelementptr inbounds i8, i8* %add.ptr23, i64 1, !dbg !1401
  %26 = load i64, i64* %ilen, align 8, !dbg !1402
  %27 = load i32, i32* %hlen, align 4, !dbg !1403
  %conv25 = zext i32 %27 to i64, !dbg !1403
  %sub = sub i64 %26, %conv25, !dbg !1404
  %sub26 = sub i64 %sub, 1, !dbg !1405
  call void @mgf_mask(i8* %add.ptr, i64 %conv21, i8* %add.ptr24, i64 %sub26, %struct.mbedtls_md_context_t* %md_ctx), !dbg !1406
  %arraydecay27 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1407
  %28 = load i32, i32* %hlen, align 4, !dbg !1408
  %idx.ext28 = zext i32 %28 to i64, !dbg !1409
  %add.ptr29 = getelementptr inbounds i8, i8* %arraydecay27, i64 %idx.ext28, !dbg !1409
  %add.ptr30 = getelementptr inbounds i8, i8* %add.ptr29, i64 1, !dbg !1410
  %29 = load i64, i64* %ilen, align 8, !dbg !1411
  %30 = load i32, i32* %hlen, align 4, !dbg !1412
  %conv31 = zext i32 %30 to i64, !dbg !1412
  %sub32 = sub i64 %29, %conv31, !dbg !1413
  %sub33 = sub i64 %sub32, 1, !dbg !1414
  %arraydecay34 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1415
  %add.ptr35 = getelementptr inbounds i8, i8* %arraydecay34, i64 1, !dbg !1416
  %31 = load i32, i32* %hlen, align 4, !dbg !1417
  %conv36 = zext i32 %31 to i64, !dbg !1417
  call void @mgf_mask(i8* %add.ptr30, i64 %sub33, i8* %add.ptr35, i64 %conv36, %struct.mbedtls_md_context_t* %md_ctx), !dbg !1418
  call void @mbedtls_md_free(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1419
  %arraydecay37 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1420
  store i8* %arraydecay37, i8** %p, align 8, !dbg !1421
  store i8 0, i8* %bad, align 1, !dbg !1422
  %32 = load i8*, i8** %p, align 8, !dbg !1423
  %incdec.ptr = getelementptr inbounds i8, i8* %32, i32 1, !dbg !1423
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !1423
  %33 = load i8, i8* %32, align 1, !dbg !1424
  %conv38 = zext i8 %33 to i32, !dbg !1424
  %34 = load i8, i8* %bad, align 1, !dbg !1425
  %conv39 = zext i8 %34 to i32, !dbg !1425
  %or = or i32 %conv39, %conv38, !dbg !1425
  %conv40 = trunc i32 %or to i8, !dbg !1425
  store i8 %conv40, i8* %bad, align 1, !dbg !1425
  %35 = load i32, i32* %hlen, align 4, !dbg !1426
  %36 = load i8*, i8** %p, align 8, !dbg !1427
  %idx.ext41 = zext i32 %35 to i64, !dbg !1427
  %add.ptr42 = getelementptr inbounds i8, i8* %36, i64 %idx.ext41, !dbg !1427
  store i8* %add.ptr42, i8** %p, align 8, !dbg !1427
  store i64 0, i64* %i, align 8, !dbg !1428
  br label %for.cond, !dbg !1430

for.cond:                                         ; preds = %for.inc, %if.end15
  %37 = load i64, i64* %i, align 8, !dbg !1431
  %38 = load i32, i32* %hlen, align 4, !dbg !1433
  %conv43 = zext i32 %38 to i64, !dbg !1433
  %cmp44 = icmp ult i64 %37, %conv43, !dbg !1434
  br i1 %cmp44, label %for.body, label %for.end, !dbg !1435

for.body:                                         ; preds = %for.cond
  %39 = load i64, i64* %i, align 8, !dbg !1436
  %arrayidx = getelementptr inbounds [64 x i8], [64 x i8]* %lhash, i32 0, i64 %39, !dbg !1437
  %40 = load i8, i8* %arrayidx, align 1, !dbg !1437
  %conv46 = zext i8 %40 to i32, !dbg !1437
  %41 = load i8*, i8** %p, align 8, !dbg !1438
  %incdec.ptr47 = getelementptr inbounds i8, i8* %41, i32 1, !dbg !1438
  store i8* %incdec.ptr47, i8** %p, align 8, !dbg !1438
  %42 = load i8, i8* %41, align 1, !dbg !1439
  %conv48 = zext i8 %42 to i32, !dbg !1439
  %xor = xor i32 %conv46, %conv48, !dbg !1440
  %43 = load i8, i8* %bad, align 1, !dbg !1441
  %conv49 = zext i8 %43 to i32, !dbg !1441
  %or50 = or i32 %conv49, %xor, !dbg !1441
  %conv51 = trunc i32 %or50 to i8, !dbg !1441
  store i8 %conv51, i8* %bad, align 1, !dbg !1441
  br label %for.inc, !dbg !1442

for.inc:                                          ; preds = %for.body
  %44 = load i64, i64* %i, align 8, !dbg !1443
  %inc = add i64 %44, 1, !dbg !1443
  store i64 %inc, i64* %i, align 8, !dbg !1443
  br label %for.cond, !dbg !1444

for.end:                                          ; preds = %for.cond
  store i64 0, i64* %pad_len, align 8, !dbg !1445
  store i8 0, i8* %pad_done, align 1, !dbg !1446
  store i64 0, i64* %i, align 8, !dbg !1447
  br label %for.cond52, !dbg !1449

for.cond52:                                       ; preds = %for.inc72, %for.end
  %45 = load i64, i64* %i, align 8, !dbg !1450
  %46 = load i64, i64* %ilen, align 8, !dbg !1452
  %47 = load i32, i32* %hlen, align 4, !dbg !1453
  %mul = mul i32 2, %47, !dbg !1454
  %conv53 = zext i32 %mul to i64, !dbg !1455
  %sub54 = sub i64 %46, %conv53, !dbg !1456
  %sub55 = sub i64 %sub54, 2, !dbg !1457
  %cmp56 = icmp ult i64 %45, %sub55, !dbg !1458
  br i1 %cmp56, label %for.body58, label %for.end74, !dbg !1459

for.body58:                                       ; preds = %for.cond52
  %48 = load i64, i64* %i, align 8, !dbg !1460
  %49 = load i8*, i8** %p, align 8, !dbg !1462
  %arrayidx59 = getelementptr inbounds i8, i8* %49, i64 %48, !dbg !1462
  %50 = load i8, i8* %arrayidx59, align 1, !dbg !1462
  %conv60 = zext i8 %50 to i32, !dbg !1462
  %51 = load i8, i8* %pad_done, align 1, !dbg !1463
  %conv61 = zext i8 %51 to i32, !dbg !1463
  %or62 = or i32 %conv61, %conv60, !dbg !1463
  %conv63 = trunc i32 %or62 to i8, !dbg !1463
  store i8 %conv63, i8* %pad_done, align 1, !dbg !1463
  %52 = load i8, i8* %pad_done, align 1, !dbg !1464
  %conv64 = zext i8 %52 to i32, !dbg !1464
  %53 = load i8, i8* %pad_done, align 1, !dbg !1465
  %conv65 = zext i8 %53 to i32, !dbg !1465
  %sub66 = sub nsw i32 0, %conv65, !dbg !1466
  %conv67 = trunc i32 %sub66 to i8, !dbg !1467
  %conv68 = zext i8 %conv67 to i32, !dbg !1467
  %or69 = or i32 %conv64, %conv68, !dbg !1468
  %shr = ashr i32 %or69, 7, !dbg !1469
  %xor70 = xor i32 %shr, 1, !dbg !1470
  %conv71 = sext i32 %xor70 to i64, !dbg !1471
  %54 = load i64, i64* %pad_len, align 8, !dbg !1472
  %add = add i64 %54, %conv71, !dbg !1472
  store i64 %add, i64* %pad_len, align 8, !dbg !1472
  br label %for.inc72, !dbg !1473

for.inc72:                                        ; preds = %for.body58
  %55 = load i64, i64* %i, align 8, !dbg !1474
  %inc73 = add i64 %55, 1, !dbg !1474
  store i64 %inc73, i64* %i, align 8, !dbg !1474
  br label %for.cond52, !dbg !1475

for.end74:                                        ; preds = %for.cond52
  %56 = load i64, i64* %pad_len, align 8, !dbg !1476
  %57 = load i8*, i8** %p, align 8, !dbg !1477
  %add.ptr75 = getelementptr inbounds i8, i8* %57, i64 %56, !dbg !1477
  store i8* %add.ptr75, i8** %p, align 8, !dbg !1477
  %58 = load i8*, i8** %p, align 8, !dbg !1478
  %incdec.ptr76 = getelementptr inbounds i8, i8* %58, i32 1, !dbg !1478
  store i8* %incdec.ptr76, i8** %p, align 8, !dbg !1478
  %59 = load i8, i8* %58, align 1, !dbg !1479
  %conv77 = zext i8 %59 to i32, !dbg !1479
  %xor78 = xor i32 %conv77, 1, !dbg !1480
  %60 = load i8, i8* %bad, align 1, !dbg !1481
  %conv79 = zext i8 %60 to i32, !dbg !1481
  %or80 = or i32 %conv79, %xor78, !dbg !1481
  %conv81 = trunc i32 %or80 to i8, !dbg !1481
  store i8 %conv81, i8* %bad, align 1, !dbg !1481
  %61 = load i8, i8* %bad, align 1, !dbg !1482
  %conv82 = zext i8 %61 to i32, !dbg !1482
  %cmp83 = icmp ne i32 %conv82, 0, !dbg !1484
  br i1 %cmp83, label %if.then85, label %if.end86, !dbg !1485

if.then85:                                        ; preds = %for.end74
  store i32 -16640, i32* %retval, !dbg !1486
  br label %return, !dbg !1486

if.end86:                                         ; preds = %for.end74
  %62 = load i64, i64* %ilen, align 8, !dbg !1487
  %63 = load i8*, i8** %p, align 8, !dbg !1489
  %arraydecay87 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1490
  %sub.ptr.lhs.cast = ptrtoint i8* %63 to i64, !dbg !1491
  %sub.ptr.rhs.cast = ptrtoint i8* %arraydecay87 to i64, !dbg !1491
  %sub.ptr.sub = sub i64 %sub.ptr.lhs.cast, %sub.ptr.rhs.cast, !dbg !1491
  %sub88 = sub i64 %62, %sub.ptr.sub, !dbg !1492
  %64 = load i64, i64* %output_max_len.addr, align 8, !dbg !1493
  %cmp89 = icmp ugt i64 %sub88, %64, !dbg !1494
  br i1 %cmp89, label %if.then91, label %if.end92, !dbg !1495

if.then91:                                        ; preds = %if.end86
  store i32 -17408, i32* %retval, !dbg !1496
  br label %return, !dbg !1496

if.end92:                                         ; preds = %if.end86
  %65 = load i64, i64* %ilen, align 8, !dbg !1497
  %66 = load i8*, i8** %p, align 8, !dbg !1498
  %arraydecay93 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1499
  %sub.ptr.lhs.cast94 = ptrtoint i8* %66 to i64, !dbg !1500
  %sub.ptr.rhs.cast95 = ptrtoint i8* %arraydecay93 to i64, !dbg !1500
  %sub.ptr.sub96 = sub i64 %sub.ptr.lhs.cast94, %sub.ptr.rhs.cast95, !dbg !1500
  %sub97 = sub i64 %65, %sub.ptr.sub96, !dbg !1501
  %67 = load i64*, i64** %olen.addr, align 8, !dbg !1502
  store i64 %sub97, i64* %67, align 8, !dbg !1503
  %68 = load i8*, i8** %output.addr, align 8, !dbg !1504
  %69 = load i8*, i8** %p, align 8, !dbg !1504
  %70 = load i64*, i64** %olen.addr, align 8, !dbg !1504
  %71 = load i64, i64* %70, align 8, !dbg !1504
  %72 = load i8*, i8** %output.addr, align 8, !dbg !1504
  %73 = call i64 @llvm.objectsize.i64.p0i8(i8* %72, i1 false), !dbg !1504
  %call98 = call i8* @__memcpy_chk(i8* %68, i8* %69, i64 %71, i64 %73) #4, !dbg !1504
  store i32 0, i32* %retval, !dbg !1505
  br label %return, !dbg !1505

return:                                           ; preds = %if.end92, %if.then91, %if.then85, %if.then14, %if.then7, %if.then4, %if.then
  %74 = load i32, i32* %retval, !dbg !1506
  ret i32 %74, !dbg !1506
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsaes_pkcs1_v15_decrypt(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i64* %olen, i8* %input, i8* %output, i64 %output_max_len) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %olen.addr = alloca i64*, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %output_max_len.addr = alloca i64, align 8
  %ret = alloca i32, align 4
  %ilen = alloca i64, align 8
  %pad_count = alloca i64, align 8
  %i = alloca i64, align 8
  %p = alloca i8*, align 8
  %bad = alloca i8, align 1
  %pad_done = alloca i8, align 1
  %buf = alloca [1024 x i8], align 16
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1507, metadata !149), !dbg !1508
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1509, metadata !149), !dbg !1510
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1511, metadata !149), !dbg !1512
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1513, metadata !149), !dbg !1514
  store i64* %olen, i64** %olen.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %olen.addr, metadata !1515, metadata !149), !dbg !1516
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !1517, metadata !149), !dbg !1518
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !1519, metadata !149), !dbg !1520
  store i64 %output_max_len, i64* %output_max_len.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %output_max_len.addr, metadata !1521, metadata !149), !dbg !1522
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1523, metadata !149), !dbg !1524
  call void @llvm.dbg.declare(metadata i64* %ilen, metadata !1525, metadata !149), !dbg !1526
  call void @llvm.dbg.declare(metadata i64* %pad_count, metadata !1527, metadata !149), !dbg !1528
  store i64 0, i64* %pad_count, align 8, !dbg !1528
  call void @llvm.dbg.declare(metadata i64* %i, metadata !1529, metadata !149), !dbg !1530
  call void @llvm.dbg.declare(metadata i8** %p, metadata !1531, metadata !149), !dbg !1532
  call void @llvm.dbg.declare(metadata i8* %bad, metadata !1533, metadata !149), !dbg !1534
  call void @llvm.dbg.declare(metadata i8* %pad_done, metadata !1535, metadata !149), !dbg !1536
  store i8 0, i8* %pad_done, align 1, !dbg !1536
  call void @llvm.dbg.declare(metadata [1024 x i8]* %buf, metadata !1537, metadata !149), !dbg !1538
  %0 = load i32, i32* %mode.addr, align 4, !dbg !1539
  %cmp = icmp eq i32 %0, 1, !dbg !1541
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !1542

land.lhs.true:                                    ; preds = %entry
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1543
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 15, !dbg !1544
  %2 = load i32, i32* %padding, align 4, !dbg !1544
  %cmp1 = icmp ne i32 %2, 0, !dbg !1545
  br i1 %cmp1, label %if.then, label %if.end, !dbg !1546

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !1547
  br label %return, !dbg !1547

if.end:                                           ; preds = %land.lhs.true, %entry
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1548
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 1, !dbg !1549
  %4 = load i64, i64* %len, align 8, !dbg !1549
  store i64 %4, i64* %ilen, align 8, !dbg !1550
  %5 = load i64, i64* %ilen, align 8, !dbg !1551
  %cmp2 = icmp ult i64 %5, 16, !dbg !1553
  br i1 %cmp2, label %if.then4, label %lor.lhs.false, !dbg !1554

lor.lhs.false:                                    ; preds = %if.end
  %6 = load i64, i64* %ilen, align 8, !dbg !1555
  %cmp3 = icmp ugt i64 %6, 1024, !dbg !1556
  br i1 %cmp3, label %if.then4, label %if.end5, !dbg !1557

if.then4:                                         ; preds = %lor.lhs.false, %if.end
  store i32 -16512, i32* %retval, !dbg !1558
  br label %return, !dbg !1558

if.end5:                                          ; preds = %lor.lhs.false
  %7 = load i32, i32* %mode.addr, align 4, !dbg !1559
  %cmp6 = icmp eq i32 %7, 0, !dbg !1560
  br i1 %cmp6, label %cond.true, label %cond.false, !dbg !1561

cond.true:                                        ; preds = %if.end5
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1562
  %9 = load i8*, i8** %input.addr, align 8, !dbg !1563
  %arraydecay = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1564
  %call = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %8, i8* %9, i8* %arraydecay), !dbg !1565
  br label %cond.end, !dbg !1561

cond.false:                                       ; preds = %if.end5
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1566
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1567
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !1568
  %13 = load i8*, i8** %input.addr, align 8, !dbg !1569
  %arraydecay7 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1570
  %call8 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %10, i32 (i8*, i8*, i64)* %11, i8* %12, i8* %13, i8* %arraydecay7), !dbg !1571
  br label %cond.end, !dbg !1561

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call, %cond.true ], [ %call8, %cond.false ], !dbg !1561
  store i32 %cond, i32* %ret, align 4, !dbg !1572
  %14 = load i32, i32* %ret, align 4, !dbg !1573
  %cmp9 = icmp ne i32 %14, 0, !dbg !1575
  br i1 %cmp9, label %if.then10, label %if.end11, !dbg !1576

if.then10:                                        ; preds = %cond.end
  %15 = load i32, i32* %ret, align 4, !dbg !1577
  store i32 %15, i32* %retval, !dbg !1578
  br label %return, !dbg !1578

if.end11:                                         ; preds = %cond.end
  %arraydecay12 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1579
  store i8* %arraydecay12, i8** %p, align 8, !dbg !1580
  store i8 0, i8* %bad, align 1, !dbg !1581
  %16 = load i8*, i8** %p, align 8, !dbg !1582
  %incdec.ptr = getelementptr inbounds i8, i8* %16, i32 1, !dbg !1582
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !1582
  %17 = load i8, i8* %16, align 1, !dbg !1583
  %conv = zext i8 %17 to i32, !dbg !1583
  %18 = load i8, i8* %bad, align 1, !dbg !1584
  %conv13 = zext i8 %18 to i32, !dbg !1584
  %or = or i32 %conv13, %conv, !dbg !1584
  %conv14 = trunc i32 %or to i8, !dbg !1584
  store i8 %conv14, i8* %bad, align 1, !dbg !1584
  %19 = load i32, i32* %mode.addr, align 4, !dbg !1585
  %cmp15 = icmp eq i32 %19, 1, !dbg !1587
  br i1 %cmp15, label %if.then17, label %if.else, !dbg !1588

if.then17:                                        ; preds = %if.end11
  %20 = load i8*, i8** %p, align 8, !dbg !1589
  %incdec.ptr18 = getelementptr inbounds i8, i8* %20, i32 1, !dbg !1589
  store i8* %incdec.ptr18, i8** %p, align 8, !dbg !1589
  %21 = load i8, i8* %20, align 1, !dbg !1591
  %conv19 = zext i8 %21 to i32, !dbg !1591
  %xor = xor i32 %conv19, 2, !dbg !1592
  %22 = load i8, i8* %bad, align 1, !dbg !1593
  %conv20 = zext i8 %22 to i32, !dbg !1593
  %or21 = or i32 %conv20, %xor, !dbg !1593
  %conv22 = trunc i32 %or21 to i8, !dbg !1593
  store i8 %conv22, i8* %bad, align 1, !dbg !1593
  store i64 0, i64* %i, align 8, !dbg !1594
  br label %for.cond, !dbg !1596

for.cond:                                         ; preds = %for.inc, %if.then17
  %23 = load i64, i64* %i, align 8, !dbg !1597
  %24 = load i64, i64* %ilen, align 8, !dbg !1599
  %sub = sub i64 %24, 3, !dbg !1600
  %cmp23 = icmp ult i64 %23, %sub, !dbg !1601
  br i1 %cmp23, label %for.body, label %for.end, !dbg !1602

for.body:                                         ; preds = %for.cond
  %25 = load i64, i64* %i, align 8, !dbg !1603
  %26 = load i8*, i8** %p, align 8, !dbg !1605
  %arrayidx = getelementptr inbounds i8, i8* %26, i64 %25, !dbg !1605
  %27 = load i8, i8* %arrayidx, align 1, !dbg !1605
  %conv25 = zext i8 %27 to i32, !dbg !1605
  %28 = load i64, i64* %i, align 8, !dbg !1606
  %29 = load i8*, i8** %p, align 8, !dbg !1607
  %arrayidx26 = getelementptr inbounds i8, i8* %29, i64 %28, !dbg !1607
  %30 = load i8, i8* %arrayidx26, align 1, !dbg !1607
  %conv27 = zext i8 %30 to i32, !dbg !1607
  %sub28 = sub nsw i32 0, %conv27, !dbg !1608
  %conv29 = trunc i32 %sub28 to i8, !dbg !1609
  %conv30 = zext i8 %conv29 to i32, !dbg !1609
  %or31 = or i32 %conv25, %conv30, !dbg !1610
  %shr = ashr i32 %or31, 7, !dbg !1611
  %xor32 = xor i32 %shr, 1, !dbg !1612
  %31 = load i8, i8* %pad_done, align 1, !dbg !1613
  %conv33 = zext i8 %31 to i32, !dbg !1613
  %or34 = or i32 %conv33, %xor32, !dbg !1613
  %conv35 = trunc i32 %or34 to i8, !dbg !1613
  store i8 %conv35, i8* %pad_done, align 1, !dbg !1613
  %32 = load i8, i8* %pad_done, align 1, !dbg !1614
  %conv36 = zext i8 %32 to i32, !dbg !1614
  %33 = load i8, i8* %pad_done, align 1, !dbg !1615
  %conv37 = zext i8 %33 to i32, !dbg !1615
  %sub38 = sub nsw i32 0, %conv37, !dbg !1616
  %conv39 = trunc i32 %sub38 to i8, !dbg !1617
  %conv40 = zext i8 %conv39 to i32, !dbg !1617
  %or41 = or i32 %conv36, %conv40, !dbg !1618
  %shr42 = ashr i32 %or41, 7, !dbg !1619
  %xor43 = xor i32 %shr42, 1, !dbg !1620
  %conv44 = sext i32 %xor43 to i64, !dbg !1621
  %34 = load i64, i64* %pad_count, align 8, !dbg !1622
  %add = add i64 %34, %conv44, !dbg !1622
  store i64 %add, i64* %pad_count, align 8, !dbg !1622
  br label %for.inc, !dbg !1623

for.inc:                                          ; preds = %for.body
  %35 = load i64, i64* %i, align 8, !dbg !1624
  %inc = add i64 %35, 1, !dbg !1624
  store i64 %inc, i64* %i, align 8, !dbg !1624
  br label %for.cond, !dbg !1625

for.end:                                          ; preds = %for.cond
  %36 = load i64, i64* %pad_count, align 8, !dbg !1626
  %37 = load i8*, i8** %p, align 8, !dbg !1627
  %add.ptr = getelementptr inbounds i8, i8* %37, i64 %36, !dbg !1627
  store i8* %add.ptr, i8** %p, align 8, !dbg !1627
  %38 = load i8*, i8** %p, align 8, !dbg !1628
  %incdec.ptr45 = getelementptr inbounds i8, i8* %38, i32 1, !dbg !1628
  store i8* %incdec.ptr45, i8** %p, align 8, !dbg !1628
  %39 = load i8, i8* %38, align 1, !dbg !1629
  %conv46 = zext i8 %39 to i32, !dbg !1629
  %40 = load i8, i8* %bad, align 1, !dbg !1630
  %conv47 = zext i8 %40 to i32, !dbg !1630
  %or48 = or i32 %conv47, %conv46, !dbg !1630
  %conv49 = trunc i32 %or48 to i8, !dbg !1630
  store i8 %conv49, i8* %bad, align 1, !dbg !1630
  br label %if.end82, !dbg !1631

if.else:                                          ; preds = %if.end11
  %41 = load i8*, i8** %p, align 8, !dbg !1632
  %incdec.ptr50 = getelementptr inbounds i8, i8* %41, i32 1, !dbg !1632
  store i8* %incdec.ptr50, i8** %p, align 8, !dbg !1632
  %42 = load i8, i8* %41, align 1, !dbg !1634
  %conv51 = zext i8 %42 to i32, !dbg !1634
  %xor52 = xor i32 %conv51, 1, !dbg !1635
  %43 = load i8, i8* %bad, align 1, !dbg !1636
  %conv53 = zext i8 %43 to i32, !dbg !1636
  %or54 = or i32 %conv53, %xor52, !dbg !1636
  %conv55 = trunc i32 %or54 to i8, !dbg !1636
  store i8 %conv55, i8* %bad, align 1, !dbg !1636
  store i64 0, i64* %i, align 8, !dbg !1637
  br label %for.cond56, !dbg !1639

for.cond56:                                       ; preds = %for.inc73, %if.else
  %44 = load i64, i64* %i, align 8, !dbg !1640
  %45 = load i64, i64* %ilen, align 8, !dbg !1642
  %sub57 = sub i64 %45, 3, !dbg !1643
  %cmp58 = icmp ult i64 %44, %sub57, !dbg !1644
  br i1 %cmp58, label %for.body60, label %for.end75, !dbg !1645

for.body60:                                       ; preds = %for.cond56
  %46 = load i64, i64* %i, align 8, !dbg !1646
  %47 = load i8*, i8** %p, align 8, !dbg !1648
  %arrayidx61 = getelementptr inbounds i8, i8* %47, i64 %46, !dbg !1648
  %48 = load i8, i8* %arrayidx61, align 1, !dbg !1648
  %conv62 = zext i8 %48 to i32, !dbg !1648
  %cmp63 = icmp ne i32 %conv62, 255, !dbg !1649
  %conv64 = zext i1 %cmp63 to i32, !dbg !1649
  %49 = load i8, i8* %pad_done, align 1, !dbg !1650
  %conv65 = zext i8 %49 to i32, !dbg !1650
  %or66 = or i32 %conv65, %conv64, !dbg !1650
  %conv67 = trunc i32 %or66 to i8, !dbg !1650
  store i8 %conv67, i8* %pad_done, align 1, !dbg !1650
  %50 = load i8, i8* %pad_done, align 1, !dbg !1651
  %conv68 = zext i8 %50 to i32, !dbg !1651
  %cmp69 = icmp eq i32 %conv68, 0, !dbg !1652
  %conv70 = zext i1 %cmp69 to i32, !dbg !1652
  %conv71 = sext i32 %conv70 to i64, !dbg !1653
  %51 = load i64, i64* %pad_count, align 8, !dbg !1654
  %add72 = add i64 %51, %conv71, !dbg !1654
  store i64 %add72, i64* %pad_count, align 8, !dbg !1654
  br label %for.inc73, !dbg !1655

for.inc73:                                        ; preds = %for.body60
  %52 = load i64, i64* %i, align 8, !dbg !1656
  %inc74 = add i64 %52, 1, !dbg !1656
  store i64 %inc74, i64* %i, align 8, !dbg !1656
  br label %for.cond56, !dbg !1657

for.end75:                                        ; preds = %for.cond56
  %53 = load i64, i64* %pad_count, align 8, !dbg !1658
  %54 = load i8*, i8** %p, align 8, !dbg !1659
  %add.ptr76 = getelementptr inbounds i8, i8* %54, i64 %53, !dbg !1659
  store i8* %add.ptr76, i8** %p, align 8, !dbg !1659
  %55 = load i8*, i8** %p, align 8, !dbg !1660
  %incdec.ptr77 = getelementptr inbounds i8, i8* %55, i32 1, !dbg !1660
  store i8* %incdec.ptr77, i8** %p, align 8, !dbg !1660
  %56 = load i8, i8* %55, align 1, !dbg !1661
  %conv78 = zext i8 %56 to i32, !dbg !1661
  %57 = load i8, i8* %bad, align 1, !dbg !1662
  %conv79 = zext i8 %57 to i32, !dbg !1662
  %or80 = or i32 %conv79, %conv78, !dbg !1662
  %conv81 = trunc i32 %or80 to i8, !dbg !1662
  store i8 %conv81, i8* %bad, align 1, !dbg !1662
  br label %if.end82

if.end82:                                         ; preds = %for.end75, %for.end
  %58 = load i8, i8* %bad, align 1, !dbg !1663
  %tobool = icmp ne i8 %58, 0, !dbg !1663
  br i1 %tobool, label %if.then83, label %if.end84, !dbg !1665

if.then83:                                        ; preds = %if.end82
  store i32 -16640, i32* %retval, !dbg !1666
  br label %return, !dbg !1666

if.end84:                                         ; preds = %if.end82
  %59 = load i64, i64* %ilen, align 8, !dbg !1667
  %60 = load i8*, i8** %p, align 8, !dbg !1669
  %arraydecay85 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1670
  %sub.ptr.lhs.cast = ptrtoint i8* %60 to i64, !dbg !1671
  %sub.ptr.rhs.cast = ptrtoint i8* %arraydecay85 to i64, !dbg !1671
  %sub.ptr.sub = sub i64 %sub.ptr.lhs.cast, %sub.ptr.rhs.cast, !dbg !1671
  %sub86 = sub i64 %59, %sub.ptr.sub, !dbg !1672
  %61 = load i64, i64* %output_max_len.addr, align 8, !dbg !1673
  %cmp87 = icmp ugt i64 %sub86, %61, !dbg !1674
  br i1 %cmp87, label %if.then89, label %if.end90, !dbg !1675

if.then89:                                        ; preds = %if.end84
  store i32 -17408, i32* %retval, !dbg !1676
  br label %return, !dbg !1676

if.end90:                                         ; preds = %if.end84
  %62 = load i64, i64* %ilen, align 8, !dbg !1677
  %63 = load i8*, i8** %p, align 8, !dbg !1678
  %arraydecay91 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !1679
  %sub.ptr.lhs.cast92 = ptrtoint i8* %63 to i64, !dbg !1680
  %sub.ptr.rhs.cast93 = ptrtoint i8* %arraydecay91 to i64, !dbg !1680
  %sub.ptr.sub94 = sub i64 %sub.ptr.lhs.cast92, %sub.ptr.rhs.cast93, !dbg !1680
  %sub95 = sub i64 %62, %sub.ptr.sub94, !dbg !1681
  %64 = load i64*, i64** %olen.addr, align 8, !dbg !1682
  store i64 %sub95, i64* %64, align 8, !dbg !1683
  %65 = load i8*, i8** %output.addr, align 8, !dbg !1684
  %66 = load i8*, i8** %p, align 8, !dbg !1684
  %67 = load i64*, i64** %olen.addr, align 8, !dbg !1684
  %68 = load i64, i64* %67, align 8, !dbg !1684
  %69 = load i8*, i8** %output.addr, align 8, !dbg !1684
  %70 = call i64 @llvm.objectsize.i64.p0i8(i8* %69, i1 false), !dbg !1684
  %call96 = call i8* @__memcpy_chk(i8* %65, i8* %66, i64 %68, i64 %70) #4, !dbg !1684
  store i32 0, i32* %retval, !dbg !1685
  br label %return, !dbg !1685

return:                                           ; preds = %if.end90, %if.then89, %if.then83, %if.then10, %if.then4, %if.then
  %71 = load i32, i32* %retval, !dbg !1686
  ret i32 %71, !dbg !1686
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_pkcs1_decrypt(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i64* %olen, i8* %input, i8* %output, i64 %output_max_len) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %olen.addr = alloca i64*, align 8
  %input.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %output_max_len.addr = alloca i64, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1687, metadata !149), !dbg !1688
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1689, metadata !149), !dbg !1690
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1691, metadata !149), !dbg !1692
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1693, metadata !149), !dbg !1694
  store i64* %olen, i64** %olen.addr, align 8
  call void @llvm.dbg.declare(metadata i64** %olen.addr, metadata !1695, metadata !149), !dbg !1696
  store i8* %input, i8** %input.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %input.addr, metadata !1697, metadata !149), !dbg !1698
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !1699, metadata !149), !dbg !1700
  store i64 %output_max_len, i64* %output_max_len.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %output_max_len.addr, metadata !1701, metadata !149), !dbg !1702
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1703
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 15, !dbg !1704
  %1 = load i32, i32* %padding, align 4, !dbg !1704
  switch i32 %1, label %sw.default [
    i32 0, label %sw.bb
    i32 1, label %sw.bb1
  ], !dbg !1705

sw.bb:                                            ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1706
  %3 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1708
  %4 = load i8*, i8** %p_rng.addr, align 8, !dbg !1709
  %5 = load i32, i32* %mode.addr, align 4, !dbg !1710
  %6 = load i64*, i64** %olen.addr, align 8, !dbg !1711
  %7 = load i8*, i8** %input.addr, align 8, !dbg !1712
  %8 = load i8*, i8** %output.addr, align 8, !dbg !1713
  %9 = load i64, i64* %output_max_len.addr, align 8, !dbg !1714
  %call = call i32 @mbedtls_rsa_rsaes_pkcs1_v15_decrypt(%struct.mbedtls_rsa_context* %2, i32 (i8*, i8*, i64)* %3, i8* %4, i32 %5, i64* %6, i8* %7, i8* %8, i64 %9), !dbg !1715
  store i32 %call, i32* %retval, !dbg !1716
  br label %return, !dbg !1716

sw.bb1:                                           ; preds = %entry
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1717
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1718
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !1719
  %13 = load i32, i32* %mode.addr, align 4, !dbg !1720
  %14 = load i64*, i64** %olen.addr, align 8, !dbg !1721
  %15 = load i8*, i8** %input.addr, align 8, !dbg !1722
  %16 = load i8*, i8** %output.addr, align 8, !dbg !1723
  %17 = load i64, i64* %output_max_len.addr, align 8, !dbg !1724
  %call2 = call i32 @mbedtls_rsa_rsaes_oaep_decrypt(%struct.mbedtls_rsa_context* %10, i32 (i8*, i8*, i64)* %11, i8* %12, i32 %13, i8* null, i64 0, i64* %14, i8* %15, i8* %16, i64 %17), !dbg !1725
  store i32 %call2, i32* %retval, !dbg !1726
  br label %return, !dbg !1726

sw.default:                                       ; preds = %entry
  store i32 -16640, i32* %retval, !dbg !1727
  br label %return, !dbg !1727

return:                                           ; preds = %sw.default, %sw.bb1, %sw.bb
  %18 = load i32, i32* %retval, !dbg !1728
  ret i32 %18, !dbg !1728
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsassa_pss_sign(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i8* %sig) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %sig.addr = alloca i8*, align 8
  %olen = alloca i64, align 8
  %p = alloca i8*, align 8
  %salt = alloca [64 x i8], align 16
  %slen = alloca i32, align 4
  %hlen = alloca i32, align 4
  %offset = alloca i32, align 4
  %ret = alloca i32, align 4
  %msb = alloca i64, align 8
  %md_info = alloca %struct.mbedtls_md_info_t*, align 8
  %md_ctx = alloca %struct.mbedtls_md_context_t, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1729, metadata !149), !dbg !1730
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1731, metadata !149), !dbg !1732
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1733, metadata !149), !dbg !1734
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1735, metadata !149), !dbg !1736
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !1737, metadata !149), !dbg !1738
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !1739, metadata !149), !dbg !1740
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !1741, metadata !149), !dbg !1742
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !1743, metadata !149), !dbg !1744
  call void @llvm.dbg.declare(metadata i64* %olen, metadata !1745, metadata !149), !dbg !1746
  call void @llvm.dbg.declare(metadata i8** %p, metadata !1747, metadata !149), !dbg !1748
  %0 = load i8*, i8** %sig.addr, align 8, !dbg !1749
  store i8* %0, i8** %p, align 8, !dbg !1748
  call void @llvm.dbg.declare(metadata [64 x i8]* %salt, metadata !1750, metadata !149), !dbg !1751
  call void @llvm.dbg.declare(metadata i32* %slen, metadata !1752, metadata !149), !dbg !1753
  call void @llvm.dbg.declare(metadata i32* %hlen, metadata !1754, metadata !149), !dbg !1755
  call void @llvm.dbg.declare(metadata i32* %offset, metadata !1756, metadata !149), !dbg !1757
  store i32 0, i32* %offset, align 4, !dbg !1757
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1758, metadata !149), !dbg !1759
  call void @llvm.dbg.declare(metadata i64* %msb, metadata !1760, metadata !149), !dbg !1761
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_info_t** %md_info, metadata !1762, metadata !149), !dbg !1763
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_context_t* %md_ctx, metadata !1764, metadata !149), !dbg !1765
  %1 = load i32, i32* %mode.addr, align 4, !dbg !1766
  %cmp = icmp eq i32 %1, 1, !dbg !1768
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !1769

land.lhs.true:                                    ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1770
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 15, !dbg !1771
  %3 = load i32, i32* %padding, align 4, !dbg !1771
  %cmp1 = icmp ne i32 %3, 1, !dbg !1772
  br i1 %cmp1, label %if.then, label %if.end, !dbg !1773

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !1774
  br label %return, !dbg !1774

if.end:                                           ; preds = %land.lhs.true, %entry
  %4 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1775
  %cmp2 = icmp eq i32 (i8*, i8*, i64)* %4, null, !dbg !1777
  br i1 %cmp2, label %if.then3, label %if.end4, !dbg !1778

if.then3:                                         ; preds = %if.end
  store i32 -16512, i32* %retval, !dbg !1779
  br label %return, !dbg !1779

if.end4:                                          ; preds = %if.end
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1780
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 1, !dbg !1781
  %6 = load i64, i64* %len, align 8, !dbg !1781
  store i64 %6, i64* %olen, align 8, !dbg !1782
  %7 = load i32, i32* %md_alg.addr, align 4, !dbg !1783
  %cmp5 = icmp ne i32 %7, 0, !dbg !1785
  br i1 %cmp5, label %if.then6, label %if.end11, !dbg !1786

if.then6:                                         ; preds = %if.end4
  %8 = load i32, i32* %md_alg.addr, align 4, !dbg !1787
  %call = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %8), !dbg !1789
  store %struct.mbedtls_md_info_t* %call, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1790
  %9 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1791
  %cmp7 = icmp eq %struct.mbedtls_md_info_t* %9, null, !dbg !1793
  br i1 %cmp7, label %if.then8, label %if.end9, !dbg !1794

if.then8:                                         ; preds = %if.then6
  store i32 -16512, i32* %retval, !dbg !1795
  br label %return, !dbg !1795

if.end9:                                          ; preds = %if.then6
  %10 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1796
  %call10 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %10), !dbg !1797
  %conv = zext i8 %call10 to i32, !dbg !1797
  store i32 %conv, i32* %hashlen.addr, align 4, !dbg !1798
  br label %if.end11, !dbg !1799

if.end11:                                         ; preds = %if.end9, %if.end4
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1800
  %hash_id = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 16, !dbg !1801
  %12 = load i32, i32* %hash_id, align 4, !dbg !1801
  %call12 = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %12), !dbg !1802
  store %struct.mbedtls_md_info_t* %call12, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1803
  %13 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1804
  %cmp13 = icmp eq %struct.mbedtls_md_info_t* %13, null, !dbg !1806
  br i1 %cmp13, label %if.then15, label %if.end16, !dbg !1807

if.then15:                                        ; preds = %if.end11
  store i32 -16512, i32* %retval, !dbg !1808
  br label %return, !dbg !1808

if.end16:                                         ; preds = %if.end11
  %14 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1809
  %call17 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %14), !dbg !1810
  %conv18 = zext i8 %call17 to i32, !dbg !1810
  store i32 %conv18, i32* %hlen, align 4, !dbg !1811
  %15 = load i32, i32* %hlen, align 4, !dbg !1812
  store i32 %15, i32* %slen, align 4, !dbg !1813
  %16 = load i64, i64* %olen, align 8, !dbg !1814
  %17 = load i32, i32* %hlen, align 4, !dbg !1816
  %18 = load i32, i32* %slen, align 4, !dbg !1817
  %add = add i32 %17, %18, !dbg !1818
  %add19 = add i32 %add, 2, !dbg !1819
  %conv20 = zext i32 %add19 to i64, !dbg !1816
  %cmp21 = icmp ult i64 %16, %conv20, !dbg !1820
  br i1 %cmp21, label %if.then23, label %if.end24, !dbg !1821

if.then23:                                        ; preds = %if.end16
  store i32 -16512, i32* %retval, !dbg !1822
  br label %return, !dbg !1822

if.end24:                                         ; preds = %if.end16
  %19 = load i8*, i8** %sig.addr, align 8, !dbg !1823
  %20 = load i64, i64* %olen, align 8, !dbg !1823
  %21 = load i8*, i8** %sig.addr, align 8, !dbg !1823
  %22 = call i64 @llvm.objectsize.i64.p0i8(i8* %21, i1 false), !dbg !1823
  %call25 = call i8* @__memset_chk(i8* %19, i32 0, i64 %20, i64 %22) #4, !dbg !1823
  %23 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1824
  %24 = load i8*, i8** %p_rng.addr, align 8, !dbg !1826
  %arraydecay = getelementptr inbounds [64 x i8], [64 x i8]* %salt, i32 0, i32 0, !dbg !1827
  %25 = load i32, i32* %slen, align 4, !dbg !1828
  %conv26 = zext i32 %25 to i64, !dbg !1828
  %call27 = call i32 %23(i8* %24, i8* %arraydecay, i64 %conv26), !dbg !1824
  store i32 %call27, i32* %ret, align 4, !dbg !1829
  %cmp28 = icmp ne i32 %call27, 0, !dbg !1830
  br i1 %cmp28, label %if.then30, label %if.end32, !dbg !1831

if.then30:                                        ; preds = %if.end24
  %26 = load i32, i32* %ret, align 4, !dbg !1832
  %add31 = add nsw i32 -17536, %26, !dbg !1833
  store i32 %add31, i32* %retval, !dbg !1834
  br label %return, !dbg !1834

if.end32:                                         ; preds = %if.end24
  %27 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1835
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %27, i32 0, i32 2, !dbg !1836
  %call33 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N), !dbg !1837
  %sub = sub i64 %call33, 1, !dbg !1838
  store i64 %sub, i64* %msb, align 8, !dbg !1839
  %28 = load i64, i64* %olen, align 8, !dbg !1840
  %29 = load i32, i32* %hlen, align 4, !dbg !1841
  %mul = mul i32 %29, 2, !dbg !1842
  %conv34 = zext i32 %mul to i64, !dbg !1841
  %sub35 = sub i64 %28, %conv34, !dbg !1843
  %sub36 = sub i64 %sub35, 2, !dbg !1844
  %30 = load i8*, i8** %p, align 8, !dbg !1845
  %add.ptr = getelementptr inbounds i8, i8* %30, i64 %sub36, !dbg !1845
  store i8* %add.ptr, i8** %p, align 8, !dbg !1845
  %31 = load i8*, i8** %p, align 8, !dbg !1846
  %incdec.ptr = getelementptr inbounds i8, i8* %31, i32 1, !dbg !1846
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !1846
  store i8 1, i8* %31, align 1, !dbg !1847
  %32 = load i8*, i8** %p, align 8, !dbg !1848
  %arraydecay37 = getelementptr inbounds [64 x i8], [64 x i8]* %salt, i32 0, i32 0, !dbg !1848
  %33 = load i32, i32* %slen, align 4, !dbg !1848
  %conv38 = zext i32 %33 to i64, !dbg !1848
  %34 = load i8*, i8** %p, align 8, !dbg !1848
  %35 = call i64 @llvm.objectsize.i64.p0i8(i8* %34, i1 false), !dbg !1848
  %call39 = call i8* @__memcpy_chk(i8* %32, i8* %arraydecay37, i64 %conv38, i64 %35) #4, !dbg !1848
  %36 = load i32, i32* %slen, align 4, !dbg !1849
  %37 = load i8*, i8** %p, align 8, !dbg !1850
  %idx.ext = zext i32 %36 to i64, !dbg !1850
  %add.ptr40 = getelementptr inbounds i8, i8* %37, i64 %idx.ext, !dbg !1850
  store i8* %add.ptr40, i8** %p, align 8, !dbg !1850
  call void @mbedtls_md_init(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1851
  %38 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1852
  %call41 = call i32 @mbedtls_md_setup(%struct.mbedtls_md_context_t* %md_ctx, %struct.mbedtls_md_info_t* %38, i32 0), !dbg !1853
  %call42 = call i32 @mbedtls_md_starts(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1854
  %39 = load i8*, i8** %p, align 8, !dbg !1855
  %call43 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %md_ctx, i8* %39, i64 8), !dbg !1856
  %40 = load i8*, i8** %hash.addr, align 8, !dbg !1857
  %41 = load i32, i32* %hashlen.addr, align 4, !dbg !1858
  %conv44 = zext i32 %41 to i64, !dbg !1858
  %call45 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %md_ctx, i8* %40, i64 %conv44), !dbg !1859
  %arraydecay46 = getelementptr inbounds [64 x i8], [64 x i8]* %salt, i32 0, i32 0, !dbg !1860
  %42 = load i32, i32* %slen, align 4, !dbg !1861
  %conv47 = zext i32 %42 to i64, !dbg !1861
  %call48 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %md_ctx, i8* %arraydecay46, i64 %conv47), !dbg !1862
  %43 = load i8*, i8** %p, align 8, !dbg !1863
  %call49 = call i32 @mbedtls_md_finish(%struct.mbedtls_md_context_t* %md_ctx, i8* %43), !dbg !1864
  %44 = load i64, i64* %msb, align 8, !dbg !1865
  %rem = urem i64 %44, 8, !dbg !1867
  %cmp50 = icmp eq i64 %rem, 0, !dbg !1868
  br i1 %cmp50, label %if.then52, label %if.end53, !dbg !1869

if.then52:                                        ; preds = %if.end32
  store i32 1, i32* %offset, align 4, !dbg !1870
  br label %if.end53, !dbg !1871

if.end53:                                         ; preds = %if.then52, %if.end32
  %45 = load i8*, i8** %sig.addr, align 8, !dbg !1872
  %46 = load i32, i32* %offset, align 4, !dbg !1873
  %idx.ext54 = zext i32 %46 to i64, !dbg !1874
  %add.ptr55 = getelementptr inbounds i8, i8* %45, i64 %idx.ext54, !dbg !1874
  %47 = load i64, i64* %olen, align 8, !dbg !1875
  %48 = load i32, i32* %hlen, align 4, !dbg !1876
  %conv56 = zext i32 %48 to i64, !dbg !1876
  %sub57 = sub i64 %47, %conv56, !dbg !1877
  %sub58 = sub i64 %sub57, 1, !dbg !1878
  %49 = load i32, i32* %offset, align 4, !dbg !1879
  %conv59 = zext i32 %49 to i64, !dbg !1879
  %sub60 = sub i64 %sub58, %conv59, !dbg !1880
  %50 = load i8*, i8** %p, align 8, !dbg !1881
  %51 = load i32, i32* %hlen, align 4, !dbg !1882
  %conv61 = zext i32 %51 to i64, !dbg !1882
  call void @mgf_mask(i8* %add.ptr55, i64 %sub60, i8* %50, i64 %conv61, %struct.mbedtls_md_context_t* %md_ctx), !dbg !1883
  call void @mbedtls_md_free(%struct.mbedtls_md_context_t* %md_ctx), !dbg !1884
  %52 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1885
  %N62 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %52, i32 0, i32 2, !dbg !1886
  %call63 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N62), !dbg !1887
  %sub64 = sub i64 %call63, 1, !dbg !1888
  store i64 %sub64, i64* %msb, align 8, !dbg !1889
  %53 = load i64, i64* %olen, align 8, !dbg !1890
  %mul65 = mul i64 %53, 8, !dbg !1891
  %54 = load i64, i64* %msb, align 8, !dbg !1892
  %sub66 = sub i64 %mul65, %54, !dbg !1893
  %sh_prom = trunc i64 %sub66 to i32, !dbg !1894
  %shr = ashr i32 255, %sh_prom, !dbg !1894
  %55 = load i8*, i8** %sig.addr, align 8, !dbg !1895
  %arrayidx = getelementptr inbounds i8, i8* %55, i64 0, !dbg !1895
  %56 = load i8, i8* %arrayidx, align 1, !dbg !1896
  %conv67 = zext i8 %56 to i32, !dbg !1896
  %and = and i32 %conv67, %shr, !dbg !1896
  %conv68 = trunc i32 %and to i8, !dbg !1896
  store i8 %conv68, i8* %arrayidx, align 1, !dbg !1896
  %57 = load i32, i32* %hlen, align 4, !dbg !1897
  %58 = load i8*, i8** %p, align 8, !dbg !1898
  %idx.ext69 = zext i32 %57 to i64, !dbg !1898
  %add.ptr70 = getelementptr inbounds i8, i8* %58, i64 %idx.ext69, !dbg !1898
  store i8* %add.ptr70, i8** %p, align 8, !dbg !1898
  %59 = load i8*, i8** %p, align 8, !dbg !1899
  %incdec.ptr71 = getelementptr inbounds i8, i8* %59, i32 1, !dbg !1899
  store i8* %incdec.ptr71, i8** %p, align 8, !dbg !1899
  store i8 -68, i8* %59, align 1, !dbg !1900
  %60 = load i32, i32* %mode.addr, align 4, !dbg !1901
  %cmp72 = icmp eq i32 %60, 0, !dbg !1902
  br i1 %cmp72, label %cond.true, label %cond.false, !dbg !1903

cond.true:                                        ; preds = %if.end53
  %61 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1904
  %62 = load i8*, i8** %sig.addr, align 8, !dbg !1905
  %63 = load i8*, i8** %sig.addr, align 8, !dbg !1906
  %call74 = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %61, i8* %62, i8* %63), !dbg !1907
  br label %cond.end, !dbg !1903

cond.false:                                       ; preds = %if.end53
  %64 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1908
  %65 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !1909
  %66 = load i8*, i8** %p_rng.addr, align 8, !dbg !1910
  %67 = load i8*, i8** %sig.addr, align 8, !dbg !1911
  %68 = load i8*, i8** %sig.addr, align 8, !dbg !1912
  %call75 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %64, i32 (i8*, i8*, i64)* %65, i8* %66, i8* %67, i8* %68), !dbg !1913
  br label %cond.end, !dbg !1903

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call74, %cond.true ], [ %call75, %cond.false ], !dbg !1903
  store i32 %cond, i32* %retval, !dbg !1914
  br label %return, !dbg !1914

return:                                           ; preds = %cond.end, %if.then30, %if.then23, %if.then15, %if.then8, %if.then3, %if.then
  %69 = load i32, i32* %retval, !dbg !1915
  ret i32 %69, !dbg !1915
}

declare i32 @mbedtls_md_starts(%struct.mbedtls_md_context_t*) #3

declare i32 @mbedtls_md_update(%struct.mbedtls_md_context_t*, i8*, i64) #3

declare i32 @mbedtls_md_finish(%struct.mbedtls_md_context_t*, i8*) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsassa_pkcs1_v15_sign(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i8* %sig) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %sig.addr = alloca i8*, align 8
  %nb_pad = alloca i64, align 8
  %olen = alloca i64, align 8
  %oid_size = alloca i64, align 8
  %p = alloca i8*, align 8
  %oid = alloca i8*, align 8
  %sig_try = alloca i8*, align 8
  %verif = alloca i8*, align 8
  %i = alloca i64, align 8
  %diff = alloca i8, align 1
  %diff_no_optimize = alloca i8, align 1
  %ret = alloca i32, align 4
  %md_info = alloca %struct.mbedtls_md_info_t*, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !1916, metadata !149), !dbg !1917
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !1918, metadata !149), !dbg !1919
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !1920, metadata !149), !dbg !1921
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !1922, metadata !149), !dbg !1923
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !1924, metadata !149), !dbg !1925
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !1926, metadata !149), !dbg !1927
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !1928, metadata !149), !dbg !1929
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !1930, metadata !149), !dbg !1931
  call void @llvm.dbg.declare(metadata i64* %nb_pad, metadata !1932, metadata !149), !dbg !1933
  call void @llvm.dbg.declare(metadata i64* %olen, metadata !1934, metadata !149), !dbg !1935
  call void @llvm.dbg.declare(metadata i64* %oid_size, metadata !1936, metadata !149), !dbg !1937
  store i64 0, i64* %oid_size, align 8, !dbg !1937
  call void @llvm.dbg.declare(metadata i8** %p, metadata !1938, metadata !149), !dbg !1939
  %0 = load i8*, i8** %sig.addr, align 8, !dbg !1940
  store i8* %0, i8** %p, align 8, !dbg !1939
  call void @llvm.dbg.declare(metadata i8** %oid, metadata !1941, metadata !149), !dbg !1945
  store i8* null, i8** %oid, align 8, !dbg !1945
  call void @llvm.dbg.declare(metadata i8** %sig_try, metadata !1946, metadata !149), !dbg !1947
  store i8* null, i8** %sig_try, align 8, !dbg !1947
  call void @llvm.dbg.declare(metadata i8** %verif, metadata !1948, metadata !149), !dbg !1949
  store i8* null, i8** %verif, align 8, !dbg !1949
  call void @llvm.dbg.declare(metadata i64* %i, metadata !1950, metadata !149), !dbg !1951
  call void @llvm.dbg.declare(metadata i8* %diff, metadata !1952, metadata !149), !dbg !1953
  call void @llvm.dbg.declare(metadata i8* %diff_no_optimize, metadata !1954, metadata !149), !dbg !1956
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !1957, metadata !149), !dbg !1958
  %1 = load i32, i32* %mode.addr, align 4, !dbg !1959
  %cmp = icmp eq i32 %1, 1, !dbg !1961
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !1962

land.lhs.true:                                    ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1963
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 15, !dbg !1964
  %3 = load i32, i32* %padding, align 4, !dbg !1964
  %cmp1 = icmp ne i32 %3, 0, !dbg !1965
  br i1 %cmp1, label %if.then, label %if.end, !dbg !1966

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !1967
  br label %return, !dbg !1967

if.end:                                           ; preds = %land.lhs.true, %entry
  %4 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !1968
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %4, i32 0, i32 1, !dbg !1969
  %5 = load i64, i64* %len, align 8, !dbg !1969
  store i64 %5, i64* %olen, align 8, !dbg !1970
  %6 = load i64, i64* %olen, align 8, !dbg !1971
  %sub = sub i64 %6, 3, !dbg !1972
  store i64 %sub, i64* %nb_pad, align 8, !dbg !1973
  %7 = load i32, i32* %md_alg.addr, align 4, !dbg !1974
  %cmp2 = icmp ne i32 %7, 0, !dbg !1976
  br i1 %cmp2, label %if.then3, label %if.end13, !dbg !1977

if.then3:                                         ; preds = %if.end
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_info_t** %md_info, metadata !1978, metadata !149), !dbg !1980
  %8 = load i32, i32* %md_alg.addr, align 4, !dbg !1981
  %call = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %8), !dbg !1982
  store %struct.mbedtls_md_info_t* %call, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1980
  %9 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1983
  %cmp4 = icmp eq %struct.mbedtls_md_info_t* %9, null, !dbg !1985
  br i1 %cmp4, label %if.then5, label %if.end6, !dbg !1986

if.then5:                                         ; preds = %if.then3
  store i32 -16512, i32* %retval, !dbg !1987
  br label %return, !dbg !1987

if.end6:                                          ; preds = %if.then3
  %10 = load i32, i32* %md_alg.addr, align 4, !dbg !1988
  %call7 = call i32 @mbedtls_oid_get_oid_by_md(i32 %10, i8** %oid, i64* %oid_size), !dbg !1990
  %cmp8 = icmp ne i32 %call7, 0, !dbg !1991
  br i1 %cmp8, label %if.then9, label %if.end10, !dbg !1992

if.then9:                                         ; preds = %if.end6
  store i32 -16512, i32* %retval, !dbg !1993
  br label %return, !dbg !1993

if.end10:                                         ; preds = %if.end6
  %11 = load i64, i64* %oid_size, align 8, !dbg !1994
  %add = add i64 10, %11, !dbg !1995
  %12 = load i64, i64* %nb_pad, align 8, !dbg !1996
  %sub11 = sub i64 %12, %add, !dbg !1996
  store i64 %sub11, i64* %nb_pad, align 8, !dbg !1996
  %13 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !1997
  %call12 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %13), !dbg !1998
  %conv = zext i8 %call12 to i32, !dbg !1998
  store i32 %conv, i32* %hashlen.addr, align 4, !dbg !1999
  br label %if.end13, !dbg !2000

if.end13:                                         ; preds = %if.end10, %if.end
  %14 = load i32, i32* %hashlen.addr, align 4, !dbg !2001
  %conv14 = zext i32 %14 to i64, !dbg !2001
  %15 = load i64, i64* %nb_pad, align 8, !dbg !2002
  %sub15 = sub i64 %15, %conv14, !dbg !2002
  store i64 %sub15, i64* %nb_pad, align 8, !dbg !2002
  %16 = load i64, i64* %nb_pad, align 8, !dbg !2003
  %cmp16 = icmp ult i64 %16, 8, !dbg !2005
  br i1 %cmp16, label %if.then20, label %lor.lhs.false, !dbg !2006

lor.lhs.false:                                    ; preds = %if.end13
  %17 = load i64, i64* %nb_pad, align 8, !dbg !2007
  %18 = load i64, i64* %olen, align 8, !dbg !2008
  %cmp18 = icmp ugt i64 %17, %18, !dbg !2009
  br i1 %cmp18, label %if.then20, label %if.end21, !dbg !2010

if.then20:                                        ; preds = %lor.lhs.false, %if.end13
  store i32 -16512, i32* %retval, !dbg !2011
  br label %return, !dbg !2011

if.end21:                                         ; preds = %lor.lhs.false
  %19 = load i8*, i8** %p, align 8, !dbg !2012
  %incdec.ptr = getelementptr inbounds i8, i8* %19, i32 1, !dbg !2012
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !2012
  store i8 0, i8* %19, align 1, !dbg !2013
  %20 = load i8*, i8** %p, align 8, !dbg !2014
  %incdec.ptr22 = getelementptr inbounds i8, i8* %20, i32 1, !dbg !2014
  store i8* %incdec.ptr22, i8** %p, align 8, !dbg !2014
  store i8 1, i8* %20, align 1, !dbg !2015
  %21 = load i8*, i8** %p, align 8, !dbg !2016
  %22 = load i64, i64* %nb_pad, align 8, !dbg !2016
  %23 = load i8*, i8** %p, align 8, !dbg !2016
  %24 = call i64 @llvm.objectsize.i64.p0i8(i8* %23, i1 false), !dbg !2016
  %call23 = call i8* @__memset_chk(i8* %21, i32 255, i64 %22, i64 %24) #4, !dbg !2016
  %25 = load i64, i64* %nb_pad, align 8, !dbg !2017
  %26 = load i8*, i8** %p, align 8, !dbg !2018
  %add.ptr = getelementptr inbounds i8, i8* %26, i64 %25, !dbg !2018
  store i8* %add.ptr, i8** %p, align 8, !dbg !2018
  %27 = load i8*, i8** %p, align 8, !dbg !2019
  %incdec.ptr24 = getelementptr inbounds i8, i8* %27, i32 1, !dbg !2019
  store i8* %incdec.ptr24, i8** %p, align 8, !dbg !2019
  store i8 0, i8* %27, align 1, !dbg !2020
  %28 = load i32, i32* %md_alg.addr, align 4, !dbg !2021
  %cmp25 = icmp eq i32 %28, 0, !dbg !2023
  br i1 %cmp25, label %if.then27, label %if.else, !dbg !2024

if.then27:                                        ; preds = %if.end21
  %29 = load i8*, i8** %p, align 8, !dbg !2025
  %30 = load i8*, i8** %hash.addr, align 8, !dbg !2025
  %31 = load i32, i32* %hashlen.addr, align 4, !dbg !2025
  %conv28 = zext i32 %31 to i64, !dbg !2025
  %32 = load i8*, i8** %p, align 8, !dbg !2025
  %33 = call i64 @llvm.objectsize.i64.p0i8(i8* %32, i1 false), !dbg !2025
  %call29 = call i8* @__memcpy_chk(i8* %29, i8* %30, i64 %conv28, i64 %33) #4, !dbg !2025
  br label %if.end52, !dbg !2027

if.else:                                          ; preds = %if.end21
  %34 = load i8*, i8** %p, align 8, !dbg !2028
  %incdec.ptr30 = getelementptr inbounds i8, i8* %34, i32 1, !dbg !2028
  store i8* %incdec.ptr30, i8** %p, align 8, !dbg !2028
  store i8 48, i8* %34, align 1, !dbg !2030
  %35 = load i64, i64* %oid_size, align 8, !dbg !2031
  %add31 = add i64 8, %35, !dbg !2032
  %36 = load i32, i32* %hashlen.addr, align 4, !dbg !2033
  %conv32 = zext i32 %36 to i64, !dbg !2033
  %add33 = add i64 %add31, %conv32, !dbg !2034
  %conv34 = trunc i64 %add33 to i8, !dbg !2035
  %37 = load i8*, i8** %p, align 8, !dbg !2036
  %incdec.ptr35 = getelementptr inbounds i8, i8* %37, i32 1, !dbg !2036
  store i8* %incdec.ptr35, i8** %p, align 8, !dbg !2036
  store i8 %conv34, i8* %37, align 1, !dbg !2037
  %38 = load i8*, i8** %p, align 8, !dbg !2038
  %incdec.ptr36 = getelementptr inbounds i8, i8* %38, i32 1, !dbg !2038
  store i8* %incdec.ptr36, i8** %p, align 8, !dbg !2038
  store i8 48, i8* %38, align 1, !dbg !2039
  %39 = load i64, i64* %oid_size, align 8, !dbg !2040
  %add37 = add i64 4, %39, !dbg !2041
  %conv38 = trunc i64 %add37 to i8, !dbg !2042
  %40 = load i8*, i8** %p, align 8, !dbg !2043
  %incdec.ptr39 = getelementptr inbounds i8, i8* %40, i32 1, !dbg !2043
  store i8* %incdec.ptr39, i8** %p, align 8, !dbg !2043
  store i8 %conv38, i8* %40, align 1, !dbg !2044
  %41 = load i8*, i8** %p, align 8, !dbg !2045
  %incdec.ptr40 = getelementptr inbounds i8, i8* %41, i32 1, !dbg !2045
  store i8* %incdec.ptr40, i8** %p, align 8, !dbg !2045
  store i8 6, i8* %41, align 1, !dbg !2046
  %42 = load i64, i64* %oid_size, align 8, !dbg !2047
  %and = and i64 %42, 255, !dbg !2048
  %conv41 = trunc i64 %and to i8, !dbg !2047
  %43 = load i8*, i8** %p, align 8, !dbg !2049
  %incdec.ptr42 = getelementptr inbounds i8, i8* %43, i32 1, !dbg !2049
  store i8* %incdec.ptr42, i8** %p, align 8, !dbg !2049
  store i8 %conv41, i8* %43, align 1, !dbg !2050
  %44 = load i8*, i8** %p, align 8, !dbg !2051
  %45 = load i8*, i8** %oid, align 8, !dbg !2051
  %46 = load i64, i64* %oid_size, align 8, !dbg !2051
  %47 = load i8*, i8** %p, align 8, !dbg !2051
  %48 = call i64 @llvm.objectsize.i64.p0i8(i8* %47, i1 false), !dbg !2051
  %call43 = call i8* @__memcpy_chk(i8* %44, i8* %45, i64 %46, i64 %48) #4, !dbg !2051
  %49 = load i64, i64* %oid_size, align 8, !dbg !2052
  %50 = load i8*, i8** %p, align 8, !dbg !2053
  %add.ptr44 = getelementptr inbounds i8, i8* %50, i64 %49, !dbg !2053
  store i8* %add.ptr44, i8** %p, align 8, !dbg !2053
  %51 = load i8*, i8** %p, align 8, !dbg !2054
  %incdec.ptr45 = getelementptr inbounds i8, i8* %51, i32 1, !dbg !2054
  store i8* %incdec.ptr45, i8** %p, align 8, !dbg !2054
  store i8 5, i8* %51, align 1, !dbg !2055
  %52 = load i8*, i8** %p, align 8, !dbg !2056
  %incdec.ptr46 = getelementptr inbounds i8, i8* %52, i32 1, !dbg !2056
  store i8* %incdec.ptr46, i8** %p, align 8, !dbg !2056
  store i8 0, i8* %52, align 1, !dbg !2057
  %53 = load i8*, i8** %p, align 8, !dbg !2058
  %incdec.ptr47 = getelementptr inbounds i8, i8* %53, i32 1, !dbg !2058
  store i8* %incdec.ptr47, i8** %p, align 8, !dbg !2058
  store i8 4, i8* %53, align 1, !dbg !2059
  %54 = load i32, i32* %hashlen.addr, align 4, !dbg !2060
  %conv48 = trunc i32 %54 to i8, !dbg !2060
  %55 = load i8*, i8** %p, align 8, !dbg !2061
  %incdec.ptr49 = getelementptr inbounds i8, i8* %55, i32 1, !dbg !2061
  store i8* %incdec.ptr49, i8** %p, align 8, !dbg !2061
  store i8 %conv48, i8* %55, align 1, !dbg !2062
  %56 = load i8*, i8** %p, align 8, !dbg !2063
  %57 = load i8*, i8** %hash.addr, align 8, !dbg !2063
  %58 = load i32, i32* %hashlen.addr, align 4, !dbg !2063
  %conv50 = zext i32 %58 to i64, !dbg !2063
  %59 = load i8*, i8** %p, align 8, !dbg !2063
  %60 = call i64 @llvm.objectsize.i64.p0i8(i8* %59, i1 false), !dbg !2063
  %call51 = call i8* @__memcpy_chk(i8* %56, i8* %57, i64 %conv50, i64 %60) #4, !dbg !2063
  br label %if.end52

if.end52:                                         ; preds = %if.else, %if.then27
  %61 = load i32, i32* %mode.addr, align 4, !dbg !2064
  %cmp53 = icmp eq i32 %61, 0, !dbg !2066
  br i1 %cmp53, label %if.then55, label %if.end57, !dbg !2067

if.then55:                                        ; preds = %if.end52
  %62 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2068
  %63 = load i8*, i8** %sig.addr, align 8, !dbg !2069
  %64 = load i8*, i8** %sig.addr, align 8, !dbg !2070
  %call56 = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %62, i8* %63, i8* %64), !dbg !2071
  store i32 %call56, i32* %retval, !dbg !2072
  br label %return, !dbg !2072

if.end57:                                         ; preds = %if.end52
  %65 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2073
  %len58 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %65, i32 0, i32 1, !dbg !2074
  %66 = load i64, i64* %len58, align 8, !dbg !2074
  %call59 = call i8* @calloc(i64 1, i64 %66), !dbg !2075
  store i8* %call59, i8** %sig_try, align 8, !dbg !2076
  %67 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2077
  %len60 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %67, i32 0, i32 1, !dbg !2078
  %68 = load i64, i64* %len60, align 8, !dbg !2078
  %call61 = call i8* @calloc(i64 1, i64 %68), !dbg !2079
  store i8* %call61, i8** %verif, align 8, !dbg !2080
  %69 = load i8*, i8** %sig_try, align 8, !dbg !2081
  %cmp62 = icmp eq i8* %69, null, !dbg !2083
  br i1 %cmp62, label %if.then67, label %lor.lhs.false64, !dbg !2084

lor.lhs.false64:                                  ; preds = %if.end57
  %70 = load i8*, i8** %verif, align 8, !dbg !2085
  %cmp65 = icmp eq i8* %70, null, !dbg !2086
  br i1 %cmp65, label %if.then67, label %if.end68, !dbg !2087

if.then67:                                        ; preds = %lor.lhs.false64, %if.end57
  store i32 -16, i32* %retval, !dbg !2088
  br label %return, !dbg !2088

if.end68:                                         ; preds = %lor.lhs.false64
  br label %do.body, !dbg !2089

do.body:                                          ; preds = %if.end68
  %71 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2090
  %72 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2090
  %73 = load i8*, i8** %p_rng.addr, align 8, !dbg !2090
  %74 = load i8*, i8** %sig.addr, align 8, !dbg !2090
  %75 = load i8*, i8** %sig_try, align 8, !dbg !2090
  %call69 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %71, i32 (i8*, i8*, i64)* %72, i8* %73, i8* %74, i8* %75), !dbg !2090
  store i32 %call69, i32* %ret, align 4, !dbg !2090
  %cmp70 = icmp ne i32 %call69, 0, !dbg !2090
  br i1 %cmp70, label %if.then72, label %if.end73, !dbg !2093

if.then72:                                        ; preds = %do.body
  br label %cleanup, !dbg !2090

if.end73:                                         ; preds = %do.body
  br label %do.end, !dbg !2093

do.end:                                           ; preds = %if.end73
  br label %do.body74, !dbg !2094

do.body74:                                        ; preds = %do.end
  %76 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2095
  %77 = load i8*, i8** %sig_try, align 8, !dbg !2095
  %78 = load i8*, i8** %verif, align 8, !dbg !2095
  %call75 = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %76, i8* %77, i8* %78), !dbg !2095
  store i32 %call75, i32* %ret, align 4, !dbg !2095
  %cmp76 = icmp ne i32 %call75, 0, !dbg !2095
  br i1 %cmp76, label %if.then78, label %if.end79, !dbg !2098

if.then78:                                        ; preds = %do.body74
  br label %cleanup, !dbg !2095

if.end79:                                         ; preds = %do.body74
  br label %do.end80, !dbg !2098

do.end80:                                         ; preds = %if.end79
  store i8 0, i8* %diff, align 1, !dbg !2099
  store i64 0, i64* %i, align 8, !dbg !2101
  br label %for.cond, !dbg !2102

for.cond:                                         ; preds = %for.inc, %do.end80
  %79 = load i64, i64* %i, align 8, !dbg !2103
  %80 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2105
  %len81 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %80, i32 0, i32 1, !dbg !2106
  %81 = load i64, i64* %len81, align 8, !dbg !2106
  %cmp82 = icmp ult i64 %79, %81, !dbg !2107
  br i1 %cmp82, label %for.body, label %for.end, !dbg !2108

for.body:                                         ; preds = %for.cond
  %82 = load i64, i64* %i, align 8, !dbg !2109
  %83 = load i8*, i8** %verif, align 8, !dbg !2110
  %arrayidx = getelementptr inbounds i8, i8* %83, i64 %82, !dbg !2110
  %84 = load i8, i8* %arrayidx, align 1, !dbg !2110
  %conv84 = zext i8 %84 to i32, !dbg !2110
  %85 = load i64, i64* %i, align 8, !dbg !2111
  %86 = load i8*, i8** %sig.addr, align 8, !dbg !2112
  %arrayidx85 = getelementptr inbounds i8, i8* %86, i64 %85, !dbg !2112
  %87 = load i8, i8* %arrayidx85, align 1, !dbg !2112
  %conv86 = zext i8 %87 to i32, !dbg !2112
  %xor = xor i32 %conv84, %conv86, !dbg !2113
  %88 = load i8, i8* %diff, align 1, !dbg !2114
  %conv87 = zext i8 %88 to i32, !dbg !2114
  %or = or i32 %conv87, %xor, !dbg !2114
  %conv88 = trunc i32 %or to i8, !dbg !2114
  store i8 %conv88, i8* %diff, align 1, !dbg !2114
  br label %for.inc, !dbg !2115

for.inc:                                          ; preds = %for.body
  %89 = load i64, i64* %i, align 8, !dbg !2116
  %inc = add i64 %89, 1, !dbg !2116
  store i64 %inc, i64* %i, align 8, !dbg !2116
  br label %for.cond, !dbg !2117

for.end:                                          ; preds = %for.cond
  %90 = load i8, i8* %diff, align 1, !dbg !2118
  store volatile i8 %90, i8* %diff_no_optimize, align 1, !dbg !2119
  %91 = load volatile i8, i8* %diff_no_optimize, align 1, !dbg !2120
  %conv89 = zext i8 %91 to i32, !dbg !2120
  %cmp90 = icmp ne i32 %conv89, 0, !dbg !2122
  br i1 %cmp90, label %if.then92, label %if.end93, !dbg !2123

if.then92:                                        ; preds = %for.end
  store i32 -17152, i32* %ret, align 4, !dbg !2124
  br label %cleanup, !dbg !2126

if.end93:                                         ; preds = %for.end
  %92 = load i8*, i8** %sig.addr, align 8, !dbg !2127
  %93 = load i8*, i8** %sig_try, align 8, !dbg !2127
  %94 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2127
  %len94 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %94, i32 0, i32 1, !dbg !2127
  %95 = load i64, i64* %len94, align 8, !dbg !2127
  %96 = load i8*, i8** %sig.addr, align 8, !dbg !2127
  %97 = call i64 @llvm.objectsize.i64.p0i8(i8* %96, i1 false), !dbg !2127
  %call95 = call i8* @__memcpy_chk(i8* %92, i8* %93, i64 %95, i64 %97) #4, !dbg !2127
  br label %cleanup, !dbg !2127

cleanup:                                          ; preds = %if.end93, %if.then92, %if.then78, %if.then72
  %98 = load i8*, i8** %sig_try, align 8, !dbg !2128
  call void @free(i8* %98), !dbg !2129
  %99 = load i8*, i8** %verif, align 8, !dbg !2130
  call void @free(i8* %99), !dbg !2131
  %100 = load i32, i32* %ret, align 4, !dbg !2132
  store i32 %100, i32* %retval, !dbg !2133
  br label %return, !dbg !2133

return:                                           ; preds = %cleanup, %if.then67, %if.then55, %if.then20, %if.then9, %if.then5, %if.then
  %101 = load i32, i32* %retval, !dbg !2134
  ret i32 %101, !dbg !2134
}

declare i32 @mbedtls_oid_get_oid_by_md(i32, i8**, i64*) #3

declare i8* @calloc(i64, i64) #3

declare void @free(i8*) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_pkcs1_sign(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i8* %sig) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %sig.addr = alloca i8*, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !2135, metadata !149), !dbg !2136
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !2137, metadata !149), !dbg !2138
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !2139, metadata !149), !dbg !2140
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !2141, metadata !149), !dbg !2142
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !2143, metadata !149), !dbg !2144
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !2145, metadata !149), !dbg !2146
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !2147, metadata !149), !dbg !2148
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !2149, metadata !149), !dbg !2150
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2151
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 15, !dbg !2152
  %1 = load i32, i32* %padding, align 4, !dbg !2152
  switch i32 %1, label %sw.default [
    i32 0, label %sw.bb
    i32 1, label %sw.bb1
  ], !dbg !2153

sw.bb:                                            ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2154
  %3 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2156
  %4 = load i8*, i8** %p_rng.addr, align 8, !dbg !2157
  %5 = load i32, i32* %mode.addr, align 4, !dbg !2158
  %6 = load i32, i32* %md_alg.addr, align 4, !dbg !2159
  %7 = load i32, i32* %hashlen.addr, align 4, !dbg !2160
  %8 = load i8*, i8** %hash.addr, align 8, !dbg !2161
  %9 = load i8*, i8** %sig.addr, align 8, !dbg !2162
  %call = call i32 @mbedtls_rsa_rsassa_pkcs1_v15_sign(%struct.mbedtls_rsa_context* %2, i32 (i8*, i8*, i64)* %3, i8* %4, i32 %5, i32 %6, i32 %7, i8* %8, i8* %9), !dbg !2163
  store i32 %call, i32* %retval, !dbg !2164
  br label %return, !dbg !2164

sw.bb1:                                           ; preds = %entry
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2165
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2166
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !2167
  %13 = load i32, i32* %mode.addr, align 4, !dbg !2168
  %14 = load i32, i32* %md_alg.addr, align 4, !dbg !2169
  %15 = load i32, i32* %hashlen.addr, align 4, !dbg !2170
  %16 = load i8*, i8** %hash.addr, align 8, !dbg !2171
  %17 = load i8*, i8** %sig.addr, align 8, !dbg !2172
  %call2 = call i32 @mbedtls_rsa_rsassa_pss_sign(%struct.mbedtls_rsa_context* %10, i32 (i8*, i8*, i64)* %11, i8* %12, i32 %13, i32 %14, i32 %15, i8* %16, i8* %17), !dbg !2173
  store i32 %call2, i32* %retval, !dbg !2174
  br label %return, !dbg !2174

sw.default:                                       ; preds = %entry
  store i32 -16640, i32* %retval, !dbg !2175
  br label %return, !dbg !2175

return:                                           ; preds = %sw.default, %sw.bb1, %sw.bb
  %18 = load i32, i32* %retval, !dbg !2176
  ret i32 %18, !dbg !2176
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsassa_pss_verify_ext(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i32 %mgf1_hash_id, i32 %expected_salt_len, i8* %sig) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %mgf1_hash_id.addr = alloca i32, align 4
  %expected_salt_len.addr = alloca i32, align 4
  %sig.addr = alloca i8*, align 8
  %ret = alloca i32, align 4
  %siglen = alloca i64, align 8
  %p = alloca i8*, align 8
  %buf = alloca [1024 x i8], align 16
  %result = alloca [64 x i8], align 16
  %zeros = alloca [8 x i8], align 1
  %hlen = alloca i32, align 4
  %slen = alloca i64, align 8
  %msb = alloca i64, align 8
  %md_info = alloca %struct.mbedtls_md_info_t*, align 8
  %md_ctx = alloca %struct.mbedtls_md_context_t, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !2177, metadata !149), !dbg !2178
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !2179, metadata !149), !dbg !2180
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !2181, metadata !149), !dbg !2182
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !2183, metadata !149), !dbg !2184
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !2185, metadata !149), !dbg !2186
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !2187, metadata !149), !dbg !2188
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !2189, metadata !149), !dbg !2190
  store i32 %mgf1_hash_id, i32* %mgf1_hash_id.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mgf1_hash_id.addr, metadata !2191, metadata !149), !dbg !2192
  store i32 %expected_salt_len, i32* %expected_salt_len.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %expected_salt_len.addr, metadata !2193, metadata !149), !dbg !2194
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !2195, metadata !149), !dbg !2196
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !2197, metadata !149), !dbg !2198
  call void @llvm.dbg.declare(metadata i64* %siglen, metadata !2199, metadata !149), !dbg !2200
  call void @llvm.dbg.declare(metadata i8** %p, metadata !2201, metadata !149), !dbg !2202
  call void @llvm.dbg.declare(metadata [1024 x i8]* %buf, metadata !2203, metadata !149), !dbg !2204
  call void @llvm.dbg.declare(metadata [64 x i8]* %result, metadata !2205, metadata !149), !dbg !2206
  call void @llvm.dbg.declare(metadata [8 x i8]* %zeros, metadata !2207, metadata !149), !dbg !2211
  call void @llvm.dbg.declare(metadata i32* %hlen, metadata !2212, metadata !149), !dbg !2213
  call void @llvm.dbg.declare(metadata i64* %slen, metadata !2214, metadata !149), !dbg !2215
  call void @llvm.dbg.declare(metadata i64* %msb, metadata !2216, metadata !149), !dbg !2217
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_info_t** %md_info, metadata !2218, metadata !149), !dbg !2219
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_context_t* %md_ctx, metadata !2220, metadata !149), !dbg !2221
  %0 = load i32, i32* %mode.addr, align 4, !dbg !2222
  %cmp = icmp eq i32 %0, 1, !dbg !2224
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !2225

land.lhs.true:                                    ; preds = %entry
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2226
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 15, !dbg !2227
  %2 = load i32, i32* %padding, align 4, !dbg !2227
  %cmp1 = icmp ne i32 %2, 1, !dbg !2228
  br i1 %cmp1, label %if.then, label %if.end, !dbg !2229

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !2230
  br label %return, !dbg !2230

if.end:                                           ; preds = %land.lhs.true, %entry
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2231
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 1, !dbg !2232
  %4 = load i64, i64* %len, align 8, !dbg !2232
  store i64 %4, i64* %siglen, align 8, !dbg !2233
  %5 = load i64, i64* %siglen, align 8, !dbg !2234
  %cmp2 = icmp ult i64 %5, 16, !dbg !2236
  br i1 %cmp2, label %if.then4, label %lor.lhs.false, !dbg !2237

lor.lhs.false:                                    ; preds = %if.end
  %6 = load i64, i64* %siglen, align 8, !dbg !2238
  %cmp3 = icmp ugt i64 %6, 1024, !dbg !2239
  br i1 %cmp3, label %if.then4, label %if.end5, !dbg !2240

if.then4:                                         ; preds = %lor.lhs.false, %if.end
  store i32 -16512, i32* %retval, !dbg !2241
  br label %return, !dbg !2241

if.end5:                                          ; preds = %lor.lhs.false
  %7 = load i32, i32* %mode.addr, align 4, !dbg !2242
  %cmp6 = icmp eq i32 %7, 0, !dbg !2243
  br i1 %cmp6, label %cond.true, label %cond.false, !dbg !2244

cond.true:                                        ; preds = %if.end5
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2245
  %9 = load i8*, i8** %sig.addr, align 8, !dbg !2246
  %arraydecay = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2247
  %call = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %8, i8* %9, i8* %arraydecay), !dbg !2248
  br label %cond.end, !dbg !2244

cond.false:                                       ; preds = %if.end5
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2249
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2250
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !2251
  %13 = load i8*, i8** %sig.addr, align 8, !dbg !2252
  %arraydecay7 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2253
  %call8 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %10, i32 (i8*, i8*, i64)* %11, i8* %12, i8* %13, i8* %arraydecay7), !dbg !2254
  br label %cond.end, !dbg !2244

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call, %cond.true ], [ %call8, %cond.false ], !dbg !2244
  store i32 %cond, i32* %ret, align 4, !dbg !2255
  %14 = load i32, i32* %ret, align 4, !dbg !2256
  %cmp9 = icmp ne i32 %14, 0, !dbg !2258
  br i1 %cmp9, label %if.then10, label %if.end11, !dbg !2259

if.then10:                                        ; preds = %cond.end
  %15 = load i32, i32* %ret, align 4, !dbg !2260
  store i32 %15, i32* %retval, !dbg !2261
  br label %return, !dbg !2261

if.end11:                                         ; preds = %cond.end
  %arraydecay12 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2262
  store i8* %arraydecay12, i8** %p, align 8, !dbg !2263
  %16 = load i64, i64* %siglen, align 8, !dbg !2264
  %sub = sub i64 %16, 1, !dbg !2266
  %arrayidx = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i64 %sub, !dbg !2267
  %17 = load i8, i8* %arrayidx, align 1, !dbg !2267
  %conv = zext i8 %17 to i32, !dbg !2267
  %cmp13 = icmp ne i32 %conv, 188, !dbg !2268
  br i1 %cmp13, label %if.then15, label %if.end16, !dbg !2269

if.then15:                                        ; preds = %if.end11
  store i32 -16640, i32* %retval, !dbg !2270
  br label %return, !dbg !2270

if.end16:                                         ; preds = %if.end11
  %18 = load i32, i32* %md_alg.addr, align 4, !dbg !2271
  %cmp17 = icmp ne i32 %18, 0, !dbg !2273
  br i1 %cmp17, label %if.then19, label %if.end27, !dbg !2274

if.then19:                                        ; preds = %if.end16
  %19 = load i32, i32* %md_alg.addr, align 4, !dbg !2275
  %call20 = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %19), !dbg !2277
  store %struct.mbedtls_md_info_t* %call20, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2278
  %20 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2279
  %cmp21 = icmp eq %struct.mbedtls_md_info_t* %20, null, !dbg !2281
  br i1 %cmp21, label %if.then23, label %if.end24, !dbg !2282

if.then23:                                        ; preds = %if.then19
  store i32 -16512, i32* %retval, !dbg !2283
  br label %return, !dbg !2283

if.end24:                                         ; preds = %if.then19
  %21 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2284
  %call25 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %21), !dbg !2285
  %conv26 = zext i8 %call25 to i32, !dbg !2285
  store i32 %conv26, i32* %hashlen.addr, align 4, !dbg !2286
  br label %if.end27, !dbg !2287

if.end27:                                         ; preds = %if.end24, %if.end16
  %22 = load i32, i32* %mgf1_hash_id.addr, align 4, !dbg !2288
  %call28 = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %22), !dbg !2289
  store %struct.mbedtls_md_info_t* %call28, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2290
  %23 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2291
  %cmp29 = icmp eq %struct.mbedtls_md_info_t* %23, null, !dbg !2293
  br i1 %cmp29, label %if.then31, label %if.end32, !dbg !2294

if.then31:                                        ; preds = %if.end27
  store i32 -16512, i32* %retval, !dbg !2295
  br label %return, !dbg !2295

if.end32:                                         ; preds = %if.end27
  %24 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2296
  %call33 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %24), !dbg !2297
  %conv34 = zext i8 %call33 to i32, !dbg !2297
  store i32 %conv34, i32* %hlen, align 4, !dbg !2298
  %25 = load i64, i64* %siglen, align 8, !dbg !2299
  %26 = load i32, i32* %hlen, align 4, !dbg !2300
  %conv35 = zext i32 %26 to i64, !dbg !2300
  %sub36 = sub i64 %25, %conv35, !dbg !2301
  %sub37 = sub i64 %sub36, 1, !dbg !2302
  store i64 %sub37, i64* %slen, align 8, !dbg !2303
  %27 = bitcast [8 x i8]* %zeros to i8*, !dbg !2304
  call void @llvm.memset.p0i8.i64(i8* %27, i8 0, i64 8, i32 1, i1 false), !dbg !2304
  %28 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2305
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %28, i32 0, i32 2, !dbg !2306
  %call38 = call i64 @mbedtls_mpi_bitlen(%struct.mbedtls_mpi* %N), !dbg !2307
  %sub39 = sub i64 %call38, 1, !dbg !2308
  store i64 %sub39, i64* %msb, align 8, !dbg !2309
  %29 = load i64, i64* %msb, align 8, !dbg !2310
  %rem = urem i64 %29, 8, !dbg !2312
  %cmp40 = icmp eq i64 %rem, 0, !dbg !2313
  br i1 %cmp40, label %if.then42, label %if.end44, !dbg !2314

if.then42:                                        ; preds = %if.end32
  %30 = load i8*, i8** %p, align 8, !dbg !2315
  %incdec.ptr = getelementptr inbounds i8, i8* %30, i32 1, !dbg !2315
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !2315
  %31 = load i64, i64* %siglen, align 8, !dbg !2317
  %sub43 = sub i64 %31, 1, !dbg !2317
  store i64 %sub43, i64* %siglen, align 8, !dbg !2317
  br label %if.end44, !dbg !2318

if.end44:                                         ; preds = %if.then42, %if.end32
  %arrayidx45 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i64 0, !dbg !2319
  %32 = load i8, i8* %arrayidx45, align 1, !dbg !2319
  %conv46 = zext i8 %32 to i32, !dbg !2319
  %33 = load i64, i64* %siglen, align 8, !dbg !2321
  %mul = mul i64 %33, 8, !dbg !2322
  %sub47 = sub i64 8, %mul, !dbg !2323
  %34 = load i64, i64* %msb, align 8, !dbg !2324
  %add = add i64 %sub47, %34, !dbg !2325
  %sh_prom = trunc i64 %add to i32, !dbg !2326
  %shr = ashr i32 %conv46, %sh_prom, !dbg !2326
  %tobool = icmp ne i32 %shr, 0, !dbg !2326
  br i1 %tobool, label %if.then48, label %if.end49, !dbg !2327

if.then48:                                        ; preds = %if.end44
  store i32 -16512, i32* %retval, !dbg !2328
  br label %return, !dbg !2328

if.end49:                                         ; preds = %if.end44
  call void @mbedtls_md_init(%struct.mbedtls_md_context_t* %md_ctx), !dbg !2329
  %35 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2330
  %call50 = call i32 @mbedtls_md_setup(%struct.mbedtls_md_context_t* %md_ctx, %struct.mbedtls_md_info_t* %35, i32 0), !dbg !2331
  %36 = load i8*, i8** %p, align 8, !dbg !2332
  %37 = load i64, i64* %siglen, align 8, !dbg !2333
  %38 = load i32, i32* %hlen, align 4, !dbg !2334
  %conv51 = zext i32 %38 to i64, !dbg !2334
  %sub52 = sub i64 %37, %conv51, !dbg !2335
  %sub53 = sub i64 %sub52, 1, !dbg !2336
  %39 = load i8*, i8** %p, align 8, !dbg !2337
  %40 = load i64, i64* %siglen, align 8, !dbg !2338
  %add.ptr = getelementptr inbounds i8, i8* %39, i64 %40, !dbg !2339
  %41 = load i32, i32* %hlen, align 4, !dbg !2340
  %idx.ext = zext i32 %41 to i64, !dbg !2341
  %idx.neg = sub i64 0, %idx.ext, !dbg !2341
  %add.ptr54 = getelementptr inbounds i8, i8* %add.ptr, i64 %idx.neg, !dbg !2341
  %add.ptr55 = getelementptr inbounds i8, i8* %add.ptr54, i64 -1, !dbg !2342
  %42 = load i32, i32* %hlen, align 4, !dbg !2343
  %conv56 = zext i32 %42 to i64, !dbg !2343
  call void @mgf_mask(i8* %36, i64 %sub53, i8* %add.ptr55, i64 %conv56, %struct.mbedtls_md_context_t* %md_ctx), !dbg !2344
  %43 = load i64, i64* %siglen, align 8, !dbg !2345
  %mul57 = mul i64 %43, 8, !dbg !2346
  %44 = load i64, i64* %msb, align 8, !dbg !2347
  %sub58 = sub i64 %mul57, %44, !dbg !2348
  %sh_prom59 = trunc i64 %sub58 to i32, !dbg !2349
  %shr60 = ashr i32 255, %sh_prom59, !dbg !2349
  %arrayidx61 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i64 0, !dbg !2350
  %45 = load i8, i8* %arrayidx61, align 1, !dbg !2351
  %conv62 = zext i8 %45 to i32, !dbg !2351
  %and = and i32 %conv62, %shr60, !dbg !2351
  %conv63 = trunc i32 %and to i8, !dbg !2351
  store i8 %conv63, i8* %arrayidx61, align 1, !dbg !2351
  br label %while.cond, !dbg !2352

while.cond:                                       ; preds = %while.body, %if.end49
  %46 = load i8*, i8** %p, align 8, !dbg !2353
  %arraydecay64 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2354
  %47 = load i64, i64* %siglen, align 8, !dbg !2355
  %add.ptr65 = getelementptr inbounds i8, i8* %arraydecay64, i64 %47, !dbg !2356
  %cmp66 = icmp ult i8* %46, %add.ptr65, !dbg !2357
  br i1 %cmp66, label %land.rhs, label %land.end, !dbg !2358

land.rhs:                                         ; preds = %while.cond
  %48 = load i8*, i8** %p, align 8, !dbg !2359
  %49 = load i8, i8* %48, align 1, !dbg !2360
  %conv68 = zext i8 %49 to i32, !dbg !2360
  %cmp69 = icmp eq i32 %conv68, 0, !dbg !2361
  br label %land.end

land.end:                                         ; preds = %land.rhs, %while.cond
  %50 = phi i1 [ false, %while.cond ], [ %cmp69, %land.rhs ]
  br i1 %50, label %while.body, label %while.end, !dbg !2352

while.body:                                       ; preds = %land.end
  %51 = load i8*, i8** %p, align 8, !dbg !2362
  %incdec.ptr71 = getelementptr inbounds i8, i8* %51, i32 1, !dbg !2362
  store i8* %incdec.ptr71, i8** %p, align 8, !dbg !2362
  br label %while.cond, !dbg !2352

while.end:                                        ; preds = %land.end
  %52 = load i8*, i8** %p, align 8, !dbg !2363
  %arraydecay72 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2365
  %53 = load i64, i64* %siglen, align 8, !dbg !2366
  %add.ptr73 = getelementptr inbounds i8, i8* %arraydecay72, i64 %53, !dbg !2367
  %cmp74 = icmp eq i8* %52, %add.ptr73, !dbg !2368
  br i1 %cmp74, label %if.then81, label %lor.lhs.false76, !dbg !2369

lor.lhs.false76:                                  ; preds = %while.end
  %54 = load i8*, i8** %p, align 8, !dbg !2370
  %incdec.ptr77 = getelementptr inbounds i8, i8* %54, i32 1, !dbg !2370
  store i8* %incdec.ptr77, i8** %p, align 8, !dbg !2370
  %55 = load i8, i8* %54, align 1, !dbg !2371
  %conv78 = zext i8 %55 to i32, !dbg !2371
  %cmp79 = icmp ne i32 %conv78, 1, !dbg !2372
  br i1 %cmp79, label %if.then81, label %if.end82, !dbg !2373

if.then81:                                        ; preds = %lor.lhs.false76, %while.end
  call void @mbedtls_md_free(%struct.mbedtls_md_context_t* %md_ctx), !dbg !2374
  store i32 -16640, i32* %retval, !dbg !2376
  br label %return, !dbg !2376

if.end82:                                         ; preds = %lor.lhs.false76
  %56 = load i8*, i8** %p, align 8, !dbg !2377
  %arraydecay83 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2378
  %sub.ptr.lhs.cast = ptrtoint i8* %56 to i64, !dbg !2379
  %sub.ptr.rhs.cast = ptrtoint i8* %arraydecay83 to i64, !dbg !2379
  %sub.ptr.sub = sub i64 %sub.ptr.lhs.cast, %sub.ptr.rhs.cast, !dbg !2379
  %57 = load i64, i64* %slen, align 8, !dbg !2380
  %sub84 = sub i64 %57, %sub.ptr.sub, !dbg !2380
  store i64 %sub84, i64* %slen, align 8, !dbg !2380
  %58 = load i32, i32* %expected_salt_len.addr, align 4, !dbg !2381
  %cmp85 = icmp ne i32 %58, -1, !dbg !2383
  br i1 %cmp85, label %land.lhs.true87, label %if.end92, !dbg !2384

land.lhs.true87:                                  ; preds = %if.end82
  %59 = load i64, i64* %slen, align 8, !dbg !2385
  %60 = load i32, i32* %expected_salt_len.addr, align 4, !dbg !2386
  %conv88 = sext i32 %60 to i64, !dbg !2387
  %cmp89 = icmp ne i64 %59, %conv88, !dbg !2388
  br i1 %cmp89, label %if.then91, label %if.end92, !dbg !2389

if.then91:                                        ; preds = %land.lhs.true87
  call void @mbedtls_md_free(%struct.mbedtls_md_context_t* %md_ctx), !dbg !2390
  store i32 -16640, i32* %retval, !dbg !2392
  br label %return, !dbg !2392

if.end92:                                         ; preds = %land.lhs.true87, %if.end82
  %call93 = call i32 @mbedtls_md_starts(%struct.mbedtls_md_context_t* %md_ctx), !dbg !2393
  %arraydecay94 = getelementptr inbounds [8 x i8], [8 x i8]* %zeros, i32 0, i32 0, !dbg !2394
  %call95 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %md_ctx, i8* %arraydecay94, i64 8), !dbg !2395
  %61 = load i8*, i8** %hash.addr, align 8, !dbg !2396
  %62 = load i32, i32* %hashlen.addr, align 4, !dbg !2397
  %conv96 = zext i32 %62 to i64, !dbg !2397
  %call97 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %md_ctx, i8* %61, i64 %conv96), !dbg !2398
  %63 = load i8*, i8** %p, align 8, !dbg !2399
  %64 = load i64, i64* %slen, align 8, !dbg !2400
  %call98 = call i32 @mbedtls_md_update(%struct.mbedtls_md_context_t* %md_ctx, i8* %63, i64 %64), !dbg !2401
  %arraydecay99 = getelementptr inbounds [64 x i8], [64 x i8]* %result, i32 0, i32 0, !dbg !2402
  %call100 = call i32 @mbedtls_md_finish(%struct.mbedtls_md_context_t* %md_ctx, i8* %arraydecay99), !dbg !2403
  call void @mbedtls_md_free(%struct.mbedtls_md_context_t* %md_ctx), !dbg !2404
  %65 = load i8*, i8** %p, align 8, !dbg !2405
  %66 = load i64, i64* %slen, align 8, !dbg !2407
  %add.ptr101 = getelementptr inbounds i8, i8* %65, i64 %66, !dbg !2408
  %arraydecay102 = getelementptr inbounds [64 x i8], [64 x i8]* %result, i32 0, i32 0, !dbg !2409
  %67 = load i32, i32* %hlen, align 4, !dbg !2410
  %conv103 = zext i32 %67 to i64, !dbg !2410
  %call104 = call i32 @memcmp(i8* %add.ptr101, i8* %arraydecay102, i64 %conv103), !dbg !2411
  %cmp105 = icmp eq i32 %call104, 0, !dbg !2412
  br i1 %cmp105, label %if.then107, label %if.else, !dbg !2413

if.then107:                                       ; preds = %if.end92
  store i32 0, i32* %retval, !dbg !2414
  br label %return, !dbg !2414

if.else:                                          ; preds = %if.end92
  store i32 -17280, i32* %retval, !dbg !2415
  br label %return, !dbg !2415

return:                                           ; preds = %if.else, %if.then107, %if.then91, %if.then81, %if.then48, %if.then31, %if.then23, %if.then15, %if.then10, %if.then4, %if.then
  %68 = load i32, i32* %retval, !dbg !2416
  ret i32 %68, !dbg !2416
}

; Function Attrs: nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture, i8, i64, i32, i1) #4

declare i32 @memcmp(i8*, i8*, i64) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsassa_pss_verify(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i8* %sig) #0 {
entry:
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %sig.addr = alloca i8*, align 8
  %mgf1_hash_id = alloca i32, align 4
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !2417, metadata !149), !dbg !2418
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !2419, metadata !149), !dbg !2420
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !2421, metadata !149), !dbg !2422
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !2423, metadata !149), !dbg !2424
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !2425, metadata !149), !dbg !2426
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !2427, metadata !149), !dbg !2428
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !2429, metadata !149), !dbg !2430
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !2431, metadata !149), !dbg !2432
  call void @llvm.dbg.declare(metadata i32* %mgf1_hash_id, metadata !2433, metadata !149), !dbg !2434
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2435
  %hash_id = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 16, !dbg !2436
  %1 = load i32, i32* %hash_id, align 4, !dbg !2436
  %cmp = icmp ne i32 %1, 0, !dbg !2437
  br i1 %cmp, label %cond.true, label %cond.false, !dbg !2438

cond.true:                                        ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2439
  %hash_id1 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 16, !dbg !2440
  %3 = load i32, i32* %hash_id1, align 4, !dbg !2440
  br label %cond.end, !dbg !2438

cond.false:                                       ; preds = %entry
  %4 = load i32, i32* %md_alg.addr, align 4, !dbg !2441
  br label %cond.end, !dbg !2438

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %3, %cond.true ], [ %4, %cond.false ], !dbg !2438
  store i32 %cond, i32* %mgf1_hash_id, align 4, !dbg !2434
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2442
  %6 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2443
  %7 = load i8*, i8** %p_rng.addr, align 8, !dbg !2444
  %8 = load i32, i32* %mode.addr, align 4, !dbg !2445
  %9 = load i32, i32* %md_alg.addr, align 4, !dbg !2446
  %10 = load i32, i32* %hashlen.addr, align 4, !dbg !2447
  %11 = load i8*, i8** %hash.addr, align 8, !dbg !2448
  %12 = load i32, i32* %mgf1_hash_id, align 4, !dbg !2449
  %13 = load i8*, i8** %sig.addr, align 8, !dbg !2450
  %call = call i32 @mbedtls_rsa_rsassa_pss_verify_ext(%struct.mbedtls_rsa_context* %5, i32 (i8*, i8*, i64)* %6, i8* %7, i32 %8, i32 %9, i32 %10, i8* %11, i32 %12, i32 -1, i8* %13), !dbg !2451
  ret i32 %call, !dbg !2452
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_rsassa_pkcs1_v15_verify(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i8* %sig) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %sig.addr = alloca i8*, align 8
  %ret = alloca i32, align 4
  %len = alloca i64, align 8
  %siglen = alloca i64, align 8
  %asn1_len = alloca i64, align 8
  %p = alloca i8*, align 8
  %end = alloca i8*, align 8
  %buf = alloca [1024 x i8], align 16
  %msg_md_alg = alloca i32, align 4
  %md_info = alloca %struct.mbedtls_md_info_t*, align 8
  %oid = alloca %struct.mbedtls_asn1_buf, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !2453, metadata !149), !dbg !2454
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !2455, metadata !149), !dbg !2456
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !2457, metadata !149), !dbg !2458
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !2459, metadata !149), !dbg !2460
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !2461, metadata !149), !dbg !2462
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !2463, metadata !149), !dbg !2464
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !2465, metadata !149), !dbg !2466
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !2467, metadata !149), !dbg !2468
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !2469, metadata !149), !dbg !2470
  call void @llvm.dbg.declare(metadata i64* %len, metadata !2471, metadata !149), !dbg !2472
  call void @llvm.dbg.declare(metadata i64* %siglen, metadata !2473, metadata !149), !dbg !2474
  call void @llvm.dbg.declare(metadata i64* %asn1_len, metadata !2475, metadata !149), !dbg !2476
  call void @llvm.dbg.declare(metadata i8** %p, metadata !2477, metadata !149), !dbg !2478
  call void @llvm.dbg.declare(metadata i8** %end, metadata !2479, metadata !149), !dbg !2480
  call void @llvm.dbg.declare(metadata [1024 x i8]* %buf, metadata !2481, metadata !149), !dbg !2482
  call void @llvm.dbg.declare(metadata i32* %msg_md_alg, metadata !2483, metadata !149), !dbg !2484
  call void @llvm.dbg.declare(metadata %struct.mbedtls_md_info_t** %md_info, metadata !2485, metadata !149), !dbg !2486
  call void @llvm.dbg.declare(metadata %struct.mbedtls_asn1_buf* %oid, metadata !2487, metadata !149), !dbg !2494
  %0 = load i32, i32* %mode.addr, align 4, !dbg !2495
  %cmp = icmp eq i32 %0, 1, !dbg !2497
  br i1 %cmp, label %land.lhs.true, label %if.end, !dbg !2498

land.lhs.true:                                    ; preds = %entry
  %1 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2499
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %1, i32 0, i32 15, !dbg !2500
  %2 = load i32, i32* %padding, align 4, !dbg !2500
  %cmp1 = icmp ne i32 %2, 0, !dbg !2501
  br i1 %cmp1, label %if.then, label %if.end, !dbg !2502

if.then:                                          ; preds = %land.lhs.true
  store i32 -16512, i32* %retval, !dbg !2503
  br label %return, !dbg !2503

if.end:                                           ; preds = %land.lhs.true, %entry
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2504
  %len2 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 1, !dbg !2505
  %4 = load i64, i64* %len2, align 8, !dbg !2505
  store i64 %4, i64* %siglen, align 8, !dbg !2506
  %5 = load i64, i64* %siglen, align 8, !dbg !2507
  %cmp3 = icmp ult i64 %5, 16, !dbg !2509
  br i1 %cmp3, label %if.then5, label %lor.lhs.false, !dbg !2510

lor.lhs.false:                                    ; preds = %if.end
  %6 = load i64, i64* %siglen, align 8, !dbg !2511
  %cmp4 = icmp ugt i64 %6, 1024, !dbg !2512
  br i1 %cmp4, label %if.then5, label %if.end6, !dbg !2513

if.then5:                                         ; preds = %lor.lhs.false, %if.end
  store i32 -16512, i32* %retval, !dbg !2514
  br label %return, !dbg !2514

if.end6:                                          ; preds = %lor.lhs.false
  %7 = load i32, i32* %mode.addr, align 4, !dbg !2515
  %cmp7 = icmp eq i32 %7, 0, !dbg !2516
  br i1 %cmp7, label %cond.true, label %cond.false, !dbg !2517

cond.true:                                        ; preds = %if.end6
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2518
  %9 = load i8*, i8** %sig.addr, align 8, !dbg !2519
  %arraydecay = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2520
  %call = call i32 @mbedtls_rsa_public(%struct.mbedtls_rsa_context* %8, i8* %9, i8* %arraydecay), !dbg !2521
  br label %cond.end, !dbg !2517

cond.false:                                       ; preds = %if.end6
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2522
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2523
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !2524
  %13 = load i8*, i8** %sig.addr, align 8, !dbg !2525
  %arraydecay8 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2526
  %call9 = call i32 @mbedtls_rsa_private(%struct.mbedtls_rsa_context* %10, i32 (i8*, i8*, i64)* %11, i8* %12, i8* %13, i8* %arraydecay8), !dbg !2527
  br label %cond.end, !dbg !2517

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond = phi i32 [ %call, %cond.true ], [ %call9, %cond.false ], !dbg !2517
  store i32 %cond, i32* %ret, align 4, !dbg !2528
  %14 = load i32, i32* %ret, align 4, !dbg !2529
  %cmp10 = icmp ne i32 %14, 0, !dbg !2531
  br i1 %cmp10, label %if.then11, label %if.end12, !dbg !2532

if.then11:                                        ; preds = %cond.end
  %15 = load i32, i32* %ret, align 4, !dbg !2533
  store i32 %15, i32* %retval, !dbg !2534
  br label %return, !dbg !2534

if.end12:                                         ; preds = %cond.end
  %arraydecay13 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2535
  store i8* %arraydecay13, i8** %p, align 8, !dbg !2536
  %16 = load i8*, i8** %p, align 8, !dbg !2537
  %incdec.ptr = getelementptr inbounds i8, i8* %16, i32 1, !dbg !2537
  store i8* %incdec.ptr, i8** %p, align 8, !dbg !2537
  %17 = load i8, i8* %16, align 1, !dbg !2539
  %conv = zext i8 %17 to i32, !dbg !2539
  %cmp14 = icmp ne i32 %conv, 0, !dbg !2540
  br i1 %cmp14, label %if.then21, label %lor.lhs.false16, !dbg !2541

lor.lhs.false16:                                  ; preds = %if.end12
  %18 = load i8*, i8** %p, align 8, !dbg !2542
  %incdec.ptr17 = getelementptr inbounds i8, i8* %18, i32 1, !dbg !2542
  store i8* %incdec.ptr17, i8** %p, align 8, !dbg !2542
  %19 = load i8, i8* %18, align 1, !dbg !2543
  %conv18 = zext i8 %19 to i32, !dbg !2543
  %cmp19 = icmp ne i32 %conv18, 1, !dbg !2544
  br i1 %cmp19, label %if.then21, label %if.end22, !dbg !2545

if.then21:                                        ; preds = %lor.lhs.false16, %if.end12
  store i32 -16640, i32* %retval, !dbg !2546
  br label %return, !dbg !2546

if.end22:                                         ; preds = %lor.lhs.false16
  br label %while.cond, !dbg !2547

while.cond:                                       ; preds = %if.end35, %if.end22
  %20 = load i8*, i8** %p, align 8, !dbg !2548
  %21 = load i8, i8* %20, align 1, !dbg !2549
  %conv23 = zext i8 %21 to i32, !dbg !2549
  %cmp24 = icmp ne i32 %conv23, 0, !dbg !2550
  br i1 %cmp24, label %while.body, label %while.end, !dbg !2547

while.body:                                       ; preds = %while.cond
  %22 = load i8*, i8** %p, align 8, !dbg !2551
  %arraydecay26 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2554
  %23 = load i64, i64* %siglen, align 8, !dbg !2555
  %add.ptr = getelementptr inbounds i8, i8* %arraydecay26, i64 %23, !dbg !2556
  %add.ptr27 = getelementptr inbounds i8, i8* %add.ptr, i64 -1, !dbg !2557
  %cmp28 = icmp uge i8* %22, %add.ptr27, !dbg !2558
  br i1 %cmp28, label %if.then34, label %lor.lhs.false30, !dbg !2559

lor.lhs.false30:                                  ; preds = %while.body
  %24 = load i8*, i8** %p, align 8, !dbg !2560
  %25 = load i8, i8* %24, align 1, !dbg !2561
  %conv31 = zext i8 %25 to i32, !dbg !2561
  %cmp32 = icmp ne i32 %conv31, 255, !dbg !2562
  br i1 %cmp32, label %if.then34, label %if.end35, !dbg !2563

if.then34:                                        ; preds = %lor.lhs.false30, %while.body
  store i32 -16640, i32* %retval, !dbg !2564
  br label %return, !dbg !2564

if.end35:                                         ; preds = %lor.lhs.false30
  %26 = load i8*, i8** %p, align 8, !dbg !2565
  %incdec.ptr36 = getelementptr inbounds i8, i8* %26, i32 1, !dbg !2565
  store i8* %incdec.ptr36, i8** %p, align 8, !dbg !2565
  br label %while.cond, !dbg !2547

while.end:                                        ; preds = %while.cond
  %27 = load i8*, i8** %p, align 8, !dbg !2566
  %incdec.ptr37 = getelementptr inbounds i8, i8* %27, i32 1, !dbg !2566
  store i8* %incdec.ptr37, i8** %p, align 8, !dbg !2566
  %28 = load i64, i64* %siglen, align 8, !dbg !2567
  %29 = load i8*, i8** %p, align 8, !dbg !2568
  %arraydecay38 = getelementptr inbounds [1024 x i8], [1024 x i8]* %buf, i32 0, i32 0, !dbg !2569
  %sub.ptr.lhs.cast = ptrtoint i8* %29 to i64, !dbg !2570
  %sub.ptr.rhs.cast = ptrtoint i8* %arraydecay38 to i64, !dbg !2570
  %sub.ptr.sub = sub i64 %sub.ptr.lhs.cast, %sub.ptr.rhs.cast, !dbg !2570
  %sub = sub i64 %28, %sub.ptr.sub, !dbg !2571
  store i64 %sub, i64* %len, align 8, !dbg !2572
  %30 = load i64, i64* %len, align 8, !dbg !2573
  %31 = load i32, i32* %hashlen.addr, align 4, !dbg !2575
  %conv39 = zext i32 %31 to i64, !dbg !2575
  %cmp40 = icmp eq i64 %30, %conv39, !dbg !2576
  br i1 %cmp40, label %land.lhs.true42, label %if.end51, !dbg !2577

land.lhs.true42:                                  ; preds = %while.end
  %32 = load i32, i32* %md_alg.addr, align 4, !dbg !2578
  %cmp43 = icmp eq i32 %32, 0, !dbg !2579
  br i1 %cmp43, label %if.then45, label %if.end51, !dbg !2580

if.then45:                                        ; preds = %land.lhs.true42
  %33 = load i8*, i8** %p, align 8, !dbg !2581
  %34 = load i8*, i8** %hash.addr, align 8, !dbg !2584
  %35 = load i32, i32* %hashlen.addr, align 4, !dbg !2585
  %conv46 = zext i32 %35 to i64, !dbg !2585
  %call47 = call i32 @memcmp(i8* %33, i8* %34, i64 %conv46), !dbg !2586
  %cmp48 = icmp eq i32 %call47, 0, !dbg !2587
  br i1 %cmp48, label %if.then50, label %if.else, !dbg !2588

if.then50:                                        ; preds = %if.then45
  store i32 0, i32* %retval, !dbg !2589
  br label %return, !dbg !2589

if.else:                                          ; preds = %if.then45
  store i32 -17280, i32* %retval, !dbg !2590
  br label %return, !dbg !2590

if.end51:                                         ; preds = %land.lhs.true42, %while.end
  %36 = load i32, i32* %md_alg.addr, align 4, !dbg !2591
  %call52 = call %struct.mbedtls_md_info_t* @mbedtls_md_info_from_type(i32 %36), !dbg !2592
  store %struct.mbedtls_md_info_t* %call52, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2593
  %37 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2594
  %cmp53 = icmp eq %struct.mbedtls_md_info_t* %37, null, !dbg !2596
  br i1 %cmp53, label %if.then55, label %if.end56, !dbg !2597

if.then55:                                        ; preds = %if.end51
  store i32 -16512, i32* %retval, !dbg !2598
  br label %return, !dbg !2598

if.end56:                                         ; preds = %if.end51
  %38 = load %struct.mbedtls_md_info_t*, %struct.mbedtls_md_info_t** %md_info, align 8, !dbg !2599
  %call57 = call zeroext i8 @mbedtls_md_get_size(%struct.mbedtls_md_info_t* %38), !dbg !2600
  %conv58 = zext i8 %call57 to i32, !dbg !2600
  store i32 %conv58, i32* %hashlen.addr, align 4, !dbg !2601
  %39 = load i8*, i8** %p, align 8, !dbg !2602
  %40 = load i64, i64* %len, align 8, !dbg !2603
  %add.ptr59 = getelementptr inbounds i8, i8* %39, i64 %40, !dbg !2604
  store i8* %add.ptr59, i8** %end, align 8, !dbg !2605
  %41 = load i8*, i8** %end, align 8, !dbg !2606
  %call60 = call i32 (i8**, i8*, i64*, i32, ...) bitcast (i32 (...)* @mbedtls_asn1_get_tag to i32 (i8**, i8*, i64*, i32, ...)*)(i8** %p, i8* %41, i64* %asn1_len, i32 48), !dbg !2608
  store i32 %call60, i32* %ret, align 4, !dbg !2609
  %cmp61 = icmp ne i32 %call60, 0, !dbg !2610
  br i1 %cmp61, label %if.then63, label %if.end64, !dbg !2611

if.then63:                                        ; preds = %if.end56
  store i32 -17280, i32* %retval, !dbg !2612
  br label %return, !dbg !2612

if.end64:                                         ; preds = %if.end56
  %42 = load i64, i64* %asn1_len, align 8, !dbg !2613
  %add = add i64 %42, 2, !dbg !2615
  %43 = load i64, i64* %len, align 8, !dbg !2616
  %cmp65 = icmp ne i64 %add, %43, !dbg !2617
  br i1 %cmp65, label %if.then67, label %if.end68, !dbg !2618

if.then67:                                        ; preds = %if.end64
  store i32 -17280, i32* %retval, !dbg !2619
  br label %return, !dbg !2619

if.end68:                                         ; preds = %if.end64
  %44 = load i8*, i8** %end, align 8, !dbg !2620
  %call69 = call i32 (i8**, i8*, i64*, i32, ...) bitcast (i32 (...)* @mbedtls_asn1_get_tag to i32 (i8**, i8*, i64*, i32, ...)*)(i8** %p, i8* %44, i64* %asn1_len, i32 48), !dbg !2622
  store i32 %call69, i32* %ret, align 4, !dbg !2623
  %cmp70 = icmp ne i32 %call69, 0, !dbg !2624
  br i1 %cmp70, label %if.then72, label %if.end73, !dbg !2625

if.then72:                                        ; preds = %if.end68
  store i32 -17280, i32* %retval, !dbg !2626
  br label %return, !dbg !2626

if.end73:                                         ; preds = %if.end68
  %45 = load i64, i64* %asn1_len, align 8, !dbg !2627
  %add74 = add i64 %45, 6, !dbg !2629
  %46 = load i32, i32* %hashlen.addr, align 4, !dbg !2630
  %conv75 = zext i32 %46 to i64, !dbg !2630
  %add76 = add i64 %add74, %conv75, !dbg !2631
  %47 = load i64, i64* %len, align 8, !dbg !2632
  %cmp77 = icmp ne i64 %add76, %47, !dbg !2633
  br i1 %cmp77, label %if.then79, label %if.end80, !dbg !2634

if.then79:                                        ; preds = %if.end73
  store i32 -17280, i32* %retval, !dbg !2635
  br label %return, !dbg !2635

if.end80:                                         ; preds = %if.end73
  %48 = load i8*, i8** %end, align 8, !dbg !2636
  %len81 = getelementptr inbounds %struct.mbedtls_asn1_buf, %struct.mbedtls_asn1_buf* %oid, i32 0, i32 1, !dbg !2638
  %call82 = call i32 (i8**, i8*, i64*, i32, ...) bitcast (i32 (...)* @mbedtls_asn1_get_tag to i32 (i8**, i8*, i64*, i32, ...)*)(i8** %p, i8* %48, i64* %len81, i32 6), !dbg !2639
  store i32 %call82, i32* %ret, align 4, !dbg !2640
  %cmp83 = icmp ne i32 %call82, 0, !dbg !2641
  br i1 %cmp83, label %if.then85, label %if.end86, !dbg !2642

if.then85:                                        ; preds = %if.end80
  store i32 -17280, i32* %retval, !dbg !2643
  br label %return, !dbg !2643

if.end86:                                         ; preds = %if.end80
  %49 = load i8*, i8** %p, align 8, !dbg !2644
  %p87 = getelementptr inbounds %struct.mbedtls_asn1_buf, %struct.mbedtls_asn1_buf* %oid, i32 0, i32 2, !dbg !2645
  store i8* %49, i8** %p87, align 8, !dbg !2646
  %len88 = getelementptr inbounds %struct.mbedtls_asn1_buf, %struct.mbedtls_asn1_buf* %oid, i32 0, i32 1, !dbg !2647
  %50 = load i64, i64* %len88, align 8, !dbg !2647
  %51 = load i8*, i8** %p, align 8, !dbg !2648
  %add.ptr89 = getelementptr inbounds i8, i8* %51, i64 %50, !dbg !2648
  store i8* %add.ptr89, i8** %p, align 8, !dbg !2648
  %call90 = call i32 (%struct.mbedtls_asn1_buf*, i32*, ...) bitcast (i32 (...)* @mbedtls_oid_get_md_alg to i32 (%struct.mbedtls_asn1_buf*, i32*, ...)*)(%struct.mbedtls_asn1_buf* %oid, i32* %msg_md_alg), !dbg !2649
  %cmp91 = icmp ne i32 %call90, 0, !dbg !2651
  br i1 %cmp91, label %if.then93, label %if.end94, !dbg !2652

if.then93:                                        ; preds = %if.end86
  store i32 -17280, i32* %retval, !dbg !2653
  br label %return, !dbg !2653

if.end94:                                         ; preds = %if.end86
  %52 = load i32, i32* %md_alg.addr, align 4, !dbg !2654
  %53 = load i32, i32* %msg_md_alg, align 4, !dbg !2656
  %cmp95 = icmp ne i32 %52, %53, !dbg !2657
  br i1 %cmp95, label %if.then97, label %if.end98, !dbg !2658

if.then97:                                        ; preds = %if.end94
  store i32 -17280, i32* %retval, !dbg !2659
  br label %return, !dbg !2659

if.end98:                                         ; preds = %if.end94
  %54 = load i8*, i8** %end, align 8, !dbg !2660
  %call99 = call i32 (i8**, i8*, i64*, i32, ...) bitcast (i32 (...)* @mbedtls_asn1_get_tag to i32 (i8**, i8*, i64*, i32, ...)*)(i8** %p, i8* %54, i64* %asn1_len, i32 5), !dbg !2662
  store i32 %call99, i32* %ret, align 4, !dbg !2663
  %cmp100 = icmp ne i32 %call99, 0, !dbg !2664
  br i1 %cmp100, label %if.then102, label %if.end103, !dbg !2665

if.then102:                                       ; preds = %if.end98
  store i32 -17280, i32* %retval, !dbg !2666
  br label %return, !dbg !2666

if.end103:                                        ; preds = %if.end98
  %55 = load i8*, i8** %end, align 8, !dbg !2667
  %call104 = call i32 (i8**, i8*, i64*, i32, ...) bitcast (i32 (...)* @mbedtls_asn1_get_tag to i32 (i8**, i8*, i64*, i32, ...)*)(i8** %p, i8* %55, i64* %asn1_len, i32 4), !dbg !2669
  store i32 %call104, i32* %ret, align 4, !dbg !2670
  %cmp105 = icmp ne i32 %call104, 0, !dbg !2671
  br i1 %cmp105, label %if.then107, label %if.end108, !dbg !2672

if.then107:                                       ; preds = %if.end103
  store i32 -17280, i32* %retval, !dbg !2673
  br label %return, !dbg !2673

if.end108:                                        ; preds = %if.end103
  %56 = load i64, i64* %asn1_len, align 8, !dbg !2674
  %57 = load i32, i32* %hashlen.addr, align 4, !dbg !2676
  %conv109 = zext i32 %57 to i64, !dbg !2676
  %cmp110 = icmp ne i64 %56, %conv109, !dbg !2677
  br i1 %cmp110, label %if.then112, label %if.end113, !dbg !2678

if.then112:                                       ; preds = %if.end108
  store i32 -17280, i32* %retval, !dbg !2679
  br label %return, !dbg !2679

if.end113:                                        ; preds = %if.end108
  %58 = load i8*, i8** %p, align 8, !dbg !2680
  %59 = load i8*, i8** %hash.addr, align 8, !dbg !2682
  %60 = load i32, i32* %hashlen.addr, align 4, !dbg !2683
  %conv114 = zext i32 %60 to i64, !dbg !2683
  %call115 = call i32 @memcmp(i8* %58, i8* %59, i64 %conv114), !dbg !2684
  %cmp116 = icmp ne i32 %call115, 0, !dbg !2685
  br i1 %cmp116, label %if.then118, label %if.end119, !dbg !2686

if.then118:                                       ; preds = %if.end113
  store i32 -17280, i32* %retval, !dbg !2687
  br label %return, !dbg !2687

if.end119:                                        ; preds = %if.end113
  %61 = load i32, i32* %hashlen.addr, align 4, !dbg !2688
  %62 = load i8*, i8** %p, align 8, !dbg !2689
  %idx.ext = zext i32 %61 to i64, !dbg !2689
  %add.ptr120 = getelementptr inbounds i8, i8* %62, i64 %idx.ext, !dbg !2689
  store i8* %add.ptr120, i8** %p, align 8, !dbg !2689
  %63 = load i8*, i8** %p, align 8, !dbg !2690
  %64 = load i8*, i8** %end, align 8, !dbg !2692
  %cmp121 = icmp ne i8* %63, %64, !dbg !2693
  br i1 %cmp121, label %if.then123, label %if.end124, !dbg !2694

if.then123:                                       ; preds = %if.end119
  store i32 -17280, i32* %retval, !dbg !2695
  br label %return, !dbg !2695

if.end124:                                        ; preds = %if.end119
  store i32 0, i32* %retval, !dbg !2696
  br label %return, !dbg !2696

return:                                           ; preds = %if.end124, %if.then123, %if.then118, %if.then112, %if.then107, %if.then102, %if.then97, %if.then93, %if.then85, %if.then79, %if.then72, %if.then67, %if.then63, %if.then55, %if.else, %if.then50, %if.then34, %if.then21, %if.then11, %if.then5, %if.then
  %65 = load i32, i32* %retval, !dbg !2697
  ret i32 %65, !dbg !2697
}

declare i32 @mbedtls_asn1_get_tag(...) #3

declare i32 @mbedtls_oid_get_md_alg(...) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_pkcs1_verify(%struct.mbedtls_rsa_context* %ctx, i32 (i8*, i8*, i64)* %f_rng, i8* %p_rng, i32 %mode, i32 %md_alg, i32 %hashlen, i8* %hash, i8* %sig) #0 {
entry:
  %retval = alloca i32, align 4
  %ctx.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %f_rng.addr = alloca i32 (i8*, i8*, i64)*, align 8
  %p_rng.addr = alloca i8*, align 8
  %mode.addr = alloca i32, align 4
  %md_alg.addr = alloca i32, align 4
  %hashlen.addr = alloca i32, align 4
  %hash.addr = alloca i8*, align 8
  %sig.addr = alloca i8*, align 8
  store %struct.mbedtls_rsa_context* %ctx, %struct.mbedtls_rsa_context** %ctx.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %ctx.addr, metadata !2698, metadata !149), !dbg !2699
  store i32 (i8*, i8*, i64)* %f_rng, i32 (i8*, i8*, i64)** %f_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i32 (i8*, i8*, i64)** %f_rng.addr, metadata !2700, metadata !149), !dbg !2701
  store i8* %p_rng, i8** %p_rng.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %p_rng.addr, metadata !2702, metadata !149), !dbg !2703
  store i32 %mode, i32* %mode.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %mode.addr, metadata !2704, metadata !149), !dbg !2705
  store i32 %md_alg, i32* %md_alg.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %md_alg.addr, metadata !2706, metadata !149), !dbg !2707
  store i32 %hashlen, i32* %hashlen.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %hashlen.addr, metadata !2708, metadata !149), !dbg !2709
  store i8* %hash, i8** %hash.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %hash.addr, metadata !2710, metadata !149), !dbg !2711
  store i8* %sig, i8** %sig.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %sig.addr, metadata !2712, metadata !149), !dbg !2713
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2714
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 15, !dbg !2715
  %1 = load i32, i32* %padding, align 4, !dbg !2715
  switch i32 %1, label %sw.default [
    i32 0, label %sw.bb
    i32 1, label %sw.bb1
  ], !dbg !2716

sw.bb:                                            ; preds = %entry
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2717
  %3 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2719
  %4 = load i8*, i8** %p_rng.addr, align 8, !dbg !2720
  %5 = load i32, i32* %mode.addr, align 4, !dbg !2721
  %6 = load i32, i32* %md_alg.addr, align 4, !dbg !2722
  %7 = load i32, i32* %hashlen.addr, align 4, !dbg !2723
  %8 = load i8*, i8** %hash.addr, align 8, !dbg !2724
  %9 = load i8*, i8** %sig.addr, align 8, !dbg !2725
  %call = call i32 @mbedtls_rsa_rsassa_pkcs1_v15_verify(%struct.mbedtls_rsa_context* %2, i32 (i8*, i8*, i64)* %3, i8* %4, i32 %5, i32 %6, i32 %7, i8* %8, i8* %9), !dbg !2726
  store i32 %call, i32* %retval, !dbg !2727
  br label %return, !dbg !2727

sw.bb1:                                           ; preds = %entry
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %ctx.addr, align 8, !dbg !2728
  %11 = load i32 (i8*, i8*, i64)*, i32 (i8*, i8*, i64)** %f_rng.addr, align 8, !dbg !2729
  %12 = load i8*, i8** %p_rng.addr, align 8, !dbg !2730
  %13 = load i32, i32* %mode.addr, align 4, !dbg !2731
  %14 = load i32, i32* %md_alg.addr, align 4, !dbg !2732
  %15 = load i32, i32* %hashlen.addr, align 4, !dbg !2733
  %16 = load i8*, i8** %hash.addr, align 8, !dbg !2734
  %17 = load i8*, i8** %sig.addr, align 8, !dbg !2735
  %call2 = call i32 @mbedtls_rsa_rsassa_pss_verify(%struct.mbedtls_rsa_context* %10, i32 (i8*, i8*, i64)* %11, i8* %12, i32 %13, i32 %14, i32 %15, i8* %16, i8* %17), !dbg !2736
  store i32 %call2, i32* %retval, !dbg !2737
  br label %return, !dbg !2737

sw.default:                                       ; preds = %entry
  store i32 -16640, i32* %retval, !dbg !2738
  br label %return, !dbg !2738

return:                                           ; preds = %sw.default, %sw.bb1, %sw.bb
  %18 = load i32, i32* %retval, !dbg !2739
  ret i32 %18, !dbg !2739
}

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_copy(%struct.mbedtls_rsa_context* %dst, %struct.mbedtls_rsa_context* %src) #0 {
entry:
  %dst.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %src.addr = alloca %struct.mbedtls_rsa_context*, align 8
  %ret = alloca i32, align 4
  store %struct.mbedtls_rsa_context* %dst, %struct.mbedtls_rsa_context** %dst.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %dst.addr, metadata !2740, metadata !149), !dbg !2741
  store %struct.mbedtls_rsa_context* %src, %struct.mbedtls_rsa_context** %src.addr, align 8
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context** %src.addr, metadata !2742, metadata !149), !dbg !2743
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !2744, metadata !149), !dbg !2745
  %0 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2746
  %ver = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %0, i32 0, i32 0, !dbg !2747
  %1 = load i32, i32* %ver, align 4, !dbg !2747
  %2 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2748
  %ver1 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %2, i32 0, i32 0, !dbg !2749
  store i32 %1, i32* %ver1, align 4, !dbg !2750
  %3 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2751
  %len = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %3, i32 0, i32 1, !dbg !2752
  %4 = load i64, i64* %len, align 8, !dbg !2752
  %5 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2753
  %len2 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %5, i32 0, i32 1, !dbg !2754
  store i64 %4, i64* %len2, align 8, !dbg !2755
  br label %do.body, !dbg !2756

do.body:                                          ; preds = %entry
  %6 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2757
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %6, i32 0, i32 2, !dbg !2757
  %7 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2757
  %N3 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %7, i32 0, i32 2, !dbg !2757
  %call = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %N, %struct.mbedtls_mpi* %N3), !dbg !2757
  store i32 %call, i32* %ret, align 4, !dbg !2757
  %cmp = icmp ne i32 %call, 0, !dbg !2757
  br i1 %cmp, label %if.then, label %if.end, !dbg !2760

if.then:                                          ; preds = %do.body
  br label %cleanup, !dbg !2757

if.end:                                           ; preds = %do.body
  br label %do.end, !dbg !2760

do.end:                                           ; preds = %if.end
  br label %do.body4, !dbg !2761

do.body4:                                         ; preds = %do.end
  %8 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2762
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %8, i32 0, i32 3, !dbg !2762
  %9 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2762
  %E5 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %9, i32 0, i32 3, !dbg !2762
  %call6 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %E, %struct.mbedtls_mpi* %E5), !dbg !2762
  store i32 %call6, i32* %ret, align 4, !dbg !2762
  %cmp7 = icmp ne i32 %call6, 0, !dbg !2762
  br i1 %cmp7, label %if.then8, label %if.end9, !dbg !2765

if.then8:                                         ; preds = %do.body4
  br label %cleanup, !dbg !2762

if.end9:                                          ; preds = %do.body4
  br label %do.end10, !dbg !2765

do.end10:                                         ; preds = %if.end9
  br label %do.body11, !dbg !2766

do.body11:                                        ; preds = %do.end10
  %10 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2767
  %D = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %10, i32 0, i32 4, !dbg !2767
  %11 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2767
  %D12 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %11, i32 0, i32 4, !dbg !2767
  %call13 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %D, %struct.mbedtls_mpi* %D12), !dbg !2767
  store i32 %call13, i32* %ret, align 4, !dbg !2767
  %cmp14 = icmp ne i32 %call13, 0, !dbg !2767
  br i1 %cmp14, label %if.then15, label %if.end16, !dbg !2770

if.then15:                                        ; preds = %do.body11
  br label %cleanup, !dbg !2767

if.end16:                                         ; preds = %do.body11
  br label %do.end17, !dbg !2770

do.end17:                                         ; preds = %if.end16
  br label %do.body18, !dbg !2771

do.body18:                                        ; preds = %do.end17
  %12 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2772
  %P = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %12, i32 0, i32 5, !dbg !2772
  %13 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2772
  %P19 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %13, i32 0, i32 5, !dbg !2772
  %call20 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %P, %struct.mbedtls_mpi* %P19), !dbg !2772
  store i32 %call20, i32* %ret, align 4, !dbg !2772
  %cmp21 = icmp ne i32 %call20, 0, !dbg !2772
  br i1 %cmp21, label %if.then22, label %if.end23, !dbg !2775

if.then22:                                        ; preds = %do.body18
  br label %cleanup, !dbg !2772

if.end23:                                         ; preds = %do.body18
  br label %do.end24, !dbg !2775

do.end24:                                         ; preds = %if.end23
  br label %do.body25, !dbg !2776

do.body25:                                        ; preds = %do.end24
  %14 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2777
  %Q = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %14, i32 0, i32 6, !dbg !2777
  %15 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2777
  %Q26 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %15, i32 0, i32 6, !dbg !2777
  %call27 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %Q, %struct.mbedtls_mpi* %Q26), !dbg !2777
  store i32 %call27, i32* %ret, align 4, !dbg !2777
  %cmp28 = icmp ne i32 %call27, 0, !dbg !2777
  br i1 %cmp28, label %if.then29, label %if.end30, !dbg !2780

if.then29:                                        ; preds = %do.body25
  br label %cleanup, !dbg !2777

if.end30:                                         ; preds = %do.body25
  br label %do.end31, !dbg !2780

do.end31:                                         ; preds = %if.end30
  br label %do.body32, !dbg !2781

do.body32:                                        ; preds = %do.end31
  %16 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2782
  %DP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %16, i32 0, i32 7, !dbg !2782
  %17 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2782
  %DP33 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %17, i32 0, i32 7, !dbg !2782
  %call34 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %DP, %struct.mbedtls_mpi* %DP33), !dbg !2782
  store i32 %call34, i32* %ret, align 4, !dbg !2782
  %cmp35 = icmp ne i32 %call34, 0, !dbg !2782
  br i1 %cmp35, label %if.then36, label %if.end37, !dbg !2785

if.then36:                                        ; preds = %do.body32
  br label %cleanup, !dbg !2782

if.end37:                                         ; preds = %do.body32
  br label %do.end38, !dbg !2785

do.end38:                                         ; preds = %if.end37
  br label %do.body39, !dbg !2786

do.body39:                                        ; preds = %do.end38
  %18 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2787
  %DQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %18, i32 0, i32 8, !dbg !2787
  %19 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2787
  %DQ40 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %19, i32 0, i32 8, !dbg !2787
  %call41 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %DQ, %struct.mbedtls_mpi* %DQ40), !dbg !2787
  store i32 %call41, i32* %ret, align 4, !dbg !2787
  %cmp42 = icmp ne i32 %call41, 0, !dbg !2787
  br i1 %cmp42, label %if.then43, label %if.end44, !dbg !2790

if.then43:                                        ; preds = %do.body39
  br label %cleanup, !dbg !2787

if.end44:                                         ; preds = %do.body39
  br label %do.end45, !dbg !2790

do.end45:                                         ; preds = %if.end44
  br label %do.body46, !dbg !2791

do.body46:                                        ; preds = %do.end45
  %20 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2792
  %QP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %20, i32 0, i32 9, !dbg !2792
  %21 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2792
  %QP47 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %21, i32 0, i32 9, !dbg !2792
  %call48 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %QP, %struct.mbedtls_mpi* %QP47), !dbg !2792
  store i32 %call48, i32* %ret, align 4, !dbg !2792
  %cmp49 = icmp ne i32 %call48, 0, !dbg !2792
  br i1 %cmp49, label %if.then50, label %if.end51, !dbg !2795

if.then50:                                        ; preds = %do.body46
  br label %cleanup, !dbg !2792

if.end51:                                         ; preds = %do.body46
  br label %do.end52, !dbg !2795

do.end52:                                         ; preds = %if.end51
  br label %do.body53, !dbg !2796

do.body53:                                        ; preds = %do.end52
  %22 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2797
  %RN = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %22, i32 0, i32 10, !dbg !2797
  %23 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2797
  %RN54 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %23, i32 0, i32 10, !dbg !2797
  %call55 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %RN, %struct.mbedtls_mpi* %RN54), !dbg !2797
  store i32 %call55, i32* %ret, align 4, !dbg !2797
  %cmp56 = icmp ne i32 %call55, 0, !dbg !2797
  br i1 %cmp56, label %if.then57, label %if.end58, !dbg !2800

if.then57:                                        ; preds = %do.body53
  br label %cleanup, !dbg !2797

if.end58:                                         ; preds = %do.body53
  br label %do.end59, !dbg !2800

do.end59:                                         ; preds = %if.end58
  br label %do.body60, !dbg !2801

do.body60:                                        ; preds = %do.end59
  %24 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2802
  %RP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %24, i32 0, i32 11, !dbg !2802
  %25 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2802
  %RP61 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %25, i32 0, i32 11, !dbg !2802
  %call62 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %RP, %struct.mbedtls_mpi* %RP61), !dbg !2802
  store i32 %call62, i32* %ret, align 4, !dbg !2802
  %cmp63 = icmp ne i32 %call62, 0, !dbg !2802
  br i1 %cmp63, label %if.then64, label %if.end65, !dbg !2805

if.then64:                                        ; preds = %do.body60
  br label %cleanup, !dbg !2802

if.end65:                                         ; preds = %do.body60
  br label %do.end66, !dbg !2805

do.end66:                                         ; preds = %if.end65
  br label %do.body67, !dbg !2806

do.body67:                                        ; preds = %do.end66
  %26 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2807
  %RQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %26, i32 0, i32 12, !dbg !2807
  %27 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2807
  %RQ68 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %27, i32 0, i32 12, !dbg !2807
  %call69 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %RQ, %struct.mbedtls_mpi* %RQ68), !dbg !2807
  store i32 %call69, i32* %ret, align 4, !dbg !2807
  %cmp70 = icmp ne i32 %call69, 0, !dbg !2807
  br i1 %cmp70, label %if.then71, label %if.end72, !dbg !2810

if.then71:                                        ; preds = %do.body67
  br label %cleanup, !dbg !2807

if.end72:                                         ; preds = %do.body67
  br label %do.end73, !dbg !2810

do.end73:                                         ; preds = %if.end72
  br label %do.body74, !dbg !2811

do.body74:                                        ; preds = %do.end73
  %28 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2812
  %Vi = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %28, i32 0, i32 13, !dbg !2812
  %29 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2812
  %Vi75 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %29, i32 0, i32 13, !dbg !2812
  %call76 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %Vi, %struct.mbedtls_mpi* %Vi75), !dbg !2812
  store i32 %call76, i32* %ret, align 4, !dbg !2812
  %cmp77 = icmp ne i32 %call76, 0, !dbg !2812
  br i1 %cmp77, label %if.then78, label %if.end79, !dbg !2815

if.then78:                                        ; preds = %do.body74
  br label %cleanup, !dbg !2812

if.end79:                                         ; preds = %do.body74
  br label %do.end80, !dbg !2815

do.end80:                                         ; preds = %if.end79
  br label %do.body81, !dbg !2816

do.body81:                                        ; preds = %do.end80
  %30 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2817
  %Vf = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %30, i32 0, i32 14, !dbg !2817
  %31 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2817
  %Vf82 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %31, i32 0, i32 14, !dbg !2817
  %call83 = call i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi* %Vf, %struct.mbedtls_mpi* %Vf82), !dbg !2817
  store i32 %call83, i32* %ret, align 4, !dbg !2817
  %cmp84 = icmp ne i32 %call83, 0, !dbg !2817
  br i1 %cmp84, label %if.then85, label %if.end86, !dbg !2820

if.then85:                                        ; preds = %do.body81
  br label %cleanup, !dbg !2817

if.end86:                                         ; preds = %do.body81
  br label %do.end87, !dbg !2820

do.end87:                                         ; preds = %if.end86
  %32 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2821
  %padding = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %32, i32 0, i32 15, !dbg !2822
  %33 = load i32, i32* %padding, align 4, !dbg !2822
  %34 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2823
  %padding88 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %34, i32 0, i32 15, !dbg !2824
  store i32 %33, i32* %padding88, align 4, !dbg !2825
  %35 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %src.addr, align 8, !dbg !2826
  %hash_id = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %35, i32 0, i32 16, !dbg !2827
  %36 = load i32, i32* %hash_id, align 4, !dbg !2827
  %37 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2828
  %hash_id89 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %37, i32 0, i32 16, !dbg !2829
  store i32 %36, i32* %hash_id89, align 4, !dbg !2830
  br label %cleanup, !dbg !2828

cleanup:                                          ; preds = %do.end87, %if.then85, %if.then78, %if.then71, %if.then64, %if.then57, %if.then50, %if.then43, %if.then36, %if.then29, %if.then22, %if.then15, %if.then8, %if.then
  %38 = load i32, i32* %ret, align 4, !dbg !2831
  %cmp90 = icmp ne i32 %38, 0, !dbg !2833
  br i1 %cmp90, label %if.then91, label %if.end92, !dbg !2834

if.then91:                                        ; preds = %cleanup
  %39 = load %struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context** %dst.addr, align 8, !dbg !2835
  call void @mbedtls_rsa_free(%struct.mbedtls_rsa_context* %39), !dbg !2836
  br label %if.end92, !dbg !2836

if.end92:                                         ; preds = %if.then91, %cleanup
  %40 = load i32, i32* %ret, align 4, !dbg !2837
  ret i32 %40, !dbg !2838
}

declare i32 @mbedtls_mpi_copy(%struct.mbedtls_mpi*, %struct.mbedtls_mpi*) #3

; Function Attrs: nounwind ssp uwtable
define i32 @mbedtls_rsa_self_test(i32 %verbose, %struct.mbedtls_mpi* byval align 8 %key) #0 {
entry:
  %retval = alloca i32, align 4
  %verbose.addr = alloca i32, align 4
  %ret = alloca i32, align 4
  %len = alloca i64, align 8
  %rsa = alloca %struct.mbedtls_rsa_context, align 8
  %rsa_plaintext = alloca [24 x i8], align 16
  %rsa_decrypted = alloca [24 x i8], align 16
  %rsa_ciphertext = alloca [128 x i8], align 16
  %sha1sum = alloca [20 x i8], align 16
  store i32 %verbose, i32* %verbose.addr, align 4
  call void @llvm.dbg.declare(metadata i32* %verbose.addr, metadata !2839, metadata !149), !dbg !2840
  call void @llvm.dbg.declare(metadata %struct.mbedtls_mpi* %key, metadata !2841, metadata !149), !dbg !2842
  call void @llvm.dbg.declare(metadata i32* %ret, metadata !2843, metadata !149), !dbg !2844
  store i32 0, i32* %ret, align 4, !dbg !2844
  call void @llvm.dbg.declare(metadata i64* %len, metadata !2845, metadata !149), !dbg !2846
  call void @llvm.dbg.declare(metadata %struct.mbedtls_rsa_context* %rsa, metadata !2847, metadata !149), !dbg !2848
  call void @llvm.dbg.declare(metadata [24 x i8]* %rsa_plaintext, metadata !2849, metadata !149), !dbg !2853
  call void @llvm.dbg.declare(metadata [24 x i8]* %rsa_decrypted, metadata !2854, metadata !149), !dbg !2855
  call void @llvm.dbg.declare(metadata [128 x i8]* %rsa_ciphertext, metadata !2856, metadata !149), !dbg !2860
  call void @llvm.dbg.declare(metadata [20 x i8]* %sha1sum, metadata !2861, metadata !149), !dbg !2865
  call void @mbedtls_rsa_init(%struct.mbedtls_rsa_context* %rsa, i32 0, i32 0), !dbg !2866
  %len1 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 1, !dbg !2867
  store i64 128, i64* %len1, align 8, !dbg !2868
  br label %do.body, !dbg !2869

do.body:                                          ; preds = %entry
  %N = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 2, !dbg !2870
  %call = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %N, i32 16, i8* getelementptr inbounds ([257 x i8], [257 x i8]* @.str, i32 0, i32 0)), !dbg !2870
  store i32 %call, i32* %ret, align 4, !dbg !2870
  %cmp = icmp ne i32 %call, 0, !dbg !2870
  br i1 %cmp, label %if.then, label %if.end, !dbg !2873

if.then:                                          ; preds = %do.body
  br label %cleanup, !dbg !2870

if.end:                                           ; preds = %do.body
  br label %do.end, !dbg !2873

do.end:                                           ; preds = %if.end
  br label %do.body2, !dbg !2874

do.body2:                                         ; preds = %do.end
  %E = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 3, !dbg !2875
  %call3 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %E, i32 16, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str1, i32 0, i32 0)), !dbg !2875
  store i32 %call3, i32* %ret, align 4, !dbg !2875
  %cmp4 = icmp ne i32 %call3, 0, !dbg !2875
  br i1 %cmp4, label %if.then5, label %if.end6, !dbg !2878

if.then5:                                         ; preds = %do.body2
  br label %cleanup, !dbg !2875

if.end6:                                          ; preds = %do.body2
  br label %do.end7, !dbg !2878

do.end7:                                          ; preds = %if.end6
  br label %do.body8, !dbg !2879

do.body8:                                         ; preds = %do.end7
  %D = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 4, !dbg !2880
  %call9 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %D, i32 16, i8* getelementptr inbounds ([257 x i8], [257 x i8]* @.str2, i32 0, i32 0)), !dbg !2880
  store i32 %call9, i32* %ret, align 4, !dbg !2880
  %cmp10 = icmp ne i32 %call9, 0, !dbg !2880
  br i1 %cmp10, label %if.then11, label %if.end12, !dbg !2883

if.then11:                                        ; preds = %do.body8
  br label %cleanup, !dbg !2880

if.end12:                                         ; preds = %do.body8
  br label %do.end13, !dbg !2883

do.end13:                                         ; preds = %if.end12
  br label %do.body14, !dbg !2884

do.body14:                                        ; preds = %do.end13
  %P = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 5, !dbg !2885
  %call15 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %P, i32 16, i8* getelementptr inbounds ([129 x i8], [129 x i8]* @.str3, i32 0, i32 0)), !dbg !2885
  store i32 %call15, i32* %ret, align 4, !dbg !2885
  %cmp16 = icmp ne i32 %call15, 0, !dbg !2885
  br i1 %cmp16, label %if.then17, label %if.end18, !dbg !2888

if.then17:                                        ; preds = %do.body14
  br label %cleanup, !dbg !2885

if.end18:                                         ; preds = %do.body14
  br label %do.end19, !dbg !2888

do.end19:                                         ; preds = %if.end18
  br label %do.body20, !dbg !2889

do.body20:                                        ; preds = %do.end19
  %Q = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 6, !dbg !2890
  %call21 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %Q, i32 16, i8* getelementptr inbounds ([129 x i8], [129 x i8]* @.str4, i32 0, i32 0)), !dbg !2890
  store i32 %call21, i32* %ret, align 4, !dbg !2890
  %cmp22 = icmp ne i32 %call21, 0, !dbg !2890
  br i1 %cmp22, label %if.then23, label %if.end24, !dbg !2893

if.then23:                                        ; preds = %do.body20
  br label %cleanup, !dbg !2890

if.end24:                                         ; preds = %do.body20
  br label %do.end25, !dbg !2893

do.end25:                                         ; preds = %if.end24
  br label %do.body26, !dbg !2894

do.body26:                                        ; preds = %do.end25
  %DP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 7, !dbg !2895
  %call27 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %DP, i32 16, i8* getelementptr inbounds ([129 x i8], [129 x i8]* @.str5, i32 0, i32 0)), !dbg !2895
  store i32 %call27, i32* %ret, align 4, !dbg !2895
  %cmp28 = icmp ne i32 %call27, 0, !dbg !2895
  br i1 %cmp28, label %if.then29, label %if.end30, !dbg !2898

if.then29:                                        ; preds = %do.body26
  br label %cleanup, !dbg !2895

if.end30:                                         ; preds = %do.body26
  br label %do.end31, !dbg !2898

do.end31:                                         ; preds = %if.end30
  br label %do.body32, !dbg !2899

do.body32:                                        ; preds = %do.end31
  %DQ = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 8, !dbg !2900
  %call33 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %DQ, i32 16, i8* getelementptr inbounds ([129 x i8], [129 x i8]* @.str6, i32 0, i32 0)), !dbg !2900
  store i32 %call33, i32* %ret, align 4, !dbg !2900
  %cmp34 = icmp ne i32 %call33, 0, !dbg !2900
  br i1 %cmp34, label %if.then35, label %if.end36, !dbg !2903

if.then35:                                        ; preds = %do.body32
  br label %cleanup, !dbg !2900

if.end36:                                         ; preds = %do.body32
  br label %do.end37, !dbg !2903

do.end37:                                         ; preds = %if.end36
  br label %do.body38, !dbg !2904

do.body38:                                        ; preds = %do.end37
  %QP = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 9, !dbg !2905
  %call39 = call i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi* %QP, i32 16, i8* getelementptr inbounds ([129 x i8], [129 x i8]* @.str7, i32 0, i32 0)), !dbg !2905
  store i32 %call39, i32* %ret, align 4, !dbg !2905
  %cmp40 = icmp ne i32 %call39, 0, !dbg !2905
  br i1 %cmp40, label %if.then41, label %if.end42, !dbg !2908

if.then41:                                        ; preds = %do.body38
  br label %cleanup, !dbg !2905

if.end42:                                         ; preds = %do.body38
  br label %do.end43, !dbg !2908

do.end43:                                         ; preds = %if.end42
  %D44 = getelementptr inbounds %struct.mbedtls_rsa_context, %struct.mbedtls_rsa_context* %rsa, i32 0, i32 4, !dbg !2909
  %0 = bitcast %struct.mbedtls_mpi* %D44 to i8*, !dbg !2910
  %1 = bitcast %struct.mbedtls_mpi* %key to i8*, !dbg !2910
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %0, i8* %1, i64 24, i32 8, i1 false), !dbg !2910
  %2 = load i32, i32* %verbose.addr, align 4, !dbg !2911
  %cmp45 = icmp ne i32 %2, 0, !dbg !2913
  br i1 %cmp45, label %if.then46, label %if.end48, !dbg !2914

if.then46:                                        ; preds = %do.end43
  %call47 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str8, i32 0, i32 0)), !dbg !2915
  br label %if.end48, !dbg !2915

if.end48:                                         ; preds = %if.then46, %do.end43
  %call49 = call i32 @mbedtls_rsa_check_pubkey(%struct.mbedtls_rsa_context* %rsa), !dbg !2916
  %cmp50 = icmp ne i32 %call49, 0, !dbg !2918
  br i1 %cmp50, label %if.then53, label %lor.lhs.false, !dbg !2919

lor.lhs.false:                                    ; preds = %if.end48
  %call51 = call i32 @mbedtls_rsa_check_privkey(%struct.mbedtls_rsa_context* %rsa), !dbg !2920
  %cmp52 = icmp ne i32 %call51, 0, !dbg !2921
  br i1 %cmp52, label %if.then53, label %if.end58, !dbg !2922

if.then53:                                        ; preds = %lor.lhs.false, %if.end48
  %3 = load i32, i32* %verbose.addr, align 4, !dbg !2923
  %cmp54 = icmp ne i32 %3, 0, !dbg !2926
  br i1 %cmp54, label %if.then55, label %if.end57, !dbg !2927

if.then55:                                        ; preds = %if.then53
  %call56 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str9, i32 0, i32 0)), !dbg !2928
  br label %if.end57, !dbg !2928

if.end57:                                         ; preds = %if.then55, %if.then53
  store i32 1, i32* %retval, !dbg !2929
  br label %return, !dbg !2929

if.end58:                                         ; preds = %lor.lhs.false
  %4 = load i32, i32* %verbose.addr, align 4, !dbg !2930
  %cmp59 = icmp ne i32 %4, 0, !dbg !2932
  br i1 %cmp59, label %if.then60, label %if.end62, !dbg !2933

if.then60:                                        ; preds = %if.end58
  %call61 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @.str10, i32 0, i32 0)), !dbg !2934
  br label %if.end62, !dbg !2934

if.end62:                                         ; preds = %if.then60, %if.end58
  %5 = bitcast [24 x i8]* %rsa_plaintext to i8*, !dbg !2935
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* %5, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @.str11, i32 0, i32 0), i64 24, i32 1, i1 false), !dbg !2935
  %arraydecay = getelementptr inbounds [24 x i8], [24 x i8]* %rsa_plaintext, i32 0, i32 0, !dbg !2936
  %arraydecay63 = getelementptr inbounds [128 x i8], [128 x i8]* %rsa_ciphertext, i32 0, i32 0, !dbg !2938
  %call64 = call i32 @mbedtls_rsa_pkcs1_encrypt(%struct.mbedtls_rsa_context* %rsa, i32 (i8*, i8*, i64)* @myrand, i8* null, i32 0, i64 24, i8* %arraydecay, i8* %arraydecay63), !dbg !2939
  %cmp65 = icmp ne i32 %call64, 0, !dbg !2940
  br i1 %cmp65, label %if.then66, label %if.end71, !dbg !2941

if.then66:                                        ; preds = %if.end62
  %6 = load i32, i32* %verbose.addr, align 4, !dbg !2942
  %cmp67 = icmp ne i32 %6, 0, !dbg !2945
  br i1 %cmp67, label %if.then68, label %if.end70, !dbg !2946

if.then68:                                        ; preds = %if.then66
  %call69 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str9, i32 0, i32 0)), !dbg !2947
  br label %if.end70, !dbg !2947

if.end70:                                         ; preds = %if.then68, %if.then66
  store i32 1, i32* %retval, !dbg !2948
  br label %return, !dbg !2948

if.end71:                                         ; preds = %if.end62
  %7 = load i32, i32* %verbose.addr, align 4, !dbg !2949
  %cmp72 = icmp ne i32 %7, 0, !dbg !2951
  br i1 %cmp72, label %if.then73, label %if.end75, !dbg !2952

if.then73:                                        ; preds = %if.end71
  %call74 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @.str12, i32 0, i32 0)), !dbg !2953
  br label %if.end75, !dbg !2953

if.end75:                                         ; preds = %if.then73, %if.end71
  %arraydecay76 = getelementptr inbounds [128 x i8], [128 x i8]* %rsa_ciphertext, i32 0, i32 0, !dbg !2954
  %arraydecay77 = getelementptr inbounds [24 x i8], [24 x i8]* %rsa_decrypted, i32 0, i32 0, !dbg !2956
  %call78 = call i32 @mbedtls_rsa_pkcs1_decrypt(%struct.mbedtls_rsa_context* %rsa, i32 (i8*, i8*, i64)* @myrand, i8* null, i32 1, i64* %len, i8* %arraydecay76, i8* %arraydecay77, i64 24), !dbg !2957
  %cmp79 = icmp ne i32 %call78, 0, !dbg !2958
  br i1 %cmp79, label %if.then80, label %if.end85, !dbg !2959

if.then80:                                        ; preds = %if.end75
  %8 = load i32, i32* %verbose.addr, align 4, !dbg !2960
  %cmp81 = icmp ne i32 %8, 0, !dbg !2963
  br i1 %cmp81, label %if.then82, label %if.end84, !dbg !2964

if.then82:                                        ; preds = %if.then80
  %call83 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str9, i32 0, i32 0)), !dbg !2965
  br label %if.end84, !dbg !2965

if.end84:                                         ; preds = %if.then82, %if.then80
  store i32 1, i32* %retval, !dbg !2966
  br label %return, !dbg !2966

if.end85:                                         ; preds = %if.end75
  %arraydecay86 = getelementptr inbounds [24 x i8], [24 x i8]* %rsa_decrypted, i32 0, i32 0, !dbg !2967
  %arraydecay87 = getelementptr inbounds [24 x i8], [24 x i8]* %rsa_plaintext, i32 0, i32 0, !dbg !2969
  %9 = load i64, i64* %len, align 8, !dbg !2970
  %call88 = call i32 @memcmp(i8* %arraydecay86, i8* %arraydecay87, i64 %9), !dbg !2971
  %cmp89 = icmp ne i32 %call88, 0, !dbg !2972
  br i1 %cmp89, label %if.then90, label %if.end95, !dbg !2973

if.then90:                                        ; preds = %if.end85
  %10 = load i32, i32* %verbose.addr, align 4, !dbg !2974
  %cmp91 = icmp ne i32 %10, 0, !dbg !2977
  br i1 %cmp91, label %if.then92, label %if.end94, !dbg !2978

if.then92:                                        ; preds = %if.then90
  %call93 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str9, i32 0, i32 0)), !dbg !2979
  br label %if.end94, !dbg !2979

if.end94:                                         ; preds = %if.then92, %if.then90
  store i32 1, i32* %retval, !dbg !2980
  br label %return, !dbg !2980

if.end95:                                         ; preds = %if.end85
  %11 = load i32, i32* %verbose.addr, align 4, !dbg !2981
  %cmp96 = icmp ne i32 %11, 0, !dbg !2983
  br i1 %cmp96, label %if.then97, label %if.end99, !dbg !2984

if.then97:                                        ; preds = %if.end95
  %call98 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str13, i32 0, i32 0)), !dbg !2985
  br label %if.end99, !dbg !2985

if.end99:                                         ; preds = %if.then97, %if.end95
  %12 = load i32, i32* %verbose.addr, align 4, !dbg !2986
  %cmp100 = icmp ne i32 %12, 0, !dbg !2988
  br i1 %cmp100, label %if.then101, label %if.end103, !dbg !2989

if.then101:                                       ; preds = %if.end99
  %call102 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @.str14, i32 0, i32 0)), !dbg !2990
  br label %if.end103, !dbg !2990

if.end103:                                        ; preds = %if.then101, %if.end99
  %arraydecay104 = getelementptr inbounds [24 x i8], [24 x i8]* %rsa_plaintext, i32 0, i32 0, !dbg !2991
  %arraydecay105 = getelementptr inbounds [20 x i8], [20 x i8]* %sha1sum, i32 0, i32 0, !dbg !2992
  %call106 = call i32 (i8*, i32, i8*, ...) bitcast (i32 (...)* @mbedtls_sha1 to i32 (i8*, i32, i8*, ...)*)(i8* %arraydecay104, i32 24, i8* %arraydecay105), !dbg !2993
  %arraydecay107 = getelementptr inbounds [20 x i8], [20 x i8]* %sha1sum, i32 0, i32 0, !dbg !2994
  %arraydecay108 = getelementptr inbounds [128 x i8], [128 x i8]* %rsa_ciphertext, i32 0, i32 0, !dbg !2996
  %call109 = call i32 @mbedtls_rsa_pkcs1_sign(%struct.mbedtls_rsa_context* %rsa, i32 (i8*, i8*, i64)* @myrand, i8* null, i32 1, i32 4, i32 0, i8* %arraydecay107, i8* %arraydecay108), !dbg !2997
  %cmp110 = icmp ne i32 %call109, 0, !dbg !2998
  br i1 %cmp110, label %if.then111, label %if.end116, !dbg !2999

if.then111:                                       ; preds = %if.end103
  %13 = load i32, i32* %verbose.addr, align 4, !dbg !3000
  %cmp112 = icmp ne i32 %13, 0, !dbg !3003
  br i1 %cmp112, label %if.then113, label %if.end115, !dbg !3004

if.then113:                                       ; preds = %if.then111
  %call114 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str9, i32 0, i32 0)), !dbg !3005
  br label %if.end115, !dbg !3005

if.end115:                                        ; preds = %if.then113, %if.then111
  store i32 1, i32* %retval, !dbg !3006
  br label %return, !dbg !3006

if.end116:                                        ; preds = %if.end103
  %14 = load i32, i32* %verbose.addr, align 4, !dbg !3007
  %cmp117 = icmp ne i32 %14, 0, !dbg !3009
  br i1 %cmp117, label %if.then118, label %if.end120, !dbg !3010

if.then118:                                       ; preds = %if.end116
  %call119 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @.str15, i32 0, i32 0)), !dbg !3011
  br label %if.end120, !dbg !3011

if.end120:                                        ; preds = %if.then118, %if.end116
  %arraydecay121 = getelementptr inbounds [20 x i8], [20 x i8]* %sha1sum, i32 0, i32 0, !dbg !3012
  %arraydecay122 = getelementptr inbounds [128 x i8], [128 x i8]* %rsa_ciphertext, i32 0, i32 0, !dbg !3014
  %call123 = call i32 @mbedtls_rsa_pkcs1_verify(%struct.mbedtls_rsa_context* %rsa, i32 (i8*, i8*, i64)* null, i8* null, i32 0, i32 4, i32 0, i8* %arraydecay121, i8* %arraydecay122), !dbg !3015
  %cmp124 = icmp ne i32 %call123, 0, !dbg !3016
  br i1 %cmp124, label %if.then125, label %if.end130, !dbg !3017

if.then125:                                       ; preds = %if.end120
  %15 = load i32, i32* %verbose.addr, align 4, !dbg !3018
  %cmp126 = icmp ne i32 %15, 0, !dbg !3021
  br i1 %cmp126, label %if.then127, label %if.end129, !dbg !3022

if.then127:                                       ; preds = %if.then125
  %call128 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str9, i32 0, i32 0)), !dbg !3023
  br label %if.end129, !dbg !3023

if.end129:                                        ; preds = %if.then127, %if.then125
  store i32 1, i32* %retval, !dbg !3024
  br label %return, !dbg !3024

if.end130:                                        ; preds = %if.end120
  %16 = load i32, i32* %verbose.addr, align 4, !dbg !3025
  %cmp131 = icmp ne i32 %16, 0, !dbg !3027
  br i1 %cmp131, label %if.then132, label %if.end134, !dbg !3028

if.then132:                                       ; preds = %if.end130
  %call133 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str13, i32 0, i32 0)), !dbg !3029
  br label %if.end134, !dbg !3029

if.end134:                                        ; preds = %if.then132, %if.end130
  %17 = load i32, i32* %verbose.addr, align 4, !dbg !3030
  %cmp135 = icmp ne i32 %17, 0, !dbg !3032
  br i1 %cmp135, label %if.then136, label %if.end138, !dbg !3033

if.then136:                                       ; preds = %if.end134
  %call137 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str16, i32 0, i32 0)), !dbg !3034
  br label %if.end138, !dbg !3034

if.end138:                                        ; preds = %if.then136, %if.end134
  br label %cleanup, !dbg !3035

cleanup:                                          ; preds = %if.end138, %if.then41, %if.then35, %if.then29, %if.then23, %if.then17, %if.then11, %if.then5, %if.then
  call void @mbedtls_rsa_free(%struct.mbedtls_rsa_context* %rsa), !dbg !3036
  %18 = load i32, i32* %ret, align 4, !dbg !3037
  store i32 %18, i32* %retval, !dbg !3038
  br label %return, !dbg !3038

return:                                           ; preds = %cleanup, %if.end129, %if.end115, %if.end94, %if.end84, %if.end70, %if.end57
  %19 = load i32, i32* %retval, !dbg !3039
  ret i32 %19, !dbg !3039
}

declare i32 @mbedtls_mpi_read_string(%struct.mbedtls_mpi*, i32, i8*) #3

; Function Attrs: nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture, i8* nocapture readonly, i64, i32, i1) #4

declare i32 @printf(i8*, ...) #3

; Function Attrs: nounwind ssp uwtable
define internal i32 @myrand(i8* %rng_state, i8* %output, i64 %len) #0 {
entry:
  %rng_state.addr = alloca i8*, align 8
  %output.addr = alloca i8*, align 8
  %len.addr = alloca i64, align 8
  %i = alloca i64, align 8
  store i8* %rng_state, i8** %rng_state.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %rng_state.addr, metadata !3040, metadata !149), !dbg !3041
  store i8* %output, i8** %output.addr, align 8
  call void @llvm.dbg.declare(metadata i8** %output.addr, metadata !3042, metadata !149), !dbg !3043
  store i64 %len, i64* %len.addr, align 8
  call void @llvm.dbg.declare(metadata i64* %len.addr, metadata !3044, metadata !149), !dbg !3045
  call void @llvm.dbg.declare(metadata i64* %i, metadata !3046, metadata !149), !dbg !3047
  %0 = load i8*, i8** %rng_state.addr, align 8, !dbg !3048
  %cmp = icmp ne i8* %0, null, !dbg !3050
  br i1 %cmp, label %if.then, label %if.end, !dbg !3051

if.then:                                          ; preds = %entry
  store i8* null, i8** %rng_state.addr, align 8, !dbg !3052
  br label %if.end, !dbg !3053

if.end:                                           ; preds = %if.then, %entry
  store i64 0, i64* %i, align 8, !dbg !3054
  br label %for.cond, !dbg !3056

for.cond:                                         ; preds = %for.inc, %if.end
  %1 = load i64, i64* %i, align 8, !dbg !3057
  %2 = load i64, i64* %len.addr, align 8, !dbg !3059
  %cmp1 = icmp ult i64 %1, %2, !dbg !3060
  br i1 %cmp1, label %for.body, label %for.end, !dbg !3061

for.body:                                         ; preds = %for.cond
  %call = call i32 @rand(), !dbg !3062
  %conv = trunc i32 %call to i8, !dbg !3062
  %3 = load i64, i64* %i, align 8, !dbg !3063
  %4 = load i8*, i8** %output.addr, align 8, !dbg !3064
  %arrayidx = getelementptr inbounds i8, i8* %4, i64 %3, !dbg !3064
  store i8 %conv, i8* %arrayidx, align 1, !dbg !3065
  br label %for.inc, !dbg !3064

for.inc:                                          ; preds = %for.body
  %5 = load i64, i64* %i, align 8, !dbg !3066
  %inc = add i64 %5, 1, !dbg !3066
  store i64 %inc, i64* %i, align 8, !dbg !3066
  br label %for.cond, !dbg !3067

for.end:                                          ; preds = %for.cond
  ret i32 0, !dbg !3068
}

declare i32 @mbedtls_sha1(...) #3

declare i32 @mbedtls_mpi_fill_random(%struct.mbedtls_mpi*, i64, i32 (i8*, i8*, i64)*, i8*) #3

declare i32 @rand() #3

attributes #0 = { nounwind ssp uwtable "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="core2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone }
attributes #2 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="core2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="core2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { nounwind }

!llvm.dbg.cu = !{!0}
!llvm.module.flags = !{!144, !145, !146}
!llvm.ident = !{!147}

!0 = !MDCompileUnit(language: DW_LANG_C99, file: !1, producer: "clang version 3.7.0 (trunk) (https://github.com/C0deZLee/llvm-dsa.git b9a293c548434d1ab56ffe7083d7c9424ac31849)", isOptimized: false, runtimeVersion: 0, emissionKind: 1, enums: !2, retainedTypes: !16, subprograms: !23, globals: !62, imports: !62)
!1 = !MDFile(filename: "rsa.c", directory: "/Users/dbz5017/Research/Projects/llvm-dsa/projects/llvm-deps/rsa_test")
!2 = !{!3}
!3 = !MDCompositeType(tag: DW_TAG_enumeration_type, file: !4, line: 45, size: 32, align: 32, elements: !5)
!4 = !MDFile(filename: "./md.h", directory: "/Users/dbz5017/Research/Projects/llvm-dsa/projects/llvm-deps/rsa_test")
!5 = !{!6, !7, !8, !9, !10, !11, !12, !13, !14, !15}
!6 = !MDEnumerator(name: "MBEDTLS_MD_NONE", value: 0)
!7 = !MDEnumerator(name: "MBEDTLS_MD_MD2", value: 1)
!8 = !MDEnumerator(name: "MBEDTLS_MD_MD4", value: 2)
!9 = !MDEnumerator(name: "MBEDTLS_MD_MD5", value: 3)
!10 = !MDEnumerator(name: "MBEDTLS_MD_SHA1", value: 4)
!11 = !MDEnumerator(name: "MBEDTLS_MD_SHA224", value: 5)
!12 = !MDEnumerator(name: "MBEDTLS_MD_SHA256", value: 6)
!13 = !MDEnumerator(name: "MBEDTLS_MD_SHA384", value: 7)
!14 = !MDEnumerator(name: "MBEDTLS_MD_SHA512", value: 8)
!15 = !MDEnumerator(name: "MBEDTLS_MD_RIPEMD160", value: 9)
!16 = !{!17, !18, !19, !20}
!17 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: null, size: 64, align: 64)
!18 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_md_type_t", file: !4, line: 56, baseType: !3)
!19 = !MDBasicType(name: "unsigned char", size: 8, align: 8, encoding: DW_ATE_unsigned_char)
!20 = !MDDerivedType(tag: DW_TAG_typedef, name: "size_t", file: !21, line: 62, baseType: !22)
!21 = !MDFile(filename: "/Users/dbz5017/Research/Projects/llvm-dsa/Debug+Asserts/bin/../lib/clang/3.7.0/include/stddef.h", directory: "/Users/dbz5017/Research/Projects/llvm-dsa/projects/llvm-deps/rsa_test")
!22 = !MDBasicType(name: "long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!23 = !{!24, !63, !64, !72, !77, !78, !81, !86, !89, !92, !95, !96, !100, !103, !104, !107, !108, !109, !112, !115, !116, !117, !120, !123, !126, !129, !143}
!24 = !MDSubprogram(name: "mbedtls_rsa_init", scope: !1, file: !1, line: 118, type: !25, isLocal: false, isDefinition: true, scopeLine: 121, flags: DIFlagPrototyped, isOptimized: false, function: void (%struct.mbedtls_rsa_context*, i32, i32)* @mbedtls_rsa_init, variables: !62)
!25 = !MDSubroutineType(types: !26)
!26 = !{null, !27, !33, !33}
!27 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !28, size: 64, align: 64)
!28 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_rsa_context", file: !29, line: 113, baseType: !30)
!29 = !MDFile(filename: "./rsa.h", directory: "/Users/dbz5017/Research/Projects/llvm-dsa/projects/llvm-deps/rsa_test")
!30 = !MDCompositeType(tag: DW_TAG_structure_type, file: !29, line: 81, size: 2688, align: 64, elements: !31)
!31 = !{!32, !34, !35, !48, !49, !50, !51, !52, !53, !54, !55, !56, !57, !58, !59, !60, !61}
!32 = !MDDerivedType(tag: DW_TAG_member, name: "ver", scope: !30, file: !29, line: 83, baseType: !33, size: 32, align: 32)
!33 = !MDBasicType(name: "int", size: 32, align: 32, encoding: DW_ATE_signed)
!34 = !MDDerivedType(tag: DW_TAG_member, name: "len", scope: !30, file: !29, line: 84, baseType: !20, size: 64, align: 64, offset: 64)
!35 = !MDDerivedType(tag: DW_TAG_member, name: "N", scope: !30, file: !29, line: 86, baseType: !36, size: 192, align: 64, offset: 128)
!36 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_mpi", file: !37, line: 151, baseType: !38)
!37 = !MDFile(filename: "./bignum.h", directory: "/Users/dbz5017/Research/Projects/llvm-dsa/projects/llvm-deps/rsa_test")
!38 = !MDCompositeType(tag: DW_TAG_structure_type, file: !37, line: 145, size: 192, align: 64, elements: !39)
!39 = !{!40, !41, !42}
!40 = !MDDerivedType(tag: DW_TAG_member, name: "s", scope: !38, file: !37, line: 147, baseType: !33, size: 32, align: 32)
!41 = !MDDerivedType(tag: DW_TAG_member, name: "n", scope: !38, file: !37, line: 148, baseType: !20, size: 64, align: 64, offset: 64)
!42 = !MDDerivedType(tag: DW_TAG_member, name: "p", scope: !38, file: !37, line: 149, baseType: !43, size: 64, align: 64, offset: 128)
!43 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !44, size: 64, align: 64)
!44 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_mpi_uint", file: !37, line: 126, baseType: !45)
!45 = !MDDerivedType(tag: DW_TAG_typedef, name: "uint64_t", file: !46, line: 31, baseType: !47)
!46 = !MDFile(filename: "/usr/include/_types/_uint64_t.h", directory: "/Users/dbz5017/Research/Projects/llvm-dsa/projects/llvm-deps/rsa_test")
!47 = !MDBasicType(name: "long long unsigned int", size: 64, align: 64, encoding: DW_ATE_unsigned)
!48 = !MDDerivedType(tag: DW_TAG_member, name: "E", scope: !30, file: !29, line: 87, baseType: !36, size: 192, align: 64, offset: 320)
!49 = !MDDerivedType(tag: DW_TAG_member, name: "D", scope: !30, file: !29, line: 89, baseType: !36, size: 192, align: 64, offset: 512)
!50 = !MDDerivedType(tag: DW_TAG_member, name: "P", scope: !30, file: !29, line: 90, baseType: !36, size: 192, align: 64, offset: 704)
!51 = !MDDerivedType(tag: DW_TAG_member, name: "Q", scope: !30, file: !29, line: 91, baseType: !36, size: 192, align: 64, offset: 896)
!52 = !MDDerivedType(tag: DW_TAG_member, name: "DP", scope: !30, file: !29, line: 92, baseType: !36, size: 192, align: 64, offset: 1088)
!53 = !MDDerivedType(tag: DW_TAG_member, name: "DQ", scope: !30, file: !29, line: 93, baseType: !36, size: 192, align: 64, offset: 1280)
!54 = !MDDerivedType(tag: DW_TAG_member, name: "QP", scope: !30, file: !29, line: 94, baseType: !36, size: 192, align: 64, offset: 1472)
!55 = !MDDerivedType(tag: DW_TAG_member, name: "RN", scope: !30, file: !29, line: 96, baseType: !36, size: 192, align: 64, offset: 1664)
!56 = !MDDerivedType(tag: DW_TAG_member, name: "RP", scope: !30, file: !29, line: 97, baseType: !36, size: 192, align: 64, offset: 1856)
!57 = !MDDerivedType(tag: DW_TAG_member, name: "RQ", scope: !30, file: !29, line: 98, baseType: !36, size: 192, align: 64, offset: 2048)
!58 = !MDDerivedType(tag: DW_TAG_member, name: "Vi", scope: !30, file: !29, line: 100, baseType: !36, size: 192, align: 64, offset: 2240)
!59 = !MDDerivedType(tag: DW_TAG_member, name: "Vf", scope: !30, file: !29, line: 101, baseType: !36, size: 192, align: 64, offset: 2432)
!60 = !MDDerivedType(tag: DW_TAG_member, name: "padding", scope: !30, file: !29, line: 103, baseType: !33, size: 32, align: 32, offset: 2624)
!61 = !MDDerivedType(tag: DW_TAG_member, name: "hash_id", scope: !30, file: !29, line: 105, baseType: !33, size: 32, align: 32, offset: 2656)
!62 = !{}
!63 = !MDSubprogram(name: "mbedtls_rsa_set_padding", scope: !1, file: !1, line: 134, type: !25, isLocal: false, isDefinition: true, scopeLine: 135, flags: DIFlagPrototyped, isOptimized: false, function: void (%struct.mbedtls_rsa_context*, i32, i32)* @mbedtls_rsa_set_padding, variables: !62)
!64 = !MDSubprogram(name: "mbedtls_rsa_gen_key", scope: !1, file: !1, line: 145, type: !65, isLocal: false, isDefinition: true, scopeLine: 149, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32)* @mbedtls_rsa_gen_key, variables: !62)
!65 = !MDSubroutineType(types: !66)
!66 = !{!33, !27, !67, !17, !71, !33}
!67 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !68, size: 64, align: 64)
!68 = !MDSubroutineType(types: !69)
!69 = !{!33, !17, !70, !20}
!70 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !19, size: 64, align: 64)
!71 = !MDBasicType(name: "unsigned int", size: 32, align: 32, encoding: DW_ATE_unsigned)
!72 = !MDSubprogram(name: "mbedtls_rsa_check_pubkey", scope: !1, file: !1, line: 220, type: !73, isLocal: false, isDefinition: true, scopeLine: 221, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*)* @mbedtls_rsa_check_pubkey, variables: !62)
!73 = !MDSubroutineType(types: !74)
!74 = !{!33, !75}
!75 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !76, size: 64, align: 64)
!76 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !28)
!77 = !MDSubprogram(name: "mbedtls_rsa_check_privkey", scope: !1, file: !1, line: 243, type: !73, isLocal: false, isDefinition: true, scopeLine: 244, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*)* @mbedtls_rsa_check_privkey, variables: !62)
!78 = !MDSubprogram(name: "mbedtls_rsa_check_pub_priv", scope: !1, file: !1, line: 305, type: !79, isLocal: false, isDefinition: true, scopeLine: 306, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context*)* @mbedtls_rsa_check_pub_priv, variables: !62)
!79 = !MDSubroutineType(types: !80)
!80 = !{!33, !75, !75}
!81 = !MDSubprogram(name: "mbedtls_rsa_public", scope: !1, file: !1, line: 325, type: !82, isLocal: false, isDefinition: true, scopeLine: 328, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i8*, i8*)* @mbedtls_rsa_public, variables: !62)
!82 = !MDSubroutineType(types: !83)
!83 = !{!33, !27, !84, !70}
!84 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !85, size: 64, align: 64)
!85 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !19)
!86 = !MDSubprogram(name: "mbedtls_rsa_private", scope: !1, file: !1, line: 409, type: !87, isLocal: false, isDefinition: true, scopeLine: 414, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i8*, i8*)* @mbedtls_rsa_private, variables: !62)
!87 = !MDSubroutineType(types: !88)
!88 = !{!33, !27, !67, !17, !84, !70}
!89 = !MDSubprogram(name: "mbedtls_rsa_rsaes_oaep_encrypt", scope: !1, file: !1, line: 550, type: !90, isLocal: false, isDefinition: true, scopeLine: 558, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i8*, i64, i64, i8*, i8*)* @mbedtls_rsa_rsaes_oaep_encrypt, variables: !62)
!90 = !MDSubroutineType(types: !91)
!91 = !{!33, !27, !67, !17, !33, !84, !20, !20, !84, !70}
!92 = !MDSubprogram(name: "mbedtls_rsa_rsaes_pkcs1_v15_encrypt", scope: !1, file: !1, line: 626, type: !93, isLocal: false, isDefinition: true, scopeLine: 632, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i64, i8*, i8*)* @mbedtls_rsa_rsaes_pkcs1_v15_encrypt, variables: !62)
!93 = !MDSubroutineType(types: !94)
!94 = !{!33, !27, !67, !17, !33, !20, !84, !70}
!95 = !MDSubprogram(name: "mbedtls_rsa_pkcs1_encrypt", scope: !1, file: !1, line: 691, type: !93, isLocal: false, isDefinition: true, scopeLine: 697, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i64, i8*, i8*)* @mbedtls_rsa_pkcs1_encrypt, variables: !62)
!96 = !MDSubprogram(name: "mbedtls_rsa_rsaes_oaep_decrypt", scope: !1, file: !1, line: 721, type: !97, isLocal: false, isDefinition: true, scopeLine: 730, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i8*, i64, i64*, i8*, i8*, i64)* @mbedtls_rsa_rsaes_oaep_decrypt, variables: !62)
!97 = !MDSubroutineType(types: !98)
!98 = !{!33, !27, !67, !17, !33, !84, !20, !99, !84, !70, !20}
!99 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !20, size: 64, align: 64)
!100 = !MDSubprogram(name: "mbedtls_rsa_rsaes_pkcs1_v15_decrypt", scope: !1, file: !1, line: 836, type: !101, isLocal: false, isDefinition: true, scopeLine: 843, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i64*, i8*, i8*, i64)* @mbedtls_rsa_rsaes_pkcs1_v15_decrypt, variables: !62)
!101 = !MDSubroutineType(types: !102)
!102 = !{!33, !27, !67, !17, !33, !99, !84, !70, !20}
!103 = !MDSubprogram(name: "mbedtls_rsa_pkcs1_decrypt", scope: !1, file: !1, line: 920, type: !101, isLocal: false, isDefinition: true, scopeLine: 927, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i64*, i8*, i8*, i64)* @mbedtls_rsa_pkcs1_decrypt, variables: !62)
!104 = !MDSubprogram(name: "mbedtls_rsa_rsassa_pss_sign", scope: !1, file: !1, line: 952, type: !105, isLocal: false, isDefinition: true, scopeLine: 960, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i8*)* @mbedtls_rsa_rsassa_pss_sign, variables: !62)
!105 = !MDSubroutineType(types: !106)
!106 = !{!33, !27, !67, !17, !33, !18, !71, !84, !70}
!107 = !MDSubprogram(name: "mbedtls_rsa_rsassa_pkcs1_v15_sign", scope: !1, file: !1, line: 1055, type: !105, isLocal: false, isDefinition: true, scopeLine: 1063, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i8*)* @mbedtls_rsa_rsassa_pkcs1_v15_sign, variables: !62)
!108 = !MDSubprogram(name: "mbedtls_rsa_pkcs1_sign", scope: !1, file: !1, line: 1173, type: !105, isLocal: false, isDefinition: true, scopeLine: 1181, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i8*)* @mbedtls_rsa_pkcs1_sign, variables: !62)
!109 = !MDSubprogram(name: "mbedtls_rsa_rsassa_pss_verify_ext", scope: !1, file: !1, line: 1205, type: !110, isLocal: false, isDefinition: true, scopeLine: 1215, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i32, i32, i8*)* @mbedtls_rsa_rsassa_pss_verify_ext, variables: !62)
!110 = !MDSubroutineType(types: !111)
!111 = !{!33, !27, !67, !17, !33, !18, !71, !84, !18, !33, !84}
!112 = !MDSubprogram(name: "mbedtls_rsa_rsassa_pss_verify", scope: !1, file: !1, line: 1327, type: !113, isLocal: false, isDefinition: true, scopeLine: 1335, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i8*)* @mbedtls_rsa_rsassa_pss_verify, variables: !62)
!113 = !MDSubroutineType(types: !114)
!114 = !{!33, !27, !67, !17, !33, !18, !71, !84, !84}
!115 = !MDSubprogram(name: "mbedtls_rsa_rsassa_pkcs1_v15_verify", scope: !1, file: !1, line: 1352, type: !113, isLocal: false, isDefinition: true, scopeLine: 1360, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i8*)* @mbedtls_rsa_rsassa_pkcs1_v15_verify, variables: !62)
!116 = !MDSubprogram(name: "mbedtls_rsa_pkcs1_verify", scope: !1, file: !1, line: 1469, type: !113, isLocal: false, isDefinition: true, scopeLine: 1477, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*, i32, i32, i32, i8*, i8*)* @mbedtls_rsa_pkcs1_verify, variables: !62)
!117 = !MDSubprogram(name: "mbedtls_rsa_copy", scope: !1, file: !1, line: 1500, type: !118, isLocal: false, isDefinition: true, scopeLine: 1501, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, %struct.mbedtls_rsa_context*)* @mbedtls_rsa_copy, variables: !62)
!118 = !MDSubroutineType(types: !119)
!119 = !{!33, !27, !75}
!120 = !MDSubprogram(name: "mbedtls_rsa_free", scope: !1, file: !1, line: 1537, type: !121, isLocal: false, isDefinition: true, scopeLine: 1538, flags: DIFlagPrototyped, isOptimized: false, function: void (%struct.mbedtls_rsa_context*)* @mbedtls_rsa_free, variables: !62)
!121 = !MDSubroutineType(types: !122)
!122 = !{null, !27}
!123 = !MDSubprogram(name: "mbedtls_rsa_self_test", scope: !1, file: !1, line: 1631, type: !124, isLocal: false, isDefinition: true, scopeLine: 1632, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i32, %struct.mbedtls_mpi*)* @mbedtls_rsa_self_test, variables: !62)
!124 = !MDSubroutineType(types: !125)
!125 = !{!33, !33, !36}
!126 = !MDSubprogram(name: "rsa_prepare_blinding", scope: !1, file: !1, line: 372, type: !127, isLocal: true, isDefinition: true, scopeLine: 374, flags: DIFlagPrototyped, isOptimized: false, function: i32 (%struct.mbedtls_rsa_context*, i32 (i8*, i8*, i64)*, i8*)* @rsa_prepare_blinding, variables: !62)
!127 = !MDSubroutineType(types: !128)
!128 = !{!33, !27, !67, !17}
!129 = !MDSubprogram(name: "mgf_mask", scope: !1, file: !1, line: 507, type: !130, isLocal: true, isDefinition: true, scopeLine: 509, flags: DIFlagPrototyped, isOptimized: false, function: void (i8*, i64, i8*, i64, %struct.mbedtls_md_context_t*)* @mgf_mask, variables: !62)
!130 = !MDSubroutineType(types: !131)
!131 = !{null, !70, !20, !70, !20, !132}
!132 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !133, size: 64, align: 64)
!133 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_md_context_t", file: !4, line: 81, baseType: !134)
!134 = !MDCompositeType(tag: DW_TAG_structure_type, file: !4, line: 72, size: 192, align: 64, elements: !135)
!135 = !{!136, !141, !142}
!136 = !MDDerivedType(tag: DW_TAG_member, name: "md_info", scope: !134, file: !4, line: 74, baseType: !137, size: 64, align: 64)
!137 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !138, size: 64, align: 64)
!138 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !139)
!139 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_md_info_t", file: !4, line: 67, baseType: !140)
!140 = !MDCompositeType(tag: DW_TAG_structure_type, name: "mbedtls_md_info_t", file: !4, line: 67, flags: DIFlagFwdDecl)
!141 = !MDDerivedType(tag: DW_TAG_member, name: "md_ctx", scope: !134, file: !4, line: 77, baseType: !17, size: 64, align: 64, offset: 64)
!142 = !MDDerivedType(tag: DW_TAG_member, name: "hmac_ctx", scope: !134, file: !4, line: 80, baseType: !17, size: 64, align: 64, offset: 128)
!143 = !MDSubprogram(name: "myrand", scope: !1, file: !1, line: 1607, type: !68, isLocal: true, isDefinition: true, scopeLine: 1608, flags: DIFlagPrototyped, isOptimized: false, function: i32 (i8*, i8*, i64)* @myrand, variables: !62)
!144 = !{i32 2, !"Dwarf Version", i32 2}
!145 = !{i32 2, !"Debug Info Version", i32 3}
!146 = !{i32 1, !"PIC Level", i32 2}
!147 = !{!"clang version 3.7.0 (trunk) (https://github.com/C0deZLee/llvm-dsa.git b9a293c548434d1ab56ffe7083d7c9424ac31849)"}
!148 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !24, file: !1, line: 118, type: !27)
!149 = !MDExpression()
!150 = !MDLocation(line: 118, column: 45, scope: !24)
!151 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "padding", arg: 2, scope: !24, file: !1, line: 119, type: !33)
!152 = !MDLocation(line: 119, column: 20, scope: !24)
!153 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash_id", arg: 3, scope: !24, file: !1, line: 120, type: !33)
!154 = !MDLocation(line: 120, column: 20, scope: !24)
!155 = !MDLocation(line: 122, column: 5, scope: !24)
!156 = !MDLocation(line: 124, column: 30, scope: !24)
!157 = !MDLocation(line: 124, column: 35, scope: !24)
!158 = !MDLocation(line: 124, column: 44, scope: !24)
!159 = !MDLocation(line: 124, column: 5, scope: !24)
!160 = !MDLocation(line: 129, column: 1, scope: !24)
!161 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !63, file: !1, line: 134, type: !27)
!162 = !MDLocation(line: 134, column: 52, scope: !63)
!163 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "padding", arg: 2, scope: !63, file: !1, line: 134, type: !33)
!164 = !MDLocation(line: 134, column: 61, scope: !63)
!165 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash_id", arg: 3, scope: !63, file: !1, line: 134, type: !33)
!166 = !MDLocation(line: 134, column: 74, scope: !63)
!167 = !MDLocation(line: 136, column: 20, scope: !63)
!168 = !MDLocation(line: 136, column: 5, scope: !63)
!169 = !MDLocation(line: 136, column: 10, scope: !63)
!170 = !MDLocation(line: 136, column: 18, scope: !63)
!171 = !MDLocation(line: 137, column: 20, scope: !63)
!172 = !MDLocation(line: 137, column: 5, scope: !63)
!173 = !MDLocation(line: 137, column: 10, scope: !63)
!174 = !MDLocation(line: 137, column: 18, scope: !63)
!175 = !MDLocation(line: 138, column: 1, scope: !63)
!176 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !64, file: !1, line: 145, type: !27)
!177 = !MDLocation(line: 145, column: 47, scope: !64)
!178 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !64, file: !1, line: 146, type: !67)
!179 = !MDLocation(line: 146, column: 24, scope: !64)
!180 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !64, file: !1, line: 147, type: !17)
!181 = !MDLocation(line: 147, column: 24, scope: !64)
!182 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "nbits", arg: 4, scope: !64, file: !1, line: 148, type: !71)
!183 = !MDLocation(line: 148, column: 31, scope: !64)
!184 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "exponent", arg: 5, scope: !64, file: !1, line: 148, type: !33)
!185 = !MDLocation(line: 148, column: 42, scope: !64)
!186 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !64, file: !1, line: 150, type: !33)
!187 = !MDLocation(line: 150, column: 9, scope: !64)
!188 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "P1", scope: !64, file: !1, line: 151, type: !36)
!189 = !MDLocation(line: 151, column: 17, scope: !64)
!190 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "Q1", scope: !64, file: !1, line: 151, type: !36)
!191 = !MDLocation(line: 151, column: 21, scope: !64)
!192 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "H", scope: !64, file: !1, line: 151, type: !36)
!193 = !MDLocation(line: 151, column: 25, scope: !64)
!194 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "G", scope: !64, file: !1, line: 151, type: !36)
!195 = !MDLocation(line: 151, column: 28, scope: !64)
!196 = !MDLocation(line: 153, column: 9, scope: !197)
!197 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 153, column: 9)
!198 = !MDLocation(line: 153, column: 15, scope: !197)
!199 = !MDLocation(line: 153, column: 23, scope: !197)
!200 = !MDLocation(line: 153, column: 26, scope: !197)
!201 = !MDLocation(line: 153, column: 32, scope: !197)
!202 = !MDLocation(line: 153, column: 38, scope: !197)
!203 = !MDLocation(line: 153, column: 41, scope: !197)
!204 = !MDLocation(line: 153, column: 50, scope: !197)
!205 = !MDLocation(line: 153, column: 9, scope: !64)
!206 = !MDLocation(line: 154, column: 9, scope: !197)
!207 = !MDLocation(line: 156, column: 5, scope: !64)
!208 = !MDLocation(line: 156, column: 30, scope: !64)
!209 = !MDLocation(line: 156, column: 55, scope: !64)
!210 = !MDLocation(line: 156, column: 79, scope: !64)
!211 = !MDLocation(line: 162, column: 5, scope: !64)
!212 = !MDLocation(line: 162, column: 5, scope: !213)
!213 = distinct !MDLexicalBlock(scope: !214, file: !1, line: 162, column: 5)
!214 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 162, column: 5)
!215 = !MDLocation(line: 162, column: 5, scope: !214)
!216 = !MDLocation(line: 164, column: 5, scope: !64)
!217 = !MDLocation(line: 166, column: 9, scope: !218)
!218 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 165, column: 5)
!219 = !MDLocation(line: 166, column: 9, scope: !220)
!220 = distinct !MDLexicalBlock(scope: !221, file: !1, line: 166, column: 9)
!221 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 166, column: 9)
!222 = !MDLocation(line: 166, column: 9, scope: !221)
!223 = !MDLocation(line: 169, column: 9, scope: !218)
!224 = !MDLocation(line: 169, column: 9, scope: !225)
!225 = distinct !MDLexicalBlock(scope: !226, file: !1, line: 169, column: 9)
!226 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 169, column: 9)
!227 = !MDLocation(line: 169, column: 9, scope: !226)
!228 = !MDLocation(line: 172, column: 35, scope: !229)
!229 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 172, column: 13)
!230 = !MDLocation(line: 172, column: 40, scope: !229)
!231 = !MDLocation(line: 172, column: 44, scope: !229)
!232 = !MDLocation(line: 172, column: 49, scope: !229)
!233 = !MDLocation(line: 172, column: 13, scope: !229)
!234 = !MDLocation(line: 172, column: 53, scope: !229)
!235 = !MDLocation(line: 172, column: 13, scope: !218)
!236 = !MDLocation(line: 173, column: 32, scope: !229)
!237 = !MDLocation(line: 173, column: 37, scope: !229)
!238 = !MDLocation(line: 173, column: 41, scope: !229)
!239 = !MDLocation(line: 173, column: 46, scope: !229)
!240 = !MDLocation(line: 173, column: 13, scope: !229)
!241 = !MDLocation(line: 175, column: 35, scope: !242)
!242 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 175, column: 13)
!243 = !MDLocation(line: 175, column: 40, scope: !242)
!244 = !MDLocation(line: 175, column: 44, scope: !242)
!245 = !MDLocation(line: 175, column: 49, scope: !242)
!246 = !MDLocation(line: 175, column: 13, scope: !242)
!247 = !MDLocation(line: 175, column: 53, scope: !242)
!248 = !MDLocation(line: 175, column: 13, scope: !218)
!249 = !MDLocation(line: 176, column: 13, scope: !242)
!250 = !MDLocation(line: 178, column: 9, scope: !218)
!251 = !MDLocation(line: 178, column: 9, scope: !252)
!252 = distinct !MDLexicalBlock(scope: !253, file: !1, line: 178, column: 9)
!253 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 178, column: 9)
!254 = !MDLocation(line: 178, column: 9, scope: !253)
!255 = !MDLocation(line: 179, column: 34, scope: !256)
!256 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 179, column: 13)
!257 = !MDLocation(line: 179, column: 39, scope: !256)
!258 = !MDLocation(line: 179, column: 13, scope: !256)
!259 = !MDLocation(line: 179, column: 46, scope: !256)
!260 = !MDLocation(line: 179, column: 43, scope: !256)
!261 = !MDLocation(line: 179, column: 13, scope: !218)
!262 = !MDLocation(line: 180, column: 13, scope: !256)
!263 = !MDLocation(line: 182, column: 9, scope: !218)
!264 = !MDLocation(line: 182, column: 9, scope: !265)
!265 = distinct !MDLexicalBlock(scope: !266, file: !1, line: 182, column: 9)
!266 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 182, column: 9)
!267 = !MDLocation(line: 182, column: 9, scope: !266)
!268 = !MDLocation(line: 183, column: 9, scope: !218)
!269 = !MDLocation(line: 183, column: 9, scope: !270)
!270 = distinct !MDLexicalBlock(scope: !271, file: !1, line: 183, column: 9)
!271 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 183, column: 9)
!272 = !MDLocation(line: 183, column: 9, scope: !271)
!273 = !MDLocation(line: 184, column: 9, scope: !218)
!274 = !MDLocation(line: 184, column: 9, scope: !275)
!275 = distinct !MDLexicalBlock(scope: !276, file: !1, line: 184, column: 9)
!276 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 184, column: 9)
!277 = !MDLocation(line: 184, column: 9, scope: !276)
!278 = !MDLocation(line: 185, column: 9, scope: !218)
!279 = !MDLocation(line: 185, column: 9, scope: !280)
!280 = distinct !MDLexicalBlock(scope: !281, file: !1, line: 185, column: 9)
!281 = distinct !MDLexicalBlock(scope: !218, file: !1, line: 185, column: 9)
!282 = !MDLocation(line: 185, column: 9, scope: !281)
!283 = !MDLocation(line: 186, column: 5, scope: !218)
!284 = !MDLocation(line: 187, column: 12, scope: !64)
!285 = !MDLocation(line: 187, column: 41, scope: !64)
!286 = !MDLocation(line: 195, column: 5, scope: !64)
!287 = !MDLocation(line: 195, column: 5, scope: !288)
!288 = distinct !MDLexicalBlock(scope: !289, file: !1, line: 195, column: 5)
!289 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 195, column: 5)
!290 = !MDLocation(line: 195, column: 5, scope: !289)
!291 = !MDLocation(line: 196, column: 5, scope: !64)
!292 = !MDLocation(line: 196, column: 5, scope: !293)
!293 = distinct !MDLexicalBlock(scope: !294, file: !1, line: 196, column: 5)
!294 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 196, column: 5)
!295 = !MDLocation(line: 196, column: 5, scope: !294)
!296 = !MDLocation(line: 197, column: 5, scope: !64)
!297 = !MDLocation(line: 197, column: 5, scope: !298)
!298 = distinct !MDLexicalBlock(scope: !299, file: !1, line: 197, column: 5)
!299 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 197, column: 5)
!300 = !MDLocation(line: 197, column: 5, scope: !299)
!301 = !MDLocation(line: 198, column: 5, scope: !64)
!302 = !MDLocation(line: 198, column: 5, scope: !303)
!303 = distinct !MDLexicalBlock(scope: !304, file: !1, line: 198, column: 5)
!304 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 198, column: 5)
!305 = !MDLocation(line: 198, column: 5, scope: !304)
!306 = !MDLocation(line: 200, column: 39, scope: !64)
!307 = !MDLocation(line: 200, column: 44, scope: !64)
!308 = !MDLocation(line: 200, column: 18, scope: !64)
!309 = !MDLocation(line: 200, column: 48, scope: !64)
!310 = !MDLocation(line: 200, column: 54, scope: !64)
!311 = !MDLocation(line: 200, column: 5, scope: !64)
!312 = !MDLocation(line: 200, column: 10, scope: !64)
!313 = !MDLocation(line: 200, column: 14, scope: !64)
!314 = !MDLocation(line: 204, column: 5, scope: !64)
!315 = !MDLocation(line: 204, column: 30, scope: !64)
!316 = !MDLocation(line: 204, column: 55, scope: !64)
!317 = !MDLocation(line: 204, column: 79, scope: !64)
!318 = !MDLocation(line: 206, column: 9, scope: !319)
!319 = distinct !MDLexicalBlock(scope: !64, file: !1, line: 206, column: 9)
!320 = !MDLocation(line: 206, column: 13, scope: !319)
!321 = !MDLocation(line: 206, column: 9, scope: !64)
!322 = !MDLocation(line: 208, column: 27, scope: !323)
!323 = distinct !MDLexicalBlock(scope: !319, file: !1, line: 207, column: 5)
!324 = !MDLocation(line: 208, column: 9, scope: !323)
!325 = !MDLocation(line: 209, column: 50, scope: !323)
!326 = !MDLocation(line: 209, column: 48, scope: !323)
!327 = !MDLocation(line: 209, column: 9, scope: !323)
!328 = !MDLocation(line: 212, column: 5, scope: !64)
!329 = !MDLocation(line: 213, column: 1, scope: !64)
!330 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !120, file: !1, line: 1537, type: !27)
!331 = !MDLocation(line: 1537, column: 45, scope: !120)
!332 = !MDLocation(line: 1539, column: 24, scope: !120)
!333 = !MDLocation(line: 1539, column: 29, scope: !120)
!334 = !MDLocation(line: 1539, column: 5, scope: !120)
!335 = !MDLocation(line: 1539, column: 54, scope: !120)
!336 = !MDLocation(line: 1539, column: 59, scope: !120)
!337 = !MDLocation(line: 1539, column: 35, scope: !120)
!338 = !MDLocation(line: 1540, column: 24, scope: !120)
!339 = !MDLocation(line: 1540, column: 29, scope: !120)
!340 = !MDLocation(line: 1540, column: 5, scope: !120)
!341 = !MDLocation(line: 1540, column: 54, scope: !120)
!342 = !MDLocation(line: 1540, column: 59, scope: !120)
!343 = !MDLocation(line: 1540, column: 35, scope: !120)
!344 = !MDLocation(line: 1540, column: 84, scope: !120)
!345 = !MDLocation(line: 1540, column: 89, scope: !120)
!346 = !MDLocation(line: 1540, column: 65, scope: !120)
!347 = !MDLocation(line: 1541, column: 24, scope: !120)
!348 = !MDLocation(line: 1541, column: 29, scope: !120)
!349 = !MDLocation(line: 1541, column: 5, scope: !120)
!350 = !MDLocation(line: 1541, column: 54, scope: !120)
!351 = !MDLocation(line: 1541, column: 59, scope: !120)
!352 = !MDLocation(line: 1541, column: 35, scope: !120)
!353 = !MDLocation(line: 1541, column: 84, scope: !120)
!354 = !MDLocation(line: 1541, column: 89, scope: !120)
!355 = !MDLocation(line: 1541, column: 65, scope: !120)
!356 = !MDLocation(line: 1542, column: 24, scope: !120)
!357 = !MDLocation(line: 1542, column: 29, scope: !120)
!358 = !MDLocation(line: 1542, column: 5, scope: !120)
!359 = !MDLocation(line: 1542, column: 54, scope: !120)
!360 = !MDLocation(line: 1542, column: 59, scope: !120)
!361 = !MDLocation(line: 1542, column: 35, scope: !120)
!362 = !MDLocation(line: 1542, column: 84, scope: !120)
!363 = !MDLocation(line: 1542, column: 89, scope: !120)
!364 = !MDLocation(line: 1542, column: 65, scope: !120)
!365 = !MDLocation(line: 1543, column: 24, scope: !120)
!366 = !MDLocation(line: 1543, column: 29, scope: !120)
!367 = !MDLocation(line: 1543, column: 5, scope: !120)
!368 = !MDLocation(line: 1543, column: 54, scope: !120)
!369 = !MDLocation(line: 1543, column: 59, scope: !120)
!370 = !MDLocation(line: 1543, column: 35, scope: !120)
!371 = !MDLocation(line: 1548, column: 1, scope: !120)
!372 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !72, file: !1, line: 220, type: !75)
!373 = !MDLocation(line: 220, column: 58, scope: !72)
!374 = !MDLocation(line: 222, column: 10, scope: !375)
!375 = distinct !MDLexicalBlock(scope: !72, file: !1, line: 222, column: 9)
!376 = !MDLocation(line: 222, column: 15, scope: !375)
!377 = !MDLocation(line: 222, column: 17, scope: !375)
!378 = !MDLocation(line: 222, column: 19, scope: !375)
!379 = !MDLocation(line: 222, column: 23, scope: !375)
!380 = !MDLocation(line: 222, column: 28, scope: !375)
!381 = !MDLocation(line: 222, column: 30, scope: !375)
!382 = !MDLocation(line: 222, column: 9, scope: !72)
!383 = !MDLocation(line: 223, column: 9, scope: !375)
!384 = !MDLocation(line: 225, column: 11, scope: !385)
!385 = distinct !MDLexicalBlock(scope: !72, file: !1, line: 225, column: 9)
!386 = !MDLocation(line: 225, column: 16, scope: !385)
!387 = !MDLocation(line: 225, column: 18, scope: !385)
!388 = !MDLocation(line: 225, column: 23, scope: !385)
!389 = !MDLocation(line: 225, column: 29, scope: !385)
!390 = !MDLocation(line: 225, column: 34, scope: !385)
!391 = !MDLocation(line: 226, column: 11, scope: !385)
!392 = !MDLocation(line: 226, column: 16, scope: !385)
!393 = !MDLocation(line: 226, column: 18, scope: !385)
!394 = !MDLocation(line: 226, column: 23, scope: !385)
!395 = !MDLocation(line: 226, column: 29, scope: !385)
!396 = !MDLocation(line: 225, column: 9, scope: !72)
!397 = !MDLocation(line: 227, column: 9, scope: !385)
!398 = !MDLocation(line: 229, column: 30, scope: !399)
!399 = distinct !MDLexicalBlock(scope: !72, file: !1, line: 229, column: 9)
!400 = !MDLocation(line: 229, column: 35, scope: !399)
!401 = !MDLocation(line: 229, column: 9, scope: !399)
!402 = !MDLocation(line: 229, column: 39, scope: !399)
!403 = !MDLocation(line: 229, column: 45, scope: !399)
!404 = !MDLocation(line: 230, column: 30, scope: !399)
!405 = !MDLocation(line: 230, column: 35, scope: !399)
!406 = !MDLocation(line: 230, column: 9, scope: !399)
!407 = !MDLocation(line: 230, column: 39, scope: !399)
!408 = !MDLocation(line: 229, column: 9, scope: !72)
!409 = !MDLocation(line: 231, column: 9, scope: !399)
!410 = !MDLocation(line: 233, column: 30, scope: !411)
!411 = distinct !MDLexicalBlock(scope: !72, file: !1, line: 233, column: 9)
!412 = !MDLocation(line: 233, column: 35, scope: !411)
!413 = !MDLocation(line: 233, column: 9, scope: !411)
!414 = !MDLocation(line: 233, column: 39, scope: !411)
!415 = !MDLocation(line: 233, column: 43, scope: !411)
!416 = !MDLocation(line: 234, column: 31, scope: !411)
!417 = !MDLocation(line: 234, column: 36, scope: !411)
!418 = !MDLocation(line: 234, column: 40, scope: !411)
!419 = !MDLocation(line: 234, column: 45, scope: !411)
!420 = !MDLocation(line: 234, column: 9, scope: !411)
!421 = !MDLocation(line: 234, column: 49, scope: !411)
!422 = !MDLocation(line: 233, column: 9, scope: !72)
!423 = !MDLocation(line: 235, column: 9, scope: !411)
!424 = !MDLocation(line: 237, column: 5, scope: !72)
!425 = !MDLocation(line: 238, column: 1, scope: !72)
!426 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !77, file: !1, line: 243, type: !75)
!427 = !MDLocation(line: 243, column: 59, scope: !77)
!428 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !77, file: !1, line: 245, type: !33)
!429 = !MDLocation(line: 245, column: 9, scope: !77)
!430 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "PQ", scope: !77, file: !1, line: 246, type: !36)
!431 = !MDLocation(line: 246, column: 17, scope: !77)
!432 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "DE", scope: !77, file: !1, line: 246, type: !36)
!433 = !MDLocation(line: 246, column: 21, scope: !77)
!434 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "P1", scope: !77, file: !1, line: 246, type: !36)
!435 = !MDLocation(line: 246, column: 25, scope: !77)
!436 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "Q1", scope: !77, file: !1, line: 246, type: !36)
!437 = !MDLocation(line: 246, column: 29, scope: !77)
!438 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "H", scope: !77, file: !1, line: 246, type: !36)
!439 = !MDLocation(line: 246, column: 33, scope: !77)
!440 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "I", scope: !77, file: !1, line: 246, type: !36)
!441 = !MDLocation(line: 246, column: 36, scope: !77)
!442 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "G", scope: !77, file: !1, line: 246, type: !36)
!443 = !MDLocation(line: 246, column: 39, scope: !77)
!444 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "G2", scope: !77, file: !1, line: 246, type: !36)
!445 = !MDLocation(line: 246, column: 42, scope: !77)
!446 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "L1", scope: !77, file: !1, line: 246, type: !36)
!447 = !MDLocation(line: 246, column: 46, scope: !77)
!448 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "L2", scope: !77, file: !1, line: 246, type: !36)
!449 = !MDLocation(line: 246, column: 50, scope: !77)
!450 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "DP", scope: !77, file: !1, line: 246, type: !36)
!451 = !MDLocation(line: 246, column: 54, scope: !77)
!452 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "DQ", scope: !77, file: !1, line: 246, type: !36)
!453 = !MDLocation(line: 246, column: 58, scope: !77)
!454 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "QP", scope: !77, file: !1, line: 246, type: !36)
!455 = !MDLocation(line: 246, column: 62, scope: !77)
!456 = !MDLocation(line: 248, column: 43, scope: !457)
!457 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 248, column: 9)
!458 = !MDLocation(line: 248, column: 17, scope: !457)
!459 = !MDLocation(line: 248, column: 15, scope: !457)
!460 = !MDLocation(line: 248, column: 51, scope: !457)
!461 = !MDLocation(line: 248, column: 9, scope: !77)
!462 = !MDLocation(line: 249, column: 17, scope: !457)
!463 = !MDLocation(line: 249, column: 9, scope: !457)
!464 = !MDLocation(line: 251, column: 10, scope: !465)
!465 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 251, column: 9)
!466 = !MDLocation(line: 251, column: 15, scope: !465)
!467 = !MDLocation(line: 251, column: 17, scope: !465)
!468 = !MDLocation(line: 251, column: 19, scope: !465)
!469 = !MDLocation(line: 251, column: 23, scope: !465)
!470 = !MDLocation(line: 251, column: 28, scope: !465)
!471 = !MDLocation(line: 251, column: 30, scope: !465)
!472 = !MDLocation(line: 251, column: 32, scope: !465)
!473 = !MDLocation(line: 251, column: 36, scope: !465)
!474 = !MDLocation(line: 251, column: 41, scope: !465)
!475 = !MDLocation(line: 251, column: 43, scope: !465)
!476 = !MDLocation(line: 251, column: 9, scope: !77)
!477 = !MDLocation(line: 252, column: 9, scope: !465)
!478 = !MDLocation(line: 254, column: 5, scope: !77)
!479 = !MDLocation(line: 254, column: 30, scope: !77)
!480 = !MDLocation(line: 254, column: 55, scope: !77)
!481 = !MDLocation(line: 254, column: 80, scope: !77)
!482 = !MDLocation(line: 255, column: 5, scope: !77)
!483 = !MDLocation(line: 255, column: 30, scope: !77)
!484 = !MDLocation(line: 255, column: 55, scope: !77)
!485 = !MDLocation(line: 255, column: 80, scope: !77)
!486 = !MDLocation(line: 256, column: 5, scope: !77)
!487 = !MDLocation(line: 256, column: 30, scope: !77)
!488 = !MDLocation(line: 256, column: 55, scope: !77)
!489 = !MDLocation(line: 256, column: 80, scope: !77)
!490 = !MDLocation(line: 257, column: 5, scope: !77)
!491 = !MDLocation(line: 259, column: 5, scope: !77)
!492 = !MDLocation(line: 259, column: 5, scope: !493)
!493 = distinct !MDLexicalBlock(scope: !494, file: !1, line: 259, column: 5)
!494 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 259, column: 5)
!495 = !MDLocation(line: 259, column: 5, scope: !494)
!496 = !MDLocation(line: 260, column: 5, scope: !77)
!497 = !MDLocation(line: 260, column: 5, scope: !498)
!498 = distinct !MDLexicalBlock(scope: !499, file: !1, line: 260, column: 5)
!499 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 260, column: 5)
!500 = !MDLocation(line: 260, column: 5, scope: !499)
!501 = !MDLocation(line: 261, column: 5, scope: !77)
!502 = !MDLocation(line: 261, column: 5, scope: !503)
!503 = distinct !MDLexicalBlock(scope: !504, file: !1, line: 261, column: 5)
!504 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 261, column: 5)
!505 = !MDLocation(line: 261, column: 5, scope: !504)
!506 = !MDLocation(line: 262, column: 5, scope: !77)
!507 = !MDLocation(line: 262, column: 5, scope: !508)
!508 = distinct !MDLexicalBlock(scope: !509, file: !1, line: 262, column: 5)
!509 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 262, column: 5)
!510 = !MDLocation(line: 262, column: 5, scope: !509)
!511 = !MDLocation(line: 263, column: 5, scope: !77)
!512 = !MDLocation(line: 263, column: 5, scope: !513)
!513 = distinct !MDLexicalBlock(scope: !514, file: !1, line: 263, column: 5)
!514 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 263, column: 5)
!515 = !MDLocation(line: 263, column: 5, scope: !514)
!516 = !MDLocation(line: 264, column: 5, scope: !77)
!517 = !MDLocation(line: 264, column: 5, scope: !518)
!518 = distinct !MDLexicalBlock(scope: !519, file: !1, line: 264, column: 5)
!519 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 264, column: 5)
!520 = !MDLocation(line: 264, column: 5, scope: !519)
!521 = !MDLocation(line: 266, column: 5, scope: !77)
!522 = !MDLocation(line: 266, column: 5, scope: !523)
!523 = distinct !MDLexicalBlock(scope: !524, file: !1, line: 266, column: 5)
!524 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 266, column: 5)
!525 = !MDLocation(line: 266, column: 5, scope: !524)
!526 = !MDLocation(line: 267, column: 5, scope: !77)
!527 = !MDLocation(line: 267, column: 5, scope: !528)
!528 = distinct !MDLexicalBlock(scope: !529, file: !1, line: 267, column: 5)
!529 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 267, column: 5)
!530 = !MDLocation(line: 267, column: 5, scope: !529)
!531 = !MDLocation(line: 268, column: 5, scope: !77)
!532 = !MDLocation(line: 268, column: 5, scope: !533)
!533 = distinct !MDLexicalBlock(scope: !534, file: !1, line: 268, column: 5)
!534 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 268, column: 5)
!535 = !MDLocation(line: 268, column: 5, scope: !534)
!536 = !MDLocation(line: 270, column: 5, scope: !77)
!537 = !MDLocation(line: 270, column: 5, scope: !538)
!538 = distinct !MDLexicalBlock(scope: !539, file: !1, line: 270, column: 5)
!539 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 270, column: 5)
!540 = !MDLocation(line: 270, column: 5, scope: !539)
!541 = !MDLocation(line: 271, column: 5, scope: !77)
!542 = !MDLocation(line: 271, column: 5, scope: !543)
!543 = distinct !MDLexicalBlock(scope: !544, file: !1, line: 271, column: 5)
!544 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 271, column: 5)
!545 = !MDLocation(line: 271, column: 5, scope: !544)
!546 = !MDLocation(line: 272, column: 5, scope: !77)
!547 = !MDLocation(line: 272, column: 5, scope: !548)
!548 = distinct !MDLexicalBlock(scope: !549, file: !1, line: 272, column: 5)
!549 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 272, column: 5)
!550 = !MDLocation(line: 272, column: 5, scope: !549)
!551 = !MDLocation(line: 276, column: 36, scope: !552)
!552 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 276, column: 9)
!553 = !MDLocation(line: 276, column: 41, scope: !552)
!554 = !MDLocation(line: 276, column: 9, scope: !552)
!555 = !MDLocation(line: 276, column: 45, scope: !552)
!556 = !MDLocation(line: 276, column: 50, scope: !552)
!557 = !MDLocation(line: 277, column: 36, scope: !552)
!558 = !MDLocation(line: 277, column: 41, scope: !552)
!559 = !MDLocation(line: 277, column: 9, scope: !552)
!560 = !MDLocation(line: 277, column: 46, scope: !552)
!561 = !MDLocation(line: 277, column: 51, scope: !552)
!562 = !MDLocation(line: 278, column: 36, scope: !552)
!563 = !MDLocation(line: 278, column: 41, scope: !552)
!564 = !MDLocation(line: 278, column: 9, scope: !552)
!565 = !MDLocation(line: 278, column: 46, scope: !552)
!566 = !MDLocation(line: 278, column: 51, scope: !552)
!567 = !MDLocation(line: 279, column: 36, scope: !552)
!568 = !MDLocation(line: 279, column: 41, scope: !552)
!569 = !MDLocation(line: 279, column: 9, scope: !552)
!570 = !MDLocation(line: 279, column: 46, scope: !552)
!571 = !MDLocation(line: 279, column: 51, scope: !552)
!572 = !MDLocation(line: 280, column: 9, scope: !552)
!573 = !MDLocation(line: 280, column: 39, scope: !552)
!574 = !MDLocation(line: 280, column: 44, scope: !552)
!575 = !MDLocation(line: 281, column: 9, scope: !552)
!576 = !MDLocation(line: 281, column: 38, scope: !552)
!577 = !MDLocation(line: 281, column: 43, scope: !552)
!578 = !MDLocation(line: 282, column: 9, scope: !552)
!579 = !MDLocation(line: 282, column: 38, scope: !552)
!580 = !MDLocation(line: 276, column: 9, scope: !77)
!581 = !MDLocation(line: 284, column: 13, scope: !582)
!582 = distinct !MDLexicalBlock(scope: !552, file: !1, line: 283, column: 5)
!583 = !MDLocation(line: 285, column: 5, scope: !582)
!584 = !MDLocation(line: 282, column: 41, scope: !552)
!585 = !MDLocation(line: 288, column: 5, scope: !77)
!586 = !MDLocation(line: 288, column: 30, scope: !77)
!587 = !MDLocation(line: 288, column: 55, scope: !77)
!588 = !MDLocation(line: 288, column: 80, scope: !77)
!589 = !MDLocation(line: 289, column: 5, scope: !77)
!590 = !MDLocation(line: 289, column: 30, scope: !77)
!591 = !MDLocation(line: 289, column: 55, scope: !77)
!592 = !MDLocation(line: 289, column: 80, scope: !77)
!593 = !MDLocation(line: 290, column: 5, scope: !77)
!594 = !MDLocation(line: 290, column: 30, scope: !77)
!595 = !MDLocation(line: 290, column: 55, scope: !77)
!596 = !MDLocation(line: 290, column: 80, scope: !77)
!597 = !MDLocation(line: 291, column: 5, scope: !77)
!598 = !MDLocation(line: 293, column: 9, scope: !599)
!599 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 293, column: 9)
!600 = !MDLocation(line: 293, column: 13, scope: !599)
!601 = !MDLocation(line: 293, column: 9, scope: !77)
!602 = !MDLocation(line: 294, column: 17, scope: !599)
!603 = !MDLocation(line: 294, column: 9, scope: !599)
!604 = !MDLocation(line: 296, column: 9, scope: !605)
!605 = distinct !MDLexicalBlock(scope: !77, file: !1, line: 296, column: 9)
!606 = !MDLocation(line: 296, column: 13, scope: !605)
!607 = !MDLocation(line: 296, column: 9, scope: !77)
!608 = !MDLocation(line: 297, column: 52, scope: !605)
!609 = !MDLocation(line: 297, column: 50, scope: !605)
!610 = !MDLocation(line: 297, column: 9, scope: !605)
!611 = !MDLocation(line: 299, column: 5, scope: !77)
!612 = !MDLocation(line: 300, column: 1, scope: !77)
!613 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "pub", arg: 1, scope: !78, file: !1, line: 305, type: !75)
!614 = !MDLocation(line: 305, column: 60, scope: !78)
!615 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "prv", arg: 2, scope: !78, file: !1, line: 305, type: !75)
!616 = !MDLocation(line: 305, column: 92, scope: !78)
!617 = !MDLocation(line: 307, column: 35, scope: !618)
!618 = distinct !MDLexicalBlock(scope: !78, file: !1, line: 307, column: 9)
!619 = !MDLocation(line: 307, column: 9, scope: !618)
!620 = !MDLocation(line: 307, column: 41, scope: !618)
!621 = !MDLocation(line: 307, column: 46, scope: !618)
!622 = !MDLocation(line: 308, column: 36, scope: !618)
!623 = !MDLocation(line: 308, column: 9, scope: !618)
!624 = !MDLocation(line: 308, column: 42, scope: !618)
!625 = !MDLocation(line: 307, column: 9, scope: !78)
!626 = !MDLocation(line: 310, column: 9, scope: !627)
!627 = distinct !MDLexicalBlock(scope: !618, file: !1, line: 309, column: 5)
!628 = !MDLocation(line: 313, column: 31, scope: !629)
!629 = distinct !MDLexicalBlock(scope: !78, file: !1, line: 313, column: 9)
!630 = !MDLocation(line: 313, column: 36, scope: !629)
!631 = !MDLocation(line: 313, column: 40, scope: !629)
!632 = !MDLocation(line: 313, column: 45, scope: !629)
!633 = !MDLocation(line: 313, column: 9, scope: !629)
!634 = !MDLocation(line: 313, column: 49, scope: !629)
!635 = !MDLocation(line: 313, column: 54, scope: !629)
!636 = !MDLocation(line: 314, column: 31, scope: !629)
!637 = !MDLocation(line: 314, column: 36, scope: !629)
!638 = !MDLocation(line: 314, column: 40, scope: !629)
!639 = !MDLocation(line: 314, column: 45, scope: !629)
!640 = !MDLocation(line: 314, column: 9, scope: !629)
!641 = !MDLocation(line: 314, column: 49, scope: !629)
!642 = !MDLocation(line: 313, column: 9, scope: !78)
!643 = !MDLocation(line: 316, column: 9, scope: !644)
!644 = distinct !MDLexicalBlock(scope: !629, file: !1, line: 315, column: 5)
!645 = !MDLocation(line: 319, column: 5, scope: !78)
!646 = !MDLocation(line: 320, column: 1, scope: !78)
!647 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !81, file: !1, line: 325, type: !27)
!648 = !MDLocation(line: 325, column: 46, scope: !81)
!649 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 2, scope: !81, file: !1, line: 326, type: !84)
!650 = !MDLocation(line: 326, column: 38, scope: !81)
!651 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 3, scope: !81, file: !1, line: 327, type: !70)
!652 = !MDLocation(line: 327, column: 32, scope: !81)
!653 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !81, file: !1, line: 329, type: !33)
!654 = !MDLocation(line: 329, column: 9, scope: !81)
!655 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "olen", scope: !81, file: !1, line: 330, type: !20)
!656 = !MDLocation(line: 330, column: 12, scope: !81)
!657 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "T", scope: !81, file: !1, line: 331, type: !36)
!658 = !MDLocation(line: 331, column: 17, scope: !81)
!659 = !MDLocation(line: 333, column: 5, scope: !81)
!660 = !MDLocation(line: 340, column: 5, scope: !81)
!661 = !MDLocation(line: 340, column: 5, scope: !662)
!662 = distinct !MDLexicalBlock(scope: !663, file: !1, line: 340, column: 5)
!663 = distinct !MDLexicalBlock(scope: !81, file: !1, line: 340, column: 5)
!664 = !MDLocation(line: 340, column: 5, scope: !663)
!665 = !MDLocation(line: 342, column: 35, scope: !666)
!666 = distinct !MDLexicalBlock(scope: !81, file: !1, line: 342, column: 9)
!667 = !MDLocation(line: 342, column: 40, scope: !666)
!668 = !MDLocation(line: 342, column: 9, scope: !666)
!669 = !MDLocation(line: 342, column: 44, scope: !666)
!670 = !MDLocation(line: 342, column: 9, scope: !81)
!671 = !MDLocation(line: 344, column: 13, scope: !672)
!672 = distinct !MDLexicalBlock(scope: !666, file: !1, line: 343, column: 5)
!673 = !MDLocation(line: 345, column: 9, scope: !672)
!674 = !MDLocation(line: 348, column: 12, scope: !81)
!675 = !MDLocation(line: 348, column: 17, scope: !81)
!676 = !MDLocation(line: 348, column: 10, scope: !81)
!677 = !MDLocation(line: 349, column: 5, scope: !81)
!678 = !MDLocation(line: 349, column: 5, scope: !679)
!679 = distinct !MDLexicalBlock(scope: !680, file: !1, line: 349, column: 5)
!680 = distinct !MDLexicalBlock(scope: !81, file: !1, line: 349, column: 5)
!681 = !MDLocation(line: 349, column: 5, scope: !680)
!682 = !MDLocation(line: 350, column: 5, scope: !81)
!683 = !MDLocation(line: 350, column: 5, scope: !684)
!684 = distinct !MDLexicalBlock(scope: !685, file: !1, line: 350, column: 5)
!685 = distinct !MDLexicalBlock(scope: !81, file: !1, line: 350, column: 5)
!686 = !MDLocation(line: 350, column: 5, scope: !685)
!687 = !MDLocation(line: 358, column: 5, scope: !81)
!688 = !MDLocation(line: 360, column: 9, scope: !689)
!689 = distinct !MDLexicalBlock(scope: !81, file: !1, line: 360, column: 9)
!690 = !MDLocation(line: 360, column: 13, scope: !689)
!691 = !MDLocation(line: 360, column: 9, scope: !81)
!692 = !MDLocation(line: 361, column: 49, scope: !689)
!693 = !MDLocation(line: 361, column: 47, scope: !689)
!694 = !MDLocation(line: 361, column: 9, scope: !689)
!695 = !MDLocation(line: 363, column: 5, scope: !81)
!696 = !MDLocation(line: 364, column: 1, scope: !81)
!697 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !86, file: !1, line: 409, type: !27)
!698 = !MDLocation(line: 409, column: 47, scope: !86)
!699 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !86, file: !1, line: 410, type: !67)
!700 = !MDLocation(line: 410, column: 24, scope: !86)
!701 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !86, file: !1, line: 411, type: !17)
!702 = !MDLocation(line: 411, column: 24, scope: !86)
!703 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 4, scope: !86, file: !1, line: 412, type: !84)
!704 = !MDLocation(line: 412, column: 39, scope: !86)
!705 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 5, scope: !86, file: !1, line: 413, type: !70)
!706 = !MDLocation(line: 413, column: 33, scope: !86)
!707 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !86, file: !1, line: 415, type: !33)
!708 = !MDLocation(line: 415, column: 9, scope: !86)
!709 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "olen", scope: !86, file: !1, line: 416, type: !20)
!710 = !MDLocation(line: 416, column: 12, scope: !86)
!711 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "T", scope: !86, file: !1, line: 417, type: !36)
!712 = !MDLocation(line: 417, column: 17, scope: !86)
!713 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "T1", scope: !86, file: !1, line: 417, type: !36)
!714 = !MDLocation(line: 417, column: 20, scope: !86)
!715 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "T2", scope: !86, file: !1, line: 417, type: !36)
!716 = !MDLocation(line: 417, column: 24, scope: !86)
!717 = !MDLocation(line: 419, column: 5, scope: !86)
!718 = !MDLocation(line: 419, column: 29, scope: !86)
!719 = !MDLocation(line: 419, column: 54, scope: !86)
!720 = !MDLocation(line: 426, column: 5, scope: !86)
!721 = !MDLocation(line: 426, column: 5, scope: !722)
!722 = distinct !MDLexicalBlock(scope: !723, file: !1, line: 426, column: 5)
!723 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 426, column: 5)
!724 = !MDLocation(line: 426, column: 5, scope: !723)
!725 = !MDLocation(line: 427, column: 35, scope: !726)
!726 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 427, column: 9)
!727 = !MDLocation(line: 427, column: 40, scope: !726)
!728 = !MDLocation(line: 427, column: 9, scope: !726)
!729 = !MDLocation(line: 427, column: 44, scope: !726)
!730 = !MDLocation(line: 427, column: 9, scope: !86)
!731 = !MDLocation(line: 429, column: 13, scope: !732)
!732 = distinct !MDLexicalBlock(scope: !726, file: !1, line: 428, column: 5)
!733 = !MDLocation(line: 430, column: 9, scope: !732)
!734 = !MDLocation(line: 433, column: 9, scope: !735)
!735 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 433, column: 9)
!736 = !MDLocation(line: 433, column: 15, scope: !735)
!737 = !MDLocation(line: 433, column: 9, scope: !86)
!738 = !MDLocation(line: 439, column: 9, scope: !739)
!739 = distinct !MDLexicalBlock(scope: !735, file: !1, line: 434, column: 5)
!740 = !MDLocation(line: 439, column: 9, scope: !741)
!741 = distinct !MDLexicalBlock(scope: !742, file: !1, line: 439, column: 9)
!742 = distinct !MDLexicalBlock(scope: !739, file: !1, line: 439, column: 9)
!743 = !MDLocation(line: 439, column: 9, scope: !742)
!744 = !MDLocation(line: 440, column: 9, scope: !739)
!745 = !MDLocation(line: 440, column: 9, scope: !746)
!746 = distinct !MDLexicalBlock(scope: !747, file: !1, line: 440, column: 9)
!747 = distinct !MDLexicalBlock(scope: !739, file: !1, line: 440, column: 9)
!748 = !MDLocation(line: 440, column: 9, scope: !747)
!749 = !MDLocation(line: 441, column: 9, scope: !739)
!750 = !MDLocation(line: 441, column: 9, scope: !751)
!751 = distinct !MDLexicalBlock(scope: !752, file: !1, line: 441, column: 9)
!752 = distinct !MDLexicalBlock(scope: !739, file: !1, line: 441, column: 9)
!753 = !MDLocation(line: 441, column: 9, scope: !752)
!754 = !MDLocation(line: 442, column: 5, scope: !739)
!755 = !MDLocation(line: 453, column: 5, scope: !86)
!756 = !MDLocation(line: 453, column: 5, scope: !757)
!757 = distinct !MDLexicalBlock(scope: !758, file: !1, line: 453, column: 5)
!758 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 453, column: 5)
!759 = !MDLocation(line: 453, column: 5, scope: !758)
!760 = !MDLocation(line: 454, column: 5, scope: !86)
!761 = !MDLocation(line: 454, column: 5, scope: !762)
!762 = distinct !MDLexicalBlock(scope: !763, file: !1, line: 454, column: 5)
!763 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 454, column: 5)
!764 = !MDLocation(line: 454, column: 5, scope: !763)
!765 = !MDLocation(line: 459, column: 5, scope: !86)
!766 = !MDLocation(line: 459, column: 5, scope: !767)
!767 = distinct !MDLexicalBlock(scope: !768, file: !1, line: 459, column: 5)
!768 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 459, column: 5)
!769 = !MDLocation(line: 459, column: 5, scope: !768)
!770 = !MDLocation(line: 460, column: 5, scope: !86)
!771 = !MDLocation(line: 460, column: 5, scope: !772)
!772 = distinct !MDLexicalBlock(scope: !773, file: !1, line: 460, column: 5)
!773 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 460, column: 5)
!774 = !MDLocation(line: 460, column: 5, scope: !773)
!775 = !MDLocation(line: 461, column: 5, scope: !86)
!776 = !MDLocation(line: 461, column: 5, scope: !777)
!777 = distinct !MDLexicalBlock(scope: !778, file: !1, line: 461, column: 5)
!778 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 461, column: 5)
!779 = !MDLocation(line: 461, column: 5, scope: !778)
!780 = !MDLocation(line: 466, column: 5, scope: !86)
!781 = !MDLocation(line: 466, column: 5, scope: !782)
!782 = distinct !MDLexicalBlock(scope: !783, file: !1, line: 466, column: 5)
!783 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 466, column: 5)
!784 = !MDLocation(line: 466, column: 5, scope: !783)
!785 = !MDLocation(line: 467, column: 5, scope: !86)
!786 = !MDLocation(line: 467, column: 5, scope: !787)
!787 = distinct !MDLexicalBlock(scope: !788, file: !1, line: 467, column: 5)
!788 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 467, column: 5)
!789 = !MDLocation(line: 467, column: 5, scope: !788)
!790 = !MDLocation(line: 470, column: 9, scope: !791)
!791 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 470, column: 9)
!792 = !MDLocation(line: 470, column: 15, scope: !791)
!793 = !MDLocation(line: 470, column: 9, scope: !86)
!794 = !MDLocation(line: 476, column: 9, scope: !795)
!795 = distinct !MDLexicalBlock(scope: !791, file: !1, line: 471, column: 5)
!796 = !MDLocation(line: 476, column: 9, scope: !797)
!797 = distinct !MDLexicalBlock(scope: !798, file: !1, line: 476, column: 9)
!798 = distinct !MDLexicalBlock(scope: !795, file: !1, line: 476, column: 9)
!799 = !MDLocation(line: 476, column: 9, scope: !798)
!800 = !MDLocation(line: 477, column: 9, scope: !795)
!801 = !MDLocation(line: 477, column: 9, scope: !802)
!802 = distinct !MDLexicalBlock(scope: !803, file: !1, line: 477, column: 9)
!803 = distinct !MDLexicalBlock(scope: !795, file: !1, line: 477, column: 9)
!804 = !MDLocation(line: 477, column: 9, scope: !803)
!805 = !MDLocation(line: 478, column: 5, scope: !795)
!806 = !MDLocation(line: 480, column: 12, scope: !86)
!807 = !MDLocation(line: 480, column: 17, scope: !86)
!808 = !MDLocation(line: 480, column: 10, scope: !86)
!809 = !MDLocation(line: 481, column: 5, scope: !86)
!810 = !MDLocation(line: 481, column: 5, scope: !811)
!811 = distinct !MDLexicalBlock(scope: !812, file: !1, line: 481, column: 5)
!812 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 481, column: 5)
!813 = !MDLocation(line: 481, column: 5, scope: !812)
!814 = !MDLocation(line: 489, column: 5, scope: !86)
!815 = !MDLocation(line: 489, column: 29, scope: !86)
!816 = !MDLocation(line: 489, column: 54, scope: !86)
!817 = !MDLocation(line: 491, column: 9, scope: !818)
!818 = distinct !MDLexicalBlock(scope: !86, file: !1, line: 491, column: 9)
!819 = !MDLocation(line: 491, column: 13, scope: !818)
!820 = !MDLocation(line: 491, column: 9, scope: !86)
!821 = !MDLocation(line: 492, column: 50, scope: !818)
!822 = !MDLocation(line: 492, column: 48, scope: !818)
!823 = !MDLocation(line: 492, column: 9, scope: !818)
!824 = !MDLocation(line: 494, column: 5, scope: !86)
!825 = !MDLocation(line: 495, column: 1, scope: !86)
!826 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !126, file: !1, line: 372, type: !27)
!827 = !MDLocation(line: 372, column: 55, scope: !126)
!828 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !126, file: !1, line: 373, type: !67)
!829 = !MDLocation(line: 373, column: 24, scope: !126)
!830 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !126, file: !1, line: 373, type: !17)
!831 = !MDLocation(line: 373, column: 71, scope: !126)
!832 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !126, file: !1, line: 375, type: !33)
!833 = !MDLocation(line: 375, column: 9, scope: !126)
!834 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "count", scope: !126, file: !1, line: 375, type: !33)
!835 = !MDLocation(line: 375, column: 14, scope: !126)
!836 = !MDLocation(line: 377, column: 9, scope: !837)
!837 = distinct !MDLexicalBlock(scope: !126, file: !1, line: 377, column: 9)
!838 = !MDLocation(line: 377, column: 14, scope: !837)
!839 = !MDLocation(line: 377, column: 17, scope: !837)
!840 = !MDLocation(line: 377, column: 19, scope: !837)
!841 = !MDLocation(line: 377, column: 9, scope: !126)
!842 = !MDLocation(line: 380, column: 9, scope: !843)
!843 = distinct !MDLexicalBlock(scope: !837, file: !1, line: 378, column: 5)
!844 = !MDLocation(line: 380, column: 9, scope: !845)
!845 = distinct !MDLexicalBlock(scope: !846, file: !1, line: 380, column: 9)
!846 = distinct !MDLexicalBlock(scope: !843, file: !1, line: 380, column: 9)
!847 = !MDLocation(line: 380, column: 9, scope: !846)
!848 = !MDLocation(line: 381, column: 9, scope: !843)
!849 = !MDLocation(line: 381, column: 9, scope: !850)
!850 = distinct !MDLexicalBlock(scope: !851, file: !1, line: 381, column: 9)
!851 = distinct !MDLexicalBlock(scope: !843, file: !1, line: 381, column: 9)
!852 = !MDLocation(line: 381, column: 9, scope: !851)
!853 = !MDLocation(line: 382, column: 9, scope: !843)
!854 = !MDLocation(line: 382, column: 9, scope: !855)
!855 = distinct !MDLexicalBlock(scope: !856, file: !1, line: 382, column: 9)
!856 = distinct !MDLexicalBlock(scope: !843, file: !1, line: 382, column: 9)
!857 = !MDLocation(line: 382, column: 9, scope: !856)
!858 = !MDLocation(line: 383, column: 9, scope: !843)
!859 = !MDLocation(line: 383, column: 9, scope: !860)
!860 = distinct !MDLexicalBlock(scope: !861, file: !1, line: 383, column: 9)
!861 = distinct !MDLexicalBlock(scope: !843, file: !1, line: 383, column: 9)
!862 = !MDLocation(line: 383, column: 9, scope: !861)
!863 = !MDLocation(line: 385, column: 9, scope: !843)
!864 = !MDLocation(line: 389, column: 5, scope: !126)
!865 = !MDLocation(line: 390, column: 18, scope: !866)
!866 = distinct !MDLexicalBlock(scope: !867, file: !1, line: 390, column: 13)
!867 = distinct !MDLexicalBlock(scope: !126, file: !1, line: 389, column: 8)
!868 = !MDLocation(line: 390, column: 21, scope: !866)
!869 = !MDLocation(line: 390, column: 13, scope: !867)
!870 = !MDLocation(line: 391, column: 13, scope: !866)
!871 = !MDLocation(line: 393, column: 9, scope: !867)
!872 = !MDLocation(line: 393, column: 9, scope: !873)
!873 = distinct !MDLexicalBlock(scope: !874, file: !1, line: 393, column: 9)
!874 = distinct !MDLexicalBlock(scope: !867, file: !1, line: 393, column: 9)
!875 = !MDLocation(line: 393, column: 9, scope: !874)
!876 = !MDLocation(line: 394, column: 9, scope: !867)
!877 = !MDLocation(line: 394, column: 9, scope: !878)
!878 = distinct !MDLexicalBlock(scope: !879, file: !1, line: 394, column: 9)
!879 = distinct !MDLexicalBlock(scope: !867, file: !1, line: 394, column: 9)
!880 = !MDLocation(line: 394, column: 9, scope: !879)
!881 = !MDLocation(line: 395, column: 5, scope: !867)
!882 = !MDLocation(line: 395, column: 36, scope: !126)
!883 = !MDLocation(line: 395, column: 41, scope: !126)
!884 = !MDLocation(line: 395, column: 14, scope: !126)
!885 = !MDLocation(line: 395, column: 49, scope: !126)
!886 = !MDLocation(line: 398, column: 5, scope: !126)
!887 = !MDLocation(line: 398, column: 5, scope: !888)
!888 = distinct !MDLexicalBlock(scope: !889, file: !1, line: 398, column: 5)
!889 = distinct !MDLexicalBlock(scope: !126, file: !1, line: 398, column: 5)
!890 = !MDLocation(line: 398, column: 5, scope: !889)
!891 = !MDLocation(line: 399, column: 5, scope: !126)
!892 = !MDLocation(line: 399, column: 5, scope: !893)
!893 = distinct !MDLexicalBlock(scope: !894, file: !1, line: 399, column: 5)
!894 = distinct !MDLexicalBlock(scope: !126, file: !1, line: 399, column: 5)
!895 = !MDLocation(line: 399, column: 5, scope: !894)
!896 = !MDLocation(line: 403, column: 13, scope: !126)
!897 = !MDLocation(line: 403, column: 5, scope: !126)
!898 = !MDLocation(line: 404, column: 1, scope: !126)
!899 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !89, file: !1, line: 550, type: !27)
!900 = !MDLocation(line: 550, column: 58, scope: !89)
!901 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !89, file: !1, line: 551, type: !67)
!902 = !MDLocation(line: 551, column: 35, scope: !89)
!903 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !89, file: !1, line: 552, type: !17)
!904 = !MDLocation(line: 552, column: 35, scope: !89)
!905 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !89, file: !1, line: 553, type: !33)
!906 = !MDLocation(line: 553, column: 33, scope: !89)
!907 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "label", arg: 5, scope: !89, file: !1, line: 554, type: !84)
!908 = !MDLocation(line: 554, column: 50, scope: !89)
!909 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "label_len", arg: 6, scope: !89, file: !1, line: 554, type: !20)
!910 = !MDLocation(line: 554, column: 64, scope: !89)
!911 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ilen", arg: 7, scope: !89, file: !1, line: 555, type: !20)
!912 = !MDLocation(line: 555, column: 36, scope: !89)
!913 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 8, scope: !89, file: !1, line: 556, type: !84)
!914 = !MDLocation(line: 556, column: 50, scope: !89)
!915 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 9, scope: !89, file: !1, line: 557, type: !70)
!916 = !MDLocation(line: 557, column: 44, scope: !89)
!917 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "olen", scope: !89, file: !1, line: 559, type: !20)
!918 = !MDLocation(line: 559, column: 12, scope: !89)
!919 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !89, file: !1, line: 560, type: !33)
!920 = !MDLocation(line: 560, column: 9, scope: !89)
!921 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !89, file: !1, line: 561, type: !70)
!922 = !MDLocation(line: 561, column: 20, scope: !89)
!923 = !MDLocation(line: 561, column: 24, scope: !89)
!924 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "hlen", scope: !89, file: !1, line: 562, type: !71)
!925 = !MDLocation(line: 562, column: 18, scope: !89)
!926 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_info", scope: !89, file: !1, line: 563, type: !137)
!927 = !MDLocation(line: 563, column: 30, scope: !89)
!928 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_ctx", scope: !89, file: !1, line: 564, type: !133)
!929 = !MDLocation(line: 564, column: 26, scope: !89)
!930 = !MDLocation(line: 566, column: 9, scope: !931)
!931 = distinct !MDLexicalBlock(scope: !89, file: !1, line: 566, column: 9)
!932 = !MDLocation(line: 566, column: 14, scope: !931)
!933 = !MDLocation(line: 566, column: 37, scope: !931)
!934 = !MDLocation(line: 566, column: 40, scope: !931)
!935 = !MDLocation(line: 566, column: 45, scope: !931)
!936 = !MDLocation(line: 566, column: 53, scope: !931)
!937 = !MDLocation(line: 566, column: 9, scope: !89)
!938 = !MDLocation(line: 567, column: 9, scope: !931)
!939 = !MDLocation(line: 569, column: 9, scope: !940)
!940 = distinct !MDLexicalBlock(scope: !89, file: !1, line: 569, column: 9)
!941 = !MDLocation(line: 569, column: 15, scope: !940)
!942 = !MDLocation(line: 569, column: 9, scope: !89)
!943 = !MDLocation(line: 570, column: 9, scope: !940)
!944 = !MDLocation(line: 572, column: 62, scope: !89)
!945 = !MDLocation(line: 572, column: 67, scope: !89)
!946 = !MDLocation(line: 572, column: 15, scope: !89)
!947 = !MDLocation(line: 572, column: 13, scope: !89)
!948 = !MDLocation(line: 573, column: 9, scope: !949)
!949 = distinct !MDLexicalBlock(scope: !89, file: !1, line: 573, column: 9)
!950 = !MDLocation(line: 573, column: 17, scope: !949)
!951 = !MDLocation(line: 573, column: 9, scope: !89)
!952 = !MDLocation(line: 574, column: 9, scope: !949)
!953 = !MDLocation(line: 576, column: 12, scope: !89)
!954 = !MDLocation(line: 576, column: 17, scope: !89)
!955 = !MDLocation(line: 576, column: 10, scope: !89)
!956 = !MDLocation(line: 577, column: 33, scope: !89)
!957 = !MDLocation(line: 577, column: 12, scope: !89)
!958 = !MDLocation(line: 577, column: 10, scope: !89)
!959 = !MDLocation(line: 579, column: 9, scope: !960)
!960 = distinct !MDLexicalBlock(scope: !89, file: !1, line: 579, column: 9)
!961 = !MDLocation(line: 579, column: 16, scope: !960)
!962 = !MDLocation(line: 579, column: 27, scope: !960)
!963 = !MDLocation(line: 579, column: 25, scope: !960)
!964 = !MDLocation(line: 579, column: 23, scope: !960)
!965 = !MDLocation(line: 579, column: 21, scope: !960)
!966 = !MDLocation(line: 579, column: 32, scope: !960)
!967 = !MDLocation(line: 579, column: 14, scope: !960)
!968 = !MDLocation(line: 579, column: 9, scope: !89)
!969 = !MDLocation(line: 580, column: 9, scope: !960)
!970 = !MDLocation(line: 582, column: 5, scope: !89)
!971 = !MDLocation(line: 584, column: 7, scope: !89)
!972 = !MDLocation(line: 584, column: 10, scope: !89)
!973 = !MDLocation(line: 588, column: 17, scope: !974)
!974 = distinct !MDLexicalBlock(scope: !89, file: !1, line: 588, column: 9)
!975 = !MDLocation(line: 588, column: 24, scope: !974)
!976 = !MDLocation(line: 588, column: 31, scope: !974)
!977 = !MDLocation(line: 588, column: 34, scope: !974)
!978 = !MDLocation(line: 588, column: 15, scope: !974)
!979 = !MDLocation(line: 588, column: 43, scope: !974)
!980 = !MDLocation(line: 588, column: 9, scope: !89)
!981 = !MDLocation(line: 589, column: 46, scope: !974)
!982 = !MDLocation(line: 589, column: 44, scope: !974)
!983 = !MDLocation(line: 589, column: 9, scope: !974)
!984 = !MDLocation(line: 591, column: 10, scope: !89)
!985 = !MDLocation(line: 591, column: 7, scope: !89)
!986 = !MDLocation(line: 595, column: 17, scope: !89)
!987 = !MDLocation(line: 595, column: 26, scope: !89)
!988 = !MDLocation(line: 595, column: 33, scope: !89)
!989 = !MDLocation(line: 595, column: 44, scope: !89)
!990 = !MDLocation(line: 595, column: 5, scope: !89)
!991 = !MDLocation(line: 596, column: 10, scope: !89)
!992 = !MDLocation(line: 596, column: 7, scope: !89)
!993 = !MDLocation(line: 597, column: 10, scope: !89)
!994 = !MDLocation(line: 597, column: 21, scope: !89)
!995 = !MDLocation(line: 597, column: 19, scope: !89)
!996 = !MDLocation(line: 597, column: 17, scope: !89)
!997 = !MDLocation(line: 597, column: 15, scope: !89)
!998 = !MDLocation(line: 597, column: 26, scope: !89)
!999 = !MDLocation(line: 597, column: 32, scope: !89)
!1000 = !MDLocation(line: 597, column: 30, scope: !89)
!1001 = !MDLocation(line: 597, column: 7, scope: !89)
!1002 = !MDLocation(line: 598, column: 7, scope: !89)
!1003 = !MDLocation(line: 598, column: 10, scope: !89)
!1004 = !MDLocation(line: 599, column: 5, scope: !89)
!1005 = !MDLocation(line: 601, column: 5, scope: !89)
!1006 = !MDLocation(line: 602, column: 32, scope: !89)
!1007 = !MDLocation(line: 602, column: 5, scope: !89)
!1008 = !MDLocation(line: 606, column: 15, scope: !89)
!1009 = !MDLocation(line: 606, column: 24, scope: !89)
!1010 = !MDLocation(line: 606, column: 22, scope: !89)
!1011 = !MDLocation(line: 606, column: 29, scope: !89)
!1012 = !MDLocation(line: 606, column: 34, scope: !89)
!1013 = !MDLocation(line: 606, column: 41, scope: !89)
!1014 = !MDLocation(line: 606, column: 39, scope: !89)
!1015 = !MDLocation(line: 606, column: 46, scope: !89)
!1016 = !MDLocation(line: 606, column: 51, scope: !89)
!1017 = !MDLocation(line: 606, column: 58, scope: !89)
!1018 = !MDLocation(line: 606, column: 63, scope: !89)
!1019 = !MDLocation(line: 606, column: 5, scope: !89)
!1020 = !MDLocation(line: 611, column: 15, scope: !89)
!1021 = !MDLocation(line: 611, column: 22, scope: !89)
!1022 = !MDLocation(line: 611, column: 27, scope: !89)
!1023 = !MDLocation(line: 611, column: 33, scope: !89)
!1024 = !MDLocation(line: 611, column: 42, scope: !89)
!1025 = !MDLocation(line: 611, column: 40, scope: !89)
!1026 = !MDLocation(line: 611, column: 47, scope: !89)
!1027 = !MDLocation(line: 611, column: 52, scope: !89)
!1028 = !MDLocation(line: 611, column: 59, scope: !89)
!1029 = !MDLocation(line: 611, column: 57, scope: !89)
!1030 = !MDLocation(line: 611, column: 64, scope: !89)
!1031 = !MDLocation(line: 611, column: 5, scope: !89)
!1032 = !MDLocation(line: 614, column: 5, scope: !89)
!1033 = !MDLocation(line: 616, column: 15, scope: !89)
!1034 = !MDLocation(line: 616, column: 20, scope: !89)
!1035 = !MDLocation(line: 616, column: 13, scope: !89)
!1036 = !MDLocation(line: 617, column: 36, scope: !89)
!1037 = !MDLocation(line: 617, column: 41, scope: !89)
!1038 = !MDLocation(line: 617, column: 49, scope: !89)
!1039 = !MDLocation(line: 617, column: 15, scope: !89)
!1040 = !MDLocation(line: 618, column: 36, scope: !89)
!1041 = !MDLocation(line: 618, column: 41, scope: !89)
!1042 = !MDLocation(line: 618, column: 48, scope: !89)
!1043 = !MDLocation(line: 618, column: 55, scope: !89)
!1044 = !MDLocation(line: 618, column: 63, scope: !89)
!1045 = !MDLocation(line: 618, column: 15, scope: !89)
!1046 = !MDLocation(line: 616, column: 5, scope: !89)
!1047 = !MDLocation(line: 619, column: 1, scope: !89)
!1048 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "dst", arg: 1, scope: !129, file: !1, line: 507, type: !70)
!1049 = !MDLocation(line: 507, column: 38, scope: !129)
!1050 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "dlen", arg: 2, scope: !129, file: !1, line: 507, type: !20)
!1051 = !MDLocation(line: 507, column: 50, scope: !129)
!1052 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "src", arg: 3, scope: !129, file: !1, line: 507, type: !70)
!1053 = !MDLocation(line: 507, column: 71, scope: !129)
!1054 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "slen", arg: 4, scope: !129, file: !1, line: 508, type: !20)
!1055 = !MDLocation(line: 508, column: 30, scope: !129)
!1056 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_ctx", arg: 5, scope: !129, file: !1, line: 508, type: !132)
!1057 = !MDLocation(line: 508, column: 58, scope: !129)
!1058 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mask", scope: !129, file: !1, line: 510, type: !1059)
!1059 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 512, align: 8, elements: !1060)
!1060 = !{!1061}
!1061 = !MDSubrange(count: 64)
!1062 = !MDLocation(line: 510, column: 19, scope: !129)
!1063 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "counter", scope: !129, file: !1, line: 511, type: !1064)
!1064 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 32, align: 8, elements: !1065)
!1065 = !{!1066}
!1066 = !MDSubrange(count: 4)
!1067 = !MDLocation(line: 511, column: 19, scope: !129)
!1068 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !129, file: !1, line: 512, type: !70)
!1069 = !MDLocation(line: 512, column: 20, scope: !129)
!1070 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "hlen", scope: !129, file: !1, line: 513, type: !71)
!1071 = !MDLocation(line: 513, column: 18, scope: !129)
!1072 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !129, file: !1, line: 514, type: !20)
!1073 = !MDLocation(line: 514, column: 12, scope: !129)
!1074 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "use_len", scope: !129, file: !1, line: 514, type: !20)
!1075 = !MDLocation(line: 514, column: 15, scope: !129)
!1076 = !MDLocation(line: 516, column: 5, scope: !129)
!1077 = !MDLocation(line: 517, column: 5, scope: !129)
!1078 = !MDLocation(line: 519, column: 33, scope: !129)
!1079 = !MDLocation(line: 519, column: 41, scope: !129)
!1080 = !MDLocation(line: 519, column: 12, scope: !129)
!1081 = !MDLocation(line: 519, column: 10, scope: !129)
!1082 = !MDLocation(line: 523, column: 9, scope: !129)
!1083 = !MDLocation(line: 523, column: 7, scope: !129)
!1084 = !MDLocation(line: 525, column: 5, scope: !129)
!1085 = !MDLocation(line: 525, column: 12, scope: !129)
!1086 = !MDLocation(line: 525, column: 17, scope: !129)
!1087 = !MDLocation(line: 527, column: 19, scope: !1088)
!1088 = distinct !MDLexicalBlock(scope: !129, file: !1, line: 526, column: 5)
!1089 = !MDLocation(line: 527, column: 17, scope: !1088)
!1090 = !MDLocation(line: 528, column: 13, scope: !1091)
!1091 = distinct !MDLexicalBlock(scope: !1088, file: !1, line: 528, column: 13)
!1092 = !MDLocation(line: 528, column: 20, scope: !1091)
!1093 = !MDLocation(line: 528, column: 18, scope: !1091)
!1094 = !MDLocation(line: 528, column: 13, scope: !1088)
!1095 = !MDLocation(line: 529, column: 23, scope: !1091)
!1096 = !MDLocation(line: 529, column: 21, scope: !1091)
!1097 = !MDLocation(line: 529, column: 13, scope: !1091)
!1098 = !MDLocation(line: 531, column: 28, scope: !1088)
!1099 = !MDLocation(line: 531, column: 9, scope: !1088)
!1100 = !MDLocation(line: 532, column: 28, scope: !1088)
!1101 = !MDLocation(line: 532, column: 36, scope: !1088)
!1102 = !MDLocation(line: 532, column: 41, scope: !1088)
!1103 = !MDLocation(line: 532, column: 9, scope: !1088)
!1104 = !MDLocation(line: 533, column: 28, scope: !1088)
!1105 = !MDLocation(line: 533, column: 36, scope: !1088)
!1106 = !MDLocation(line: 533, column: 9, scope: !1088)
!1107 = !MDLocation(line: 534, column: 28, scope: !1088)
!1108 = !MDLocation(line: 534, column: 36, scope: !1088)
!1109 = !MDLocation(line: 534, column: 9, scope: !1088)
!1110 = !MDLocation(line: 536, column: 16, scope: !1111)
!1111 = distinct !MDLexicalBlock(scope: !1088, file: !1, line: 536, column: 9)
!1112 = !MDLocation(line: 536, column: 14, scope: !1111)
!1113 = !MDLocation(line: 536, column: 21, scope: !1114)
!1114 = distinct !MDLexicalBlock(scope: !1111, file: !1, line: 536, column: 9)
!1115 = !MDLocation(line: 536, column: 25, scope: !1114)
!1116 = !MDLocation(line: 536, column: 23, scope: !1114)
!1117 = !MDLocation(line: 536, column: 9, scope: !1111)
!1118 = !MDLocation(line: 537, column: 26, scope: !1114)
!1119 = !MDLocation(line: 537, column: 21, scope: !1114)
!1120 = !MDLocation(line: 537, column: 15, scope: !1114)
!1121 = !MDLocation(line: 537, column: 18, scope: !1114)
!1122 = !MDLocation(line: 537, column: 13, scope: !1114)
!1123 = !MDLocation(line: 536, column: 34, scope: !1114)
!1124 = !MDLocation(line: 536, column: 9, scope: !1114)
!1125 = !MDLocation(line: 539, column: 9, scope: !1088)
!1126 = !MDLocation(line: 539, column: 19, scope: !1088)
!1127 = !MDLocation(line: 541, column: 17, scope: !1088)
!1128 = !MDLocation(line: 541, column: 14, scope: !1088)
!1129 = !MDLocation(line: 543, column: 1, scope: !129)
!1130 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !92, file: !1, line: 626, type: !27)
!1131 = !MDLocation(line: 626, column: 63, scope: !92)
!1132 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !92, file: !1, line: 627, type: !67)
!1133 = !MDLocation(line: 627, column: 40, scope: !92)
!1134 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !92, file: !1, line: 628, type: !17)
!1135 = !MDLocation(line: 628, column: 40, scope: !92)
!1136 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !92, file: !1, line: 629, type: !33)
!1137 = !MDLocation(line: 629, column: 38, scope: !92)
!1138 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ilen", arg: 5, scope: !92, file: !1, line: 629, type: !20)
!1139 = !MDLocation(line: 629, column: 51, scope: !92)
!1140 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 6, scope: !92, file: !1, line: 630, type: !84)
!1141 = !MDLocation(line: 630, column: 55, scope: !92)
!1142 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 7, scope: !92, file: !1, line: 631, type: !70)
!1143 = !MDLocation(line: 631, column: 49, scope: !92)
!1144 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "nb_pad", scope: !92, file: !1, line: 633, type: !20)
!1145 = !MDLocation(line: 633, column: 12, scope: !92)
!1146 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "olen", scope: !92, file: !1, line: 633, type: !20)
!1147 = !MDLocation(line: 633, column: 20, scope: !92)
!1148 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !92, file: !1, line: 634, type: !33)
!1149 = !MDLocation(line: 634, column: 9, scope: !92)
!1150 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !92, file: !1, line: 635, type: !70)
!1151 = !MDLocation(line: 635, column: 20, scope: !92)
!1152 = !MDLocation(line: 635, column: 24, scope: !92)
!1153 = !MDLocation(line: 637, column: 9, scope: !1154)
!1154 = distinct !MDLexicalBlock(scope: !92, file: !1, line: 637, column: 9)
!1155 = !MDLocation(line: 637, column: 14, scope: !1154)
!1156 = !MDLocation(line: 637, column: 37, scope: !1154)
!1157 = !MDLocation(line: 637, column: 40, scope: !1154)
!1158 = !MDLocation(line: 637, column: 45, scope: !1154)
!1159 = !MDLocation(line: 637, column: 53, scope: !1154)
!1160 = !MDLocation(line: 637, column: 9, scope: !92)
!1161 = !MDLocation(line: 638, column: 9, scope: !1154)
!1162 = !MDLocation(line: 640, column: 9, scope: !1163)
!1163 = distinct !MDLexicalBlock(scope: !92, file: !1, line: 640, column: 9)
!1164 = !MDLocation(line: 640, column: 15, scope: !1163)
!1165 = !MDLocation(line: 640, column: 9, scope: !92)
!1166 = !MDLocation(line: 641, column: 9, scope: !1163)
!1167 = !MDLocation(line: 643, column: 12, scope: !92)
!1168 = !MDLocation(line: 643, column: 17, scope: !92)
!1169 = !MDLocation(line: 643, column: 10, scope: !92)
!1170 = !MDLocation(line: 645, column: 9, scope: !1171)
!1171 = distinct !MDLexicalBlock(scope: !92, file: !1, line: 645, column: 9)
!1172 = !MDLocation(line: 645, column: 16, scope: !1171)
!1173 = !MDLocation(line: 645, column: 21, scope: !1171)
!1174 = !MDLocation(line: 645, column: 14, scope: !1171)
!1175 = !MDLocation(line: 645, column: 9, scope: !92)
!1176 = !MDLocation(line: 646, column: 9, scope: !1171)
!1177 = !MDLocation(line: 648, column: 14, scope: !92)
!1178 = !MDLocation(line: 648, column: 19, scope: !92)
!1179 = !MDLocation(line: 648, column: 25, scope: !92)
!1180 = !MDLocation(line: 648, column: 23, scope: !92)
!1181 = !MDLocation(line: 648, column: 12, scope: !92)
!1182 = !MDLocation(line: 650, column: 7, scope: !92)
!1183 = !MDLocation(line: 650, column: 10, scope: !92)
!1184 = !MDLocation(line: 651, column: 9, scope: !1185)
!1185 = distinct !MDLexicalBlock(scope: !92, file: !1, line: 651, column: 9)
!1186 = !MDLocation(line: 651, column: 14, scope: !1185)
!1187 = !MDLocation(line: 651, column: 9, scope: !92)
!1188 = !MDLocation(line: 653, column: 11, scope: !1189)
!1189 = distinct !MDLexicalBlock(scope: !1185, file: !1, line: 652, column: 5)
!1190 = !MDLocation(line: 653, column: 14, scope: !1189)
!1191 = !MDLocation(line: 655, column: 9, scope: !1189)
!1192 = !MDLocation(line: 655, column: 22, scope: !1189)
!1193 = !MDLocation(line: 655, column: 25, scope: !1189)
!1194 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rng_dl", scope: !1195, file: !1, line: 657, type: !33)
!1195 = distinct !MDLexicalBlock(scope: !1189, file: !1, line: 656, column: 9)
!1196 = !MDLocation(line: 657, column: 17, scope: !1195)
!1197 = !MDLocation(line: 659, column: 13, scope: !1195)
!1198 = !MDLocation(line: 660, column: 23, scope: !1199)
!1199 = distinct !MDLexicalBlock(scope: !1195, file: !1, line: 659, column: 16)
!1200 = !MDLocation(line: 660, column: 30, scope: !1199)
!1201 = !MDLocation(line: 660, column: 37, scope: !1199)
!1202 = !MDLocation(line: 660, column: 21, scope: !1199)
!1203 = !MDLocation(line: 661, column: 13, scope: !1199)
!1204 = !MDLocation(line: 661, column: 23, scope: !1195)
!1205 = !MDLocation(line: 661, column: 22, scope: !1195)
!1206 = !MDLocation(line: 661, column: 25, scope: !1195)
!1207 = !MDLocation(line: 661, column: 30, scope: !1195)
!1208 = !MDLocation(line: 661, column: 33, scope: !1195)
!1209 = !MDLocation(line: 661, column: 42, scope: !1195)
!1210 = !MDLocation(line: 661, column: 45, scope: !1195)
!1211 = !MDLocation(line: 661, column: 49, scope: !1195)
!1212 = !MDLocation(line: 665, column: 17, scope: !1213)
!1213 = distinct !MDLexicalBlock(scope: !1195, file: !1, line: 665, column: 17)
!1214 = !MDLocation(line: 665, column: 24, scope: !1213)
!1215 = !MDLocation(line: 665, column: 29, scope: !1213)
!1216 = !MDLocation(line: 665, column: 32, scope: !1213)
!1217 = !MDLocation(line: 665, column: 36, scope: !1213)
!1218 = !MDLocation(line: 665, column: 17, scope: !1195)
!1219 = !MDLocation(line: 666, column: 54, scope: !1213)
!1220 = !MDLocation(line: 666, column: 52, scope: !1213)
!1221 = !MDLocation(line: 666, column: 17, scope: !1213)
!1222 = !MDLocation(line: 668, column: 14, scope: !1195)
!1223 = !MDLocation(line: 670, column: 5, scope: !1189)
!1224 = !MDLocation(line: 673, column: 11, scope: !1225)
!1225 = distinct !MDLexicalBlock(scope: !1185, file: !1, line: 672, column: 5)
!1226 = !MDLocation(line: 673, column: 14, scope: !1225)
!1227 = !MDLocation(line: 675, column: 9, scope: !1225)
!1228 = !MDLocation(line: 675, column: 22, scope: !1225)
!1229 = !MDLocation(line: 675, column: 25, scope: !1225)
!1230 = !MDLocation(line: 676, column: 15, scope: !1225)
!1231 = !MDLocation(line: 676, column: 18, scope: !1225)
!1232 = !MDLocation(line: 679, column: 7, scope: !92)
!1233 = !MDLocation(line: 679, column: 10, scope: !92)
!1234 = !MDLocation(line: 680, column: 5, scope: !92)
!1235 = !MDLocation(line: 682, column: 15, scope: !92)
!1236 = !MDLocation(line: 682, column: 20, scope: !92)
!1237 = !MDLocation(line: 682, column: 13, scope: !92)
!1238 = !MDLocation(line: 683, column: 36, scope: !92)
!1239 = !MDLocation(line: 683, column: 41, scope: !92)
!1240 = !MDLocation(line: 683, column: 49, scope: !92)
!1241 = !MDLocation(line: 683, column: 15, scope: !92)
!1242 = !MDLocation(line: 684, column: 36, scope: !92)
!1243 = !MDLocation(line: 684, column: 41, scope: !92)
!1244 = !MDLocation(line: 684, column: 48, scope: !92)
!1245 = !MDLocation(line: 684, column: 55, scope: !92)
!1246 = !MDLocation(line: 684, column: 63, scope: !92)
!1247 = !MDLocation(line: 684, column: 15, scope: !92)
!1248 = !MDLocation(line: 682, column: 5, scope: !92)
!1249 = !MDLocation(line: 685, column: 1, scope: !92)
!1250 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !95, file: !1, line: 691, type: !27)
!1251 = !MDLocation(line: 691, column: 53, scope: !95)
!1252 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !95, file: !1, line: 692, type: !67)
!1253 = !MDLocation(line: 692, column: 30, scope: !95)
!1254 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !95, file: !1, line: 693, type: !17)
!1255 = !MDLocation(line: 693, column: 30, scope: !95)
!1256 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !95, file: !1, line: 694, type: !33)
!1257 = !MDLocation(line: 694, column: 28, scope: !95)
!1258 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ilen", arg: 5, scope: !95, file: !1, line: 694, type: !20)
!1259 = !MDLocation(line: 694, column: 41, scope: !95)
!1260 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 6, scope: !95, file: !1, line: 695, type: !84)
!1261 = !MDLocation(line: 695, column: 45, scope: !95)
!1262 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 7, scope: !95, file: !1, line: 696, type: !70)
!1263 = !MDLocation(line: 696, column: 39, scope: !95)
!1264 = !MDLocation(line: 698, column: 13, scope: !95)
!1265 = !MDLocation(line: 698, column: 18, scope: !95)
!1266 = !MDLocation(line: 698, column: 5, scope: !95)
!1267 = !MDLocation(line: 702, column: 57, scope: !1268)
!1268 = distinct !MDLexicalBlock(scope: !95, file: !1, line: 699, column: 5)
!1269 = !MDLocation(line: 702, column: 62, scope: !1268)
!1270 = !MDLocation(line: 702, column: 69, scope: !1268)
!1271 = !MDLocation(line: 702, column: 76, scope: !1268)
!1272 = !MDLocation(line: 702, column: 82, scope: !1268)
!1273 = !MDLocation(line: 703, column: 49, scope: !1268)
!1274 = !MDLocation(line: 703, column: 56, scope: !1268)
!1275 = !MDLocation(line: 702, column: 20, scope: !1268)
!1276 = !MDLocation(line: 702, column: 13, scope: !1268)
!1277 = !MDLocation(line: 708, column: 52, scope: !1268)
!1278 = !MDLocation(line: 708, column: 57, scope: !1268)
!1279 = !MDLocation(line: 708, column: 64, scope: !1268)
!1280 = !MDLocation(line: 708, column: 71, scope: !1268)
!1281 = !MDLocation(line: 709, column: 44, scope: !1268)
!1282 = !MDLocation(line: 709, column: 50, scope: !1268)
!1283 = !MDLocation(line: 709, column: 57, scope: !1268)
!1284 = !MDLocation(line: 708, column: 20, scope: !1268)
!1285 = !MDLocation(line: 708, column: 13, scope: !1268)
!1286 = !MDLocation(line: 713, column: 13, scope: !1268)
!1287 = !MDLocation(line: 715, column: 1, scope: !95)
!1288 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !96, file: !1, line: 721, type: !27)
!1289 = !MDLocation(line: 721, column: 58, scope: !96)
!1290 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !96, file: !1, line: 722, type: !67)
!1291 = !MDLocation(line: 722, column: 35, scope: !96)
!1292 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !96, file: !1, line: 723, type: !17)
!1293 = !MDLocation(line: 723, column: 35, scope: !96)
!1294 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !96, file: !1, line: 724, type: !33)
!1295 = !MDLocation(line: 724, column: 33, scope: !96)
!1296 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "label", arg: 5, scope: !96, file: !1, line: 725, type: !84)
!1297 = !MDLocation(line: 725, column: 50, scope: !96)
!1298 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "label_len", arg: 6, scope: !96, file: !1, line: 725, type: !20)
!1299 = !MDLocation(line: 725, column: 64, scope: !96)
!1300 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "olen", arg: 7, scope: !96, file: !1, line: 726, type: !99)
!1301 = !MDLocation(line: 726, column: 37, scope: !96)
!1302 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 8, scope: !96, file: !1, line: 727, type: !84)
!1303 = !MDLocation(line: 727, column: 50, scope: !96)
!1304 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 9, scope: !96, file: !1, line: 728, type: !70)
!1305 = !MDLocation(line: 728, column: 44, scope: !96)
!1306 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output_max_len", arg: 10, scope: !96, file: !1, line: 729, type: !20)
!1307 = !MDLocation(line: 729, column: 36, scope: !96)
!1308 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !96, file: !1, line: 731, type: !33)
!1309 = !MDLocation(line: 731, column: 9, scope: !96)
!1310 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ilen", scope: !96, file: !1, line: 732, type: !20)
!1311 = !MDLocation(line: 732, column: 12, scope: !96)
!1312 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !96, file: !1, line: 732, type: !20)
!1313 = !MDLocation(line: 732, column: 18, scope: !96)
!1314 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "pad_len", scope: !96, file: !1, line: 732, type: !20)
!1315 = !MDLocation(line: 732, column: 21, scope: !96)
!1316 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !96, file: !1, line: 733, type: !70)
!1317 = !MDLocation(line: 733, column: 20, scope: !96)
!1318 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bad", scope: !96, file: !1, line: 733, type: !19)
!1319 = !MDLocation(line: 733, column: 23, scope: !96)
!1320 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "pad_done", scope: !96, file: !1, line: 733, type: !19)
!1321 = !MDLocation(line: 733, column: 28, scope: !96)
!1322 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "buf", scope: !96, file: !1, line: 734, type: !1323)
!1323 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 8192, align: 8, elements: !1324)
!1324 = !{!1325}
!1325 = !MDSubrange(count: 1024)
!1326 = !MDLocation(line: 734, column: 19, scope: !96)
!1327 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "lhash", scope: !96, file: !1, line: 735, type: !1059)
!1328 = !MDLocation(line: 735, column: 19, scope: !96)
!1329 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "hlen", scope: !96, file: !1, line: 736, type: !71)
!1330 = !MDLocation(line: 736, column: 18, scope: !96)
!1331 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_info", scope: !96, file: !1, line: 737, type: !137)
!1332 = !MDLocation(line: 737, column: 30, scope: !96)
!1333 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_ctx", scope: !96, file: !1, line: 738, type: !133)
!1334 = !MDLocation(line: 738, column: 26, scope: !96)
!1335 = !MDLocation(line: 743, column: 9, scope: !1336)
!1336 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 743, column: 9)
!1337 = !MDLocation(line: 743, column: 14, scope: !1336)
!1338 = !MDLocation(line: 743, column: 37, scope: !1336)
!1339 = !MDLocation(line: 743, column: 40, scope: !1336)
!1340 = !MDLocation(line: 743, column: 45, scope: !1336)
!1341 = !MDLocation(line: 743, column: 53, scope: !1336)
!1342 = !MDLocation(line: 743, column: 9, scope: !96)
!1343 = !MDLocation(line: 744, column: 9, scope: !1336)
!1344 = !MDLocation(line: 746, column: 12, scope: !96)
!1345 = !MDLocation(line: 746, column: 17, scope: !96)
!1346 = !MDLocation(line: 746, column: 10, scope: !96)
!1347 = !MDLocation(line: 748, column: 9, scope: !1348)
!1348 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 748, column: 9)
!1349 = !MDLocation(line: 748, column: 14, scope: !1348)
!1350 = !MDLocation(line: 748, column: 19, scope: !1348)
!1351 = !MDLocation(line: 748, column: 22, scope: !1348)
!1352 = !MDLocation(line: 748, column: 27, scope: !1348)
!1353 = !MDLocation(line: 748, column: 9, scope: !96)
!1354 = !MDLocation(line: 749, column: 9, scope: !1348)
!1355 = !MDLocation(line: 751, column: 62, scope: !96)
!1356 = !MDLocation(line: 751, column: 67, scope: !96)
!1357 = !MDLocation(line: 751, column: 15, scope: !96)
!1358 = !MDLocation(line: 751, column: 13, scope: !96)
!1359 = !MDLocation(line: 752, column: 9, scope: !1360)
!1360 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 752, column: 9)
!1361 = !MDLocation(line: 752, column: 17, scope: !1360)
!1362 = !MDLocation(line: 752, column: 9, scope: !96)
!1363 = !MDLocation(line: 753, column: 9, scope: !1360)
!1364 = !MDLocation(line: 758, column: 13, scope: !96)
!1365 = !MDLocation(line: 758, column: 18, scope: !96)
!1366 = !MDLocation(line: 758, column: 11, scope: !96)
!1367 = !MDLocation(line: 759, column: 34, scope: !96)
!1368 = !MDLocation(line: 759, column: 39, scope: !96)
!1369 = !MDLocation(line: 759, column: 46, scope: !96)
!1370 = !MDLocation(line: 759, column: 13, scope: !96)
!1371 = !MDLocation(line: 760, column: 34, scope: !96)
!1372 = !MDLocation(line: 760, column: 39, scope: !96)
!1373 = !MDLocation(line: 760, column: 46, scope: !96)
!1374 = !MDLocation(line: 760, column: 53, scope: !96)
!1375 = !MDLocation(line: 760, column: 60, scope: !96)
!1376 = !MDLocation(line: 760, column: 13, scope: !96)
!1377 = !MDLocation(line: 758, column: 9, scope: !96)
!1378 = !MDLocation(line: 762, column: 9, scope: !1379)
!1379 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 762, column: 9)
!1380 = !MDLocation(line: 762, column: 13, scope: !1379)
!1381 = !MDLocation(line: 762, column: 9, scope: !96)
!1382 = !MDLocation(line: 763, column: 17, scope: !1379)
!1383 = !MDLocation(line: 763, column: 9, scope: !1379)
!1384 = !MDLocation(line: 768, column: 33, scope: !96)
!1385 = !MDLocation(line: 768, column: 12, scope: !96)
!1386 = !MDLocation(line: 768, column: 10, scope: !96)
!1387 = !MDLocation(line: 770, column: 5, scope: !96)
!1388 = !MDLocation(line: 771, column: 32, scope: !96)
!1389 = !MDLocation(line: 771, column: 5, scope: !96)
!1390 = !MDLocation(line: 774, column: 17, scope: !96)
!1391 = !MDLocation(line: 774, column: 26, scope: !96)
!1392 = !MDLocation(line: 774, column: 33, scope: !96)
!1393 = !MDLocation(line: 774, column: 44, scope: !96)
!1394 = !MDLocation(line: 774, column: 5, scope: !96)
!1395 = !MDLocation(line: 777, column: 15, scope: !96)
!1396 = !MDLocation(line: 777, column: 19, scope: !96)
!1397 = !MDLocation(line: 777, column: 24, scope: !96)
!1398 = !MDLocation(line: 777, column: 30, scope: !96)
!1399 = !MDLocation(line: 777, column: 36, scope: !96)
!1400 = !MDLocation(line: 777, column: 34, scope: !96)
!1401 = !MDLocation(line: 777, column: 41, scope: !96)
!1402 = !MDLocation(line: 777, column: 46, scope: !96)
!1403 = !MDLocation(line: 777, column: 53, scope: !96)
!1404 = !MDLocation(line: 777, column: 51, scope: !96)
!1405 = !MDLocation(line: 777, column: 58, scope: !96)
!1406 = !MDLocation(line: 777, column: 5, scope: !96)
!1407 = !MDLocation(line: 781, column: 15, scope: !96)
!1408 = !MDLocation(line: 781, column: 21, scope: !96)
!1409 = !MDLocation(line: 781, column: 19, scope: !96)
!1410 = !MDLocation(line: 781, column: 26, scope: !96)
!1411 = !MDLocation(line: 781, column: 31, scope: !96)
!1412 = !MDLocation(line: 781, column: 38, scope: !96)
!1413 = !MDLocation(line: 781, column: 36, scope: !96)
!1414 = !MDLocation(line: 781, column: 43, scope: !96)
!1415 = !MDLocation(line: 781, column: 48, scope: !96)
!1416 = !MDLocation(line: 781, column: 52, scope: !96)
!1417 = !MDLocation(line: 781, column: 57, scope: !96)
!1418 = !MDLocation(line: 781, column: 5, scope: !96)
!1419 = !MDLocation(line: 784, column: 5, scope: !96)
!1420 = !MDLocation(line: 789, column: 9, scope: !96)
!1421 = !MDLocation(line: 789, column: 7, scope: !96)
!1422 = !MDLocation(line: 790, column: 9, scope: !96)
!1423 = !MDLocation(line: 792, column: 14, scope: !96)
!1424 = !MDLocation(line: 792, column: 12, scope: !96)
!1425 = !MDLocation(line: 792, column: 9, scope: !96)
!1426 = !MDLocation(line: 794, column: 10, scope: !96)
!1427 = !MDLocation(line: 794, column: 7, scope: !96)
!1428 = !MDLocation(line: 797, column: 12, scope: !1429)
!1429 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 797, column: 5)
!1430 = !MDLocation(line: 797, column: 10, scope: !1429)
!1431 = !MDLocation(line: 797, column: 17, scope: !1432)
!1432 = distinct !MDLexicalBlock(scope: !1429, file: !1, line: 797, column: 5)
!1433 = !MDLocation(line: 797, column: 21, scope: !1432)
!1434 = !MDLocation(line: 797, column: 19, scope: !1432)
!1435 = !MDLocation(line: 797, column: 5, scope: !1429)
!1436 = !MDLocation(line: 798, column: 22, scope: !1432)
!1437 = !MDLocation(line: 798, column: 16, scope: !1432)
!1438 = !MDLocation(line: 798, column: 29, scope: !1432)
!1439 = !MDLocation(line: 798, column: 27, scope: !1432)
!1440 = !MDLocation(line: 798, column: 25, scope: !1432)
!1441 = !MDLocation(line: 798, column: 13, scope: !1432)
!1442 = !MDLocation(line: 798, column: 9, scope: !1432)
!1443 = !MDLocation(line: 797, column: 28, scope: !1432)
!1444 = !MDLocation(line: 797, column: 5, scope: !1432)
!1445 = !MDLocation(line: 802, column: 13, scope: !96)
!1446 = !MDLocation(line: 803, column: 14, scope: !96)
!1447 = !MDLocation(line: 804, column: 12, scope: !1448)
!1448 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 804, column: 5)
!1449 = !MDLocation(line: 804, column: 10, scope: !1448)
!1450 = !MDLocation(line: 804, column: 17, scope: !1451)
!1451 = distinct !MDLexicalBlock(scope: !1448, file: !1, line: 804, column: 5)
!1452 = !MDLocation(line: 804, column: 21, scope: !1451)
!1453 = !MDLocation(line: 804, column: 32, scope: !1451)
!1454 = !MDLocation(line: 804, column: 30, scope: !1451)
!1455 = !MDLocation(line: 804, column: 28, scope: !1451)
!1456 = !MDLocation(line: 804, column: 26, scope: !1451)
!1457 = !MDLocation(line: 804, column: 37, scope: !1451)
!1458 = !MDLocation(line: 804, column: 19, scope: !1451)
!1459 = !MDLocation(line: 804, column: 5, scope: !1448)
!1460 = !MDLocation(line: 806, column: 23, scope: !1461)
!1461 = distinct !MDLexicalBlock(scope: !1451, file: !1, line: 805, column: 5)
!1462 = !MDLocation(line: 806, column: 21, scope: !1461)
!1463 = !MDLocation(line: 806, column: 18, scope: !1461)
!1464 = !MDLocation(line: 807, column: 22, scope: !1461)
!1465 = !MDLocation(line: 807, column: 49, scope: !1461)
!1466 = !MDLocation(line: 807, column: 48, scope: !1461)
!1467 = !MDLocation(line: 807, column: 33, scope: !1461)
!1468 = !MDLocation(line: 807, column: 31, scope: !1461)
!1469 = !MDLocation(line: 807, column: 59, scope: !1461)
!1470 = !MDLocation(line: 807, column: 65, scope: !1461)
!1471 = !MDLocation(line: 807, column: 20, scope: !1461)
!1472 = !MDLocation(line: 807, column: 17, scope: !1461)
!1473 = !MDLocation(line: 808, column: 5, scope: !1461)
!1474 = !MDLocation(line: 804, column: 43, scope: !1451)
!1475 = !MDLocation(line: 804, column: 5, scope: !1451)
!1476 = !MDLocation(line: 810, column: 10, scope: !96)
!1477 = !MDLocation(line: 810, column: 7, scope: !96)
!1478 = !MDLocation(line: 811, column: 14, scope: !96)
!1479 = !MDLocation(line: 811, column: 12, scope: !96)
!1480 = !MDLocation(line: 811, column: 17, scope: !96)
!1481 = !MDLocation(line: 811, column: 9, scope: !96)
!1482 = !MDLocation(line: 819, column: 9, scope: !1483)
!1483 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 819, column: 9)
!1484 = !MDLocation(line: 819, column: 13, scope: !1483)
!1485 = !MDLocation(line: 819, column: 9, scope: !96)
!1486 = !MDLocation(line: 820, column: 9, scope: !1483)
!1487 = !MDLocation(line: 822, column: 9, scope: !1488)
!1488 = distinct !MDLexicalBlock(scope: !96, file: !1, line: 822, column: 9)
!1489 = !MDLocation(line: 822, column: 18, scope: !1488)
!1490 = !MDLocation(line: 822, column: 22, scope: !1488)
!1491 = !MDLocation(line: 822, column: 20, scope: !1488)
!1492 = !MDLocation(line: 822, column: 14, scope: !1488)
!1493 = !MDLocation(line: 822, column: 30, scope: !1488)
!1494 = !MDLocation(line: 822, column: 28, scope: !1488)
!1495 = !MDLocation(line: 822, column: 9, scope: !96)
!1496 = !MDLocation(line: 823, column: 9, scope: !1488)
!1497 = !MDLocation(line: 825, column: 13, scope: !96)
!1498 = !MDLocation(line: 825, column: 21, scope: !96)
!1499 = !MDLocation(line: 825, column: 25, scope: !96)
!1500 = !MDLocation(line: 825, column: 23, scope: !96)
!1501 = !MDLocation(line: 825, column: 18, scope: !96)
!1502 = !MDLocation(line: 825, column: 6, scope: !96)
!1503 = !MDLocation(line: 825, column: 11, scope: !96)
!1504 = !MDLocation(line: 826, column: 5, scope: !96)
!1505 = !MDLocation(line: 828, column: 5, scope: !96)
!1506 = !MDLocation(line: 829, column: 1, scope: !96)
!1507 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !100, file: !1, line: 836, type: !27)
!1508 = !MDLocation(line: 836, column: 63, scope: !100)
!1509 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !100, file: !1, line: 837, type: !67)
!1510 = !MDLocation(line: 837, column: 40, scope: !100)
!1511 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !100, file: !1, line: 838, type: !17)
!1512 = !MDLocation(line: 838, column: 40, scope: !100)
!1513 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !100, file: !1, line: 839, type: !33)
!1514 = !MDLocation(line: 839, column: 38, scope: !100)
!1515 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "olen", arg: 5, scope: !100, file: !1, line: 839, type: !99)
!1516 = !MDLocation(line: 839, column: 52, scope: !100)
!1517 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 6, scope: !100, file: !1, line: 840, type: !84)
!1518 = !MDLocation(line: 840, column: 55, scope: !100)
!1519 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 7, scope: !100, file: !1, line: 841, type: !70)
!1520 = !MDLocation(line: 841, column: 49, scope: !100)
!1521 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output_max_len", arg: 8, scope: !100, file: !1, line: 842, type: !20)
!1522 = !MDLocation(line: 842, column: 41, scope: !100)
!1523 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !100, file: !1, line: 844, type: !33)
!1524 = !MDLocation(line: 844, column: 9, scope: !100)
!1525 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ilen", scope: !100, file: !1, line: 845, type: !20)
!1526 = !MDLocation(line: 845, column: 12, scope: !100)
!1527 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "pad_count", scope: !100, file: !1, line: 845, type: !20)
!1528 = !MDLocation(line: 845, column: 18, scope: !100)
!1529 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !100, file: !1, line: 845, type: !20)
!1530 = !MDLocation(line: 845, column: 33, scope: !100)
!1531 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !100, file: !1, line: 846, type: !70)
!1532 = !MDLocation(line: 846, column: 20, scope: !100)
!1533 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "bad", scope: !100, file: !1, line: 846, type: !19)
!1534 = !MDLocation(line: 846, column: 23, scope: !100)
!1535 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "pad_done", scope: !100, file: !1, line: 846, type: !19)
!1536 = !MDLocation(line: 846, column: 28, scope: !100)
!1537 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "buf", scope: !100, file: !1, line: 847, type: !1323)
!1538 = !MDLocation(line: 847, column: 19, scope: !100)
!1539 = !MDLocation(line: 849, column: 9, scope: !1540)
!1540 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 849, column: 9)
!1541 = !MDLocation(line: 849, column: 14, scope: !1540)
!1542 = !MDLocation(line: 849, column: 37, scope: !1540)
!1543 = !MDLocation(line: 849, column: 40, scope: !1540)
!1544 = !MDLocation(line: 849, column: 45, scope: !1540)
!1545 = !MDLocation(line: 849, column: 53, scope: !1540)
!1546 = !MDLocation(line: 849, column: 9, scope: !100)
!1547 = !MDLocation(line: 850, column: 9, scope: !1540)
!1548 = !MDLocation(line: 852, column: 12, scope: !100)
!1549 = !MDLocation(line: 852, column: 17, scope: !100)
!1550 = !MDLocation(line: 852, column: 10, scope: !100)
!1551 = !MDLocation(line: 854, column: 9, scope: !1552)
!1552 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 854, column: 9)
!1553 = !MDLocation(line: 854, column: 14, scope: !1552)
!1554 = !MDLocation(line: 854, column: 19, scope: !1552)
!1555 = !MDLocation(line: 854, column: 22, scope: !1552)
!1556 = !MDLocation(line: 854, column: 27, scope: !1552)
!1557 = !MDLocation(line: 854, column: 9, scope: !100)
!1558 = !MDLocation(line: 855, column: 9, scope: !1552)
!1559 = !MDLocation(line: 857, column: 13, scope: !100)
!1560 = !MDLocation(line: 857, column: 18, scope: !100)
!1561 = !MDLocation(line: 857, column: 11, scope: !100)
!1562 = !MDLocation(line: 858, column: 34, scope: !100)
!1563 = !MDLocation(line: 858, column: 39, scope: !100)
!1564 = !MDLocation(line: 858, column: 46, scope: !100)
!1565 = !MDLocation(line: 858, column: 13, scope: !100)
!1566 = !MDLocation(line: 859, column: 34, scope: !100)
!1567 = !MDLocation(line: 859, column: 39, scope: !100)
!1568 = !MDLocation(line: 859, column: 46, scope: !100)
!1569 = !MDLocation(line: 859, column: 53, scope: !100)
!1570 = !MDLocation(line: 859, column: 60, scope: !100)
!1571 = !MDLocation(line: 859, column: 13, scope: !100)
!1572 = !MDLocation(line: 857, column: 9, scope: !100)
!1573 = !MDLocation(line: 861, column: 9, scope: !1574)
!1574 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 861, column: 9)
!1575 = !MDLocation(line: 861, column: 13, scope: !1574)
!1576 = !MDLocation(line: 861, column: 9, scope: !100)
!1577 = !MDLocation(line: 862, column: 17, scope: !1574)
!1578 = !MDLocation(line: 862, column: 9, scope: !1574)
!1579 = !MDLocation(line: 864, column: 9, scope: !100)
!1580 = !MDLocation(line: 864, column: 7, scope: !100)
!1581 = !MDLocation(line: 865, column: 9, scope: !100)
!1582 = !MDLocation(line: 870, column: 14, scope: !100)
!1583 = !MDLocation(line: 870, column: 12, scope: !100)
!1584 = !MDLocation(line: 870, column: 9, scope: !100)
!1585 = !MDLocation(line: 873, column: 9, scope: !1586)
!1586 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 873, column: 9)
!1587 = !MDLocation(line: 873, column: 14, scope: !1586)
!1588 = !MDLocation(line: 873, column: 9, scope: !100)
!1589 = !MDLocation(line: 875, column: 18, scope: !1590)
!1590 = distinct !MDLexicalBlock(scope: !1586, file: !1, line: 874, column: 5)
!1591 = !MDLocation(line: 875, column: 16, scope: !1590)
!1592 = !MDLocation(line: 875, column: 21, scope: !1590)
!1593 = !MDLocation(line: 875, column: 13, scope: !1590)
!1594 = !MDLocation(line: 879, column: 16, scope: !1595)
!1595 = distinct !MDLexicalBlock(scope: !1590, file: !1, line: 879, column: 9)
!1596 = !MDLocation(line: 879, column: 14, scope: !1595)
!1597 = !MDLocation(line: 879, column: 21, scope: !1598)
!1598 = distinct !MDLexicalBlock(scope: !1595, file: !1, line: 879, column: 9)
!1599 = !MDLocation(line: 879, column: 25, scope: !1598)
!1600 = !MDLocation(line: 879, column: 30, scope: !1598)
!1601 = !MDLocation(line: 879, column: 23, scope: !1598)
!1602 = !MDLocation(line: 879, column: 9, scope: !1595)
!1603 = !MDLocation(line: 881, column: 30, scope: !1604)
!1604 = distinct !MDLexicalBlock(scope: !1598, file: !1, line: 880, column: 9)
!1605 = !MDLocation(line: 881, column: 28, scope: !1604)
!1606 = !MDLocation(line: 881, column: 53, scope: !1604)
!1607 = !MDLocation(line: 881, column: 51, scope: !1604)
!1608 = !MDLocation(line: 881, column: 50, scope: !1604)
!1609 = !MDLocation(line: 881, column: 35, scope: !1604)
!1610 = !MDLocation(line: 881, column: 33, scope: !1604)
!1611 = !MDLocation(line: 881, column: 57, scope: !1604)
!1612 = !MDLocation(line: 881, column: 63, scope: !1604)
!1613 = !MDLocation(line: 881, column: 23, scope: !1604)
!1614 = !MDLocation(line: 882, column: 28, scope: !1604)
!1615 = !MDLocation(line: 882, column: 55, scope: !1604)
!1616 = !MDLocation(line: 882, column: 54, scope: !1604)
!1617 = !MDLocation(line: 882, column: 39, scope: !1604)
!1618 = !MDLocation(line: 882, column: 37, scope: !1604)
!1619 = !MDLocation(line: 882, column: 65, scope: !1604)
!1620 = !MDLocation(line: 882, column: 71, scope: !1604)
!1621 = !MDLocation(line: 882, column: 26, scope: !1604)
!1622 = !MDLocation(line: 882, column: 23, scope: !1604)
!1623 = !MDLocation(line: 883, column: 9, scope: !1604)
!1624 = !MDLocation(line: 879, column: 36, scope: !1598)
!1625 = !MDLocation(line: 879, column: 9, scope: !1598)
!1626 = !MDLocation(line: 885, column: 14, scope: !1590)
!1627 = !MDLocation(line: 885, column: 11, scope: !1590)
!1628 = !MDLocation(line: 886, column: 18, scope: !1590)
!1629 = !MDLocation(line: 886, column: 16, scope: !1590)
!1630 = !MDLocation(line: 886, column: 13, scope: !1590)
!1631 = !MDLocation(line: 887, column: 5, scope: !1590)
!1632 = !MDLocation(line: 890, column: 18, scope: !1633)
!1633 = distinct !MDLexicalBlock(scope: !1586, file: !1, line: 889, column: 5)
!1634 = !MDLocation(line: 890, column: 16, scope: !1633)
!1635 = !MDLocation(line: 890, column: 21, scope: !1633)
!1636 = !MDLocation(line: 890, column: 13, scope: !1633)
!1637 = !MDLocation(line: 894, column: 16, scope: !1638)
!1638 = distinct !MDLexicalBlock(scope: !1633, file: !1, line: 894, column: 9)
!1639 = !MDLocation(line: 894, column: 14, scope: !1638)
!1640 = !MDLocation(line: 894, column: 21, scope: !1641)
!1641 = distinct !MDLexicalBlock(scope: !1638, file: !1, line: 894, column: 9)
!1642 = !MDLocation(line: 894, column: 25, scope: !1641)
!1643 = !MDLocation(line: 894, column: 30, scope: !1641)
!1644 = !MDLocation(line: 894, column: 23, scope: !1641)
!1645 = !MDLocation(line: 894, column: 9, scope: !1638)
!1646 = !MDLocation(line: 896, column: 29, scope: !1647)
!1647 = distinct !MDLexicalBlock(scope: !1641, file: !1, line: 895, column: 9)
!1648 = !MDLocation(line: 896, column: 27, scope: !1647)
!1649 = !MDLocation(line: 896, column: 32, scope: !1647)
!1650 = !MDLocation(line: 896, column: 22, scope: !1647)
!1651 = !MDLocation(line: 897, column: 28, scope: !1647)
!1652 = !MDLocation(line: 897, column: 37, scope: !1647)
!1653 = !MDLocation(line: 897, column: 26, scope: !1647)
!1654 = !MDLocation(line: 897, column: 23, scope: !1647)
!1655 = !MDLocation(line: 898, column: 9, scope: !1647)
!1656 = !MDLocation(line: 894, column: 36, scope: !1641)
!1657 = !MDLocation(line: 894, column: 9, scope: !1641)
!1658 = !MDLocation(line: 900, column: 14, scope: !1633)
!1659 = !MDLocation(line: 900, column: 11, scope: !1633)
!1660 = !MDLocation(line: 901, column: 18, scope: !1633)
!1661 = !MDLocation(line: 901, column: 16, scope: !1633)
!1662 = !MDLocation(line: 901, column: 13, scope: !1633)
!1663 = !MDLocation(line: 904, column: 9, scope: !1664)
!1664 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 904, column: 9)
!1665 = !MDLocation(line: 904, column: 9, scope: !100)
!1666 = !MDLocation(line: 905, column: 9, scope: !1664)
!1667 = !MDLocation(line: 907, column: 9, scope: !1668)
!1668 = distinct !MDLexicalBlock(scope: !100, file: !1, line: 907, column: 9)
!1669 = !MDLocation(line: 907, column: 18, scope: !1668)
!1670 = !MDLocation(line: 907, column: 22, scope: !1668)
!1671 = !MDLocation(line: 907, column: 20, scope: !1668)
!1672 = !MDLocation(line: 907, column: 14, scope: !1668)
!1673 = !MDLocation(line: 907, column: 30, scope: !1668)
!1674 = !MDLocation(line: 907, column: 28, scope: !1668)
!1675 = !MDLocation(line: 907, column: 9, scope: !100)
!1676 = !MDLocation(line: 908, column: 9, scope: !1668)
!1677 = !MDLocation(line: 910, column: 13, scope: !100)
!1678 = !MDLocation(line: 910, column: 21, scope: !100)
!1679 = !MDLocation(line: 910, column: 25, scope: !100)
!1680 = !MDLocation(line: 910, column: 23, scope: !100)
!1681 = !MDLocation(line: 910, column: 18, scope: !100)
!1682 = !MDLocation(line: 910, column: 6, scope: !100)
!1683 = !MDLocation(line: 910, column: 11, scope: !100)
!1684 = !MDLocation(line: 911, column: 5, scope: !100)
!1685 = !MDLocation(line: 913, column: 5, scope: !100)
!1686 = !MDLocation(line: 914, column: 1, scope: !100)
!1687 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !103, file: !1, line: 920, type: !27)
!1688 = !MDLocation(line: 920, column: 53, scope: !103)
!1689 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !103, file: !1, line: 921, type: !67)
!1690 = !MDLocation(line: 921, column: 30, scope: !103)
!1691 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !103, file: !1, line: 922, type: !17)
!1692 = !MDLocation(line: 922, column: 30, scope: !103)
!1693 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !103, file: !1, line: 923, type: !33)
!1694 = !MDLocation(line: 923, column: 28, scope: !103)
!1695 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "olen", arg: 5, scope: !103, file: !1, line: 923, type: !99)
!1696 = !MDLocation(line: 923, column: 42, scope: !103)
!1697 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "input", arg: 6, scope: !103, file: !1, line: 924, type: !84)
!1698 = !MDLocation(line: 924, column: 45, scope: !103)
!1699 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 7, scope: !103, file: !1, line: 925, type: !70)
!1700 = !MDLocation(line: 925, column: 39, scope: !103)
!1701 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output_max_len", arg: 8, scope: !103, file: !1, line: 926, type: !20)
!1702 = !MDLocation(line: 926, column: 31, scope: !103)
!1703 = !MDLocation(line: 928, column: 13, scope: !103)
!1704 = !MDLocation(line: 928, column: 18, scope: !103)
!1705 = !MDLocation(line: 928, column: 5, scope: !103)
!1706 = !MDLocation(line: 932, column: 57, scope: !1707)
!1707 = distinct !MDLexicalBlock(scope: !103, file: !1, line: 929, column: 5)
!1708 = !MDLocation(line: 932, column: 62, scope: !1707)
!1709 = !MDLocation(line: 932, column: 69, scope: !1707)
!1710 = !MDLocation(line: 932, column: 76, scope: !1707)
!1711 = !MDLocation(line: 932, column: 82, scope: !1707)
!1712 = !MDLocation(line: 933, column: 49, scope: !1707)
!1713 = !MDLocation(line: 933, column: 56, scope: !1707)
!1714 = !MDLocation(line: 933, column: 64, scope: !1707)
!1715 = !MDLocation(line: 932, column: 20, scope: !1707)
!1716 = !MDLocation(line: 932, column: 13, scope: !1707)
!1717 = !MDLocation(line: 938, column: 52, scope: !1707)
!1718 = !MDLocation(line: 938, column: 57, scope: !1707)
!1719 = !MDLocation(line: 938, column: 64, scope: !1707)
!1720 = !MDLocation(line: 938, column: 71, scope: !1707)
!1721 = !MDLocation(line: 939, column: 44, scope: !1707)
!1722 = !MDLocation(line: 939, column: 50, scope: !1707)
!1723 = !MDLocation(line: 939, column: 57, scope: !1707)
!1724 = !MDLocation(line: 940, column: 44, scope: !1707)
!1725 = !MDLocation(line: 938, column: 20, scope: !1707)
!1726 = !MDLocation(line: 938, column: 13, scope: !1707)
!1727 = !MDLocation(line: 944, column: 13, scope: !1707)
!1728 = !MDLocation(line: 946, column: 1, scope: !103)
!1729 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !104, file: !1, line: 952, type: !27)
!1730 = !MDLocation(line: 952, column: 55, scope: !104)
!1731 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !104, file: !1, line: 953, type: !67)
!1732 = !MDLocation(line: 953, column: 32, scope: !104)
!1733 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !104, file: !1, line: 954, type: !17)
!1734 = !MDLocation(line: 954, column: 32, scope: !104)
!1735 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !104, file: !1, line: 955, type: !33)
!1736 = !MDLocation(line: 955, column: 30, scope: !104)
!1737 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !104, file: !1, line: 956, type: !18)
!1738 = !MDLocation(line: 956, column: 44, scope: !104)
!1739 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !104, file: !1, line: 957, type: !71)
!1740 = !MDLocation(line: 957, column: 39, scope: !104)
!1741 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !104, file: !1, line: 958, type: !84)
!1742 = !MDLocation(line: 958, column: 47, scope: !104)
!1743 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 8, scope: !104, file: !1, line: 959, type: !70)
!1744 = !MDLocation(line: 959, column: 41, scope: !104)
!1745 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "olen", scope: !104, file: !1, line: 961, type: !20)
!1746 = !MDLocation(line: 961, column: 12, scope: !104)
!1747 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !104, file: !1, line: 962, type: !70)
!1748 = !MDLocation(line: 962, column: 20, scope: !104)
!1749 = !MDLocation(line: 962, column: 24, scope: !104)
!1750 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "salt", scope: !104, file: !1, line: 963, type: !1059)
!1751 = !MDLocation(line: 963, column: 19, scope: !104)
!1752 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "slen", scope: !104, file: !1, line: 964, type: !71)
!1753 = !MDLocation(line: 964, column: 18, scope: !104)
!1754 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "hlen", scope: !104, file: !1, line: 964, type: !71)
!1755 = !MDLocation(line: 964, column: 24, scope: !104)
!1756 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "offset", scope: !104, file: !1, line: 964, type: !71)
!1757 = !MDLocation(line: 964, column: 30, scope: !104)
!1758 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !104, file: !1, line: 965, type: !33)
!1759 = !MDLocation(line: 965, column: 9, scope: !104)
!1760 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "msb", scope: !104, file: !1, line: 966, type: !20)
!1761 = !MDLocation(line: 966, column: 12, scope: !104)
!1762 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_info", scope: !104, file: !1, line: 967, type: !137)
!1763 = !MDLocation(line: 967, column: 30, scope: !104)
!1764 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_ctx", scope: !104, file: !1, line: 968, type: !133)
!1765 = !MDLocation(line: 968, column: 26, scope: !104)
!1766 = !MDLocation(line: 970, column: 9, scope: !1767)
!1767 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 970, column: 9)
!1768 = !MDLocation(line: 970, column: 14, scope: !1767)
!1769 = !MDLocation(line: 970, column: 37, scope: !1767)
!1770 = !MDLocation(line: 970, column: 40, scope: !1767)
!1771 = !MDLocation(line: 970, column: 45, scope: !1767)
!1772 = !MDLocation(line: 970, column: 53, scope: !1767)
!1773 = !MDLocation(line: 970, column: 9, scope: !104)
!1774 = !MDLocation(line: 971, column: 9, scope: !1767)
!1775 = !MDLocation(line: 973, column: 9, scope: !1776)
!1776 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 973, column: 9)
!1777 = !MDLocation(line: 973, column: 15, scope: !1776)
!1778 = !MDLocation(line: 973, column: 9, scope: !104)
!1779 = !MDLocation(line: 974, column: 9, scope: !1776)
!1780 = !MDLocation(line: 976, column: 12, scope: !104)
!1781 = !MDLocation(line: 976, column: 17, scope: !104)
!1782 = !MDLocation(line: 976, column: 10, scope: !104)
!1783 = !MDLocation(line: 978, column: 9, scope: !1784)
!1784 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 978, column: 9)
!1785 = !MDLocation(line: 978, column: 16, scope: !1784)
!1786 = !MDLocation(line: 978, column: 9, scope: !104)
!1787 = !MDLocation(line: 982, column: 46, scope: !1788)
!1788 = distinct !MDLexicalBlock(scope: !1784, file: !1, line: 979, column: 5)
!1789 = !MDLocation(line: 982, column: 19, scope: !1788)
!1790 = !MDLocation(line: 982, column: 17, scope: !1788)
!1791 = !MDLocation(line: 983, column: 13, scope: !1792)
!1792 = distinct !MDLexicalBlock(scope: !1788, file: !1, line: 983, column: 13)
!1793 = !MDLocation(line: 983, column: 21, scope: !1792)
!1794 = !MDLocation(line: 983, column: 13, scope: !1788)
!1795 = !MDLocation(line: 984, column: 13, scope: !1792)
!1796 = !MDLocation(line: 986, column: 40, scope: !1788)
!1797 = !MDLocation(line: 986, column: 19, scope: !1788)
!1798 = !MDLocation(line: 986, column: 17, scope: !1788)
!1799 = !MDLocation(line: 987, column: 5, scope: !1788)
!1800 = !MDLocation(line: 989, column: 62, scope: !104)
!1801 = !MDLocation(line: 989, column: 67, scope: !104)
!1802 = !MDLocation(line: 989, column: 15, scope: !104)
!1803 = !MDLocation(line: 989, column: 13, scope: !104)
!1804 = !MDLocation(line: 990, column: 9, scope: !1805)
!1805 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 990, column: 9)
!1806 = !MDLocation(line: 990, column: 17, scope: !1805)
!1807 = !MDLocation(line: 990, column: 9, scope: !104)
!1808 = !MDLocation(line: 991, column: 9, scope: !1805)
!1809 = !MDLocation(line: 993, column: 33, scope: !104)
!1810 = !MDLocation(line: 993, column: 12, scope: !104)
!1811 = !MDLocation(line: 993, column: 10, scope: !104)
!1812 = !MDLocation(line: 994, column: 12, scope: !104)
!1813 = !MDLocation(line: 994, column: 10, scope: !104)
!1814 = !MDLocation(line: 996, column: 9, scope: !1815)
!1815 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 996, column: 9)
!1816 = !MDLocation(line: 996, column: 16, scope: !1815)
!1817 = !MDLocation(line: 996, column: 23, scope: !1815)
!1818 = !MDLocation(line: 996, column: 21, scope: !1815)
!1819 = !MDLocation(line: 996, column: 28, scope: !1815)
!1820 = !MDLocation(line: 996, column: 14, scope: !1815)
!1821 = !MDLocation(line: 996, column: 9, scope: !104)
!1822 = !MDLocation(line: 997, column: 9, scope: !1815)
!1823 = !MDLocation(line: 999, column: 5, scope: !104)
!1824 = !MDLocation(line: 1003, column: 17, scope: !1825)
!1825 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 1003, column: 9)
!1826 = !MDLocation(line: 1003, column: 24, scope: !1825)
!1827 = !MDLocation(line: 1003, column: 31, scope: !1825)
!1828 = !MDLocation(line: 1003, column: 37, scope: !1825)
!1829 = !MDLocation(line: 1003, column: 15, scope: !1825)
!1830 = !MDLocation(line: 1003, column: 46, scope: !1825)
!1831 = !MDLocation(line: 1003, column: 9, scope: !104)
!1832 = !MDLocation(line: 1004, column: 46, scope: !1825)
!1833 = !MDLocation(line: 1004, column: 44, scope: !1825)
!1834 = !MDLocation(line: 1004, column: 9, scope: !1825)
!1835 = !MDLocation(line: 1008, column: 32, scope: !104)
!1836 = !MDLocation(line: 1008, column: 37, scope: !104)
!1837 = !MDLocation(line: 1008, column: 11, scope: !104)
!1838 = !MDLocation(line: 1008, column: 41, scope: !104)
!1839 = !MDLocation(line: 1008, column: 9, scope: !104)
!1840 = !MDLocation(line: 1009, column: 10, scope: !104)
!1841 = !MDLocation(line: 1009, column: 17, scope: !104)
!1842 = !MDLocation(line: 1009, column: 22, scope: !104)
!1843 = !MDLocation(line: 1009, column: 15, scope: !104)
!1844 = !MDLocation(line: 1009, column: 26, scope: !104)
!1845 = !MDLocation(line: 1009, column: 7, scope: !104)
!1846 = !MDLocation(line: 1010, column: 7, scope: !104)
!1847 = !MDLocation(line: 1010, column: 10, scope: !104)
!1848 = !MDLocation(line: 1011, column: 5, scope: !104)
!1849 = !MDLocation(line: 1012, column: 10, scope: !104)
!1850 = !MDLocation(line: 1012, column: 7, scope: !104)
!1851 = !MDLocation(line: 1014, column: 5, scope: !104)
!1852 = !MDLocation(line: 1015, column: 32, scope: !104)
!1853 = !MDLocation(line: 1015, column: 5, scope: !104)
!1854 = !MDLocation(line: 1019, column: 5, scope: !104)
!1855 = !MDLocation(line: 1020, column: 33, scope: !104)
!1856 = !MDLocation(line: 1020, column: 5, scope: !104)
!1857 = !MDLocation(line: 1021, column: 33, scope: !104)
!1858 = !MDLocation(line: 1021, column: 39, scope: !104)
!1859 = !MDLocation(line: 1021, column: 5, scope: !104)
!1860 = !MDLocation(line: 1022, column: 33, scope: !104)
!1861 = !MDLocation(line: 1022, column: 39, scope: !104)
!1862 = !MDLocation(line: 1022, column: 5, scope: !104)
!1863 = !MDLocation(line: 1023, column: 33, scope: !104)
!1864 = !MDLocation(line: 1023, column: 5, scope: !104)
!1865 = !MDLocation(line: 1027, column: 9, scope: !1866)
!1866 = distinct !MDLexicalBlock(scope: !104, file: !1, line: 1027, column: 9)
!1867 = !MDLocation(line: 1027, column: 13, scope: !1866)
!1868 = !MDLocation(line: 1027, column: 17, scope: !1866)
!1869 = !MDLocation(line: 1027, column: 9, scope: !104)
!1870 = !MDLocation(line: 1028, column: 16, scope: !1866)
!1871 = !MDLocation(line: 1028, column: 9, scope: !1866)
!1872 = !MDLocation(line: 1032, column: 15, scope: !104)
!1873 = !MDLocation(line: 1032, column: 21, scope: !104)
!1874 = !MDLocation(line: 1032, column: 19, scope: !104)
!1875 = !MDLocation(line: 1032, column: 29, scope: !104)
!1876 = !MDLocation(line: 1032, column: 36, scope: !104)
!1877 = !MDLocation(line: 1032, column: 34, scope: !104)
!1878 = !MDLocation(line: 1032, column: 41, scope: !104)
!1879 = !MDLocation(line: 1032, column: 47, scope: !104)
!1880 = !MDLocation(line: 1032, column: 45, scope: !104)
!1881 = !MDLocation(line: 1032, column: 55, scope: !104)
!1882 = !MDLocation(line: 1032, column: 58, scope: !104)
!1883 = !MDLocation(line: 1032, column: 5, scope: !104)
!1884 = !MDLocation(line: 1034, column: 5, scope: !104)
!1885 = !MDLocation(line: 1036, column: 32, scope: !104)
!1886 = !MDLocation(line: 1036, column: 37, scope: !104)
!1887 = !MDLocation(line: 1036, column: 11, scope: !104)
!1888 = !MDLocation(line: 1036, column: 41, scope: !104)
!1889 = !MDLocation(line: 1036, column: 9, scope: !104)
!1890 = !MDLocation(line: 1037, column: 25, scope: !104)
!1891 = !MDLocation(line: 1037, column: 30, scope: !104)
!1892 = !MDLocation(line: 1037, column: 36, scope: !104)
!1893 = !MDLocation(line: 1037, column: 34, scope: !104)
!1894 = !MDLocation(line: 1037, column: 20, scope: !104)
!1895 = !MDLocation(line: 1037, column: 5, scope: !104)
!1896 = !MDLocation(line: 1037, column: 12, scope: !104)
!1897 = !MDLocation(line: 1039, column: 10, scope: !104)
!1898 = !MDLocation(line: 1039, column: 7, scope: !104)
!1899 = !MDLocation(line: 1040, column: 7, scope: !104)
!1900 = !MDLocation(line: 1040, column: 10, scope: !104)
!1901 = !MDLocation(line: 1042, column: 15, scope: !104)
!1902 = !MDLocation(line: 1042, column: 20, scope: !104)
!1903 = !MDLocation(line: 1042, column: 13, scope: !104)
!1904 = !MDLocation(line: 1043, column: 36, scope: !104)
!1905 = !MDLocation(line: 1043, column: 41, scope: !104)
!1906 = !MDLocation(line: 1043, column: 46, scope: !104)
!1907 = !MDLocation(line: 1043, column: 15, scope: !104)
!1908 = !MDLocation(line: 1044, column: 36, scope: !104)
!1909 = !MDLocation(line: 1044, column: 41, scope: !104)
!1910 = !MDLocation(line: 1044, column: 48, scope: !104)
!1911 = !MDLocation(line: 1044, column: 55, scope: !104)
!1912 = !MDLocation(line: 1044, column: 60, scope: !104)
!1913 = !MDLocation(line: 1044, column: 15, scope: !104)
!1914 = !MDLocation(line: 1042, column: 5, scope: !104)
!1915 = !MDLocation(line: 1045, column: 1, scope: !104)
!1916 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !107, file: !1, line: 1055, type: !27)
!1917 = !MDLocation(line: 1055, column: 61, scope: !107)
!1918 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !107, file: !1, line: 1056, type: !67)
!1919 = !MDLocation(line: 1056, column: 38, scope: !107)
!1920 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !107, file: !1, line: 1057, type: !17)
!1921 = !MDLocation(line: 1057, column: 38, scope: !107)
!1922 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !107, file: !1, line: 1058, type: !33)
!1923 = !MDLocation(line: 1058, column: 36, scope: !107)
!1924 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !107, file: !1, line: 1059, type: !18)
!1925 = !MDLocation(line: 1059, column: 50, scope: !107)
!1926 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !107, file: !1, line: 1060, type: !71)
!1927 = !MDLocation(line: 1060, column: 45, scope: !107)
!1928 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !107, file: !1, line: 1061, type: !84)
!1929 = !MDLocation(line: 1061, column: 53, scope: !107)
!1930 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 8, scope: !107, file: !1, line: 1062, type: !70)
!1931 = !MDLocation(line: 1062, column: 47, scope: !107)
!1932 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "nb_pad", scope: !107, file: !1, line: 1064, type: !20)
!1933 = !MDLocation(line: 1064, column: 12, scope: !107)
!1934 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "olen", scope: !107, file: !1, line: 1064, type: !20)
!1935 = !MDLocation(line: 1064, column: 20, scope: !107)
!1936 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "oid_size", scope: !107, file: !1, line: 1064, type: !20)
!1937 = !MDLocation(line: 1064, column: 26, scope: !107)
!1938 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !107, file: !1, line: 1065, type: !70)
!1939 = !MDLocation(line: 1065, column: 20, scope: !107)
!1940 = !MDLocation(line: 1065, column: 24, scope: !107)
!1941 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "oid", scope: !107, file: !1, line: 1066, type: !1942)
!1942 = !MDDerivedType(tag: DW_TAG_pointer_type, baseType: !1943, size: 64, align: 64)
!1943 = !MDDerivedType(tag: DW_TAG_const_type, baseType: !1944)
!1944 = !MDBasicType(name: "char", size: 8, align: 8, encoding: DW_ATE_signed_char)
!1945 = !MDLocation(line: 1066, column: 17, scope: !107)
!1946 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "sig_try", scope: !107, file: !1, line: 1067, type: !70)
!1947 = !MDLocation(line: 1067, column: 20, scope: !107)
!1948 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "verif", scope: !107, file: !1, line: 1067, type: !70)
!1949 = !MDLocation(line: 1067, column: 37, scope: !107)
!1950 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !107, file: !1, line: 1068, type: !20)
!1951 = !MDLocation(line: 1068, column: 12, scope: !107)
!1952 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "diff", scope: !107, file: !1, line: 1069, type: !19)
!1953 = !MDLocation(line: 1069, column: 19, scope: !107)
!1954 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "diff_no_optimize", scope: !107, file: !1, line: 1070, type: !1955)
!1955 = !MDDerivedType(tag: DW_TAG_volatile_type, baseType: !19)
!1956 = !MDLocation(line: 1070, column: 28, scope: !107)
!1957 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !107, file: !1, line: 1071, type: !33)
!1958 = !MDLocation(line: 1071, column: 9, scope: !107)
!1959 = !MDLocation(line: 1073, column: 9, scope: !1960)
!1960 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1073, column: 9)
!1961 = !MDLocation(line: 1073, column: 14, scope: !1960)
!1962 = !MDLocation(line: 1073, column: 37, scope: !1960)
!1963 = !MDLocation(line: 1073, column: 40, scope: !1960)
!1964 = !MDLocation(line: 1073, column: 45, scope: !1960)
!1965 = !MDLocation(line: 1073, column: 53, scope: !1960)
!1966 = !MDLocation(line: 1073, column: 9, scope: !107)
!1967 = !MDLocation(line: 1074, column: 9, scope: !1960)
!1968 = !MDLocation(line: 1076, column: 12, scope: !107)
!1969 = !MDLocation(line: 1076, column: 17, scope: !107)
!1970 = !MDLocation(line: 1076, column: 10, scope: !107)
!1971 = !MDLocation(line: 1077, column: 14, scope: !107)
!1972 = !MDLocation(line: 1077, column: 19, scope: !107)
!1973 = !MDLocation(line: 1077, column: 12, scope: !107)
!1974 = !MDLocation(line: 1079, column: 9, scope: !1975)
!1975 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1079, column: 9)
!1976 = !MDLocation(line: 1079, column: 16, scope: !1975)
!1977 = !MDLocation(line: 1079, column: 9, scope: !107)
!1978 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_info", scope: !1979, file: !1, line: 1081, type: !137)
!1979 = distinct !MDLexicalBlock(scope: !1975, file: !1, line: 1080, column: 5)
!1980 = !MDLocation(line: 1081, column: 34, scope: !1979)
!1981 = !MDLocation(line: 1081, column: 71, scope: !1979)
!1982 = !MDLocation(line: 1081, column: 44, scope: !1979)
!1983 = !MDLocation(line: 1082, column: 13, scope: !1984)
!1984 = distinct !MDLexicalBlock(scope: !1979, file: !1, line: 1082, column: 13)
!1985 = !MDLocation(line: 1082, column: 21, scope: !1984)
!1986 = !MDLocation(line: 1082, column: 13, scope: !1979)
!1987 = !MDLocation(line: 1083, column: 13, scope: !1984)
!1988 = !MDLocation(line: 1085, column: 40, scope: !1989)
!1989 = distinct !MDLexicalBlock(scope: !1979, file: !1, line: 1085, column: 13)
!1990 = !MDLocation(line: 1085, column: 13, scope: !1989)
!1991 = !MDLocation(line: 1085, column: 66, scope: !1989)
!1992 = !MDLocation(line: 1085, column: 13, scope: !1979)
!1993 = !MDLocation(line: 1086, column: 13, scope: !1989)
!1994 = !MDLocation(line: 1088, column: 24, scope: !1979)
!1995 = !MDLocation(line: 1088, column: 22, scope: !1979)
!1996 = !MDLocation(line: 1088, column: 16, scope: !1979)
!1997 = !MDLocation(line: 1090, column: 40, scope: !1979)
!1998 = !MDLocation(line: 1090, column: 19, scope: !1979)
!1999 = !MDLocation(line: 1090, column: 17, scope: !1979)
!2000 = !MDLocation(line: 1091, column: 5, scope: !1979)
!2001 = !MDLocation(line: 1093, column: 15, scope: !107)
!2002 = !MDLocation(line: 1093, column: 12, scope: !107)
!2003 = !MDLocation(line: 1095, column: 11, scope: !2004)
!2004 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1095, column: 9)
!2005 = !MDLocation(line: 1095, column: 18, scope: !2004)
!2006 = !MDLocation(line: 1095, column: 24, scope: !2004)
!2007 = !MDLocation(line: 1095, column: 29, scope: !2004)
!2008 = !MDLocation(line: 1095, column: 38, scope: !2004)
!2009 = !MDLocation(line: 1095, column: 36, scope: !2004)
!2010 = !MDLocation(line: 1095, column: 9, scope: !107)
!2011 = !MDLocation(line: 1096, column: 9, scope: !2004)
!2012 = !MDLocation(line: 1098, column: 7, scope: !107)
!2013 = !MDLocation(line: 1098, column: 10, scope: !107)
!2014 = !MDLocation(line: 1099, column: 7, scope: !107)
!2015 = !MDLocation(line: 1099, column: 10, scope: !107)
!2016 = !MDLocation(line: 1100, column: 5, scope: !107)
!2017 = !MDLocation(line: 1101, column: 10, scope: !107)
!2018 = !MDLocation(line: 1101, column: 7, scope: !107)
!2019 = !MDLocation(line: 1102, column: 7, scope: !107)
!2020 = !MDLocation(line: 1102, column: 10, scope: !107)
!2021 = !MDLocation(line: 1104, column: 9, scope: !2022)
!2022 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1104, column: 9)
!2023 = !MDLocation(line: 1104, column: 16, scope: !2022)
!2024 = !MDLocation(line: 1104, column: 9, scope: !107)
!2025 = !MDLocation(line: 1106, column: 9, scope: !2026)
!2026 = distinct !MDLexicalBlock(scope: !2022, file: !1, line: 1105, column: 5)
!2027 = !MDLocation(line: 1107, column: 5, scope: !2026)
!2028 = !MDLocation(line: 1119, column: 11, scope: !2029)
!2029 = distinct !MDLexicalBlock(scope: !2022, file: !1, line: 1109, column: 5)
!2030 = !MDLocation(line: 1119, column: 14, scope: !2029)
!2031 = !MDLocation(line: 1120, column: 41, scope: !2029)
!2032 = !MDLocation(line: 1120, column: 39, scope: !2029)
!2033 = !MDLocation(line: 1120, column: 52, scope: !2029)
!2034 = !MDLocation(line: 1120, column: 50, scope: !2029)
!2035 = !MDLocation(line: 1120, column: 16, scope: !2029)
!2036 = !MDLocation(line: 1120, column: 11, scope: !2029)
!2037 = !MDLocation(line: 1120, column: 14, scope: !2029)
!2038 = !MDLocation(line: 1121, column: 11, scope: !2029)
!2039 = !MDLocation(line: 1121, column: 14, scope: !2029)
!2040 = !MDLocation(line: 1122, column: 41, scope: !2029)
!2041 = !MDLocation(line: 1122, column: 39, scope: !2029)
!2042 = !MDLocation(line: 1122, column: 16, scope: !2029)
!2043 = !MDLocation(line: 1122, column: 11, scope: !2029)
!2044 = !MDLocation(line: 1122, column: 14, scope: !2029)
!2045 = !MDLocation(line: 1123, column: 11, scope: !2029)
!2046 = !MDLocation(line: 1123, column: 14, scope: !2029)
!2047 = !MDLocation(line: 1124, column: 16, scope: !2029)
!2048 = !MDLocation(line: 1124, column: 25, scope: !2029)
!2049 = !MDLocation(line: 1124, column: 11, scope: !2029)
!2050 = !MDLocation(line: 1124, column: 14, scope: !2029)
!2051 = !MDLocation(line: 1125, column: 9, scope: !2029)
!2052 = !MDLocation(line: 1126, column: 14, scope: !2029)
!2053 = !MDLocation(line: 1126, column: 11, scope: !2029)
!2054 = !MDLocation(line: 1127, column: 11, scope: !2029)
!2055 = !MDLocation(line: 1127, column: 14, scope: !2029)
!2056 = !MDLocation(line: 1128, column: 11, scope: !2029)
!2057 = !MDLocation(line: 1128, column: 14, scope: !2029)
!2058 = !MDLocation(line: 1129, column: 11, scope: !2029)
!2059 = !MDLocation(line: 1129, column: 14, scope: !2029)
!2060 = !MDLocation(line: 1130, column: 16, scope: !2029)
!2061 = !MDLocation(line: 1130, column: 11, scope: !2029)
!2062 = !MDLocation(line: 1130, column: 14, scope: !2029)
!2063 = !MDLocation(line: 1131, column: 9, scope: !2029)
!2064 = !MDLocation(line: 1134, column: 9, scope: !2065)
!2065 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1134, column: 9)
!2066 = !MDLocation(line: 1134, column: 14, scope: !2065)
!2067 = !MDLocation(line: 1134, column: 9, scope: !107)
!2068 = !MDLocation(line: 1135, column: 38, scope: !2065)
!2069 = !MDLocation(line: 1135, column: 43, scope: !2065)
!2070 = !MDLocation(line: 1135, column: 48, scope: !2065)
!2071 = !MDLocation(line: 1135, column: 17, scope: !2065)
!2072 = !MDLocation(line: 1135, column: 9, scope: !2065)
!2073 = !MDLocation(line: 1141, column: 34, scope: !107)
!2074 = !MDLocation(line: 1141, column: 39, scope: !107)
!2075 = !MDLocation(line: 1141, column: 15, scope: !107)
!2076 = !MDLocation(line: 1141, column: 13, scope: !107)
!2077 = !MDLocation(line: 1142, column: 34, scope: !107)
!2078 = !MDLocation(line: 1142, column: 39, scope: !107)
!2079 = !MDLocation(line: 1142, column: 15, scope: !107)
!2080 = !MDLocation(line: 1142, column: 13, scope: !107)
!2081 = !MDLocation(line: 1143, column: 9, scope: !2082)
!2082 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1143, column: 9)
!2083 = !MDLocation(line: 1143, column: 17, scope: !2082)
!2084 = !MDLocation(line: 1143, column: 25, scope: !2082)
!2085 = !MDLocation(line: 1143, column: 28, scope: !2082)
!2086 = !MDLocation(line: 1143, column: 34, scope: !2082)
!2087 = !MDLocation(line: 1143, column: 9, scope: !107)
!2088 = !MDLocation(line: 1144, column: 9, scope: !2082)
!2089 = !MDLocation(line: 1146, column: 5, scope: !107)
!2090 = !MDLocation(line: 1146, column: 5, scope: !2091)
!2091 = distinct !MDLexicalBlock(scope: !2092, file: !1, line: 1146, column: 5)
!2092 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1146, column: 5)
!2093 = !MDLocation(line: 1146, column: 5, scope: !2092)
!2094 = !MDLocation(line: 1147, column: 5, scope: !107)
!2095 = !MDLocation(line: 1147, column: 5, scope: !2096)
!2096 = distinct !MDLexicalBlock(scope: !2097, file: !1, line: 1147, column: 5)
!2097 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1147, column: 5)
!2098 = !MDLocation(line: 1147, column: 5, scope: !2097)
!2099 = !MDLocation(line: 1150, column: 15, scope: !2100)
!2100 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1150, column: 5)
!2101 = !MDLocation(line: 1150, column: 22, scope: !2100)
!2102 = !MDLocation(line: 1150, column: 10, scope: !2100)
!2103 = !MDLocation(line: 1150, column: 27, scope: !2104)
!2104 = distinct !MDLexicalBlock(scope: !2100, file: !1, line: 1150, column: 5)
!2105 = !MDLocation(line: 1150, column: 31, scope: !2104)
!2106 = !MDLocation(line: 1150, column: 36, scope: !2104)
!2107 = !MDLocation(line: 1150, column: 29, scope: !2104)
!2108 = !MDLocation(line: 1150, column: 5, scope: !2100)
!2109 = !MDLocation(line: 1151, column: 23, scope: !2104)
!2110 = !MDLocation(line: 1151, column: 17, scope: !2104)
!2111 = !MDLocation(line: 1151, column: 32, scope: !2104)
!2112 = !MDLocation(line: 1151, column: 28, scope: !2104)
!2113 = !MDLocation(line: 1151, column: 26, scope: !2104)
!2114 = !MDLocation(line: 1151, column: 14, scope: !2104)
!2115 = !MDLocation(line: 1151, column: 9, scope: !2104)
!2116 = !MDLocation(line: 1150, column: 42, scope: !2104)
!2117 = !MDLocation(line: 1150, column: 5, scope: !2104)
!2118 = !MDLocation(line: 1152, column: 24, scope: !107)
!2119 = !MDLocation(line: 1152, column: 22, scope: !107)
!2120 = !MDLocation(line: 1154, column: 9, scope: !2121)
!2121 = distinct !MDLexicalBlock(scope: !107, file: !1, line: 1154, column: 9)
!2122 = !MDLocation(line: 1154, column: 26, scope: !2121)
!2123 = !MDLocation(line: 1154, column: 9, scope: !107)
!2124 = !MDLocation(line: 1156, column: 13, scope: !2125)
!2125 = distinct !MDLexicalBlock(scope: !2121, file: !1, line: 1155, column: 5)
!2126 = !MDLocation(line: 1157, column: 9, scope: !2125)
!2127 = !MDLocation(line: 1160, column: 5, scope: !107)
!2128 = !MDLocation(line: 1163, column: 19, scope: !107)
!2129 = !MDLocation(line: 1163, column: 5, scope: !107)
!2130 = !MDLocation(line: 1164, column: 19, scope: !107)
!2131 = !MDLocation(line: 1164, column: 5, scope: !107)
!2132 = !MDLocation(line: 1166, column: 13, scope: !107)
!2133 = !MDLocation(line: 1166, column: 5, scope: !107)
!2134 = !MDLocation(line: 1167, column: 1, scope: !107)
!2135 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !108, file: !1, line: 1173, type: !27)
!2136 = !MDLocation(line: 1173, column: 50, scope: !108)
!2137 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !108, file: !1, line: 1174, type: !67)
!2138 = !MDLocation(line: 1174, column: 27, scope: !108)
!2139 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !108, file: !1, line: 1175, type: !17)
!2140 = !MDLocation(line: 1175, column: 27, scope: !108)
!2141 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !108, file: !1, line: 1176, type: !33)
!2142 = !MDLocation(line: 1176, column: 25, scope: !108)
!2143 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !108, file: !1, line: 1177, type: !18)
!2144 = !MDLocation(line: 1177, column: 39, scope: !108)
!2145 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !108, file: !1, line: 1178, type: !71)
!2146 = !MDLocation(line: 1178, column: 34, scope: !108)
!2147 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !108, file: !1, line: 1179, type: !84)
!2148 = !MDLocation(line: 1179, column: 42, scope: !108)
!2149 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 8, scope: !108, file: !1, line: 1180, type: !70)
!2150 = !MDLocation(line: 1180, column: 36, scope: !108)
!2151 = !MDLocation(line: 1182, column: 13, scope: !108)
!2152 = !MDLocation(line: 1182, column: 18, scope: !108)
!2153 = !MDLocation(line: 1182, column: 5, scope: !108)
!2154 = !MDLocation(line: 1186, column: 55, scope: !2155)
!2155 = distinct !MDLexicalBlock(scope: !108, file: !1, line: 1183, column: 5)
!2156 = !MDLocation(line: 1186, column: 60, scope: !2155)
!2157 = !MDLocation(line: 1186, column: 67, scope: !2155)
!2158 = !MDLocation(line: 1186, column: 74, scope: !2155)
!2159 = !MDLocation(line: 1186, column: 80, scope: !2155)
!2160 = !MDLocation(line: 1187, column: 47, scope: !2155)
!2161 = !MDLocation(line: 1187, column: 56, scope: !2155)
!2162 = !MDLocation(line: 1187, column: 62, scope: !2155)
!2163 = !MDLocation(line: 1186, column: 20, scope: !2155)
!2164 = !MDLocation(line: 1186, column: 13, scope: !2155)
!2165 = !MDLocation(line: 1192, column: 49, scope: !2155)
!2166 = !MDLocation(line: 1192, column: 54, scope: !2155)
!2167 = !MDLocation(line: 1192, column: 61, scope: !2155)
!2168 = !MDLocation(line: 1192, column: 68, scope: !2155)
!2169 = !MDLocation(line: 1192, column: 74, scope: !2155)
!2170 = !MDLocation(line: 1193, column: 41, scope: !2155)
!2171 = !MDLocation(line: 1193, column: 50, scope: !2155)
!2172 = !MDLocation(line: 1193, column: 56, scope: !2155)
!2173 = !MDLocation(line: 1192, column: 20, scope: !2155)
!2174 = !MDLocation(line: 1192, column: 13, scope: !2155)
!2175 = !MDLocation(line: 1197, column: 13, scope: !2155)
!2176 = !MDLocation(line: 1199, column: 1, scope: !108)
!2177 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !109, file: !1, line: 1205, type: !27)
!2178 = !MDLocation(line: 1205, column: 61, scope: !109)
!2179 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !109, file: !1, line: 1206, type: !67)
!2180 = !MDLocation(line: 1206, column: 38, scope: !109)
!2181 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !109, file: !1, line: 1207, type: !17)
!2182 = !MDLocation(line: 1207, column: 38, scope: !109)
!2183 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !109, file: !1, line: 1208, type: !33)
!2184 = !MDLocation(line: 1208, column: 36, scope: !109)
!2185 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !109, file: !1, line: 1209, type: !18)
!2186 = !MDLocation(line: 1209, column: 50, scope: !109)
!2187 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !109, file: !1, line: 1210, type: !71)
!2188 = !MDLocation(line: 1210, column: 45, scope: !109)
!2189 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !109, file: !1, line: 1211, type: !84)
!2190 = !MDLocation(line: 1211, column: 53, scope: !109)
!2191 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mgf1_hash_id", arg: 8, scope: !109, file: !1, line: 1212, type: !18)
!2192 = !MDLocation(line: 1212, column: 50, scope: !109)
!2193 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "expected_salt_len", arg: 9, scope: !109, file: !1, line: 1213, type: !33)
!2194 = !MDLocation(line: 1213, column: 36, scope: !109)
!2195 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 10, scope: !109, file: !1, line: 1214, type: !84)
!2196 = !MDLocation(line: 1214, column: 53, scope: !109)
!2197 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !109, file: !1, line: 1216, type: !33)
!2198 = !MDLocation(line: 1216, column: 9, scope: !109)
!2199 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "siglen", scope: !109, file: !1, line: 1217, type: !20)
!2200 = !MDLocation(line: 1217, column: 12, scope: !109)
!2201 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !109, file: !1, line: 1218, type: !70)
!2202 = !MDLocation(line: 1218, column: 20, scope: !109)
!2203 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "buf", scope: !109, file: !1, line: 1219, type: !1323)
!2204 = !MDLocation(line: 1219, column: 19, scope: !109)
!2205 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "result", scope: !109, file: !1, line: 1220, type: !1059)
!2206 = !MDLocation(line: 1220, column: 19, scope: !109)
!2207 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "zeros", scope: !109, file: !1, line: 1221, type: !2208)
!2208 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 64, align: 8, elements: !2209)
!2209 = !{!2210}
!2210 = !MDSubrange(count: 8)
!2211 = !MDLocation(line: 1221, column: 19, scope: !109)
!2212 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "hlen", scope: !109, file: !1, line: 1222, type: !71)
!2213 = !MDLocation(line: 1222, column: 18, scope: !109)
!2214 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "slen", scope: !109, file: !1, line: 1223, type: !20)
!2215 = !MDLocation(line: 1223, column: 12, scope: !109)
!2216 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "msb", scope: !109, file: !1, line: 1223, type: !20)
!2217 = !MDLocation(line: 1223, column: 18, scope: !109)
!2218 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_info", scope: !109, file: !1, line: 1224, type: !137)
!2219 = !MDLocation(line: 1224, column: 30, scope: !109)
!2220 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_ctx", scope: !109, file: !1, line: 1225, type: !133)
!2221 = !MDLocation(line: 1225, column: 26, scope: !109)
!2222 = !MDLocation(line: 1227, column: 9, scope: !2223)
!2223 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1227, column: 9)
!2224 = !MDLocation(line: 1227, column: 14, scope: !2223)
!2225 = !MDLocation(line: 1227, column: 37, scope: !2223)
!2226 = !MDLocation(line: 1227, column: 40, scope: !2223)
!2227 = !MDLocation(line: 1227, column: 45, scope: !2223)
!2228 = !MDLocation(line: 1227, column: 53, scope: !2223)
!2229 = !MDLocation(line: 1227, column: 9, scope: !109)
!2230 = !MDLocation(line: 1228, column: 9, scope: !2223)
!2231 = !MDLocation(line: 1230, column: 14, scope: !109)
!2232 = !MDLocation(line: 1230, column: 19, scope: !109)
!2233 = !MDLocation(line: 1230, column: 12, scope: !109)
!2234 = !MDLocation(line: 1232, column: 9, scope: !2235)
!2235 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1232, column: 9)
!2236 = !MDLocation(line: 1232, column: 16, scope: !2235)
!2237 = !MDLocation(line: 1232, column: 21, scope: !2235)
!2238 = !MDLocation(line: 1232, column: 24, scope: !2235)
!2239 = !MDLocation(line: 1232, column: 31, scope: !2235)
!2240 = !MDLocation(line: 1232, column: 9, scope: !109)
!2241 = !MDLocation(line: 1233, column: 9, scope: !2235)
!2242 = !MDLocation(line: 1235, column: 13, scope: !109)
!2243 = !MDLocation(line: 1235, column: 18, scope: !109)
!2244 = !MDLocation(line: 1235, column: 11, scope: !109)
!2245 = !MDLocation(line: 1236, column: 34, scope: !109)
!2246 = !MDLocation(line: 1236, column: 39, scope: !109)
!2247 = !MDLocation(line: 1236, column: 44, scope: !109)
!2248 = !MDLocation(line: 1236, column: 13, scope: !109)
!2249 = !MDLocation(line: 1237, column: 34, scope: !109)
!2250 = !MDLocation(line: 1237, column: 39, scope: !109)
!2251 = !MDLocation(line: 1237, column: 46, scope: !109)
!2252 = !MDLocation(line: 1237, column: 53, scope: !109)
!2253 = !MDLocation(line: 1237, column: 58, scope: !109)
!2254 = !MDLocation(line: 1237, column: 13, scope: !109)
!2255 = !MDLocation(line: 1235, column: 9, scope: !109)
!2256 = !MDLocation(line: 1239, column: 9, scope: !2257)
!2257 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1239, column: 9)
!2258 = !MDLocation(line: 1239, column: 13, scope: !2257)
!2259 = !MDLocation(line: 1239, column: 9, scope: !109)
!2260 = !MDLocation(line: 1240, column: 17, scope: !2257)
!2261 = !MDLocation(line: 1240, column: 9, scope: !2257)
!2262 = !MDLocation(line: 1242, column: 9, scope: !109)
!2263 = !MDLocation(line: 1242, column: 7, scope: !109)
!2264 = !MDLocation(line: 1244, column: 13, scope: !2265)
!2265 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1244, column: 9)
!2266 = !MDLocation(line: 1244, column: 20, scope: !2265)
!2267 = !MDLocation(line: 1244, column: 9, scope: !2265)
!2268 = !MDLocation(line: 1244, column: 25, scope: !2265)
!2269 = !MDLocation(line: 1244, column: 9, scope: !109)
!2270 = !MDLocation(line: 1245, column: 9, scope: !2265)
!2271 = !MDLocation(line: 1247, column: 9, scope: !2272)
!2272 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1247, column: 9)
!2273 = !MDLocation(line: 1247, column: 16, scope: !2272)
!2274 = !MDLocation(line: 1247, column: 9, scope: !109)
!2275 = !MDLocation(line: 1251, column: 46, scope: !2276)
!2276 = distinct !MDLexicalBlock(scope: !2272, file: !1, line: 1248, column: 5)
!2277 = !MDLocation(line: 1251, column: 19, scope: !2276)
!2278 = !MDLocation(line: 1251, column: 17, scope: !2276)
!2279 = !MDLocation(line: 1252, column: 13, scope: !2280)
!2280 = distinct !MDLexicalBlock(scope: !2276, file: !1, line: 1252, column: 13)
!2281 = !MDLocation(line: 1252, column: 21, scope: !2280)
!2282 = !MDLocation(line: 1252, column: 13, scope: !2276)
!2283 = !MDLocation(line: 1253, column: 13, scope: !2280)
!2284 = !MDLocation(line: 1255, column: 40, scope: !2276)
!2285 = !MDLocation(line: 1255, column: 19, scope: !2276)
!2286 = !MDLocation(line: 1255, column: 17, scope: !2276)
!2287 = !MDLocation(line: 1256, column: 5, scope: !2276)
!2288 = !MDLocation(line: 1258, column: 42, scope: !109)
!2289 = !MDLocation(line: 1258, column: 15, scope: !109)
!2290 = !MDLocation(line: 1258, column: 13, scope: !109)
!2291 = !MDLocation(line: 1259, column: 9, scope: !2292)
!2292 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1259, column: 9)
!2293 = !MDLocation(line: 1259, column: 17, scope: !2292)
!2294 = !MDLocation(line: 1259, column: 9, scope: !109)
!2295 = !MDLocation(line: 1260, column: 9, scope: !2292)
!2296 = !MDLocation(line: 1262, column: 33, scope: !109)
!2297 = !MDLocation(line: 1262, column: 12, scope: !109)
!2298 = !MDLocation(line: 1262, column: 10, scope: !109)
!2299 = !MDLocation(line: 1263, column: 12, scope: !109)
!2300 = !MDLocation(line: 1263, column: 21, scope: !109)
!2301 = !MDLocation(line: 1263, column: 19, scope: !109)
!2302 = !MDLocation(line: 1263, column: 26, scope: !109)
!2303 = !MDLocation(line: 1263, column: 10, scope: !109)
!2304 = !MDLocation(line: 1265, column: 5, scope: !109)
!2305 = !MDLocation(line: 1269, column: 32, scope: !109)
!2306 = !MDLocation(line: 1269, column: 37, scope: !109)
!2307 = !MDLocation(line: 1269, column: 11, scope: !109)
!2308 = !MDLocation(line: 1269, column: 41, scope: !109)
!2309 = !MDLocation(line: 1269, column: 9, scope: !109)
!2310 = !MDLocation(line: 1273, column: 9, scope: !2311)
!2311 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1273, column: 9)
!2312 = !MDLocation(line: 1273, column: 13, scope: !2311)
!2313 = !MDLocation(line: 1273, column: 17, scope: !2311)
!2314 = !MDLocation(line: 1273, column: 9, scope: !109)
!2315 = !MDLocation(line: 1275, column: 10, scope: !2316)
!2316 = distinct !MDLexicalBlock(scope: !2311, file: !1, line: 1274, column: 5)
!2317 = !MDLocation(line: 1276, column: 16, scope: !2316)
!2318 = !MDLocation(line: 1277, column: 5, scope: !2316)
!2319 = !MDLocation(line: 1278, column: 9, scope: !2320)
!2320 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1278, column: 9)
!2321 = !MDLocation(line: 1278, column: 25, scope: !2320)
!2322 = !MDLocation(line: 1278, column: 32, scope: !2320)
!2323 = !MDLocation(line: 1278, column: 23, scope: !2320)
!2324 = !MDLocation(line: 1278, column: 38, scope: !2320)
!2325 = !MDLocation(line: 1278, column: 36, scope: !2320)
!2326 = !MDLocation(line: 1278, column: 16, scope: !2320)
!2327 = !MDLocation(line: 1278, column: 9, scope: !109)
!2328 = !MDLocation(line: 1279, column: 9, scope: !2320)
!2329 = !MDLocation(line: 1281, column: 5, scope: !109)
!2330 = !MDLocation(line: 1282, column: 32, scope: !109)
!2331 = !MDLocation(line: 1282, column: 5, scope: !109)
!2332 = !MDLocation(line: 1284, column: 15, scope: !109)
!2333 = !MDLocation(line: 1284, column: 18, scope: !109)
!2334 = !MDLocation(line: 1284, column: 27, scope: !109)
!2335 = !MDLocation(line: 1284, column: 25, scope: !109)
!2336 = !MDLocation(line: 1284, column: 32, scope: !109)
!2337 = !MDLocation(line: 1284, column: 37, scope: !109)
!2338 = !MDLocation(line: 1284, column: 41, scope: !109)
!2339 = !MDLocation(line: 1284, column: 39, scope: !109)
!2340 = !MDLocation(line: 1284, column: 50, scope: !109)
!2341 = !MDLocation(line: 1284, column: 48, scope: !109)
!2342 = !MDLocation(line: 1284, column: 55, scope: !109)
!2343 = !MDLocation(line: 1284, column: 60, scope: !109)
!2344 = !MDLocation(line: 1284, column: 5, scope: !109)
!2345 = !MDLocation(line: 1286, column: 25, scope: !109)
!2346 = !MDLocation(line: 1286, column: 32, scope: !109)
!2347 = !MDLocation(line: 1286, column: 38, scope: !109)
!2348 = !MDLocation(line: 1286, column: 36, scope: !109)
!2349 = !MDLocation(line: 1286, column: 20, scope: !109)
!2350 = !MDLocation(line: 1286, column: 5, scope: !109)
!2351 = !MDLocation(line: 1286, column: 12, scope: !109)
!2352 = !MDLocation(line: 1288, column: 5, scope: !109)
!2353 = !MDLocation(line: 1288, column: 12, scope: !109)
!2354 = !MDLocation(line: 1288, column: 16, scope: !109)
!2355 = !MDLocation(line: 1288, column: 22, scope: !109)
!2356 = !MDLocation(line: 1288, column: 20, scope: !109)
!2357 = !MDLocation(line: 1288, column: 14, scope: !109)
!2358 = !MDLocation(line: 1288, column: 29, scope: !109)
!2359 = !MDLocation(line: 1288, column: 33, scope: !109)
!2360 = !MDLocation(line: 1288, column: 32, scope: !109)
!2361 = !MDLocation(line: 1288, column: 35, scope: !109)
!2362 = !MDLocation(line: 1289, column: 10, scope: !109)
!2363 = !MDLocation(line: 1291, column: 9, scope: !2364)
!2364 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1291, column: 9)
!2365 = !MDLocation(line: 1291, column: 14, scope: !2364)
!2366 = !MDLocation(line: 1291, column: 20, scope: !2364)
!2367 = !MDLocation(line: 1291, column: 18, scope: !2364)
!2368 = !MDLocation(line: 1291, column: 11, scope: !2364)
!2369 = !MDLocation(line: 1291, column: 27, scope: !2364)
!2370 = !MDLocation(line: 1292, column: 11, scope: !2364)
!2371 = !MDLocation(line: 1292, column: 9, scope: !2364)
!2372 = !MDLocation(line: 1292, column: 14, scope: !2364)
!2373 = !MDLocation(line: 1291, column: 9, scope: !109)
!2374 = !MDLocation(line: 1294, column: 9, scope: !2375)
!2375 = distinct !MDLexicalBlock(scope: !2364, file: !1, line: 1293, column: 5)
!2376 = !MDLocation(line: 1295, column: 9, scope: !2375)
!2377 = !MDLocation(line: 1299, column: 13, scope: !109)
!2378 = !MDLocation(line: 1299, column: 17, scope: !109)
!2379 = !MDLocation(line: 1299, column: 15, scope: !109)
!2380 = !MDLocation(line: 1299, column: 10, scope: !109)
!2381 = !MDLocation(line: 1301, column: 9, scope: !2382)
!2382 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1301, column: 9)
!2383 = !MDLocation(line: 1301, column: 27, scope: !2382)
!2384 = !MDLocation(line: 1301, column: 55, scope: !2382)
!2385 = !MDLocation(line: 1302, column: 9, scope: !2382)
!2386 = !MDLocation(line: 1302, column: 26, scope: !2382)
!2387 = !MDLocation(line: 1302, column: 17, scope: !2382)
!2388 = !MDLocation(line: 1302, column: 14, scope: !2382)
!2389 = !MDLocation(line: 1301, column: 9, scope: !109)
!2390 = !MDLocation(line: 1304, column: 9, scope: !2391)
!2391 = distinct !MDLexicalBlock(scope: !2382, file: !1, line: 1303, column: 5)
!2392 = !MDLocation(line: 1305, column: 9, scope: !2391)
!2393 = !MDLocation(line: 1310, column: 5, scope: !109)
!2394 = !MDLocation(line: 1311, column: 33, scope: !109)
!2395 = !MDLocation(line: 1311, column: 5, scope: !109)
!2396 = !MDLocation(line: 1312, column: 33, scope: !109)
!2397 = !MDLocation(line: 1312, column: 39, scope: !109)
!2398 = !MDLocation(line: 1312, column: 5, scope: !109)
!2399 = !MDLocation(line: 1313, column: 33, scope: !109)
!2400 = !MDLocation(line: 1313, column: 36, scope: !109)
!2401 = !MDLocation(line: 1313, column: 5, scope: !109)
!2402 = !MDLocation(line: 1314, column: 33, scope: !109)
!2403 = !MDLocation(line: 1314, column: 5, scope: !109)
!2404 = !MDLocation(line: 1316, column: 5, scope: !109)
!2405 = !MDLocation(line: 1318, column: 17, scope: !2406)
!2406 = distinct !MDLexicalBlock(scope: !109, file: !1, line: 1318, column: 9)
!2407 = !MDLocation(line: 1318, column: 21, scope: !2406)
!2408 = !MDLocation(line: 1318, column: 19, scope: !2406)
!2409 = !MDLocation(line: 1318, column: 27, scope: !2406)
!2410 = !MDLocation(line: 1318, column: 35, scope: !2406)
!2411 = !MDLocation(line: 1318, column: 9, scope: !2406)
!2412 = !MDLocation(line: 1318, column: 42, scope: !2406)
!2413 = !MDLocation(line: 1318, column: 9, scope: !109)
!2414 = !MDLocation(line: 1319, column: 9, scope: !2406)
!2415 = !MDLocation(line: 1321, column: 9, scope: !2406)
!2416 = !MDLocation(line: 1322, column: 1, scope: !109)
!2417 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !112, file: !1, line: 1327, type: !27)
!2418 = !MDLocation(line: 1327, column: 57, scope: !112)
!2419 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !112, file: !1, line: 1328, type: !67)
!2420 = !MDLocation(line: 1328, column: 34, scope: !112)
!2421 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !112, file: !1, line: 1329, type: !17)
!2422 = !MDLocation(line: 1329, column: 34, scope: !112)
!2423 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !112, file: !1, line: 1330, type: !33)
!2424 = !MDLocation(line: 1330, column: 32, scope: !112)
!2425 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !112, file: !1, line: 1331, type: !18)
!2426 = !MDLocation(line: 1331, column: 46, scope: !112)
!2427 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !112, file: !1, line: 1332, type: !71)
!2428 = !MDLocation(line: 1332, column: 41, scope: !112)
!2429 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !112, file: !1, line: 1333, type: !84)
!2430 = !MDLocation(line: 1333, column: 49, scope: !112)
!2431 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 8, scope: !112, file: !1, line: 1334, type: !84)
!2432 = !MDLocation(line: 1334, column: 49, scope: !112)
!2433 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "mgf1_hash_id", scope: !112, file: !1, line: 1336, type: !18)
!2434 = !MDLocation(line: 1336, column: 23, scope: !112)
!2435 = !MDLocation(line: 1336, column: 40, scope: !112)
!2436 = !MDLocation(line: 1336, column: 45, scope: !112)
!2437 = !MDLocation(line: 1336, column: 53, scope: !112)
!2438 = !MDLocation(line: 1336, column: 38, scope: !112)
!2439 = !MDLocation(line: 1337, column: 52, scope: !112)
!2440 = !MDLocation(line: 1337, column: 57, scope: !112)
!2441 = !MDLocation(line: 1338, column: 32, scope: !112)
!2442 = !MDLocation(line: 1340, column: 48, scope: !112)
!2443 = !MDLocation(line: 1340, column: 53, scope: !112)
!2444 = !MDLocation(line: 1340, column: 60, scope: !112)
!2445 = !MDLocation(line: 1340, column: 67, scope: !112)
!2446 = !MDLocation(line: 1341, column: 40, scope: !112)
!2447 = !MDLocation(line: 1341, column: 48, scope: !112)
!2448 = !MDLocation(line: 1341, column: 57, scope: !112)
!2449 = !MDLocation(line: 1342, column: 40, scope: !112)
!2450 = !MDLocation(line: 1343, column: 40, scope: !112)
!2451 = !MDLocation(line: 1340, column: 13, scope: !112)
!2452 = !MDLocation(line: 1340, column: 5, scope: !112)
!2453 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !115, file: !1, line: 1352, type: !27)
!2454 = !MDLocation(line: 1352, column: 63, scope: !115)
!2455 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !115, file: !1, line: 1353, type: !67)
!2456 = !MDLocation(line: 1353, column: 40, scope: !115)
!2457 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !115, file: !1, line: 1354, type: !17)
!2458 = !MDLocation(line: 1354, column: 40, scope: !115)
!2459 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !115, file: !1, line: 1355, type: !33)
!2460 = !MDLocation(line: 1355, column: 38, scope: !115)
!2461 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !115, file: !1, line: 1356, type: !18)
!2462 = !MDLocation(line: 1356, column: 52, scope: !115)
!2463 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !115, file: !1, line: 1357, type: !71)
!2464 = !MDLocation(line: 1357, column: 47, scope: !115)
!2465 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !115, file: !1, line: 1358, type: !84)
!2466 = !MDLocation(line: 1358, column: 55, scope: !115)
!2467 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 8, scope: !115, file: !1, line: 1359, type: !84)
!2468 = !MDLocation(line: 1359, column: 55, scope: !115)
!2469 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !115, file: !1, line: 1361, type: !33)
!2470 = !MDLocation(line: 1361, column: 9, scope: !115)
!2471 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "len", scope: !115, file: !1, line: 1362, type: !20)
!2472 = !MDLocation(line: 1362, column: 12, scope: !115)
!2473 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "siglen", scope: !115, file: !1, line: 1362, type: !20)
!2474 = !MDLocation(line: 1362, column: 17, scope: !115)
!2475 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "asn1_len", scope: !115, file: !1, line: 1362, type: !20)
!2476 = !MDLocation(line: 1362, column: 25, scope: !115)
!2477 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "p", scope: !115, file: !1, line: 1363, type: !70)
!2478 = !MDLocation(line: 1363, column: 20, scope: !115)
!2479 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "end", scope: !115, file: !1, line: 1363, type: !70)
!2480 = !MDLocation(line: 1363, column: 24, scope: !115)
!2481 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "buf", scope: !115, file: !1, line: 1364, type: !1323)
!2482 = !MDLocation(line: 1364, column: 19, scope: !115)
!2483 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "msg_md_alg", scope: !115, file: !1, line: 1365, type: !18)
!2484 = !MDLocation(line: 1365, column: 23, scope: !115)
!2485 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "md_info", scope: !115, file: !1, line: 1366, type: !137)
!2486 = !MDLocation(line: 1366, column: 30, scope: !115)
!2487 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "oid", scope: !115, file: !1, line: 1367, type: !2488)
!2488 = !MDDerivedType(tag: DW_TAG_typedef, name: "mbedtls_asn1_buf", file: !1, line: 113, baseType: !2489)
!2489 = !MDCompositeType(tag: DW_TAG_structure_type, name: "mbedtls_asn1_buf", file: !1, line: 107, size: 192, align: 64, elements: !2490)
!2490 = !{!2491, !2492, !2493}
!2491 = !MDDerivedType(tag: DW_TAG_member, name: "tag", scope: !2489, file: !1, line: 109, baseType: !33, size: 32, align: 32)
!2492 = !MDDerivedType(tag: DW_TAG_member, name: "len", scope: !2489, file: !1, line: 110, baseType: !20, size: 64, align: 64, offset: 64)
!2493 = !MDDerivedType(tag: DW_TAG_member, name: "p", scope: !2489, file: !1, line: 111, baseType: !70, size: 64, align: 64, offset: 128)
!2494 = !MDLocation(line: 1367, column: 22, scope: !115)
!2495 = !MDLocation(line: 1369, column: 9, scope: !2496)
!2496 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1369, column: 9)
!2497 = !MDLocation(line: 1369, column: 14, scope: !2496)
!2498 = !MDLocation(line: 1369, column: 37, scope: !2496)
!2499 = !MDLocation(line: 1369, column: 40, scope: !2496)
!2500 = !MDLocation(line: 1369, column: 45, scope: !2496)
!2501 = !MDLocation(line: 1369, column: 53, scope: !2496)
!2502 = !MDLocation(line: 1369, column: 9, scope: !115)
!2503 = !MDLocation(line: 1370, column: 9, scope: !2496)
!2504 = !MDLocation(line: 1372, column: 14, scope: !115)
!2505 = !MDLocation(line: 1372, column: 19, scope: !115)
!2506 = !MDLocation(line: 1372, column: 12, scope: !115)
!2507 = !MDLocation(line: 1374, column: 9, scope: !2508)
!2508 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1374, column: 9)
!2509 = !MDLocation(line: 1374, column: 16, scope: !2508)
!2510 = !MDLocation(line: 1374, column: 21, scope: !2508)
!2511 = !MDLocation(line: 1374, column: 24, scope: !2508)
!2512 = !MDLocation(line: 1374, column: 31, scope: !2508)
!2513 = !MDLocation(line: 1374, column: 9, scope: !115)
!2514 = !MDLocation(line: 1375, column: 9, scope: !2508)
!2515 = !MDLocation(line: 1377, column: 13, scope: !115)
!2516 = !MDLocation(line: 1377, column: 18, scope: !115)
!2517 = !MDLocation(line: 1377, column: 11, scope: !115)
!2518 = !MDLocation(line: 1378, column: 34, scope: !115)
!2519 = !MDLocation(line: 1378, column: 39, scope: !115)
!2520 = !MDLocation(line: 1378, column: 44, scope: !115)
!2521 = !MDLocation(line: 1378, column: 13, scope: !115)
!2522 = !MDLocation(line: 1379, column: 34, scope: !115)
!2523 = !MDLocation(line: 1379, column: 39, scope: !115)
!2524 = !MDLocation(line: 1379, column: 46, scope: !115)
!2525 = !MDLocation(line: 1379, column: 53, scope: !115)
!2526 = !MDLocation(line: 1379, column: 58, scope: !115)
!2527 = !MDLocation(line: 1379, column: 13, scope: !115)
!2528 = !MDLocation(line: 1377, column: 9, scope: !115)
!2529 = !MDLocation(line: 1381, column: 9, scope: !2530)
!2530 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1381, column: 9)
!2531 = !MDLocation(line: 1381, column: 13, scope: !2530)
!2532 = !MDLocation(line: 1381, column: 9, scope: !115)
!2533 = !MDLocation(line: 1382, column: 17, scope: !2530)
!2534 = !MDLocation(line: 1382, column: 9, scope: !2530)
!2535 = !MDLocation(line: 1384, column: 9, scope: !115)
!2536 = !MDLocation(line: 1384, column: 7, scope: !115)
!2537 = !MDLocation(line: 1386, column: 11, scope: !2538)
!2538 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1386, column: 9)
!2539 = !MDLocation(line: 1386, column: 9, scope: !2538)
!2540 = !MDLocation(line: 1386, column: 14, scope: !2538)
!2541 = !MDLocation(line: 1386, column: 19, scope: !2538)
!2542 = !MDLocation(line: 1386, column: 24, scope: !2538)
!2543 = !MDLocation(line: 1386, column: 22, scope: !2538)
!2544 = !MDLocation(line: 1386, column: 27, scope: !2538)
!2545 = !MDLocation(line: 1386, column: 9, scope: !115)
!2546 = !MDLocation(line: 1387, column: 9, scope: !2538)
!2547 = !MDLocation(line: 1389, column: 5, scope: !115)
!2548 = !MDLocation(line: 1389, column: 13, scope: !115)
!2549 = !MDLocation(line: 1389, column: 12, scope: !115)
!2550 = !MDLocation(line: 1389, column: 15, scope: !115)
!2551 = !MDLocation(line: 1391, column: 13, scope: !2552)
!2552 = distinct !MDLexicalBlock(scope: !2553, file: !1, line: 1391, column: 13)
!2553 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1390, column: 5)
!2554 = !MDLocation(line: 1391, column: 18, scope: !2552)
!2555 = !MDLocation(line: 1391, column: 24, scope: !2552)
!2556 = !MDLocation(line: 1391, column: 22, scope: !2552)
!2557 = !MDLocation(line: 1391, column: 31, scope: !2552)
!2558 = !MDLocation(line: 1391, column: 15, scope: !2552)
!2559 = !MDLocation(line: 1391, column: 35, scope: !2552)
!2560 = !MDLocation(line: 1391, column: 39, scope: !2552)
!2561 = !MDLocation(line: 1391, column: 38, scope: !2552)
!2562 = !MDLocation(line: 1391, column: 41, scope: !2552)
!2563 = !MDLocation(line: 1391, column: 13, scope: !2553)
!2564 = !MDLocation(line: 1392, column: 13, scope: !2552)
!2565 = !MDLocation(line: 1393, column: 10, scope: !2553)
!2566 = !MDLocation(line: 1395, column: 6, scope: !115)
!2567 = !MDLocation(line: 1397, column: 11, scope: !115)
!2568 = !MDLocation(line: 1397, column: 22, scope: !115)
!2569 = !MDLocation(line: 1397, column: 26, scope: !115)
!2570 = !MDLocation(line: 1397, column: 24, scope: !115)
!2571 = !MDLocation(line: 1397, column: 18, scope: !115)
!2572 = !MDLocation(line: 1397, column: 9, scope: !115)
!2573 = !MDLocation(line: 1399, column: 9, scope: !2574)
!2574 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1399, column: 9)
!2575 = !MDLocation(line: 1399, column: 16, scope: !2574)
!2576 = !MDLocation(line: 1399, column: 13, scope: !2574)
!2577 = !MDLocation(line: 1399, column: 24, scope: !2574)
!2578 = !MDLocation(line: 1399, column: 27, scope: !2574)
!2579 = !MDLocation(line: 1399, column: 34, scope: !2574)
!2580 = !MDLocation(line: 1399, column: 9, scope: !115)
!2581 = !MDLocation(line: 1401, column: 21, scope: !2582)
!2582 = distinct !MDLexicalBlock(scope: !2583, file: !1, line: 1401, column: 13)
!2583 = distinct !MDLexicalBlock(scope: !2574, file: !1, line: 1400, column: 5)
!2584 = !MDLocation(line: 1401, column: 24, scope: !2582)
!2585 = !MDLocation(line: 1401, column: 30, scope: !2582)
!2586 = !MDLocation(line: 1401, column: 13, scope: !2582)
!2587 = !MDLocation(line: 1401, column: 40, scope: !2582)
!2588 = !MDLocation(line: 1401, column: 13, scope: !2583)
!2589 = !MDLocation(line: 1402, column: 13, scope: !2582)
!2590 = !MDLocation(line: 1404, column: 13, scope: !2582)
!2591 = !MDLocation(line: 1407, column: 42, scope: !115)
!2592 = !MDLocation(line: 1407, column: 15, scope: !115)
!2593 = !MDLocation(line: 1407, column: 13, scope: !115)
!2594 = !MDLocation(line: 1408, column: 9, scope: !2595)
!2595 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1408, column: 9)
!2596 = !MDLocation(line: 1408, column: 17, scope: !2595)
!2597 = !MDLocation(line: 1408, column: 9, scope: !115)
!2598 = !MDLocation(line: 1409, column: 9, scope: !2595)
!2599 = !MDLocation(line: 1410, column: 36, scope: !115)
!2600 = !MDLocation(line: 1410, column: 15, scope: !115)
!2601 = !MDLocation(line: 1410, column: 13, scope: !115)
!2602 = !MDLocation(line: 1412, column: 11, scope: !115)
!2603 = !MDLocation(line: 1412, column: 15, scope: !115)
!2604 = !MDLocation(line: 1412, column: 13, scope: !115)
!2605 = !MDLocation(line: 1412, column: 9, scope: !115)
!2606 = !MDLocation(line: 1416, column: 43, scope: !2607)
!2607 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1416, column: 9)
!2608 = !MDLocation(line: 1416, column: 17, scope: !2607)
!2609 = !MDLocation(line: 1416, column: 15, scope: !2607)
!2610 = !MDLocation(line: 1417, column: 66, scope: !2607)
!2611 = !MDLocation(line: 1416, column: 9, scope: !115)
!2612 = !MDLocation(line: 1418, column: 9, scope: !2607)
!2613 = !MDLocation(line: 1420, column: 9, scope: !2614)
!2614 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1420, column: 9)
!2615 = !MDLocation(line: 1420, column: 18, scope: !2614)
!2616 = !MDLocation(line: 1420, column: 25, scope: !2614)
!2617 = !MDLocation(line: 1420, column: 22, scope: !2614)
!2618 = !MDLocation(line: 1420, column: 9, scope: !115)
!2619 = !MDLocation(line: 1421, column: 9, scope: !2614)
!2620 = !MDLocation(line: 1423, column: 43, scope: !2621)
!2621 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1423, column: 9)
!2622 = !MDLocation(line: 1423, column: 17, scope: !2621)
!2623 = !MDLocation(line: 1423, column: 15, scope: !2621)
!2624 = !MDLocation(line: 1424, column: 66, scope: !2621)
!2625 = !MDLocation(line: 1423, column: 9, scope: !115)
!2626 = !MDLocation(line: 1425, column: 9, scope: !2621)
!2627 = !MDLocation(line: 1427, column: 9, scope: !2628)
!2628 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1427, column: 9)
!2629 = !MDLocation(line: 1427, column: 18, scope: !2628)
!2630 = !MDLocation(line: 1427, column: 24, scope: !2628)
!2631 = !MDLocation(line: 1427, column: 22, scope: !2628)
!2632 = !MDLocation(line: 1427, column: 35, scope: !2628)
!2633 = !MDLocation(line: 1427, column: 32, scope: !2628)
!2634 = !MDLocation(line: 1427, column: 9, scope: !115)
!2635 = !MDLocation(line: 1428, column: 9, scope: !2628)
!2636 = !MDLocation(line: 1430, column: 43, scope: !2637)
!2637 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1430, column: 9)
!2638 = !MDLocation(line: 1430, column: 53, scope: !2637)
!2639 = !MDLocation(line: 1430, column: 17, scope: !2637)
!2640 = !MDLocation(line: 1430, column: 15, scope: !2637)
!2641 = !MDLocation(line: 1430, column: 79, scope: !2637)
!2642 = !MDLocation(line: 1430, column: 9, scope: !115)
!2643 = !MDLocation(line: 1431, column: 9, scope: !2637)
!2644 = !MDLocation(line: 1433, column: 13, scope: !115)
!2645 = !MDLocation(line: 1433, column: 9, scope: !115)
!2646 = !MDLocation(line: 1433, column: 11, scope: !115)
!2647 = !MDLocation(line: 1434, column: 14, scope: !115)
!2648 = !MDLocation(line: 1434, column: 7, scope: !115)
!2649 = !MDLocation(line: 1436, column: 9, scope: !2650)
!2650 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1436, column: 9)
!2651 = !MDLocation(line: 1436, column: 53, scope: !2650)
!2652 = !MDLocation(line: 1436, column: 9, scope: !115)
!2653 = !MDLocation(line: 1437, column: 9, scope: !2650)
!2654 = !MDLocation(line: 1439, column: 9, scope: !2655)
!2655 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1439, column: 9)
!2656 = !MDLocation(line: 1439, column: 19, scope: !2655)
!2657 = !MDLocation(line: 1439, column: 16, scope: !2655)
!2658 = !MDLocation(line: 1439, column: 9, scope: !115)
!2659 = !MDLocation(line: 1440, column: 9, scope: !2655)
!2660 = !MDLocation(line: 1445, column: 43, scope: !2661)
!2661 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1445, column: 9)
!2662 = !MDLocation(line: 1445, column: 17, scope: !2661)
!2663 = !MDLocation(line: 1445, column: 15, scope: !2661)
!2664 = !MDLocation(line: 1445, column: 81, scope: !2661)
!2665 = !MDLocation(line: 1445, column: 9, scope: !115)
!2666 = !MDLocation(line: 1446, column: 9, scope: !2661)
!2667 = !MDLocation(line: 1448, column: 43, scope: !2668)
!2668 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1448, column: 9)
!2669 = !MDLocation(line: 1448, column: 17, scope: !2668)
!2670 = !MDLocation(line: 1448, column: 15, scope: !2668)
!2671 = !MDLocation(line: 1448, column: 89, scope: !2668)
!2672 = !MDLocation(line: 1448, column: 9, scope: !115)
!2673 = !MDLocation(line: 1449, column: 9, scope: !2668)
!2674 = !MDLocation(line: 1451, column: 9, scope: !2675)
!2675 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1451, column: 9)
!2676 = !MDLocation(line: 1451, column: 21, scope: !2675)
!2677 = !MDLocation(line: 1451, column: 18, scope: !2675)
!2678 = !MDLocation(line: 1451, column: 9, scope: !115)
!2679 = !MDLocation(line: 1452, column: 9, scope: !2675)
!2680 = !MDLocation(line: 1454, column: 17, scope: !2681)
!2681 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1454, column: 9)
!2682 = !MDLocation(line: 1454, column: 20, scope: !2681)
!2683 = !MDLocation(line: 1454, column: 26, scope: !2681)
!2684 = !MDLocation(line: 1454, column: 9, scope: !2681)
!2685 = !MDLocation(line: 1454, column: 36, scope: !2681)
!2686 = !MDLocation(line: 1454, column: 9, scope: !115)
!2687 = !MDLocation(line: 1455, column: 9, scope: !2681)
!2688 = !MDLocation(line: 1457, column: 10, scope: !115)
!2689 = !MDLocation(line: 1457, column: 7, scope: !115)
!2690 = !MDLocation(line: 1459, column: 9, scope: !2691)
!2691 = distinct !MDLexicalBlock(scope: !115, file: !1, line: 1459, column: 9)
!2692 = !MDLocation(line: 1459, column: 14, scope: !2691)
!2693 = !MDLocation(line: 1459, column: 11, scope: !2691)
!2694 = !MDLocation(line: 1459, column: 9, scope: !115)
!2695 = !MDLocation(line: 1460, column: 9, scope: !2691)
!2696 = !MDLocation(line: 1462, column: 5, scope: !115)
!2697 = !MDLocation(line: 1463, column: 1, scope: !115)
!2698 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "ctx", arg: 1, scope: !116, file: !1, line: 1469, type: !27)
!2699 = !MDLocation(line: 1469, column: 52, scope: !116)
!2700 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "f_rng", arg: 2, scope: !116, file: !1, line: 1470, type: !67)
!2701 = !MDLocation(line: 1470, column: 29, scope: !116)
!2702 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "p_rng", arg: 3, scope: !116, file: !1, line: 1471, type: !17)
!2703 = !MDLocation(line: 1471, column: 29, scope: !116)
!2704 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "mode", arg: 4, scope: !116, file: !1, line: 1472, type: !33)
!2705 = !MDLocation(line: 1472, column: 27, scope: !116)
!2706 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "md_alg", arg: 5, scope: !116, file: !1, line: 1473, type: !18)
!2707 = !MDLocation(line: 1473, column: 41, scope: !116)
!2708 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hashlen", arg: 6, scope: !116, file: !1, line: 1474, type: !71)
!2709 = !MDLocation(line: 1474, column: 36, scope: !116)
!2710 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "hash", arg: 7, scope: !116, file: !1, line: 1475, type: !84)
!2711 = !MDLocation(line: 1475, column: 44, scope: !116)
!2712 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "sig", arg: 8, scope: !116, file: !1, line: 1476, type: !84)
!2713 = !MDLocation(line: 1476, column: 44, scope: !116)
!2714 = !MDLocation(line: 1478, column: 13, scope: !116)
!2715 = !MDLocation(line: 1478, column: 18, scope: !116)
!2716 = !MDLocation(line: 1478, column: 5, scope: !116)
!2717 = !MDLocation(line: 1482, column: 57, scope: !2718)
!2718 = distinct !MDLexicalBlock(scope: !116, file: !1, line: 1479, column: 5)
!2719 = !MDLocation(line: 1482, column: 62, scope: !2718)
!2720 = !MDLocation(line: 1482, column: 69, scope: !2718)
!2721 = !MDLocation(line: 1482, column: 76, scope: !2718)
!2722 = !MDLocation(line: 1482, column: 82, scope: !2718)
!2723 = !MDLocation(line: 1483, column: 49, scope: !2718)
!2724 = !MDLocation(line: 1483, column: 58, scope: !2718)
!2725 = !MDLocation(line: 1483, column: 64, scope: !2718)
!2726 = !MDLocation(line: 1482, column: 20, scope: !2718)
!2727 = !MDLocation(line: 1482, column: 13, scope: !2718)
!2728 = !MDLocation(line: 1488, column: 51, scope: !2718)
!2729 = !MDLocation(line: 1488, column: 56, scope: !2718)
!2730 = !MDLocation(line: 1488, column: 63, scope: !2718)
!2731 = !MDLocation(line: 1488, column: 70, scope: !2718)
!2732 = !MDLocation(line: 1488, column: 76, scope: !2718)
!2733 = !MDLocation(line: 1489, column: 43, scope: !2718)
!2734 = !MDLocation(line: 1489, column: 52, scope: !2718)
!2735 = !MDLocation(line: 1489, column: 58, scope: !2718)
!2736 = !MDLocation(line: 1488, column: 20, scope: !2718)
!2737 = !MDLocation(line: 1488, column: 13, scope: !2718)
!2738 = !MDLocation(line: 1493, column: 13, scope: !2718)
!2739 = !MDLocation(line: 1495, column: 1, scope: !116)
!2740 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "dst", arg: 1, scope: !117, file: !1, line: 1500, type: !27)
!2741 = !MDLocation(line: 1500, column: 44, scope: !117)
!2742 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "src", arg: 2, scope: !117, file: !1, line: 1500, type: !75)
!2743 = !MDLocation(line: 1500, column: 76, scope: !117)
!2744 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !117, file: !1, line: 1502, type: !33)
!2745 = !MDLocation(line: 1502, column: 9, scope: !117)
!2746 = !MDLocation(line: 1504, column: 16, scope: !117)
!2747 = !MDLocation(line: 1504, column: 21, scope: !117)
!2748 = !MDLocation(line: 1504, column: 5, scope: !117)
!2749 = !MDLocation(line: 1504, column: 10, scope: !117)
!2750 = !MDLocation(line: 1504, column: 14, scope: !117)
!2751 = !MDLocation(line: 1505, column: 16, scope: !117)
!2752 = !MDLocation(line: 1505, column: 21, scope: !117)
!2753 = !MDLocation(line: 1505, column: 5, scope: !117)
!2754 = !MDLocation(line: 1505, column: 10, scope: !117)
!2755 = !MDLocation(line: 1505, column: 14, scope: !117)
!2756 = !MDLocation(line: 1507, column: 5, scope: !117)
!2757 = !MDLocation(line: 1507, column: 5, scope: !2758)
!2758 = distinct !MDLexicalBlock(scope: !2759, file: !1, line: 1507, column: 5)
!2759 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1507, column: 5)
!2760 = !MDLocation(line: 1507, column: 5, scope: !2759)
!2761 = !MDLocation(line: 1508, column: 5, scope: !117)
!2762 = !MDLocation(line: 1508, column: 5, scope: !2763)
!2763 = distinct !MDLexicalBlock(scope: !2764, file: !1, line: 1508, column: 5)
!2764 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1508, column: 5)
!2765 = !MDLocation(line: 1508, column: 5, scope: !2764)
!2766 = !MDLocation(line: 1510, column: 5, scope: !117)
!2767 = !MDLocation(line: 1510, column: 5, scope: !2768)
!2768 = distinct !MDLexicalBlock(scope: !2769, file: !1, line: 1510, column: 5)
!2769 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1510, column: 5)
!2770 = !MDLocation(line: 1510, column: 5, scope: !2769)
!2771 = !MDLocation(line: 1511, column: 5, scope: !117)
!2772 = !MDLocation(line: 1511, column: 5, scope: !2773)
!2773 = distinct !MDLexicalBlock(scope: !2774, file: !1, line: 1511, column: 5)
!2774 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1511, column: 5)
!2775 = !MDLocation(line: 1511, column: 5, scope: !2774)
!2776 = !MDLocation(line: 1512, column: 5, scope: !117)
!2777 = !MDLocation(line: 1512, column: 5, scope: !2778)
!2778 = distinct !MDLexicalBlock(scope: !2779, file: !1, line: 1512, column: 5)
!2779 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1512, column: 5)
!2780 = !MDLocation(line: 1512, column: 5, scope: !2779)
!2781 = !MDLocation(line: 1513, column: 5, scope: !117)
!2782 = !MDLocation(line: 1513, column: 5, scope: !2783)
!2783 = distinct !MDLexicalBlock(scope: !2784, file: !1, line: 1513, column: 5)
!2784 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1513, column: 5)
!2785 = !MDLocation(line: 1513, column: 5, scope: !2784)
!2786 = !MDLocation(line: 1514, column: 5, scope: !117)
!2787 = !MDLocation(line: 1514, column: 5, scope: !2788)
!2788 = distinct !MDLexicalBlock(scope: !2789, file: !1, line: 1514, column: 5)
!2789 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1514, column: 5)
!2790 = !MDLocation(line: 1514, column: 5, scope: !2789)
!2791 = !MDLocation(line: 1515, column: 5, scope: !117)
!2792 = !MDLocation(line: 1515, column: 5, scope: !2793)
!2793 = distinct !MDLexicalBlock(scope: !2794, file: !1, line: 1515, column: 5)
!2794 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1515, column: 5)
!2795 = !MDLocation(line: 1515, column: 5, scope: !2794)
!2796 = !MDLocation(line: 1517, column: 5, scope: !117)
!2797 = !MDLocation(line: 1517, column: 5, scope: !2798)
!2798 = distinct !MDLexicalBlock(scope: !2799, file: !1, line: 1517, column: 5)
!2799 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1517, column: 5)
!2800 = !MDLocation(line: 1517, column: 5, scope: !2799)
!2801 = !MDLocation(line: 1518, column: 5, scope: !117)
!2802 = !MDLocation(line: 1518, column: 5, scope: !2803)
!2803 = distinct !MDLexicalBlock(scope: !2804, file: !1, line: 1518, column: 5)
!2804 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1518, column: 5)
!2805 = !MDLocation(line: 1518, column: 5, scope: !2804)
!2806 = !MDLocation(line: 1519, column: 5, scope: !117)
!2807 = !MDLocation(line: 1519, column: 5, scope: !2808)
!2808 = distinct !MDLexicalBlock(scope: !2809, file: !1, line: 1519, column: 5)
!2809 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1519, column: 5)
!2810 = !MDLocation(line: 1519, column: 5, scope: !2809)
!2811 = !MDLocation(line: 1521, column: 5, scope: !117)
!2812 = !MDLocation(line: 1521, column: 5, scope: !2813)
!2813 = distinct !MDLexicalBlock(scope: !2814, file: !1, line: 1521, column: 5)
!2814 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1521, column: 5)
!2815 = !MDLocation(line: 1521, column: 5, scope: !2814)
!2816 = !MDLocation(line: 1522, column: 5, scope: !117)
!2817 = !MDLocation(line: 1522, column: 5, scope: !2818)
!2818 = distinct !MDLexicalBlock(scope: !2819, file: !1, line: 1522, column: 5)
!2819 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1522, column: 5)
!2820 = !MDLocation(line: 1522, column: 5, scope: !2819)
!2821 = !MDLocation(line: 1524, column: 20, scope: !117)
!2822 = !MDLocation(line: 1524, column: 25, scope: !117)
!2823 = !MDLocation(line: 1524, column: 5, scope: !117)
!2824 = !MDLocation(line: 1524, column: 10, scope: !117)
!2825 = !MDLocation(line: 1524, column: 18, scope: !117)
!2826 = !MDLocation(line: 1525, column: 20, scope: !117)
!2827 = !MDLocation(line: 1525, column: 25, scope: !117)
!2828 = !MDLocation(line: 1525, column: 5, scope: !117)
!2829 = !MDLocation(line: 1525, column: 10, scope: !117)
!2830 = !MDLocation(line: 1525, column: 18, scope: !117)
!2831 = !MDLocation(line: 1528, column: 9, scope: !2832)
!2832 = distinct !MDLexicalBlock(scope: !117, file: !1, line: 1528, column: 9)
!2833 = !MDLocation(line: 1528, column: 13, scope: !2832)
!2834 = !MDLocation(line: 1528, column: 9, scope: !117)
!2835 = !MDLocation(line: 1529, column: 27, scope: !2832)
!2836 = !MDLocation(line: 1529, column: 9, scope: !2832)
!2837 = !MDLocation(line: 1531, column: 13, scope: !117)
!2838 = !MDLocation(line: 1531, column: 5, scope: !117)
!2839 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "verbose", arg: 1, scope: !123, file: !1, line: 1631, type: !33)
!2840 = !MDLocation(line: 1631, column: 32, scope: !123)
!2841 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "key", arg: 2, scope: !123, file: !1, line: 1631, type: !36)
!2842 = !MDLocation(line: 1631, column: 53, scope: !123)
!2843 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "ret", scope: !123, file: !1, line: 1633, type: !33)
!2844 = !MDLocation(line: 1633, column: 9, scope: !123)
!2845 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "len", scope: !123, file: !1, line: 1635, type: !20)
!2846 = !MDLocation(line: 1635, column: 12, scope: !123)
!2847 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rsa", scope: !123, file: !1, line: 1636, type: !28)
!2848 = !MDLocation(line: 1636, column: 25, scope: !123)
!2849 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rsa_plaintext", scope: !123, file: !1, line: 1637, type: !2850)
!2850 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 192, align: 8, elements: !2851)
!2851 = !{!2852}
!2852 = !MDSubrange(count: 24)
!2853 = !MDLocation(line: 1637, column: 19, scope: !123)
!2854 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rsa_decrypted", scope: !123, file: !1, line: 1638, type: !2850)
!2855 = !MDLocation(line: 1638, column: 19, scope: !123)
!2856 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "rsa_ciphertext", scope: !123, file: !1, line: 1639, type: !2857)
!2857 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 1024, align: 8, elements: !2858)
!2858 = !{!2859}
!2859 = !MDSubrange(count: 128)
!2860 = !MDLocation(line: 1639, column: 19, scope: !123)
!2861 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "sha1sum", scope: !123, file: !1, line: 1641, type: !2862)
!2862 = !MDCompositeType(tag: DW_TAG_array_type, baseType: !19, size: 160, align: 8, elements: !2863)
!2863 = !{!2864}
!2864 = !MDSubrange(count: 20)
!2865 = !MDLocation(line: 1641, column: 19, scope: !123)
!2866 = !MDLocation(line: 1644, column: 5, scope: !123)
!2867 = !MDLocation(line: 1646, column: 9, scope: !123)
!2868 = !MDLocation(line: 1646, column: 13, scope: !123)
!2869 = !MDLocation(line: 1647, column: 5, scope: !123)
!2870 = !MDLocation(line: 1647, column: 5, scope: !2871)
!2871 = distinct !MDLexicalBlock(scope: !2872, file: !1, line: 1647, column: 5)
!2872 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1647, column: 5)
!2873 = !MDLocation(line: 1647, column: 5, scope: !2872)
!2874 = !MDLocation(line: 1648, column: 5, scope: !123)
!2875 = !MDLocation(line: 1648, column: 5, scope: !2876)
!2876 = distinct !MDLexicalBlock(scope: !2877, file: !1, line: 1648, column: 5)
!2877 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1648, column: 5)
!2878 = !MDLocation(line: 1648, column: 5, scope: !2877)
!2879 = !MDLocation(line: 1649, column: 5, scope: !123)
!2880 = !MDLocation(line: 1649, column: 5, scope: !2881)
!2881 = distinct !MDLexicalBlock(scope: !2882, file: !1, line: 1649, column: 5)
!2882 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1649, column: 5)
!2883 = !MDLocation(line: 1649, column: 5, scope: !2882)
!2884 = !MDLocation(line: 1650, column: 5, scope: !123)
!2885 = !MDLocation(line: 1650, column: 5, scope: !2886)
!2886 = distinct !MDLexicalBlock(scope: !2887, file: !1, line: 1650, column: 5)
!2887 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1650, column: 5)
!2888 = !MDLocation(line: 1650, column: 5, scope: !2887)
!2889 = !MDLocation(line: 1651, column: 5, scope: !123)
!2890 = !MDLocation(line: 1651, column: 5, scope: !2891)
!2891 = distinct !MDLexicalBlock(scope: !2892, file: !1, line: 1651, column: 5)
!2892 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1651, column: 5)
!2893 = !MDLocation(line: 1651, column: 5, scope: !2892)
!2894 = !MDLocation(line: 1652, column: 5, scope: !123)
!2895 = !MDLocation(line: 1652, column: 5, scope: !2896)
!2896 = distinct !MDLexicalBlock(scope: !2897, file: !1, line: 1652, column: 5)
!2897 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1652, column: 5)
!2898 = !MDLocation(line: 1652, column: 5, scope: !2897)
!2899 = !MDLocation(line: 1653, column: 5, scope: !123)
!2900 = !MDLocation(line: 1653, column: 5, scope: !2901)
!2901 = distinct !MDLexicalBlock(scope: !2902, file: !1, line: 1653, column: 5)
!2902 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1653, column: 5)
!2903 = !MDLocation(line: 1653, column: 5, scope: !2902)
!2904 = !MDLocation(line: 1654, column: 5, scope: !123)
!2905 = !MDLocation(line: 1654, column: 5, scope: !2906)
!2906 = distinct !MDLexicalBlock(scope: !2907, file: !1, line: 1654, column: 5)
!2907 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1654, column: 5)
!2908 = !MDLocation(line: 1654, column: 5, scope: !2907)
!2909 = !MDLocation(line: 1655, column: 9, scope: !123)
!2910 = !MDLocation(line: 1655, column: 13, scope: !123)
!2911 = !MDLocation(line: 1657, column: 9, scope: !2912)
!2912 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1657, column: 9)
!2913 = !MDLocation(line: 1657, column: 17, scope: !2912)
!2914 = !MDLocation(line: 1657, column: 9, scope: !123)
!2915 = !MDLocation(line: 1658, column: 9, scope: !2912)
!2916 = !MDLocation(line: 1660, column: 9, scope: !2917)
!2917 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1660, column: 9)
!2918 = !MDLocation(line: 1660, column: 43, scope: !2917)
!2919 = !MDLocation(line: 1660, column: 48, scope: !2917)
!2920 = !MDLocation(line: 1661, column: 9, scope: !2917)
!2921 = !MDLocation(line: 1661, column: 43, scope: !2917)
!2922 = !MDLocation(line: 1660, column: 9, scope: !123)
!2923 = !MDLocation(line: 1663, column: 13, scope: !2924)
!2924 = distinct !MDLexicalBlock(scope: !2925, file: !1, line: 1663, column: 13)
!2925 = distinct !MDLexicalBlock(scope: !2917, file: !1, line: 1662, column: 5)
!2926 = !MDLocation(line: 1663, column: 21, scope: !2924)
!2927 = !MDLocation(line: 1663, column: 13, scope: !2925)
!2928 = !MDLocation(line: 1664, column: 13, scope: !2924)
!2929 = !MDLocation(line: 1666, column: 9, scope: !2925)
!2930 = !MDLocation(line: 1669, column: 9, scope: !2931)
!2931 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1669, column: 9)
!2932 = !MDLocation(line: 1669, column: 17, scope: !2931)
!2933 = !MDLocation(line: 1669, column: 9, scope: !123)
!2934 = !MDLocation(line: 1670, column: 9, scope: !2931)
!2935 = !MDLocation(line: 1672, column: 5, scope: !123)
!2936 = !MDLocation(line: 1675, column: 28, scope: !2937)
!2937 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1674, column: 9)
!2938 = !MDLocation(line: 1675, column: 43, scope: !2937)
!2939 = !MDLocation(line: 1674, column: 9, scope: !2937)
!2940 = !MDLocation(line: 1675, column: 60, scope: !2937)
!2941 = !MDLocation(line: 1674, column: 9, scope: !123)
!2942 = !MDLocation(line: 1677, column: 13, scope: !2943)
!2943 = distinct !MDLexicalBlock(scope: !2944, file: !1, line: 1677, column: 13)
!2944 = distinct !MDLexicalBlock(scope: !2937, file: !1, line: 1676, column: 5)
!2945 = !MDLocation(line: 1677, column: 21, scope: !2943)
!2946 = !MDLocation(line: 1677, column: 13, scope: !2944)
!2947 = !MDLocation(line: 1678, column: 13, scope: !2943)
!2948 = !MDLocation(line: 1680, column: 9, scope: !2944)
!2949 = !MDLocation(line: 1683, column: 9, scope: !2950)
!2950 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1683, column: 9)
!2951 = !MDLocation(line: 1683, column: 17, scope: !2950)
!2952 = !MDLocation(line: 1683, column: 9, scope: !123)
!2953 = !MDLocation(line: 1684, column: 9, scope: !2950)
!2954 = !MDLocation(line: 1687, column: 28, scope: !2955)
!2955 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1686, column: 9)
!2956 = !MDLocation(line: 1687, column: 44, scope: !2955)
!2957 = !MDLocation(line: 1686, column: 9, scope: !2955)
!2958 = !MDLocation(line: 1688, column: 52, scope: !2955)
!2959 = !MDLocation(line: 1686, column: 9, scope: !123)
!2960 = !MDLocation(line: 1690, column: 13, scope: !2961)
!2961 = distinct !MDLexicalBlock(scope: !2962, file: !1, line: 1690, column: 13)
!2962 = distinct !MDLexicalBlock(scope: !2955, file: !1, line: 1689, column: 5)
!2963 = !MDLocation(line: 1690, column: 21, scope: !2961)
!2964 = !MDLocation(line: 1690, column: 13, scope: !2962)
!2965 = !MDLocation(line: 1691, column: 13, scope: !2961)
!2966 = !MDLocation(line: 1693, column: 9, scope: !2962)
!2967 = !MDLocation(line: 1696, column: 17, scope: !2968)
!2968 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1696, column: 9)
!2969 = !MDLocation(line: 1696, column: 32, scope: !2968)
!2970 = !MDLocation(line: 1696, column: 47, scope: !2968)
!2971 = !MDLocation(line: 1696, column: 9, scope: !2968)
!2972 = !MDLocation(line: 1696, column: 53, scope: !2968)
!2973 = !MDLocation(line: 1696, column: 9, scope: !123)
!2974 = !MDLocation(line: 1698, column: 13, scope: !2975)
!2975 = distinct !MDLexicalBlock(scope: !2976, file: !1, line: 1698, column: 13)
!2976 = distinct !MDLexicalBlock(scope: !2968, file: !1, line: 1697, column: 5)
!2977 = !MDLocation(line: 1698, column: 21, scope: !2975)
!2978 = !MDLocation(line: 1698, column: 13, scope: !2976)
!2979 = !MDLocation(line: 1699, column: 13, scope: !2975)
!2980 = !MDLocation(line: 1701, column: 9, scope: !2976)
!2981 = !MDLocation(line: 1704, column: 9, scope: !2982)
!2982 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1704, column: 9)
!2983 = !MDLocation(line: 1704, column: 17, scope: !2982)
!2984 = !MDLocation(line: 1704, column: 9, scope: !123)
!2985 = !MDLocation(line: 1705, column: 9, scope: !2982)
!2986 = !MDLocation(line: 1708, column: 9, scope: !2987)
!2987 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1708, column: 9)
!2988 = !MDLocation(line: 1708, column: 17, scope: !2987)
!2989 = !MDLocation(line: 1708, column: 9, scope: !123)
!2990 = !MDLocation(line: 1709, column: 9, scope: !2987)
!2991 = !MDLocation(line: 1711, column: 19, scope: !123)
!2992 = !MDLocation(line: 1711, column: 42, scope: !123)
!2993 = !MDLocation(line: 1711, column: 5, scope: !123)
!2994 = !MDLocation(line: 1714, column: 25, scope: !2995)
!2995 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1713, column: 9)
!2996 = !MDLocation(line: 1714, column: 34, scope: !2995)
!2997 = !MDLocation(line: 1713, column: 9, scope: !2995)
!2998 = !MDLocation(line: 1714, column: 51, scope: !2995)
!2999 = !MDLocation(line: 1713, column: 9, scope: !123)
!3000 = !MDLocation(line: 1716, column: 13, scope: !3001)
!3001 = distinct !MDLexicalBlock(scope: !3002, file: !1, line: 1716, column: 13)
!3002 = distinct !MDLexicalBlock(scope: !2995, file: !1, line: 1715, column: 5)
!3003 = !MDLocation(line: 1716, column: 21, scope: !3001)
!3004 = !MDLocation(line: 1716, column: 13, scope: !3002)
!3005 = !MDLocation(line: 1717, column: 13, scope: !3001)
!3006 = !MDLocation(line: 1719, column: 9, scope: !3002)
!3007 = !MDLocation(line: 1722, column: 9, scope: !3008)
!3008 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1722, column: 9)
!3009 = !MDLocation(line: 1722, column: 17, scope: !3008)
!3010 = !MDLocation(line: 1722, column: 9, scope: !123)
!3011 = !MDLocation(line: 1723, column: 9, scope: !3008)
!3012 = !MDLocation(line: 1726, column: 27, scope: !3013)
!3013 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1725, column: 9)
!3014 = !MDLocation(line: 1726, column: 36, scope: !3013)
!3015 = !MDLocation(line: 1725, column: 9, scope: !3013)
!3016 = !MDLocation(line: 1726, column: 53, scope: !3013)
!3017 = !MDLocation(line: 1725, column: 9, scope: !123)
!3018 = !MDLocation(line: 1728, column: 13, scope: !3019)
!3019 = distinct !MDLexicalBlock(scope: !3020, file: !1, line: 1728, column: 13)
!3020 = distinct !MDLexicalBlock(scope: !3013, file: !1, line: 1727, column: 5)
!3021 = !MDLocation(line: 1728, column: 21, scope: !3019)
!3022 = !MDLocation(line: 1728, column: 13, scope: !3020)
!3023 = !MDLocation(line: 1729, column: 13, scope: !3019)
!3024 = !MDLocation(line: 1731, column: 9, scope: !3020)
!3025 = !MDLocation(line: 1734, column: 9, scope: !3026)
!3026 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1734, column: 9)
!3027 = !MDLocation(line: 1734, column: 17, scope: !3026)
!3028 = !MDLocation(line: 1734, column: 9, scope: !123)
!3029 = !MDLocation(line: 1735, column: 9, scope: !3026)
!3030 = !MDLocation(line: 1738, column: 9, scope: !3031)
!3031 = distinct !MDLexicalBlock(scope: !123, file: !1, line: 1738, column: 9)
!3032 = !MDLocation(line: 1738, column: 17, scope: !3031)
!3033 = !MDLocation(line: 1738, column: 9, scope: !123)
!3034 = !MDLocation(line: 1739, column: 9, scope: !3031)
!3035 = !MDLocation(line: 1738, column: 20, scope: !3031)
!3036 = !MDLocation(line: 1742, column: 5, scope: !123)
!3037 = !MDLocation(line: 1746, column: 13, scope: !123)
!3038 = !MDLocation(line: 1746, column: 5, scope: !123)
!3039 = !MDLocation(line: 1747, column: 1, scope: !123)
!3040 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "rng_state", arg: 1, scope: !143, file: !1, line: 1607, type: !17)
!3041 = !MDLocation(line: 1607, column: 26, scope: !143)
!3042 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "output", arg: 2, scope: !143, file: !1, line: 1607, type: !70)
!3043 = !MDLocation(line: 1607, column: 52, scope: !143)
!3044 = !MDLocalVariable(tag: DW_TAG_arg_variable, name: "len", arg: 3, scope: !143, file: !1, line: 1607, type: !20)
!3045 = !MDLocation(line: 1607, column: 67, scope: !143)
!3046 = !MDLocalVariable(tag: DW_TAG_auto_variable, name: "i", scope: !143, file: !1, line: 1610, type: !20)
!3047 = !MDLocation(line: 1610, column: 12, scope: !143)
!3048 = !MDLocation(line: 1612, column: 9, scope: !3049)
!3049 = distinct !MDLexicalBlock(scope: !143, file: !1, line: 1612, column: 9)
!3050 = !MDLocation(line: 1612, column: 19, scope: !3049)
!3051 = !MDLocation(line: 1612, column: 9, scope: !143)
!3052 = !MDLocation(line: 1613, column: 20, scope: !3049)
!3053 = !MDLocation(line: 1613, column: 9, scope: !3049)
!3054 = !MDLocation(line: 1615, column: 12, scope: !3055)
!3055 = distinct !MDLexicalBlock(scope: !143, file: !1, line: 1615, column: 5)
!3056 = !MDLocation(line: 1615, column: 10, scope: !3055)
!3057 = !MDLocation(line: 1615, column: 17, scope: !3058)
!3058 = distinct !MDLexicalBlock(scope: !3055, file: !1, line: 1615, column: 5)
!3059 = !MDLocation(line: 1615, column: 21, scope: !3058)
!3060 = !MDLocation(line: 1615, column: 19, scope: !3058)
!3061 = !MDLocation(line: 1615, column: 5, scope: !3055)
!3062 = !MDLocation(line: 1616, column: 21, scope: !3058)
!3063 = !MDLocation(line: 1616, column: 16, scope: !3058)
!3064 = !MDLocation(line: 1616, column: 9, scope: !3058)
!3065 = !MDLocation(line: 1616, column: 19, scope: !3058)
!3066 = !MDLocation(line: 1615, column: 26, scope: !3058)
!3067 = !MDLocation(line: 1615, column: 5, scope: !3058)
!3068 = !MDLocation(line: 1624, column: 5, scope: !143)
