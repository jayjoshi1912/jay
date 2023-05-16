import React, { Component } from 'react';
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link,
  } from "react-router-dom";
  
import Home from './home';
import About from './About';
import Service from './service'
import State from './03state'
import Api from './05-API'
import Compo from './06compo'



class Navbar extends Component {
    render() {
        

        const data = {'/home':"Home",'/About':'About','/service':'Service','/state':'State','/api':'API',
                       '/compo':'Compo'};
        const Alldata =Object.entries(data).map((res)=>{
            console.log(res);
            return <li className="nav-item">
            <Link className="nav-link" to={res[0]}>{res[1]}</Link>
            </li>
            
        })
        return (
            <div>
                <>
                <Router>
                <nav className="navbar navbar-expand-sm navbar-dark bg-dark">
                    <div className="container-fluid">
                        <a className="navbar-brand" href="">Logo</a>
                        <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#mynavbar">
                        <span className="navbar-toggler-icon"></span>
                        </button>
                        <div className="collapse navbar-collapse" id="mynavbar">
                        <ul className="navbar-nav me-auto">
                            {Alldata}
                        </ul>
                        <form className="d-flex">
                            <input className="form-control me-2" type="text" placeholder="Search"/>
                            <button className="btn btn-primary" type="button">Search</button>
                        </form>
                        </div>
                    </div>
                    </nav>
                    <Routes>
                        <Route path='/home' element={<Home/>}></Route>
                        <Route path='/About' element={<About/>}></Route>
                        <Route path='/service' element={<Service/>}></Route>
                        <Route path='/State' element={<State/>}/>
                        <Route path='/api' element={<Api/>}/>
                        <Route path='/compo' element={<Compo/>}/>
                    </Routes>
                    </Router>
                </>
            </div>
        );
    }
}

export default Navbar;