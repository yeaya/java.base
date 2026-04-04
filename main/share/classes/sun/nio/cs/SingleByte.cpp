#include <sun/nio/cs/SingleByte.h>
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

void SingleByte::init$() {
}

$CoderResult* SingleByte::withResult($CoderResult* cr, $Buffer* src, int32_t sp, $Buffer* dst, int32_t dp) {
	$nc(src)->position(sp - $nc(src)->arrayOffset());
	$nc(dst)->position(dp - $nc(dst)->arrayOffset());
	return cr;
}

void SingleByte::initC2B($chars* b2c, $chars* c2bNR, $chars* c2b, $chars* c2bIndex) {
	for (int32_t i = 0; i < $nc(c2bIndex)->length; ++i) {
		c2bIndex->set(i, 0x0000fffd);
	}
	for (int32_t i = 0; i < $nc(c2b)->length; ++i) {
		c2b->set(i, 0x0000fffd);
	}
	int32_t off = 0;
	for (int32_t i = 0; i < $nc(b2c)->length; ++i) {
		char16_t c = b2c->get(i);
		if (c == (char16_t)0xfffd) {
			continue;
		}
		int32_t index = (c >> 8);
		if (c2bIndex->get(index) == 0x0000fffd) {
			c2bIndex->set(index, (char16_t)off);
			off += 256;
		}
		index = c2bIndex->get(index) + (c & 0xff);
		c2b->set(index, (char16_t)((i >= 128) ? (i - 128) : (i + 128)));
	}
	if (c2bNR != nullptr) {
		int32_t i = 0;
		while (i < c2bNR->length) {
			char16_t b = c2bNR->get(i++);
			char16_t c = c2bNR->get(i++);
			int32_t index = (c >> 8);
			if (c2bIndex->get(index) == 0x0000fffd) {
				c2bIndex->set(index, (char16_t)off);
				off += 256;
			}
			index = c2bIndex->get(index) + (c & 0xff);
			c2b->set(index, b);
		}
	}
}

SingleByte::SingleByte() {
}

$Class* SingleByte::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SingleByte, init$, void)},
		{"initC2B", "([C[C[C[C)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SingleByte, initC2B, void, $chars*, $chars*, $chars*, $chars*)},
		{"withResult", "(Ljava/nio/charset/CoderResult;Ljava/nio/Buffer;ILjava/nio/Buffer;I)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(SingleByte, withResult, $CoderResult*, $CoderResult*, $Buffer*, int32_t, $Buffer*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.SingleByte$Encoder", "sun.nio.cs.SingleByte", "Encoder", $PUBLIC | $STATIC | $FINAL},
		{"sun.nio.cs.SingleByte$Decoder", "sun.nio.cs.SingleByte", "Decoder", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.SingleByte",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.SingleByte$Encoder,sun.nio.cs.SingleByte$Decoder"
	};
	$loadClass(SingleByte, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleByte);
	});
	return class$;
}

$Class* SingleByte::class$ = nullptr;

		} // cs
	} // nio
} // sun