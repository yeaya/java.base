#include <Bug4404588.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Character$UnicodeBlock.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef SPECIALS

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $Character$UnicodeBlock = ::java::lang::Character$UnicodeBlock;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _Bug4404588_FieldInfo_[] = {
	{"charData", "[[Ljava/lang/Object;", nullptr, 0, $field(Bug4404588, charData)},
	{}
};

$MethodInfo _Bug4404588_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug4404588::*)()>(&Bug4404588::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug4404588::main))},
	{"run", "()V", nullptr, 0},
	{}
};

$ClassInfo _Bug4404588_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug4404588",
	"java.lang.Object",
	nullptr,
	_Bug4404588_FieldInfo_,
	_Bug4404588_MethodInfo_
};

$Object* allocate$Bug4404588($Class* clazz) {
	return $of($alloc(Bug4404588));
}

void Bug4404588::init$() {
			$init($Character$UnicodeBlock);
	$set(this, charData, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($$new($Character, (char16_t)0xFFFE)),
			$of($Character$UnicodeBlock::SPECIALS)
		}),
		$$new($ObjectArray, {
			$of($$new($Character, (char16_t)0xFFFF)),
			$of($Character$UnicodeBlock::SPECIALS)
		})
	}));
}

void Bug4404588::main($StringArray* args) {
	$var(Bug4404588, test, $new(Bug4404588));
	test->run();
}

void Bug4404588::run() {
	$var($Character, ch, nullptr);
	$var($Character$UnicodeBlock, block, nullptr);
	for (int32_t x = 0; x < $nc(this->charData)->length; ++x) {
		$assign(ch, $cast($Character, $nc($nc(this->charData)->get(x))->get(0)));
		$assign(block, $cast($Character$UnicodeBlock, $nc($nc(this->charData)->get(x))->get(1)));
		if ($Character$UnicodeBlock::of($nc(ch)->charValue()) != block) {
			$init($System);
			$nc($System::err)->println($$str({"Error: block = "_s, block}));
			$var($String, var$0, $$str({"Character.UnicodeBlock.of("_s, $($Integer::toHexString($nc(ch)->charValue())), ") = "_s}));
			$nc($System::err)->println($$concat(var$0, $($Character$UnicodeBlock::of($nc(ch)->charValue()))));
			$throwNew($RuntimeException, "Blocks aren\'t equal."_s);
		}
	}
	$init($System);
	$nc($System::out)->println("Passed."_s);
}

Bug4404588::Bug4404588() {
}

$Class* Bug4404588::load$($String* name, bool initialize) {
	$loadClass(Bug4404588, name, initialize, &_Bug4404588_ClassInfo_, allocate$Bug4404588);
	return class$;
}

$Class* Bug4404588::class$ = nullptr;