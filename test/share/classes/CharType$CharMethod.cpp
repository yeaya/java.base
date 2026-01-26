#include <CharType$CharMethod.h>

#include <CharType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _CharType$CharMethod_MethodInfo_[] = {
	{"setChar", "(C)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CharType$CharMethod, setChar, void, char16_t)},
	{}
};

$InnerClassInfo _CharType$CharMethod_InnerClassesInfo_[] = {
	{"CharType$CharMethod", "CharType", "CharMethod", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CharType$CharMethod_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"CharType$CharMethod",
	nullptr,
	nullptr,
	nullptr,
	_CharType$CharMethod_MethodInfo_,
	nullptr,
	nullptr,
	_CharType$CharMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CharType"
};

$Object* allocate$CharType$CharMethod($Class* clazz) {
	return $of($alloc(CharType$CharMethod));
}

$Class* CharType$CharMethod::load$($String* name, bool initialize) {
	$loadClass(CharType$CharMethod, name, initialize, &_CharType$CharMethod_ClassInfo_, allocate$CharType$CharMethod);
	return class$;
}

$Class* CharType$CharMethod::class$ = nullptr;