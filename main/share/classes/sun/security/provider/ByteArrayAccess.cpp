#include <sun/security/provider/ByteArrayAccess.h>
#include <java/lang/invoke/VarHandle.h>
#include <sun/security/provider/ByteArrayAccess$BE.h>
#include <sun/security/provider/ByteArrayAccess$LE.h>
#include <jcpp.h>

#undef INT_ARRAY
#undef LONG_ARRAY

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteArrayAccess$BE = ::sun::security::provider::ByteArrayAccess$BE;
using $ByteArrayAccess$LE = ::sun::security::provider::ByteArrayAccess$LE;

namespace sun {
	namespace security {
		namespace provider {

void ByteArrayAccess::init$() {
}

void ByteArrayAccess::i2bLittle($ints* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$LE);
		$nc($ByteArrayAccess$LE::INT_ARRAY)->set($$new($ObjectArray, {out, $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 4;
	}
}

void ByteArrayAccess::i2bLittle4(int32_t val, $bytes* out, int32_t outOfs) {
	$init($ByteArrayAccess$LE);
	$nc($ByteArrayAccess$LE::INT_ARRAY)->set($$new($ObjectArray, {out, $$of(outOfs), $$of(val)}));
}

void ByteArrayAccess::b2iBig($bytes* in, int32_t inOfs, $ints* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += inOfs;
	while (inOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc(out)->set(outOfs++, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {in, $$of(inOfs)}))));
		inOfs += 4;
	}
}

void ByteArrayAccess::b2iBig64($bytes* in, int32_t inOfs, $ints* out) {
	$useLocalObjectStack();
	$init($ByteArrayAccess$BE);
	$nc(out)->set(0, $intValue($nc($ByteArrayAccess$BE::INT_ARRAY)->get($$new($ObjectArray, {in, $$of(inOfs)}))));
	out->set(1, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 4)}))));
	out->set(2, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 8)}))));
	out->set(3, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 12)}))));
	out->set(4, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 16)}))));
	out->set(5, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 20)}))));
	out->set(6, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 24)}))));
	out->set(7, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 28)}))));
	out->set(8, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 32)}))));
	out->set(9, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 36)}))));
	out->set(10, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 40)}))));
	out->set(11, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 44)}))));
	out->set(12, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 48)}))));
	out->set(13, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 52)}))));
	out->set(14, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 56)}))));
	out->set(15, $intValue($ByteArrayAccess$BE::INT_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 60)}))));
}

void ByteArrayAccess::i2bBig($ints* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc($ByteArrayAccess$BE::INT_ARRAY)->set($$new($ObjectArray, {out, $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 4;
	}
}

void ByteArrayAccess::i2bBig4(int32_t val, $bytes* out, int32_t outOfs) {
	$init($ByteArrayAccess$BE);
	$nc($ByteArrayAccess$BE::INT_ARRAY)->set($$new($ObjectArray, {out, $$of(outOfs), $$of(val)}));
}

void ByteArrayAccess::b2lBig($bytes* in, int32_t inOfs, $longs* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += inOfs;
	while (inOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc(out)->set(outOfs++, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {in, $$of(inOfs)}))));
		inOfs += 8;
	}
}

void ByteArrayAccess::b2lBig128($bytes* in, int32_t inOfs, $longs* out) {
	$useLocalObjectStack();
	$init($ByteArrayAccess$BE);
	$nc(out)->set(0, $longValue($nc($ByteArrayAccess$BE::LONG_ARRAY)->get($$new($ObjectArray, {in, $$of(inOfs)}))));
	out->set(1, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 8)}))));
	out->set(2, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 16)}))));
	out->set(3, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 24)}))));
	out->set(4, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 32)}))));
	out->set(5, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 40)}))));
	out->set(6, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 48)}))));
	out->set(7, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 56)}))));
	out->set(8, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 64)}))));
	out->set(9, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 72)}))));
	out->set(10, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 80)}))));
	out->set(11, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 88)}))));
	out->set(12, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 96)}))));
	out->set(13, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 104)}))));
	out->set(14, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 112)}))));
	out->set(15, $longValue($ByteArrayAccess$BE::LONG_ARRAY->get($$new($ObjectArray, {in, $$of(inOfs + 120)}))));
}

void ByteArrayAccess::l2bBig($longs* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$BE);
		$nc($ByteArrayAccess$BE::LONG_ARRAY)->set($$new($ObjectArray, {out, $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 8;
	}
}

void ByteArrayAccess::b2lLittle($bytes* in, int32_t inOfs, $longs* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += inOfs;
	while (inOfs < len) {
		$init($ByteArrayAccess$LE);
		$nc(out)->set(outOfs++, $longValue($nc($ByteArrayAccess$LE::LONG_ARRAY)->get($$new($ObjectArray, {in, $$of(inOfs)}))));
		inOfs += 8;
	}
}

void ByteArrayAccess::l2bLittle($longs* in, int32_t inOfs, $bytes* out, int32_t outOfs, int32_t len) {
	$useLocalObjectStack();
	len += outOfs;
	while (outOfs < len) {
		$init($ByteArrayAccess$LE);
		$nc($ByteArrayAccess$LE::LONG_ARRAY)->set($$new($ObjectArray, {out, $$of(outOfs), $$of($nc(in)->get(inOfs++))}));
		outOfs += 8;
	}
}

ByteArrayAccess::ByteArrayAccess() {
}

$Class* ByteArrayAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ByteArrayAccess, init$, void)},
		{"b2iBig", "([BI[III)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, b2iBig, void, $bytes*, int32_t, $ints*, int32_t, int32_t)},
		{"b2iBig64", "([BI[I)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, b2iBig64, void, $bytes*, int32_t, $ints*)},
		{"b2lBig", "([BI[JII)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, b2lBig, void, $bytes*, int32_t, $longs*, int32_t, int32_t)},
		{"b2lBig128", "([BI[J)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, b2lBig128, void, $bytes*, int32_t, $longs*)},
		{"b2lLittle", "([BI[JII)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, b2lLittle, void, $bytes*, int32_t, $longs*, int32_t, int32_t)},
		{"i2bBig", "([II[BII)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, i2bBig, void, $ints*, int32_t, $bytes*, int32_t, int32_t)},
		{"i2bBig4", "(I[BI)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, i2bBig4, void, int32_t, $bytes*, int32_t)},
		{"i2bLittle", "([II[BII)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, i2bLittle, void, $ints*, int32_t, $bytes*, int32_t, int32_t)},
		{"i2bLittle4", "(I[BI)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, i2bLittle4, void, int32_t, $bytes*, int32_t)},
		{"l2bBig", "([JI[BII)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, l2bBig, void, $longs*, int32_t, $bytes*, int32_t, int32_t)},
		{"l2bLittle", "([JI[BII)V", nullptr, $STATIC, $staticMethod(ByteArrayAccess, l2bLittle, void, $longs*, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.ByteArrayAccess$BE", "sun.security.provider.ByteArrayAccess", "BE", $STATIC | $FINAL},
		{"sun.security.provider.ByteArrayAccess$LE", "sun.security.provider.ByteArrayAccess", "LE", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.provider.ByteArrayAccess",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.ByteArrayAccess$BE,sun.security.provider.ByteArrayAccess$LE"
	};
	$loadClass(ByteArrayAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteArrayAccess);
	});
	return class$;
}

$Class* ByteArrayAccess::class$ = nullptr;

		} // provider
	} // security
} // sun