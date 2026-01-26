#include <DumpStackTest$CallFrame.h>

#include <DumpStackTest.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _DumpStackTest$CallFrame_FieldInfo_[] = {
	{"classname", "Ljava/lang/String;", nullptr, $FINAL, $field(DumpStackTest$CallFrame, classname)},
	{"methodname", "Ljava/lang/String;", nullptr, $FINAL, $field(DumpStackTest$CallFrame, methodname)},
	{}
};

$MethodInfo _DumpStackTest$CallFrame_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;)V", 0, $method(DumpStackTest$CallFrame, init$, void, $Class*, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(DumpStackTest$CallFrame, init$, void, $String*, $String*)},
	{"getClassName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DumpStackTest$CallFrame, getClassName, $String*)},
	{"getFileName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DumpStackTest$CallFrame, getFileName, $String*)},
	{"getMethodName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DumpStackTest$CallFrame, getMethodName, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DumpStackTest$CallFrame, toString, $String*)},
	{}
};

$InnerClassInfo _DumpStackTest$CallFrame_InnerClassesInfo_[] = {
	{"DumpStackTest$CallFrame", "DumpStackTest", "CallFrame", $STATIC},
	{}
};

$ClassInfo _DumpStackTest$CallFrame_ClassInfo_ = {
	$ACC_SUPER,
	"DumpStackTest$CallFrame",
	"java.lang.Object",
	nullptr,
	_DumpStackTest$CallFrame_FieldInfo_,
	_DumpStackTest$CallFrame_MethodInfo_,
	nullptr,
	nullptr,
	_DumpStackTest$CallFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DumpStackTest"
};

$Object* allocate$DumpStackTest$CallFrame($Class* clazz) {
	return $of($alloc(DumpStackTest$CallFrame));
}

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
	$loadClass(DumpStackTest$CallFrame, name, initialize, &_DumpStackTest$CallFrame_ClassInfo_, allocate$DumpStackTest$CallFrame);
	return class$;
}

$Class* DumpStackTest$CallFrame::class$ = nullptr;