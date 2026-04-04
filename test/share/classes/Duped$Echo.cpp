#include <Duped$Echo.h>
#include <Duped.h>
#include <java/io/InputStream.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

void Duped$Echo::init$() {
}

void Duped$Echo::main($StringArray* args) {
	$var($StringBuffer, s, $new($StringBuffer));
	int32_t c = 0;
	while ((c = $nc($System::in)->read()) != -1) {
		s->append((char16_t)c);
	}
	$nc($System::out)->println(s);
}

Duped$Echo::Duped$Echo() {
}

$Class* Duped$Echo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Duped$Echo, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Duped$Echo, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Duped$Echo", "Duped", "Echo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Duped$Echo",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Duped"
	};
	$loadClass(Duped$Echo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Duped$Echo);
	});
	return class$;
}

$Class* Duped$Echo::class$ = nullptr;