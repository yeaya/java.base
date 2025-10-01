#include <sun/nio/cs/SingleByte.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/Buffer.h>
#include <java/nio/charset/CoderResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $CoderResult = ::java::nio::charset::CoderResult;

namespace sun {
	namespace nio {
		namespace cs {

$MethodInfo _SingleByte_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SingleByte::*)()>(&SingleByte::init$))},
	{"initC2B", "([C[C[C[C)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*,$chars*,$chars*,$chars*)>(&SingleByte::initC2B))},
	{"withResult", "(Ljava/nio/charset/CoderResult;Ljava/nio/Buffer;ILjava/nio/Buffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$CoderResult*(*)($CoderResult*,$Buffer*,int32_t,$Buffer*,int32_t)>(&SingleByte::withResult))},
	{}
};

$InnerClassInfo _SingleByte_InnerClassesInfo_[] = {
	{"sun.nio.cs.SingleByte$Encoder", "sun.nio.cs.SingleByte", "Encoder", $PUBLIC | $STATIC | $FINAL},
	{"sun.nio.cs.SingleByte$Decoder", "sun.nio.cs.SingleByte", "Decoder", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SingleByte_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.SingleByte",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SingleByte_MethodInfo_,
	nullptr,
	nullptr,
	_SingleByte_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.SingleByte$Encoder,sun.nio.cs.SingleByte$Decoder"
};

$Object* allocate$SingleByte($Class* clazz) {
	return $of($alloc(SingleByte));
}

void SingleByte::init$() {
}

$CoderResult* SingleByte::withResult($CoderResult* cr, $Buffer* src, int32_t sp, $Buffer* dst, int32_t dp) {
	$nc(src)->position(sp - src->arrayOffset());
	$nc(dst)->position(dp - dst->arrayOffset());
	return cr;
}

void SingleByte::initC2B($chars* b2c, $chars* c2bNR, $chars* c2b, $chars* c2bIndex) {
	for (int32_t i = 0; i < $nc(c2bIndex)->length; ++i) {
		c2bIndex->set(i, (char16_t)0x0000FFFD);
	}
	for (int32_t i = 0; i < $nc(c2b)->length; ++i) {
		c2b->set(i, (char16_t)0x0000FFFD);
	}
	int32_t off = 0;
	for (int32_t i = 0; i < $nc(b2c)->length; ++i) {
		char16_t c = b2c->get(i);
		if (c == (char16_t)0xFFFD) {
			continue;
		}
		int32_t index = (c >> 8);
		if ($nc(c2bIndex)->get(index) == 0x0000FFFD) {
			c2bIndex->set(index, (char16_t)off);
			off += 256;
		}
		index = $nc(c2bIndex)->get(index) + ((int32_t)(c & (uint32_t)255));
		$nc(c2b)->set(index, (char16_t)((i >= 128) ? (i - 128) : (i + 128)));
	}
	if (c2bNR != nullptr) {
		int32_t i = 0;
		while (i < c2bNR->length) {
			char16_t b = c2bNR->get(i++);
			char16_t c = c2bNR->get(i++);
			int32_t index = (c >> 8);
			if ($nc(c2bIndex)->get(index) == 0x0000FFFD) {
				c2bIndex->set(index, (char16_t)off);
				off += 256;
			}
			index = $nc(c2bIndex)->get(index) + ((int32_t)(c & (uint32_t)255));
			$nc(c2b)->set(index, b);
		}
	}
}

SingleByte::SingleByte() {
}

$Class* SingleByte::load$($String* name, bool initialize) {
	$loadClass(SingleByte, name, initialize, &_SingleByte_ClassInfo_, allocate$SingleByte);
	return class$;
}

$Class* SingleByte::class$ = nullptr;

		} // cs
	} // nio
} // sun