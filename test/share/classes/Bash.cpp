#include <Bash.h>

#include <Bash$TestReference.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BLOCK_SIZE
#undef NUM_BLOCKS

using $Bash$TestReference = ::Bash$TestReference;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

$FieldInfo _Bash_FieldInfo_[] = {
	{"NUM_BLOCKS", "I", nullptr, $STATIC | $FINAL, $constField(Bash, NUM_BLOCKS)},
	{"BLOCK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(Bash, BLOCK_SIZE)},
	{}
};

$MethodInfo _Bash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bash::*)()>(&Bash::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bash::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Bash_InnerClassesInfo_[] = {
	{"Bash$TestReference", "Bash", "TestReference", $STATIC},
	{}
};

$ClassInfo _Bash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bash",
	"java.lang.Object",
	nullptr,
	_Bash_FieldInfo_,
	_Bash_MethodInfo_,
	nullptr,
	nullptr,
	_Bash_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Bash$TestReference"
};

$Object* allocate$Bash($Class* clazz) {
	return $of($alloc(Bash));
}

void Bash::init$() {
}

void Bash::main($StringArray* args) {
	for (int32_t i = 0; i < Bash::NUM_BLOCKS; ++i) {
		$var($Bash$TestReference, ref, $new($Bash$TestReference, $$new($bytes, Bash::BLOCK_SIZE)));
	}
	int32_t emptyCount = 0;
	int32_t fullCount = 0;
	{
		$init($Bash$TestReference);
		$var($Bash$TestReference, r, $Bash$TestReference::head);
		for (; r != nullptr; $assign(r, $nc(r)->next)) {
			if (r->get() == nullptr) {
				++emptyCount;
			} else {
				++fullCount;
			}
		}
	}
	$init($System);
	$nc($System::err)->println($$str({$$str(fullCount), " full, "_s, $$str(emptyCount), " empty "_s}));
}

Bash::Bash() {
}

$Class* Bash::load$($String* name, bool initialize) {
	$loadClass(Bash, name, initialize, &_Bash_ClassInfo_, allocate$Bash);
	return class$;
}

$Class* Bash::class$ = nullptr;