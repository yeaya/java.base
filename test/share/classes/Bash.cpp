#include <Bash.h>
#include <Bash$TestReference.h>
#include <jcpp.h>

#undef BLOCK_SIZE
#undef NUM_BLOCKS

using $Bash$TestReference = ::Bash$TestReference;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Bash::init$() {
}

void Bash::main($StringArray* args) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < Bash::NUM_BLOCKS; ++i) {
		$var($Bash$TestReference, ref, $new($Bash$TestReference, $$new($bytes, Bash::BLOCK_SIZE)));
	}
	int32_t emptyCount = 0;
	int32_t fullCount = 0;
	{
		$init($Bash$TestReference);
		$var($Bash$TestReference, r, $Bash$TestReference::head);
		for (; r != nullptr; $assign(r, r->next)) {
			if (r->get() == nullptr) {
				++emptyCount;
			} else {
				++fullCount;
			}
		}
	}
	$nc($System::err)->println($$str({$$str(fullCount), " full, "_s, $$str(emptyCount), " empty "_s}));
}

Bash::Bash() {
}

$Class* Bash::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NUM_BLOCKS", "I", nullptr, $STATIC | $FINAL, $constField(Bash, NUM_BLOCKS)},
		{"BLOCK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Bash, BLOCK_SIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Bash, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Bash, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Bash$TestReference", "Bash", "TestReference", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Bash",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Bash$TestReference"
	};
	$loadClass(Bash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Bash);
	});
	return class$;
}

$Class* Bash::class$ = nullptr;