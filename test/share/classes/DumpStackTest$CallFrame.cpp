#include <DumpStackTest$CallFrame.h>
#include <DumpStackTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DumpStackTest$CallFrame::init$($Class* c, $String* methodname) {
	DumpStackTest$CallFrame::init$($($nc(c)->getName()), methodname);
}

void DumpStackTest$CallFrame::init$($String* classname, $String* methodname) {
	$set(this, classname, classname);
	$set(this, methodname, methodname);
}

$String* DumpStackTest$CallFrame::getClassName() {
	return this->classname;
}

$String* DumpStackTest$CallFrame::getMethodName() {
	return this->methodname;
}

$String* DumpStackTest$CallFrame::getFileName() {
	return ""_s;
}

$String* DumpStackTest$CallFrame::toString() {
	return $str({this->classname, "."_s, this->methodname, "("_s, $(getFileName()), ")"_s});
}

DumpStackTest$CallFrame::DumpStackTest$CallFrame() {
}

$Class* DumpStackTest$CallFrame::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classname", "Ljava/lang/String;", nullptr, $FINAL, $field(DumpStackTest$CallFrame, classname)},
		{"methodname", "Ljava/lang/String;", nullptr, $FINAL, $field(DumpStackTest$CallFrame, methodname)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", 0, $method(DumpStackTest$CallFrame, init$, void, $Class*, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(DumpStackTest$CallFrame, init$, void, $String*, $String*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DumpStackTest$CallFrame, getClassName, $String*)},
		{"getFileName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DumpStackTest$CallFrame, getFileName, $String*)},
		{"getMethodName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DumpStackTest$CallFrame, getMethodName, $String*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DumpStackTest$CallFrame, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DumpStackTest$CallFrame", "DumpStackTest", "CallFrame", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DumpStackTest$CallFrame",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DumpStackTest"
	};
	$loadClass(DumpStackTest$CallFrame, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DumpStackTest$CallFrame);
	});
	return class$;
}

$Class* DumpStackTest$CallFrame::class$ = nullptr;