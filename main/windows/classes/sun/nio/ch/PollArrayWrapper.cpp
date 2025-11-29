#include <sun/nio/ch/PollArrayWrapper.h>

#include <sun/nio/ch/AllocatedNativeObject.h>
#include <sun/nio/ch/Net.h>
#include <sun/nio/ch/SelectionKeyImpl.h>
#include <jcpp.h>

#undef EVENT_OFFSET
#undef FD_OFFSET
#undef POLLIN
#undef SIZE_POLLFD

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AllocatedNativeObject = ::sun::nio::ch::AllocatedNativeObject;
using $Net = ::sun::nio::ch::Net;
using $SelectionKeyImpl = ::sun::nio::ch::SelectionKeyImpl;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _PollArrayWrapper_FieldInfo_[] = {
	{"pollArray", "Lsun/nio/ch/AllocatedNativeObject;", nullptr, $PRIVATE, $field(PollArrayWrapper, pollArray)},
	{"pollArrayAddress", "J", nullptr, 0, $field(PollArrayWrapper, pollArrayAddress)},
	{"FD_OFFSET", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PollArrayWrapper, FD_OFFSET)},
	{"EVENT_OFFSET", "S", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PollArrayWrapper, EVENT_OFFSET)},
	{"SIZE_POLLFD", "S", nullptr, $STATIC, $staticField(PollArrayWrapper, SIZE_POLLFD)},
	{"size", "I", nullptr, $PRIVATE, $field(PollArrayWrapper, size)},
	{}
};

$MethodInfo _PollArrayWrapper_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(PollArrayWrapper::*)(int32_t)>(&PollArrayWrapper::init$))},
	{"addWakeupSocket", "(II)V", nullptr, 0},
	{"free", "()V", nullptr, 0},
	{"getDescriptor", "(I)I", nullptr, 0},
	{"getEventOps", "(I)I", nullptr, 0},
	{"grow", "(I)V", nullptr, 0},
	{"putDescriptor", "(II)V", nullptr, 0},
	{"putEntry", "(ILsun/nio/ch/SelectionKeyImpl;)V", nullptr, 0},
	{"putEventOps", "(II)V", nullptr, 0},
	{"replaceEntry", "(Lsun/nio/ch/PollArrayWrapper;ILsun/nio/ch/PollArrayWrapper;I)V", nullptr, 0},
	{}
};

$ClassInfo _PollArrayWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.PollArrayWrapper",
	"java.lang.Object",
	nullptr,
	_PollArrayWrapper_FieldInfo_,
	_PollArrayWrapper_MethodInfo_
};

$Object* allocate$PollArrayWrapper($Class* clazz) {
	return $of($alloc(PollArrayWrapper));
}

int16_t PollArrayWrapper::SIZE_POLLFD = 0;

void PollArrayWrapper::init$(int32_t newSize) {
	int32_t allocationSize = newSize * PollArrayWrapper::SIZE_POLLFD;
	$set(this, pollArray, $new($AllocatedNativeObject, allocationSize, true));
	this->pollArrayAddress = $nc(this->pollArray)->address();
	this->size = newSize;
}

void PollArrayWrapper::putEntry(int32_t index, $SelectionKeyImpl* ski) {
	putDescriptor(index, $nc(ski)->getFDVal());
	putEventOps(index, 0);
}

void PollArrayWrapper::replaceEntry(PollArrayWrapper* source, int32_t sindex, PollArrayWrapper* target, int32_t tindex) {
	$nc(target)->putDescriptor(tindex, $nc(source)->getDescriptor(sindex));
	target->putEventOps(tindex, $nc(source)->getEventOps(sindex));
}

void PollArrayWrapper::grow(int32_t newSize) {
	$var(PollArrayWrapper, temp, $new(PollArrayWrapper, newSize));
	for (int32_t i = 0; i < this->size; ++i) {
		replaceEntry(this, i, temp, i);
	}
	$nc(this->pollArray)->free();
	$set(this, pollArray, temp->pollArray);
	this->size = temp->size;
	this->pollArrayAddress = $nc(this->pollArray)->address();
}

void PollArrayWrapper::free() {
	$nc(this->pollArray)->free();
}

void PollArrayWrapper::putDescriptor(int32_t i, int32_t fd) {
	$nc(this->pollArray)->putInt(PollArrayWrapper::SIZE_POLLFD * i + PollArrayWrapper::FD_OFFSET, fd);
}

void PollArrayWrapper::putEventOps(int32_t i, int32_t event) {
	$nc(this->pollArray)->putShort(PollArrayWrapper::SIZE_POLLFD * i + PollArrayWrapper::EVENT_OFFSET, (int16_t)event);
}

int32_t PollArrayWrapper::getEventOps(int32_t i) {
	return $nc(this->pollArray)->getShort(PollArrayWrapper::SIZE_POLLFD * i + PollArrayWrapper::EVENT_OFFSET);
}

int32_t PollArrayWrapper::getDescriptor(int32_t i) {
	return $nc(this->pollArray)->getInt(PollArrayWrapper::SIZE_POLLFD * i + PollArrayWrapper::FD_OFFSET);
}

void PollArrayWrapper::addWakeupSocket(int32_t fdVal, int32_t index) {
	putDescriptor(index, fdVal);
	$init($Net);
	putEventOps(index, $Net::POLLIN);
}

void clinit$PollArrayWrapper($Class* class$) {
	PollArrayWrapper::SIZE_POLLFD = (int16_t)8;
}

PollArrayWrapper::PollArrayWrapper() {
}

$Class* PollArrayWrapper::load$($String* name, bool initialize) {
	$loadClass(PollArrayWrapper, name, initialize, &_PollArrayWrapper_ClassInfo_, clinit$PollArrayWrapper, allocate$PollArrayWrapper);
	return class$;
}

$Class* PollArrayWrapper::class$ = nullptr;

		} // ch
	} // nio
} // sun