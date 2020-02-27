package datapath
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile

class InstructionMemory extends Module{
	val io=IO(new Bundle{
		
		val wrAddr=Input(UInt(32.W))
		val rdData=Output(UInt(32.W))
		
			
	})
		val mem=Mem(16384,UInt(32.W))
		io.rdData:=mem.read(io.wrAddr)


		loadMemoryFromFile(mem,"/home/monis/Desktop/Ghaznavi-5-Stage/Ghaznavi/5st12.txt")
		
}

		
		

