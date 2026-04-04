#include <java/text/DontCareFieldPosition$1.h>
#include <java/lang/StringBuffer.h>
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

namespace java {
	namespace text {

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
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/text/DontCareFieldPosition;", nullptr, $FINAL | $SYNTHETIC, $field(DontCareFieldPosition$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/DontCareFieldPosition;)V", nullptr, 0, $method(DontCareFieldPosition$1, init$, void, $DontCareFieldPosition*)},
		{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(DontCareFieldPosition$1, formatted, void, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
		{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC, $virtualMethod(DontCareFieldPosition$1, formatted, void, int32_t, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.text.DontCareFieldPosition",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.DontCareFieldPosition$1", nullptr, nullptr, 0},
		{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.text.DontCareFieldPosition$1",
		"java.lang.Object",
		"java.text.Format$FieldDelegate",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.DontCareFieldPosition"
	};
	$loadClass(DontCareFieldPosition$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DontCareFieldPosition$1);
	});
	return class$;
}

$Class* DontCareFieldPosition$1::class$ = nullptr;

	} // text
} // java