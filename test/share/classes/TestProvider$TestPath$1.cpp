#include <TestProvider$TestPath$1.h>
#include <TestProvider$TestFileSystem.h>
#include <TestProvider$TestPath.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $TestProvider$TestPath = ::TestProvider$TestPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

void TestProvider$TestPath$1::init$($TestProvider$TestPath* this$0, $Iterator* val$itr) {
	$set(this, this$0, this$0);
	$set(this, val$itr, val$itr);
}

bool TestProvider$TestPath$1::hasNext() {
	return $nc(this->val$itr)->hasNext();
}

$Object* TestProvider$TestPath$1::next() {
	return $of($nc(this->this$0->fs)->wrap($$cast($Path, $nc(this->val$itr)->next())));
}

void TestProvider$TestPath$1::remove() {
	$nc(this->val$itr)->remove();
}

TestProvider$TestPath$1::TestProvider$TestPath$1() {
}

$Class* TestProvider$TestPath$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestProvider$TestPath;", nullptr, $FINAL | $SYNTHETIC, $field(TestProvider$TestPath$1, this$0)},
		{"val$itr", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(TestProvider$TestPath$1, val$itr)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestProvider$TestPath;Ljava/util/Iterator;)V", "()V", 0, $method(TestProvider$TestPath$1, init$, void, $TestProvider$TestPath*, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestPath$1, hasNext, bool)},
		{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestPath$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(TestProvider$TestPath$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestProvider$TestPath",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestProvider$TestPath", "TestProvider", "TestPath", $STATIC},
		{"TestProvider$TestPath$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestProvider$TestPath$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestProvider"
	};
	$loadClass(TestProvider$TestPath$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestProvider$TestPath$1);
	});
	return class$;
}

$Class* TestProvider$TestPath$1::class$ = nullptr;