#include <java/lang/invoke/MethodHandleImpl$LoopClauses.h>

#include <java/lang/AssertionError.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandleImpl.h>
#include <jcpp.h>

using $MethodHandleArray = $Array<::java::lang::invoke::MethodHandle>;
using $MethodHandleArray2 = $Array<::java::lang::invoke::MethodHandle, 2>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandleImpl = ::java::lang::invoke::MethodHandleImpl;

namespace java {
	namespace lang {
		namespace invoke {

$CompoundAttribute _MethodHandleImpl$LoopClauses_FieldAnnotations_clauses[] = {
	{"Ljdk/internal/vm/annotation/Stable;", nullptr},
	{}
};

$FieldInfo _MethodHandleImpl$LoopClauses_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodHandleImpl$LoopClauses, $assertionsDisabled)},
	{"clauses", "[[Ljava/lang/invoke/MethodHandle;", nullptr, $FINAL, $field(MethodHandleImpl$LoopClauses, clauses), _MethodHandleImpl$LoopClauses_FieldAnnotations_clauses},
	{}
};

$MethodInfo _MethodHandleImpl$LoopClauses_MethodInfo_[] = {
	{"<init>", "([[Ljava/lang/invoke/MethodHandle;)V", nullptr, 0, $method(MethodHandleImpl$LoopClauses, init$, void, $MethodHandleArray2*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MethodHandleImpl$LoopClauses, toString, $String*)},
	{}
};

$InnerClassInfo _MethodHandleImpl$LoopClauses_InnerClassesInfo_[] = {
	{"java.lang.invoke.MethodHandleImpl$LoopClauses", "java.lang.invoke.MethodHandleImpl", "LoopClauses", $STATIC},
	{}
};

$ClassInfo _MethodHandleImpl$LoopClauses_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MethodHandleImpl$LoopClauses",
	"java.lang.Object",
	nullptr,
	_MethodHandleImpl$LoopClauses_FieldInfo_,
	_MethodHandleImpl$LoopClauses_MethodInfo_,
	nullptr,
	nullptr,
	_MethodHandleImpl$LoopClauses_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MethodHandleImpl"
};

$Object* allocate$MethodHandleImpl$LoopClauses($Class* clazz) {
	return $of($alloc(MethodHandleImpl$LoopClauses));
}

bool MethodHandleImpl$LoopClauses::$assertionsDisabled = false;

void MethodHandleImpl$LoopClauses::init$($MethodHandleArray2* clauses) {
	if (!MethodHandleImpl$LoopClauses::$assertionsDisabled && !($nc(clauses)->length == 4)) {
		$throwNew($AssertionError);
	}
	$set(this, clauses, clauses);
}

$String* MethodHandleImpl$LoopClauses::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "LoopClauses -- "_s));
	for (int32_t i = 0; i < 4; ++i) {
		if (i > 0) {
			sb->append("       "_s);
		}
		sb->append(u'<')->append(i)->append(">: "_s);
		$var($MethodHandleArray, hs, $nc(this->clauses)->get(i));
		for (int32_t j = 0; j < $nc(hs)->length; ++j) {
			if (j > 0) {
				sb->append("          "_s);
			}
			sb->append(u'*')->append(j)->append(": "_s)->append($of(hs->get(j)))->append(u'\n');
		}
	}
	sb->append(" --\n"_s);
	return sb->toString();
}

void clinit$MethodHandleImpl$LoopClauses($Class* class$) {
	$load($MethodHandleImpl);
	MethodHandleImpl$LoopClauses::$assertionsDisabled = !$MethodHandleImpl::class$->desiredAssertionStatus();
}

MethodHandleImpl$LoopClauses::MethodHandleImpl$LoopClauses() {
}

$Class* MethodHandleImpl$LoopClauses::load$($String* name, bool initialize) {
	$loadClass(MethodHandleImpl$LoopClauses, name, initialize, &_MethodHandleImpl$LoopClauses_ClassInfo_, clinit$MethodHandleImpl$LoopClauses, allocate$MethodHandleImpl$LoopClauses);
	return class$;
}

$Class* MethodHandleImpl$LoopClauses::class$ = nullptr;

		} // invoke
	} // lang
} // java