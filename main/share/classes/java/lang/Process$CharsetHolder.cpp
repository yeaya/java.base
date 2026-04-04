#include <java/lang/Process$CharsetHolder.h>
#include <java/lang/Process.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <jdk/internal/util/StaticProperty.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $StaticProperty = ::jdk::internal::util::StaticProperty;

namespace java {
	namespace lang {

$Charset* Process$CharsetHolder::nativeCharset$ = nullptr;

void Process$CharsetHolder::init$() {
}

$Charset* Process$CharsetHolder::nativeCharset() {
	$init(Process$CharsetHolder);
	return Process$CharsetHolder::nativeCharset$;
}

void Process$CharsetHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Charset, cs, nullptr);
		try {
			$assign(cs, $Charset::forName($($StaticProperty::nativeEncoding())));
		} catch ($UnsupportedCharsetException& uce) {
			$assign(cs, $Charset::defaultCharset());
		}
		$assignStatic(Process$CharsetHolder::nativeCharset$, cs);
	}
}

Process$CharsetHolder::Process$CharsetHolder() {
}

$Class* Process$CharsetHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"nativeCharset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Process$CharsetHolder, nativeCharset$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Process$CharsetHolder, init$, void)},
		{"nativeCharset", "()Ljava/nio/charset/Charset;", nullptr, $STATIC, $staticMethod(Process$CharsetHolder, nativeCharset, $Charset*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Process$CharsetHolder", "java.lang.Process", "CharsetHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Process$CharsetHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Process"
	};
	$loadClass(Process$CharsetHolder, name, initialize, &classInfo$$, Process$CharsetHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Process$CharsetHolder);
	});
	return class$;
}

$Class* Process$CharsetHolder::class$ = nullptr;

	} // lang
} // java