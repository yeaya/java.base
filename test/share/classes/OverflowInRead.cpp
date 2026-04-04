#include <OverflowInRead.h>
#include <java/io/StringBufferInputStream.h>
#include <jcpp.h>

#undef MAX_VALUE

using $StringBufferInputStream = ::java::io::StringBufferInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void OverflowInRead::init$() {
}

void OverflowInRead::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, s, "_123456789_123456789_123456789_123456789"_s);
	{
		$var($StringBufferInputStream, sbis, $new($StringBufferInputStream, s));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				int32_t len1 = 33;
				$var($bytes, buf1, $new($bytes, len1));
				if (sbis->read(buf1, 0, len1) != len1) {
					$throwNew($Exception, $$str({"Expected to read "_s, $$str(len1), " bytes"_s}));
				}
				int32_t len2 = $Integer::MAX_VALUE - 32;
				$var($bytes, buf2, $new($bytes, len2));
				int32_t expLen2 = s->length() - len1;
				if (sbis->read(buf2, 0, len2) != expLen2) {
					$throwNew($Exception, $$str({"Expected to read "_s, $$str(expLen2), " bytes"_s}));
				}
			} catch ($Throwable& t$) {
				try {
					sbis->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			sbis->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

OverflowInRead::OverflowInRead() {
}

$Class* OverflowInRead::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OverflowInRead, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OverflowInRead, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"OverflowInRead",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OverflowInRead, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OverflowInRead);
	});
	return class$;
}

$Class* OverflowInRead::class$ = nullptr;