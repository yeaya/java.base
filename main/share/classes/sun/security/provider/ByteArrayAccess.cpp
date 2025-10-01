#include <sun/security/provider/ByteArrayAccess.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/ByteArrayAccess$BE.h>
#include <sun/security/provider/ByteArrayAccess$LE.h>
#include <jcpp.h>

#undef INT_ARRAY
#undef LONG_ARRAY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ByteArrayAccess$BE = ::sun::security::provider::ByteArrayAccess$BE;
using $ByteArrayAccess$LE = ::sun::security::provider::ByteArrayAccess$LE;

namespace sun {
	namespace security {
		namespace provider {

$MethodInfo _ByteArrayAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ByteArrayAccess::*)()>(&ByteArrayAccess::init$))},
	{"b2iBig", "([BI[III)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$ints*,int32_t,int32_t)>(&ByteArrayAccess::b2iBig))},
	{"b2iBig64", "([BI[I)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$ints*)>(&ByteArrayAccess::b2iBig64))},
	{"b2lBig", "([BI[JII)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$longs*,int32_t,int32_t)>(&ByteArrayAccess::b2lBig))},
	{"b2lBig128", "([BI[J)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$longs*)>(&ByteArrayAccess::b2lBig128))},
	{"b2lLittle", "([BI[JII)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$longs*,int32_t,int32_t)>(&ByteArrayAccess::b2lLittle))},
	{"i2bBig", "([II[BII)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,$bytes*,int32_t,int32_t)>(&ByteArrayAccess::i2bBig))},
	{"i2bBig4", "(I[BI)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t)>(&ByteArrayAccess::i2bBig4))},
	{"i2bLittle", "([II[BII)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,$bytes*,int32_t,int32_t)>(&ByteArrayAccess::i2bLittle))},
	{"i2bLittle4", "(I[BI)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t)>(&ByteArrayAccess::i2bLittle4))},
	{"l2bBig", "([JI[BII)V", nullptr, $STATIC, $method(static_cast<void(*)($longs*,int32_t,$bytes*,int32_t,int32_t)>(&ByteArrayAccess::l2bBig))},
	{"l2bLittle", "([JI[BII)V", nullptr, $STATIC, $method(static_cast<void(*)($longs*,int32_t,$bytes*,int32_t,int32_t)>(&ByteArrayAccess::l2bLittle))},
	{}
};

$InnerClassInfo _ByteArrayAccess_InnerClassesInfo_[] = {
	{"sun.security.provider.ByteArrayAccess$BE", "sun.security.provider.ByteArrayAccess", "BE", $STATIC | $FINAL},
	{"sun.security.provider.ByteArrayAccess$LE", "sun.security.provider.ByteArrayAccess", "LE", $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteArrayAccess_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.ByteArrayAccess",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ByteArrayAccess_MethodInfo_,
	nullptr,
	nullptr,
	_ByteArrayAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.ByteArrayAccess$BE,sun.security.provider.ByteArrayAccess$LE"
};

$Object* allocate$ByteArrayAccess($Class* clazz) {
	return $of($alloc(ByteArrayAccess));
}

void ByteArrayAccess::init$() {
}

void ByteArrayAccess::i2bLittle($ints* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$LE);
		$nc($ByteArrayAccess$LE::INT_ARRAY)->set($$new($ObjectArray, {$of(out), $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 4;
	}
}

void ByteArrayAccess::i2bLittle4(int32_t val, $bytes* out, int32_t outOfs) {
	$init($ByteArrayAccess$LE);
	$nc($ByteArrayAccess$LE::INT_ARRAY)->set($$new($ObjectArray, {$of(out), $$of(outOfs), $$of(val)}));
}

void ByteArrayAccess::b2iBig($bytes* in, int32_t inOfs, $ints* out, int32_t outOfs, int32_t len) {
	len += inOfs;
	while (inOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc(out)->set(outOfs++, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of(inOfs)}))));
		inOfs += 4;
	}
}

void ByteArrayAccess::b2iBig64($bytes* in, int32_t inOfs, $ints* out) {
	$init($ByteArrayAccess$BE);
	$nc(out)->set(0, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of(inOfs)}))));
	out->set(1, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 4))}))));
	out->set(2, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 8))}))));
	out->set(3, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 12))}))));
	out->set(4, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 16))}))));
	out->set(5, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 20))}))));
	out->set(6, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 24))}))));
	out->set(7, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 28))}))));
	out->set(8, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 32))}))));
	out->set(9, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 36))}))));
	out->set(10, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 40))}))));
	out->set(11, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 44))}))));
	out->set(12, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 48))}))));
	out->set(13, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 52))}))));
	out->set(14, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 56))}))));
	out->set(15, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 60))}))));
}

void ByteArrayAccess::i2bBig($ints* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc($ByteArrayAccess$BE::INT_ARRAY)->set($$new($ObjectArray, {$of(out), $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 4;
	}
}

void ByteArrayAccess::i2bBig4(int32_t val, $bytes* out, int32_t outOfs) {
	$init($ByteArrayAccess$BE);
	$nc($ByteArrayAccess$BE::INT_ARRAY)->set($$new($ObjectArray, {$of(out), $$of(outOfs), $$of(val)}));
}

void ByteArrayAccess::b2lBig($bytes* in, int32_t inOfs, $longs* out, int32_t outOfs, int32_t len) {
	len += inOfs;
	while (inOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc(out)->set(outOfs++, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of(inOfs)}))));
		inOfs += 8;
	}
}

void ByteArrayAccess::b2lBig128($bytes* in, int32_t inOfs, $longs* out) {
	$init($ByteArrayAccess$BE);
	$nc(out)->set(0, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of(inOfs)}))));
	out->set(1, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 8))}))));
	out->set(2, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 16))}))));
	out->set(3, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 24))}))));
	out->set(4, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 32))}))));
	out->set(5, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 40))}))));
	out->set(6, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 48))}))));
	out->set(7, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 56))}))));
	out->set(8, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 64))}))));
	out->set(9, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 72))}))));
	out->set(10, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 80))}))));
	out->set(11, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 88))}))));
	out->set(12, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 96))}))));
	out->set(13, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 104))}))));
	out->set(14, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 112))}))));
	out->set(15, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of((inOfs + 120))}))));
}

void ByteArrayAccess::l2bBig($longs* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc($ByteArrayAccess$BE::LONG_ARRAY)->set($$new($ObjectArray, {$of(out), $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 8;
	}
}

void ByteArrayAccess::b2lLittle($bytes* in, int32_t inOfs, $longs* out, int32_t outOfs, int32_t len) {
	len += inOfs;
	while (inOfs < len) {
		$init($ByteArrayAccess$LE);
		$nc(out)->set(outOfs++, $longValue($nc($ByteArrayAccess$LE::LONG_ARRAY)->get($$new($ObjectArray, {$of(in), $$of(inOfs)}))));
		inOfs += 8;
	}
}

void ByteArrayAccess::l2bLittle($longs* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$LE);
		$nc($ByteArrayAccess$LE::LONG_ARRAY)->set($$new($ObjectArray, {$of(out), $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 8;
	}
}

ByteArrayAccess::ByteArrayAccess() {
}

$Class* ByteArrayAccess::load$($String* name, bool initialize) {
	$loadClass(ByteArrayAccess, name, initialize, &_ByteArrayAccess_ClassInfo_, allocate$ByteArrayAccess);
	return class$;
}

$Class* ByteArrayAccess::class$ = nullptr;

		} // provider
	} // security
} // sun