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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/text/FieldPosition;", nullptr, $FINAL | $SYNTHETIC, $field(FieldPosition$Delegate, this$0)},
		{"encounteredField", "Z", nullptr, $PRIVATE, $field(FieldPosition$Delegate, encounteredField)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/FieldPosition;)V", nullptr, $PRIVATE, $method(FieldPosition$Delegate, init$, void, $FieldPosition*)},
		{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(FieldPosition$Delegate, formatted, void, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
		{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(FieldPosition$Delegate, formatted, void, int32_t, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.FieldPosition$Delegate", "java.text.FieldPosition", "Delegate", $PRIVATE},
		{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.text.FieldPosition$Delegate",
		"java.lang.Object",
		"java.text.Format$FieldDelegate",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.FieldPosition"
	};
	$loadClass(FieldPosition$Delegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FieldPosition$Delegate);
	});
	return class$;
}

$Class* FieldPosition$Delegate::class$ = nullptr;

	} // text
} // java