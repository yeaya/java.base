#include <jdk/internal/org/objectweb/asm/CurrentFrame.h>
#include <jdk/internal/org/objectweb/asm/Frame.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Frame = ::jdk::internal::org::objectweb::asm$::Frame;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

void CurrentFrame::init$($Label* owner) {
	$Frame::init$(owner);
}

void CurrentFrame::execute(int32_t opcode, int32_t arg, $Symbol* symbolArg, $SymbolTable* symbolTable) {
	$Frame::execute(opcode, arg, symbolArg, symbolTable);
	$var($Frame, successor, $new($Frame, nullptr));
	merge(symbolTable, successor, 0);
	copyFrom(successor);
}

CurrentFrame::CurrentFrame() {
}

$Class* CurrentFrame::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/Label;)V", nullptr, 0, $method(CurrentFrame, init$, void, $Label*)},
		{"execute", "(IILjdk/internal/org/objectweb/asm/Symbol;Ljdk/internal/org/objectweb/asm/SymbolTable;)V", nullptr, 0, $virtualMethod(CurrentFrame, execute, void, int32_t, int32_t, $Symbol*, $SymbolTable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.CurrentFrame",
		"jdk.internal.org.objectweb.asm.Frame",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrentFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrentFrame);
	});
	return class$;
}

$Class* CurrentFrame::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk