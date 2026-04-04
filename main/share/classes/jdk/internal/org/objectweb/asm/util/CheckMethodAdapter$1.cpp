#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter$1.h>
#include <java/io/PrintWriter.h>
#include <java/io/StringWriter.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/MethodNode.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Analyzer.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/AnalyzerException.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/BasicVerifier.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Frame.h>
#include <jdk/internal/org/objectweb/asm/tree/analysis/Interpreter.h>
#include <jdk/internal/org/objectweb/asm/util/CheckClassAdapter.h>
#include <jdk/internal/org/objectweb/asm/util/CheckMethodAdapter.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $StringWriter = ::java::io::StringWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $MethodNode = ::jdk::internal::org::objectweb::asm$::tree::MethodNode;
using $Analyzer = ::jdk::internal::org::objectweb::asm$::tree::analysis::Analyzer;
using $AnalyzerException = ::jdk::internal::org::objectweb::asm$::tree::analysis::AnalyzerException;
using $BasicVerifier = ::jdk::internal::org::objectweb::asm$::tree::analysis::BasicVerifier;
using $CheckClassAdapter = ::jdk::internal::org::objectweb::asm$::util::CheckClassAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace util {

void CheckMethodAdapter$1::init$(int32_t api, int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions, $MethodVisitor* val$methodVisitor) {
	$set(this, val$methodVisitor, val$methodVisitor);
	$MethodNode::init$(api, access, name, descriptor, signature, exceptions);
}

void CheckMethodAdapter$1::visitEnd() {
	$useLocalObjectStack();
	$var($Analyzer, analyzer, $new($Analyzer, $$new($BasicVerifier)));
	try {
		analyzer->analyze("dummy"_s, this);
	} catch ($IndexOutOfBoundsException& e) {
		if (this->maxLocals == 0 && this->maxStack == 0) {
			$throwNew($IllegalArgumentException, "Data flow checking option requires valid, non zero maxLocals and maxStack."_s, e);
		}
		throwError(analyzer, e);
	} catch ($AnalyzerException& e) {
		throwError(analyzer, e);
	}
	if (this->val$methodVisitor != nullptr) {
		accept(this->val$methodVisitor);
	}
}

void CheckMethodAdapter$1::throwError($Analyzer* analyzer, $Exception* e) {
	$useLocalObjectStack();
	$var($StringWriter, stringWriter, $new($StringWriter));
	$var($PrintWriter, printWriter, $new($PrintWriter, stringWriter, true));
	$CheckClassAdapter::printAnalyzerResult(this, analyzer, printWriter);
	printWriter->close();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(e)->getMessage()));
	var$0->append(u' ');
	var$0->append($(stringWriter->toString()));
	$throwNew($IllegalArgumentException, $$str(var$0), e);
}

CheckMethodAdapter$1::CheckMethodAdapter$1() {
}

$Class* CheckMethodAdapter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$methodVisitor", "Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $FINAL | $SYNTHETIC, $field(CheckMethodAdapter$1, val$methodVisitor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, 0, $method(CheckMethodAdapter$1, init$, void, int32_t, int32_t, $String*, $String*, $String*, $StringArray*, $MethodVisitor*)},
		{"throwError", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Analyzer;Ljava/lang/Exception;)V", "(Ljdk/internal/org/objectweb/asm/tree/analysis/Analyzer<Ljdk/internal/org/objectweb/asm/tree/analysis/BasicValue;>;Ljava/lang/Exception;)V", $PRIVATE, $method(CheckMethodAdapter$1, throwError, void, $Analyzer*, $Exception*)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(CheckMethodAdapter$1, visitEnd, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter",
		"<init>",
		"(IILjava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljava/util/Map;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter$1",
		"jdk.internal.org.objectweb.asm.tree.MethodNode",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.org.objectweb.asm.util.CheckMethodAdapter"
	};
	$loadClass(CheckMethodAdapter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CheckMethodAdapter$1);
	});
	return class$;
}

$Class* CheckMethodAdapter$1::class$ = nullptr;

					} // util
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk