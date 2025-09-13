function makered(n) {
            if (n == 1) {
                document.body.style.backgroundColor = 'red';
            }
            else if (n == 2) {
                document.body.style.backgroundColor = 'blue';
            }
            else if (n == 3) {
                document.body.style.backgroundColor = 'green';
            }
            else if (n == 4) {
                document.body.style.backgroundColor = 'black';
            }
        }


        const makebluebtn=document.getElementById('make-blue');
        makebluebtn.onclick=makeblue;
        function makeblue(){
            document.body.style.backgroundColor='blue';
        }

        // addEventListener
        const makepinkbtn=document.getElementById('make-pink')
        makepinkbtn.addEventListener('click',makepink);
        function makepink(){
            document.body.style.backgroundColor='pink';
        }

        //eita use korbo
        // document.getElementById('make-goldenrod').addEventListener("click",function(){})
        document.getElementById('make-goldenrod').addEventListener("click",function(){
            document.body.style.backgroundColor='goldenrod';
        })

