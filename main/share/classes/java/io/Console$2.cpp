#include <java/io/Console$2.h>

#include <java/io/Console.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

#undef CHARSET

using $Console = ::java::io::Console;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $JavaIOAccess = ::jdk::internal::access::JavaIOAccess;

namespace java {
	namespace io {

$MethodInfo _Console$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Console$2::*)()>(&Console$2::init$))},
	{"charset", "()Ljava/nio/charset/Charset;", nullptr, $PUBLIC},
	{"console", "()Ljava/io/Console;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Console$2_EnclosingMethodInfo_ = {
	"java.io.Console",
	nullptr,
	nullptr
};

$InnerClassInfo _Console$2_InnerClassesInfo_[] = {
	{"java.io.Console$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Console$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.Console$2",
	"java.lang.Object",
	"jdk.internal.access.JavaIOAccess",
	nullptr,
	_Console$2_MethodInfo_,
	nullptr,
	&_Console$2_EnclosingMethodInfo_,
	_Console$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.Console"
};

$Object* allocate$Console$2($Class* clazz) {
	return $of($alloc(Console$2));
}

void Console$2::init$() {
}

$Console* Console$2::console() {
	if ($Console::istty()) {
		$init($Console);
		if ($Console::cons == nullptr) {
			$assignStatic($Console::cons, $new($Console));
		}
		return $Console::cons;
	}
	return nullptr;
}

$Charset* Console$2::charset() {
	$init($Console);
	return $Console::CHARSET;
}

Console$2::Console$2() {
}

$Class* Console$2::load$($String* name, bool initialize) {
	$loadClass(Console$2, name, initialize, &_Console$2_ClassInfo_, allocate$Console$2);
	return class$;
}

$Class* Console$2::class$ = nullptr;

	} // io
} // java