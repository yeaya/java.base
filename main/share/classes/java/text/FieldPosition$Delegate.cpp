#include <java/text/FieldPosition$Delegate.h>

#include <java/lang/StringBuffer.h>
#include <java/text/FieldPosition.h>
#include <java/text/Format$Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $FieldPosition = ::java::text::FieldPosition;
using $Format$Field = ::java::text::Format$Field;

namespace java {
	namespace text {

$FieldInfo _FieldPosition$Delegate_FieldInfo_[] = {
	{"this$0", "Ljava/text/FieldPosition;", nullptr, $FINAL | $SYNTHETIC, $field(FieldPosition$Delegate, this$0)},
	{"encounteredField", "Z", nullptr, $PRIVATE, $field(FieldPosition$Delegate, encounteredField)},
	{}
};

$MethodInfo _FieldPosition$Delegate_MethodInfo_[] = {
	{"<init>", "(Ljava/text/FieldPosition;)V", nullptr, $PRIVATE, $method(FieldPosition$Delegate, init$, void, $FieldPosition*)},
	{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(FieldPosition$Delegate, formatted, void, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
	{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(FieldPosition$Delegate, formatted, void, int32_t, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
	{}
};

$InnerClassInfo _FieldPosition$Delegate_InnerClassesInfo_[] = {
	{"java.text.FieldPosition$Delegate", "java.text.FieldPosition", "Delegate", $PRIVATE},
	{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FieldPosition$Delegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.FieldPosition$Delegate",
	"java.lang.Object",
	"java.text.Format$FieldDelegate",
	_FieldPosition$Delegate_FieldInfo_,
	_FieldPosition$Delegate_MethodInfo_,
	nullptr,
	nullptr,
	_FieldPosition$Delegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.FieldPosition"
};

$Object* allocate$FieldPosition$Delegate($Class* clazz) {
	return $of($alloc(FieldPosition$Delegate));
}

void FieldPosition$Delegate::init$($FieldPosition* this$0) {
	$set(this, this$0, this$0);
}

void FieldPosition$Delegate::formatted($Format$Field* attr, Object$* value, int32_t start, int32_t end, $StringBuffer* buffer) {
	if (!this->encounteredField && this->this$0->matchesField(attr)) {
		this->this$0->setBeginIndex(start);
		this->this$0->setEndIndex(end);
		this->encounteredField = (start != end);
	}
}

void FieldPosition$Delegate::formatted(int32_t fieldID, $Format$Field* attr, Object$* value, int32_t start, int32_t end, $StringBuffer* buffer) {
	if (!this->encounteredField && this->this$0->matchesField(attr, fieldID)) {
		this->this$0->setBeginIndex(start);
		this->this$0->setEndIndex(end);
		this->encounteredField = (start != end);
	}
}

FieldPosition$Delegate::FieldPosition$Delegate() {
}

$Class* FieldPosition$Delegate::load$($String* name, bool initialize) {
	$loadClass(FieldPosition$Delegate, name, initialize, &_FieldPosition$Delegate_ClassInfo_, allocate$FieldPosition$Delegate);
	return class$;
}

$Class* FieldPosition$Delegate::class$ = nullptr;

	} // text
} // java