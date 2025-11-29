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

$FieldInfo _Process$CharsetHolder_FieldInfo_[] = {
	{"nativeCharset", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Process$CharsetHolder, nativeCharset$)},
	{}
};

$MethodInfo _Process$CharsetHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Process$CharsetHolder::*)()>(&Process$CharsetHolder::init$))},
	{"nativeCharset", "()Ljava/nio/charset/Charset;", nullptr, $STATIC, $method(static_cast<$Charset*(*)()>(&Process$CharsetHolder::nativeCharset))},
	{}
};

$InnerClassInfo _Process$CharsetHolder_InnerClassesInfo_[] = {
	{"java.lang.Process$CharsetHolder", "java.lang.Process", "CharsetHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Process$CharsetHolder_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Process$CharsetHolder",
	"java.lang.Object",
	nullptr,
	_Process$CharsetHolder_FieldInfo_,
	_Process$CharsetHolder_MethodInfo_,
	nullptr,
	nullptr,
	_Process$CharsetHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Process"
};

$Object* allocate$Process$CharsetHolder($Class* clazz) {
	return $of($alloc(Process$CharsetHolder));
}

$Charset* Process$CharsetHolder::nativeCharset$ = nullptr;

void Process$CharsetHolder::init$() {
}

$Charset* Process$CharsetHolder::nativeCharset() {
	$init(Process$CharsetHolder);
	return Process$CharsetHolder::nativeCharset$;
}

void clinit$Process$CharsetHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
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
	$loadClass(Process$CharsetHolder, name, initialize, &_Process$CharsetHolder_ClassInfo_, clinit$Process$CharsetHolder, allocate$Process$CharsetHolder);
	return class$;
}

$Class* Process$CharsetHolder::class$ = nullptr;

	} // lang
} // java