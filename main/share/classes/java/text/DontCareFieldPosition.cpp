#include <java/text/DontCareFieldPosition.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DontCareFieldPosition$1.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format$FieldDelegate.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DontCareFieldPosition$1 = ::java::text::DontCareFieldPosition$1;
using $FieldPosition = ::java::text::FieldPosition;
using $Format$FieldDelegate = ::java::text::Format$FieldDelegate;

namespace java {
	namespace text {

$FieldInfo _DontCareFieldPosition_FieldInfo_[] = {
	{"INSTANCE", "Ljava/text/FieldPosition;", nullptr, $STATIC | $FINAL, $staticField(DontCareFieldPosition, INSTANCE)},
	{"noDelegate", "Ljava/text/Format$FieldDelegate;", nullptr, $PRIVATE | $FINAL, $field(DontCareFieldPosition, noDelegate)},
	{}
};

$MethodInfo _DontCareFieldPosition_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DontCareFieldPosition::*)()>(&DontCareFieldPosition::init$))},
	{"getFieldDelegate", "()Ljava/text/Format$FieldDelegate;", nullptr, 0},
	{}
};

$InnerClassInfo _DontCareFieldPosition_InnerClassesInfo_[] = {
	{"java.text.DontCareFieldPosition$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DontCareFieldPosition_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.DontCareFieldPosition",
	"java.text.FieldPosition",
	nullptr,
	_DontCareFieldPosition_FieldInfo_,
	_DontCareFieldPosition_MethodInfo_,
	nullptr,
	nullptr,
	_DontCareFieldPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.DontCareFieldPosition$1"
};

$Object* allocate$DontCareFieldPosition($Class* clazz) {
	return $of($alloc(DontCareFieldPosition));
}

$FieldPosition* DontCareFieldPosition::INSTANCE = nullptr;

void DontCareFieldPosition::init$() {
	$FieldPosition::init$(0);
	$set(this, noDelegate, $new($DontCareFieldPosition$1, this));
}

$Format$FieldDelegate* DontCareFieldPosition::getFieldDelegate() {
	return this->noDelegate;
}

void clinit$DontCareFieldPosition($Class* class$) {
	$assignStatic(DontCareFieldPosition::INSTANCE, $new(DontCareFieldPosition));
}

DontCareFieldPosition::DontCareFieldPosition() {
}

$Class* DontCareFieldPosition::load$($String* name, bool initialize) {
	$loadClass(DontCareFieldPosition, name, initialize, &_DontCareFieldPosition_ClassInfo_, clinit$DontCareFieldPosition, allocate$DontCareFieldPosition);
	return class$;
}

$Class* DontCareFieldPosition::class$ = nullptr;

	} // text
} // java