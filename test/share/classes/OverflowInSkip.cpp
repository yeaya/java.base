#include <OverflowInSkip.h>

#include <java/io/CharArrayReader.h>
#include <jcpp.h>

#undef MAX_VALUE

using $CharArrayReader = ::java::io::CharArrayReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _OverflowInSkip_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OverflowInSkip, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OverflowInSkip, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _OverflowInSkip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OverflowInSkip",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OverflowInSkip_MethodInfo_
};

$Object* allocate$OverflowInSkip($Class* clazz) {
	return $of($alloc(OverflowInSkip));
}

void OverflowInSkip::init$() {
}

void OverflowInSkip::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($chars, a, "_123456789_123456789_123456789_123456789"_s->toCharArray());
	{
		$var($CharArrayReader, car, $new($CharArrayReader, a));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int64_t small = 33;
					int64_t big = $Long::MAX_VALUE;
					int64_t smallSkip = car->skip(small);
					if (smallSkip != small) {
						$throwNew($Exception, $$str({"Expected to skip "_s, $$str(small), " chars, but skipped "_s, $$str(smallSkip)}));
					}
					int64_t expSkip = a->length - small;
					int64_t bigSkip = car->skip(big);
					if (bigSkip != expSkip) {
						$throwNew($Exception, $$str({"Expected to skip "_s, $$str(expSkip), " chars, but skipped "_s, $$str(bigSkip)}));
					}
				} catch ($Throwable& t$) {
					try {
						car->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				car->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

OverflowInSkip::OverflowInSkip() {
}

$Class* OverflowInSkip::load$($String* name, bool initialize) {
	$loadClass(OverflowInSkip, name, initialize, &_OverflowInSkip_ClassInfo_, allocate$OverflowInSkip);
	return class$;
}

$Class* OverflowInSkip::class$ = nullptr;