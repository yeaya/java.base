#include <java/text/Format$FieldDelegate.h>

#include <java/lang/StringBuffer.h>
#include <java/text/Format$Field.h>
#include <java/text/Format.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$MethodInfo _Format$FieldDelegate_MethodInfo_[] = {
	{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Format$FieldDelegate_InnerClassesInfo_[] = {
	{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Format$FieldDelegate_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"java.text.Format$FieldDelegate",
	nullptr,
	nullptr,
	nullptr,
	_Format$FieldDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_Format$FieldDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.Format"
};

$Object* allocate$Format$FieldDelegate($Class* clazz) {
	return $of($alloc(Format$FieldDelegate));
}

$Class* Format$FieldDelegate::load$($String* name, bool initialize) {
	$loadClass(Format$FieldDelegate, name, initialize, &_Format$FieldDelegate_ClassInfo_, allocate$Format$FieldDelegate);
	return class$;
}

$Class* Format$FieldDelegate::class$ = nullptr;

	} // text
} // java