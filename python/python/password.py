import subprocess

data =subprocess.check_output(['netsh','wlan','show','profiles','']).decode('utf-8').split('\n')

profiles = [i.split(" ")[l][l:-l]for i in data if"all user profile"in i]

for i in profiles:
    results=subprocess.check_output(['netsh','wlan','show','profiles',i,'key=clear']).decode('utf-8').split('\n')
    results=[b.split(" ")[l][l:-l]for b in results if "key content" in b]

    try:
        print("{:<30}| {:<}".format(i,results[0]))
    except IndexError:
        print("{:<30}| {:<}".format(i,""))