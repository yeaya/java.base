#include <jdk/internal/org/objectweb/asm/Context.h>

#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Context_FieldInfo_[] = {
	{"attributePrototypes", "[Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, 0, $field(Context, attributePrototypes)},
	{"parsingOptions", "I", nullptr, 0, $field(Context, parsingOptions)},
	{"charBuffer", "[C", nullptr, 0, $field(Context, charBuffer)},
	{"currentMethodAccessFlags", "I", nullptr, 0, $field(Context, currentMethodAccessFlags)},
	{"currentMethodName", "Ljava/lang/String;", nullptr, 0, $field(Context, currentMethodName)},
	{"currentMethodDescriptor", "Ljava/lang/String;", nullptr, 0, $field(Context, currentMethodDescriptor)},
	{"currentMethodLabels", "[Ljdk/internal/org/objectweb/asm/Label;", nullptr, 0, $field(Context, currentMethodLabels)},
	{"currentTypeAnnotationTarget", "I", nullptr, 0, $field(Context, currentTypeAnnotationTarget)},
	{"currentTypeAnnotationTargetPath", "Ljdk/internal/org/objectweb/asm/TypePath;", nullptr, 0, $field(Context, currentTypeAnnotationTargetPath)},
	{"currentLocalVariableAnnotationRangeStarts", "[Ljdk/internal/org/objectweb/asm/Label;", nullptr, 0, $field(Context, currentLocalVariableAnnotationRangeStarts)},
	{"currentLocalVariableAnnotationRangeEnds", "[Ljdk/internal/org/objectweb/asm/Label;", nullptr, 0, $field(Context, currentLocalVariableAnnotationRangeEnds)},
	{"currentLocalVariableAnnotationRangeIndices", "[I", nullptr, 0, $field(Context, currentLocalVariableAnnotationRangeIndices)},
	{"currentFrameOffset", "I", nullptr, 0, $field(Context, currentFrameOffset)},
	{"currentFrameType", "I", nullptr, 0, $field(Context, currentFrameType)},
	{"currentFrameLocalCount", "I", nullptr, 0, $field(Context, currentFrameLocalCount)},
	{"currentFrameLocalCountDelta", "I", nullptr, 0, $field(Context, currentFrameLocalCountDelta)},
	{"currentFrameLocalTypes", "[Ljava/lang/Object;", nullptr, 0, $field(Context, currentFrameLocalTypes)},
	{"currentFrameStackCount", "I", nullptr, 0, $field(Context, currentFrameStackCount)},
	{"currentFrameStackTypes", "[Ljava/lang/Object;", nullptr, 0, $field(Context, currentFrameStackTypes)},
	{}
};

$MethodInfo _Context_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Context, init$, void)},
	{}
};

$ClassInfo _Context_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Context",
	"java.lang.Object",
	nullptr,
	_Context_FieldInfo_,
	_Context_MethodInfo_
};

$Object* allocate$Context($Class* clazz) {
	return $of($alloc(Context));
}

void Context::init$() {
}

Context::Context() {
}

$Class* Context::load$($String* name, bool initialize) {
	$loadClass(Context, name, initialize, &_Context_ClassInfo_, allocate$Context);
	return class$;
}

$Class* Context::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk