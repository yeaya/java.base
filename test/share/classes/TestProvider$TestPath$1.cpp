#include <TestProvider$TestPath$1.h>

#include <TestProvider$TestFileSystem.h>
#include <TestProvider$TestPath.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $TestProvider$TestFileSystem = ::TestProvider$TestFileSystem;
using $TestProvider$TestPath = ::TestProvider$TestPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Iterator = ::java::util::Iterator;

$FieldInfo _TestProvider$TestPath$1_FieldInfo_[] = {
	{"this$0", "LTestProvider$TestPath;", nullptr, $FINAL | $SYNTHETIC, $field(TestProvider$TestPath$1, this$0)},
	{"val$itr", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(TestProvider$TestPath$1, val$itr)},
	{}
};

$MethodInfo _TestProvider$TestPath$1_MethodInfo_[] = {
	{"<init>", "(LTestProvider$TestPath;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(TestProvider$TestPath$1::*)($TestProvider$TestPath*,$Iterator*)>(&TestProvider$TestPath$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/nio/file/Path;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestProvider$TestPath$1_EnclosingMethodInfo_ = {
	"TestProvider$TestPath",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _TestProvider$TestPath$1_InnerClassesInfo_[] = {
	{"TestProvider$TestPath", "TestProvider", "TestPath", $STATIC},
	{"TestProvider$TestPath$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestProvider$TestPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestProvider$TestPath$1",
	"java.lang.Object",
	"java.util.Iterator",
	_TestProvider$TestPath$1_FieldInfo_,
	_TestProvider$TestPath$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/nio/file/Path;>;",
	&_TestProvider$TestPath$1_EnclosingMethodInfo_,
	_TestProvider$TestPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestProvider"
};

$Object* allocate$TestProvider$TestPath$1($Class* clazz) {
	return $of($alloc(TestProvider$TestPath$1));
}

void TestProvider$TestPath$1::init$($TestProvider$TestPath* this$0, $Iterator* val$itr) {
	$set(this, this$0, this$0);
	$set(this, val$itr, val$itr);
}

bool TestProvider$TestPath$1::hasNext() {
	return $nc(this->val$itr)->hasNext();
}

$Object* TestProvider$TestPath$1::next() {
	return $of($nc(this->this$0->fs)->wrap($cast($Path, $($nc(this->val$itr)->next()))));
}

void TestProvider$TestPath$1::remove() {
	$nc(this->val$itr)->remove();
}

TestProvider$TestPath$1::TestProvider$TestPath$1() {
}

$Class* TestProvider$TestPath$1::load$($String* name, bool initialize) {
	$loadClass(TestProvider$TestPath$1, name, initialize, &_TestProvider$TestPath$1_ClassInfo_, allocate$TestProvider$TestPath$1);
	return class$;
}

$Class* TestProvider$TestPath$1::class$ = nullptr;