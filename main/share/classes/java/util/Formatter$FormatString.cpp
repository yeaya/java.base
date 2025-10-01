#include <java/util/Formatter$FormatString.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Formatter.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Formatter = ::java::util::Formatter;
using $Locale = ::java::util::Locale;

namespace java {
	namespace util {

$MethodInfo _Formatter$FormatString_MethodInfo_[] = {
	{"index", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"print", "(Ljava/lang/Object;Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Formatter$FormatString_InnerClassesInfo_[] = {
	{"java.util.Formatter$FormatString", "java.util.Formatter", "FormatString", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Formatter$FormatString_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.util.Formatter$FormatString",
	nullptr,
	nullptr,
	nullptr,
	_Formatter$FormatString_MethodInfo_,
	nullptr,
	nullptr,
	_Formatter$FormatString_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Formatter"
};

$Object* allocate$Formatter$FormatString($Class* clazz) {
	return $of($alloc(Formatter$FormatString));
}

$String* Formatter$FormatString::toString() {
	 return this->$Object::toString();
}

$Class* Formatter$FormatString::load$($String* name, bool initialize) {
	$loadClass(Formatter$FormatString, name, initialize, &_Formatter$FormatString_ClassInfo_, allocate$Formatter$FormatString);
	return class$;
}

$Class* Formatter$FormatString::class$ = nullptr;

	} // util
} // java