#include <java/text/Format$FieldDelegate.h>
#include <java/lang/StringBuffer.h>
#include <java/text/Format$Field.h>
#include <java/text/Format.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Format$Field = ::java::text::Format$Field;

namespace java {
	namespace text {

$Class* Format$FieldDelegate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Format$FieldDelegate, formatted, void, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
		{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Format$FieldDelegate, formatted, void, int32_t, $Format$Field*, Object$*, int32_t, int32_t, $StringBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.text.Format$FieldDelegate",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.text.Format"
	};
	$loadClass(Format$FieldDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Format$FieldDelegate);
	});
	return class$;
}

$Class* Format$FieldDelegate::class$ = nullptr;

	} // text
} // java