#include <java/text/DontCareFieldPosition$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DontCareFieldPosition.h>
#include <java/text/Format$Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $DontCareFieldPosition = ::java::text::DontCareFieldPosition;
using $Format$Field = ::java::text::Format$Field;
using $Format$FieldDelegate = ::java::text::Format$FieldDelegate;

namespace java {
	namespace text {

$FieldInfo _DontCareFieldPosition$1_FieldInfo_[] = {
	{"this$0", "Ljava/text/DontCareFieldPosition;", nullptr, $FINAL | $SYNTHETIC, $field(DontCareFieldPosition$1, this$0)},
	{}
};

$MethodInfo _DontCareFieldPosition$1_MethodInfo_[] = {
	{"<init>", "(Ljava/text/DontCareFieldPosition;)V", nullptr, 0, $method(static_cast<void(DontCareFieldPosition$1::*)($DontCareFieldPosition*)>(&DontCareFieldPosition$1::init$))},
	{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC},
	{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DontCareFieldPosition$1_EnclosingMethodInfo_ = {
	"java.text.DontCareFieldPosition",
	nullptr,
	nullptr
};

$InnerClassInfo _DontCareFieldPosition$1_InnerClassesInfo_[] = {
	{"java.text.DontCareFieldPosition$1", nullptr, nullptr, 0},
	{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DontCareFieldPosition$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.DontCareFieldPosition$1",
	"java.lang.Object",
	"java.text.Format$FieldDelegate",
	_DontCareFieldPosition$1_FieldInfo_,
	_DontCareFieldPosition$1_MethodInfo_,
	nullptr,
	&_DontCareFieldPosition$1_EnclosingMethodInfo_,
	_DontCareFieldPosition$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.DontCareFieldPosition"
};

$Object* allocate$DontCareFieldPosition$1($Class* clazz) {
	return $of($alloc(DontCareFieldPosition$1));
}

void DontCareFieldPosition$1::init$($DontCareFieldPosition* this$0) {
	$set(this, this$0, this$0);
}

void DontCareFieldPosition$1::formatted($Format$Field* attr, Object$* value, int32_t start, int32_t end, $StringBuffer* buffer) {
}

void DontCareFieldPosition$1::formatted(int32_t fieldID, $Format$Field* attr, Object$* value, int32_t start, int32_t end, $StringBuffer* buffer) {
}

DontCareFieldPosition$1::DontCareFieldPosition$1() {
}

$Class* DontCareFieldPosition$1::load$($String* name, bool initialize) {
	$loadClass(DontCareFieldPosition$1, name, initialize, &_DontCareFieldPosition$1_ClassInfo_, allocate$DontCareFieldPosition$1);
	return class$;
}

$Class* DontCareFieldPosition$1::class$ = nullptr;

	} // text
} // java