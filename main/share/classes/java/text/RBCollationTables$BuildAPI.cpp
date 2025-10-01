#include <java/text/RBCollationTables$BuildAPI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/RBCollationTables.h>
#include <java/util/Vector.h>
#include <sun/text/IntHashtable.h>
#include <sun/text/UCompactIntArray.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RBCollationTables = ::java::text::RBCollationTables;
using $Vector = ::java::util::Vector;
using $IntHashtable = ::sun::text::IntHashtable;
using $UCompactIntArray = ::sun::text::UCompactIntArray;

namespace java {
	namespace text {

$FieldInfo _RBCollationTables$BuildAPI_FieldInfo_[] = {
	{"this$0", "Ljava/text/RBCollationTables;", nullptr, $FINAL | $SYNTHETIC, $field(RBCollationTables$BuildAPI, this$0)},
	{}
};

$MethodInfo _RBCollationTables$BuildAPI_MethodInfo_[] = {
	{"<init>", "(Ljava/text/RBCollationTables;)V", nullptr, $PRIVATE, $method(static_cast<void(RBCollationTables$BuildAPI::*)($RBCollationTables*)>(&RBCollationTables$BuildAPI::init$))},
	{"fillInTables", "(ZZLsun/text/UCompactIntArray;Ljava/util/Vector;Ljava/util/Vector;Lsun/text/IntHashtable;SS)V", "(ZZLsun/text/UCompactIntArray;Ljava/util/Vector<Ljava/util/Vector<Ljava/text/EntryPair;>;>;Ljava/util/Vector<[I>;Lsun/text/IntHashtable;SS)V", 0, $method(static_cast<void(RBCollationTables$BuildAPI::*)(bool,bool,$UCompactIntArray*,$Vector*,$Vector*,$IntHashtable*,int16_t,int16_t)>(&RBCollationTables$BuildAPI::fillInTables))},
	{}
};

$InnerClassInfo _RBCollationTables$BuildAPI_InnerClassesInfo_[] = {
	{"java.text.RBCollationTables$BuildAPI", "java.text.RBCollationTables", "BuildAPI", $FINAL},
	{}
};

$ClassInfo _RBCollationTables$BuildAPI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.text.RBCollationTables$BuildAPI",
	"java.lang.Object",
	nullptr,
	_RBCollationTables$BuildAPI_FieldInfo_,
	_RBCollationTables$BuildAPI_MethodInfo_,
	nullptr,
	nullptr,
	_RBCollationTables$BuildAPI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.text.RBCollationTables"
};

$Object* allocate$RBCollationTables$BuildAPI($Class* clazz) {
	return $of($alloc(RBCollationTables$BuildAPI));
}

void RBCollationTables$BuildAPI::init$($RBCollationTables* this$0) {
	$set(this, this$0, this$0);
}

void RBCollationTables$BuildAPI::fillInTables(bool f2ary, bool swap, $UCompactIntArray* map, $Vector* cTbl, $Vector* eTbl, $IntHashtable* cFlgs, int16_t mso, int16_t mto) {
	this->this$0->frenchSec = f2ary;
	this->this$0->seAsianSwapping = swap;
	$set(this->this$0, mapping, map);
	$set(this->this$0, contractTable, cTbl);
	$set(this->this$0, expandTable, eTbl);
	$set(this->this$0, contractFlags, cFlgs);
	this->this$0->maxSecOrder = mso;
	this->this$0->maxTerOrder = mto;
}

RBCollationTables$BuildAPI::RBCollationTables$BuildAPI() {
}

$Class* RBCollationTables$BuildAPI::load$($String* name, bool initialize) {
	$loadClass(RBCollationTables$BuildAPI, name, initialize, &_RBCollationTables$BuildAPI_ClassInfo_, allocate$RBCollationTables$BuildAPI);
	return class$;
}

$Class* RBCollationTables$BuildAPI::class$ = nullptr;

	} // text
} // java