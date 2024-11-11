# s = input().split("WUB")
# a = ""
# for i in s:
#     if i != ' ':
#         a+=i
#         a+=" "
# print(a[1:])
def restore_song(remix):
    original_song = ' '.join(remix.split('WUB')).strip()
    return ' '.join(original_song.split())

remix = input()
print(restore_song(remix))
